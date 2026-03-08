/*
 * XREFs of ?NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18020CBC0
 * Callers:
 *     ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x180225968 (-SetNotificationMode@CCursorVisual@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDesktopTree::NeedsCursorPositionUpdates(CDesktopTree *this, const struct CCursorVisual *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 567);
  v4 = (_QWORD *)*((_QWORD *)this + 568);
  while ( v2 != v4 )
  {
    v5 = *v2 + 8LL;
    v6 = *(int *)(*(_QWORD *)v5 + 4LL);
    v9 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v5 + v6))(
           v5 + v6,
           &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
           &v9) < 0
      || (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9)) == 0
      || *(const struct CCursorVisual **)(v7 + 11032) != a2 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
      return 1;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
    ++v2;
  }
  return 0;
}
