/*
 * XREFs of ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02E34A0
 * Callers:
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C03761A4 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C000859C (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00085C0 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000AA64 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000ACBC (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00150D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z @ 0x1C00169D0 (-FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006D690 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C007ADA0 (NtNotifyPresentToCompositionSurface.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::QuerySwapChainBindingStatus(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        unsigned int a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v6; // edi
  DxgkCompositionObject *v7; // r14
  struct DXGFASTMUTEX *v8; // rax
  DxgkCompositionObject *v9; // rax
  struct _KPROCESS *v10; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  DXGPROCESS *v12; // rbx
  int v13; // eax
  int v14; // eax
  HANDLE v15; // rax
  int SwapChainBindingStatus; // eax
  HANDLE Handle; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v19[16]; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v20[16]; // [rsp+38h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-11h] BYREF
  char v22; // [rsp+78h] [rbp+1Fh]

  v6 = -1073741823;
  v7 = 0LL;
  v8 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, v8, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v9 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                  *((_QWORD *)this + 1),
                                  a2,
                                  17LL);
  if ( v9 )
  {
    v7 = v9;
    DxgkCompositionObject::AddRef(v9);
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  if ( v7 )
  {
    v10 = (struct _KPROCESS *)*((_QWORD *)this + 3);
    v22 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v10);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v19);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    v12 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    if ( v12 )
    {
      if ( *((_DWORD *)v12 + 10) == 1 && (*(unsigned int (**)(void))(*((_QWORD *)v12 + 11) + 216LL))() )
      {
        Handle = 0LL;
        v13 = DxgkCompositionObject::OpenDwmHandle(v7, &Handle);
        v6 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry1(3LL, v13);
        }
        else
        {
          v14 = NtNotifyPresentToCompositionSurface(Handle, (unsigned __int64)a3);
          v6 = v14;
          if ( v14 < 0 )
          {
            WdLogSingleEntry3(3LL, v14, Handle, a3);
          }
          else
          {
            v15 = Handle;
            a3->Token.Flip.Flags.Value |= 0x2000000u;
            a3->Token.Flip.hLogicalSurface = (ULONG64)v15;
            SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(1, a3);
            v6 = SwapChainBindingStatus;
            if ( SwapChainBindingStatus < 0 )
              WdLogSingleEntry1(3LL, SwapChainBindingStatus);
            a3->Token.Flip.hLogicalSurface = 0LL;
          }
          ObCloseHandle(Handle, 1);
        }
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      DXGPROCESS::ReleaseReference(v12);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    if ( v22 )
      KeUnstackDetachProcess(&ApcState);
    FlipManagerDwmReleaseFlipManagerObject(v7);
  }
  return v6;
}
