/*
    ConfigurationEditor.h

    Interface declaration of the ConfigurationEditor class for the DataBuilder
    application.

    Copyright (C) 2005  Saso Kiselkov

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#import <AppKit/AppKit.h>
#import <CoreData/CoreData.h>

#import "ModelEditor.h"

@interface ConfigurationEditor : ModelEditor
{
  IBOutlet NSTextField *name;
  NSString * configuration;
}

- (void) setupWithConfiguration: (NSString *) configuration;

- (void) updateConfigurationName: (id)sender;

- (void) noteConfigurationsChanged: (NSNotification *) notif;
- (void) noteConfigurationNameChanged: (NSNotification *) notif;

@end
