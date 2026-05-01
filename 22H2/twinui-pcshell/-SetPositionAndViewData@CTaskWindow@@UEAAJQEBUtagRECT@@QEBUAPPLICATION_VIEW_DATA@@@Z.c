/*
 * XREFs of ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180073300
 * Callers:
 *     <none>
 * Callees:
 *     ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x1800733C0 (-RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::SetPositionAndViewData(
        CTaskWindow *this,
        struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  int v6; // edi
  ImmersiveOwnedWindowHelper *v7; // rax
  const struct tagRECT *v8; // r8
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( (*((_BYTE *)this + 60) & 2) == 0 )
  {
    v11 = 0LL;
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
      *((_QWORD *)this + 6),
      &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2,
      &v11);
    v6 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)v11 + 80LL))(
           v11,
           a2,
           a3);
    if ( v6 >= 0 )
    {
      v7 = (ImmersiveOwnedWindowHelper *)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
      if ( v7 )
        ImmersiveOwnedWindowHelper::RepositionOwnedWindows(v7, (HWND)a2, v8);
    }
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return (unsigned int)v6;
}
