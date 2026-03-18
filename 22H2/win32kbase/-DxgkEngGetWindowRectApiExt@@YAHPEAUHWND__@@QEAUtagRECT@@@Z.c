/*
 * XREFs of ?DxgkEngGetWindowRectApiExt@@YAHPEAUHWND__@@QEAUtagRECT@@@Z @ 0x1C00C2630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetWindowRectApiExt(HWND a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C02944B0 && (int)qword_1C02944B0() >= 0 && qword_1C02944B8 )
    return (unsigned int)qword_1C02944B8(a1, a2);
  return v2;
}
