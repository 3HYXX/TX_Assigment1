// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TX_Assigment1 : ModuleRules
{
	public TX_Assigment1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
