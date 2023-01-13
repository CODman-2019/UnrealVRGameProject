// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VRProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VRProject()
	{
		if (!Z_Registration_Info_UPackage__Script_VRProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VRProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x69932E21,
				0x5043B4D7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VRProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VRProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VRProject(Z_Construct_UPackage__Script_VRProject, TEXT("/Script/VRProject"), Z_Registration_Info_UPackage__Script_VRProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x69932E21, 0x5043B4D7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
