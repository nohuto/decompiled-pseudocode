/*
 * XREFs of ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180074FA0
 * Callers:
 *     ?StopActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180074970 (-StopActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180074A70 (-StopActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ @ 0x1800806D0 (-StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAX_N000@Z @ 0x1800AA0B8 (-Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@.c)
 *     ?StopActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800AA3E0 (-StopActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTel.c)
 *     ?StopActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180275480 (-StopActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180277EE0 (-StopActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180017814 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
