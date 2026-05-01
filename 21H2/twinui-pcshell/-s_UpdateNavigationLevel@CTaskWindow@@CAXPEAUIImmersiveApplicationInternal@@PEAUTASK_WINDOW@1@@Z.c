/*
 * XREFs of ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x18004BBC4
 * Callers:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x18004BB38 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x1801F5CD0 (-HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180055FB8 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CTaskWindow::s_UpdateNavigationLevel(
        struct IImmersiveApplicationInternal *a1,
        struct CTaskWindow::TASK_WINDOW *a2)
{
  int v4; // r8d
  __int64 v5; // rdi
  unsigned int v6; // r12d
  int v7; // r8d
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // r9
  void (__fastcall *v11)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+88h] [rbp+48h] BYREF
  __int64 v15; // [rsp+90h] [rbp+50h] BYREF
  __int64 v16; // [rsp+98h] [rbp+58h] BYREF

  v4 = *((_DWORD *)a2 + 22);
  v5 = 0LL;
  v6 = 1;
  if ( v4 )
  {
    v7 = v4 - 1;
    if ( !v7 )
    {
      v8 = 3;
      goto LABEL_5;
    }
    if ( v7 == 1 )
    {
      v8 = 4;
      goto LABEL_5;
    }
  }
  v8 = 1;
LABEL_5:
  v13[0] = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))a2 + 2))(
    *((_QWORD *)a2 + 2),
    &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
    v13);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13[0] + 392LL))(v13[0], v8);
  v16 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 2))(
    *((_QWORD *)a2 + 2),
    &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
    &v16);
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 48LL))(v16, &v14) >= 0 )
  {
    v9 = v14;
    v10 = 0LL;
    v15 = 0LL;
    if ( a1 )
    {
      v11 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a1 + 464LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      v11(a1, &v15);
      v10 = v15;
    }
    v12 = *((_DWORD *)a2 + 3);
    if ( v12 != 5 )
      v6 = v12 + 8;
    LOBYTE(v5) = v8 == 4;
    CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
      &CApplicationManagerUtility::g_pIAMGlobals[1],
      v9,
      v6,
      v10,
      a1,
      v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v13);
}
