/*
 * XREFs of ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800569D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180054F34 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIUnknown@@PEAUIWin32ApplicationView@@_N@Z @ 0x180056D1C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180057800 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::OnShowWindowPolicy(
        CApplicationManager *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  int v5; // r15d
  RTL_SRWLOCK *v9; // rbx
  char v10; // si
  CApplicationManager *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  struct IApplicationView *v15; // rdi
  __int64 v16; // rsi
  void (__fastcall *v17)(char *, GUID *, __int64 *); // rbx
  __int64 *ViewPropertySetFromHintsForWin32; // rax
  void (__fastcall *v19)(char *, GUID *, IUnknown **); // rsi
  HRESULT v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // [rsp+20h] [rbp-40h]
  struct IApplicationView *v24; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  void *ppvOut; // [rsp+A8h] [rbp+48h] BYREF

  v5 = (int)a4;
  *a4 = 0;
  *a5 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) || !(unsigned int)GetWindowBand(a2, &a5) || (_DWORD)a5 != 1 )
    return 0LL;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  CApplicationManager::_MonitorFromWindow(
    (CApplicationManager *)((char *)this - 368),
    a2,
    (struct IImmersiveMonitor **)&ppvOut);
  v23 = (int)ppvOut;
  v10 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, __int64))(**((_QWORD **)this + 21) + 24LL))(
          *((_QWORD *)this + 21),
          a2,
          (unsigned int)a5,
          1LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  if ( !v10 )
    return 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  v12 = CApplicationManager::_HandleCreation_EnsureApplicationView(v11, 0LL, a2, &v24);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDFC,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v12,
      v23);
  }
  else
  {
    v14 = 0LL;
    v15 = v24;
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v24)(
      v24,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v27);
    v16 = v27;
    if ( v27 )
    {
      v25 = 0LL;
      v17 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 40) + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v17((char *)this - 320, &GUID_00000000_0000_0000_c000_000000000046, &v25);
      ViewPropertySetFromHintsForWin32 = (__int64 *)Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(
                                                      &v28,
                                                      v25,
                                                      v16);
      v14 = *ViewPropertySetFromHintsForWin32;
      *ViewPropertySetFromHintsForWin32 = 0LL;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    punk = 0LL;
    v19 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 40) + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
    v19((char *)this - 320, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v20 = IUnknown_QueryService(
            punk,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
            &ppvOut);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE08,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v20,
        v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = v20;
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, __int64, _QWORD))(*(_QWORD *)ppvOut + 32LL))(
              ppvOut,
              v15,
              v14,
              0LL);
      v22 = v21;
      if ( v21 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE09,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v21,
        v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = v22;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  return v13;
}
