/*
 * XREFs of ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002CC44
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18000D3F0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8f853f3308fdbebd25aa75747bd09082___ @ 0x18002C930 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8f853f3308fdbebd25aa75747bd09082___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b125c00b27fbf4663240ba082ce6596___::_scalar_deleting_destructor_ @ 0x180070010 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b125c00b27fbf4663240ba082ce6596___--_scala.c)
 *     ??1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x1801B6FD8 (--1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1801C6058 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ??1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1801D75D0 (--1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x1801E4254 (--1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801F8960 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801B6B40 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1801B6B40.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801C14F0 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  RTL_SRWLOCK *v1; // rsi
  char v3; // bp
  RTL_SRWLOCK *v4; // rsi
  volatile signed __int32 *v5; // rcx
  _DWORD *v6; // rcx
  char *v7; // rdi
  __int64 v8; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)a1[38];
  v3 = 1;
  if ( !v1 )
    goto LABEL_10;
  v4 = v1 + 31;
  AcquireSRWLockExclusive(v4);
  v5 = (volatile signed __int32 *)a1[38];
  if ( !v5 || *v5 != 1 )
  {
    v3 = 0;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
      {
        v7 = (char *)a1[38];
        if ( v7 )
        {
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v7 + 8);
          operator delete(v7, (const struct std::nothrow_t *)0x100);
        }
      }
      a1[38] = 0LL;
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v3 )
  {
LABEL_10:
    v6 = (_DWORD *)a1[6];
    if ( *v6 == 1 )
    {
      v9 = v6[21];
      v8 = 2147942974LL;
      if ( v9 < 0 )
        v8 = (unsigned int)v9;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v6,
        v8,
        &v9);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
