/*
 * XREFs of ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180031E38
 * Callers:
 *     ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180014FA0 (-Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180015B1C (-Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x1800162E4 (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800321C0 (-StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180084F40 (-StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180087390 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800888D0 (-StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18008AAF0 (-StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18008AD00 (-StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1804E4BF0 (-StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1804E4F20 (-StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1804E5250 (-StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1804E5580 (-StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180031E80 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v3);
  v2 = v3;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
