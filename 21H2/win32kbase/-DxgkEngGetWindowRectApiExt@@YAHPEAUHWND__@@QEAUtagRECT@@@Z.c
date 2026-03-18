/*
 * XREFs of ?DxgkEngGetWindowRectApiExt@@YAHPEAUHWND__@@QEAUtagRECT@@@Z @ 0x1C00C3B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetWindowRectApiExt(HWND a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C029AE20 && (int)qword_1C029AE20() >= 0 && qword_1C029AE28 )
    return (unsigned int)qword_1C029AE28(a1, a2);
  return v2;
}
