/*
 * XREFs of ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180050F80
 * Callers:
 *     ?StopActivity@LaunchCompleted@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800507B0 (-StopActivity@LaunchCompleted@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180052140 (-StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180052900 (-StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180052F5C (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
