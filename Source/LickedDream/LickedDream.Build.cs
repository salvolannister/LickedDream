// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LickedDream : ModuleRules
{
	public LickedDream(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
