/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1801C36D0
 * Callers:
 *     ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1801C3620 (-SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z.c)
 *     ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x1801C3910 (-SwitchToShellWindow@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x1801B29D0 (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x1801B2DAC (--$CreateRefCountedObj@V-$CAutoHandle@PEAX@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@V-$CAutoHand.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1801BDA04 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C0284 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801C4784 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801C92F4 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor(int **a1, __int64 a2, int a3)
{
  signed int Error; // edi
  HANDLE *v7; // rbx
  bool IsCalledOnIAMThread; // al
  bool v9; // r12
  int v10; // r14d
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  HANDLE Event; // rax
  int v15; // edi
  __int64 v16; // rcx
  HANDLE *v18; // [rsp+20h] [rbp-30h] BYREF
  int **v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  bool v21; // [rsp+38h] [rbp-18h]
  HANDLE *v22; // [rsp+40h] [rbp-10h] BYREF
  int v23; // [rsp+48h] [rbp-8h]
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  Error = 0;
  if ( (a3 & 0x20) == 0 )
  {
    Error = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch((CApplicationManager *)a1);
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  v7 = 0LL;
  v18 = 0LL;
  IsCalledOnIAMThread = CIAMGlobals::IsCalledOnIAMThread((CIAMGlobals *)a1);
  v9 = IsCalledOnIAMThread;
  v10 = 3;
  if ( (a3 & 4) != 0 )
    goto LABEL_17;
  if ( IsCalledOnIAMThread )
  {
    Error = CApplicationManager::_ActivateIamSpecialWindow((CApplicationManager *)(a1 - 19));
    goto LABEL_17;
  }
  v11 = CreateRefCountedObj<CAutoHandle<void *>,>(&v24);
  v12 = 0LL;
  v7 = 0LL;
  if ( &v18 != (HANDLE **)v11 )
  {
    v7 = (HANDLE *)*v11;
    v12 = *v11;
    *v11 = 0LL;
  }
  v18 = (HANDLE *)v12;
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v7 )
  {
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    *(_QWORD *)(v12 + 8) = Event;
    if ( Event )
      Error = 0;
    else
      Error = ResultFromKnownLastError();
    if ( Error >= 0 )
    {
      v10 = 4;
      v18 = v7;
LABEL_17:
      if ( Error >= 0 )
      {
        v24 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
        v19 = a1 - 19;
        v20 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
        v21 = v9;
        v22 = v7;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
        v23 = a3;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v15 = CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___(a1[81], (HWND)&v19, v10);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v15 )
        {
          Error = 0;
          if ( v7 )
            WaitForSingleObjectEx(v7[1], 0x1388u, 0);
        }
        else
        {
          Error = -2147467259;
        }
        v16 = (__int64)v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      }
    }
  }
  else
  {
    Error = -2147024882;
  }
  if ( v7 )
    (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
  return (unsigned int)Error;
}
