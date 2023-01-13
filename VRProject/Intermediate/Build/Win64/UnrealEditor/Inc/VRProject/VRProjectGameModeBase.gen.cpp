// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRProject/VRProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRProjectGameModeBase() {}
// Cross Module References
	VRPROJECT_API UClass* Z_Construct_UClass_AVRProjectGameModeBase_NoRegister();
	VRPROJECT_API UClass* Z_Construct_UClass_AVRProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VRProject();
// End Cross Module References
	void AVRProjectGameModeBase::StaticRegisterNativesAVRProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRProjectGameModeBase);
	UClass* Z_Construct_UClass_AVRProjectGameModeBase_NoRegister()
	{
		return AVRProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VRProjectGameModeBase.h" },
		{ "ModuleRelativePath", "VRProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRProjectGameModeBase_Statics::ClassParams = {
		&AVRProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVRProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AVRProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AVRProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRProjectGameModeBase.OuterSingleton;
	}
	template<> VRPROJECT_API UClass* StaticClass<AVRProjectGameModeBase>()
	{
		return AVRProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_VRProject_Source_VRProject_VRProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VRProject_Source_VRProject_VRProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRProjectGameModeBase, AVRProjectGameModeBase::StaticClass, TEXT("AVRProjectGameModeBase"), &Z_Registration_Info_UClass_AVRProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRProjectGameModeBase), 2271197073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VRProject_Source_VRProject_VRProjectGameModeBase_h_1477140557(TEXT("/Script/VRProject"),
		Z_CompiledInDeferFile_FID_VRProject_Source_VRProject_VRProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VRProject_Source_VRProject_VRProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
