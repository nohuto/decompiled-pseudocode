/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x18003EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18003E7B4 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 *     SystemStateTrackerCreate @ 0x18003E948 (SystemStateTrackerCreate.c)
 *     SystemStateTrackerStart @ 0x18003EAAC (SystemStateTrackerStart.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18003EFD4 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z @ 0x18003F078 (-ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     RmpLaunchAllRpcServers @ 0x18003F1B4 (RmpLaunchAllRpcServers.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x18003F3B4 (-InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerP.c)
 *     RmpCreateResourceManagerServer @ 0x18003FE7C (RmpCreateResourceManagerServer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     IsQueryUserTokenPresent @ 0x180045418 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x1800454F8 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004577C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180064434 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800645D4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008450C (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

void __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  struct ModernResourceEnforcer *v1; // rbx
  struct _ACTIVITY_RESTARTER **v3; // rcx
  int v4; // edi
  int v5; // edi
  int ResourceManagerServer; // edi
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  int v8; // edi
  int v9; // eax
  struct _RM_SERVICE_GLOBALS *v10; // rsi
  DWORD v11; // edi
  struct _RM_SERVICE_GLOBALS *v12; // rsi
  struct ModernResourceEnforcer *v13; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v14[5]; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v15[144]; // [rsp+58h] [rbp-49h] BYREF

  v1 = 0LL;
  v13 = 0LL;
  HampLockTrackerId = TlsAlloc();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  RmSvcGlobals = 0LL;
  if ( !(unsigned __int8)IsPsmQueryBackgroundActivationTypePresent() || !(unsigned __int8)IsQueryUserTokenPresent() )
  {
    v8 = -2147467263;
    goto LABEL_12;
  }
  v4 = CreateModernResourceEnforcer(a1, &v13);
  if ( v4 < 0 )
  {
    v1 = v13;
  }
  else
  {
    v5 = SystemStateTrackerCreate();
    if ( v5 < 0 || (v5 = SystemStateTrackerStart(), v5 < 0) )
    {
      v1 = v13;
      v8 = v5 | 0x10000000;
      goto LABEL_12;
    }
    RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800B31E0);
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800B3218);
    v1 = v13;
    ResourceManagerServer = RmpCreateResourceManagerServer(v13);
    if ( ResourceManagerServer < 0 )
      goto LABEL_22;
    g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 340);
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
    v8 = InitializeResourceManagerServerProxy(v7, &g_pProxy);
    if ( v8 >= 0 )
    {
      v9 = RmpLaunchAllRpcServers();
      if ( v9 >= 0 )
      {
        v9 = ArManagerCreate(v3, &stru_1800B4D10);
        if ( v9 >= 0 )
        {
          v10 = RmSvcGlobals;
          if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          {
            v14[0] = RmGameModeCpuSetManagerCreateClientContext;
            v14[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
            v14[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
            v14[3] = RmGameModeCpuSetManagerReleaseAllocation;
            v14[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
            InitializeGameModeExtension(v14, v10);
          }
LABEL_12:
          if ( v8 >= 0 )
            goto LABEL_13;
          goto LABEL_24;
        }
      }
      ResourceManagerServer = v9;
LABEL_22:
      v8 = ResourceManagerServer | 0x10000000;
      goto LABEL_12;
    }
  }
LABEL_24:
  v12 = RmSvcGlobals;
  if ( RmSvcGlobals )
  {
    RmpRundownAllModules(RmSvcGlobals);
    RmpCleanupAllModules(v12);
    RmSvcGlobals = 0LL;
  }
  if ( ArGlobals )
  {
    ArManagerDestroy((struct _ACTIVITY_RESTARTER *)v3);
    ArGlobals = 0LL;
  }
LABEL_13:
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( v1 )
    (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v1 + 16LL))(v1);
}
