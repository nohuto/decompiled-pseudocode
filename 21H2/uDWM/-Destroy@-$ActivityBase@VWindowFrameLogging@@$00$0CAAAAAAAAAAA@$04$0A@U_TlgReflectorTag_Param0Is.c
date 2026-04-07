/*
 * XREFs of ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18008E82C
 * Callers:
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008E414 (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008E440 (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008E46C (--1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008E498 (--1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008E4C4 (--1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008EA4C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18008F348 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProvid_ea_18008F348.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180093028 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param_ea_180093028.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 38;
  if ( !a1[38] )
    goto LABEL_9;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_9:
    v4 = (_DWORD *)a1[6];
    if ( *v4 == 1 )
    {
      LODWORD(SRWLock) = v4[21];
      v5 = 2147942974LL;
      if ( (int)SRWLock < 0 )
        v5 = (unsigned int)SRWLock;
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v5,
        &SRWLock);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
