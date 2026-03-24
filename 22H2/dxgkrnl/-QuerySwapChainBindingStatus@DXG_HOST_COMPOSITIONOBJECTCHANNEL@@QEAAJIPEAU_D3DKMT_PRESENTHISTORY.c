/*
 * XREFs of ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C028E23C
 * Callers:
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C023B34C (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0002D44 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008594 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008660 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00142E8 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0018CB8 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C005E884 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C00655E0 (NtNotifyPresentToCompositionSurface.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::QuerySwapChainBindingStatus(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        unsigned int a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  __int64 v6; // rdi
  DxgkCompositionObject *v7; // r14
  struct DXGFASTMUTEX *v8; // rax
  DxgkCompositionObject *v9; // rax
  __int64 v10; // rdx
  struct _KPROCESS *v11; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v13; // rdx
  DXGPROCESS *v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  int SwapChainBindingStatus; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  HANDLE Handle; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v35[16]; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v36[16]; // [rsp+38h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-11h] BYREF
  char v38; // [rsp+78h] [rbp+1Fh]

  LODWORD(v6) = -1073741823;
  v7 = 0LL;
  v8 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, v8, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  v9 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                  *((_QWORD *)this + 1),
                                  a2,
                                  17LL);
  if ( v9 )
  {
    v7 = v9;
    DxgkCompositionObject::AddRef(v9);
  }
  if ( v36[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36, v10);
  if ( v7 )
  {
    v11 = (struct _KPROCESS *)*((_QWORD *)this + 3);
    v38 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v11);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v35);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    v14 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
      DXGPROCESS::AcquireReference(ProcessDxgProcess, v13);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v13);
    if ( v14 )
    {
      if ( *((_DWORD *)v14 + 10) == 1 && (*(unsigned int (**)(void))(*((_QWORD *)v14 + 11) + 216LL))() )
      {
        Handle = 0LL;
        v16 = DxgkCompositionObject::OpenDwmHandle(v7, &Handle);
        v6 = v16;
        if ( v16 < 0 )
        {
          v30 = WdLogNewEntry5_WdWarning(v18, v17, v19);
          *(_QWORD *)(v30 + 24) = v6;
          WdLogEvent5_WdWarning(v30);
        }
        else
        {
          v20 = NtNotifyPresentToCompositionSurface((CCompositionSurface *)Handle, (unsigned __int64)a3);
          v6 = v20;
          if ( v20 < 0 )
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
            v24[3] = v6;
            v24[4] = Handle;
            v24[5] = a3;
            WdLogEvent5_WdWarning(v24);
          }
          else
          {
            a3->Token.Flip.Flags.Value |= 0x2000000u;
          }
          if ( (int)v6 >= 0 )
          {
            a3->Token.Flip.hLogicalSurface = (ULONG64)Handle;
            SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(1, a3);
            v6 = SwapChainBindingStatus;
            if ( SwapChainBindingStatus < 0 )
            {
              v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
              *(_QWORD *)(v29 + 24) = v6;
              WdLogEvent5_WdWarning(v29);
            }
            a3->Token.Flip.hLogicalSurface = 0LL;
          }
          ObCloseHandle(Handle, 1);
        }
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
      DXGPROCESS::ReleaseReference(v14, v31);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v32);
    }
    if ( v35[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v15);
    if ( v38 )
      KeUnstackDetachProcess(&ApcState);
    DxgkCompositionObject::Release(v7);
  }
  return (unsigned int)v6;
}
