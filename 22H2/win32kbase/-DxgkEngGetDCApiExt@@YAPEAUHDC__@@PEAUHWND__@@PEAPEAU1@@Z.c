/*
 * XREFs of ?DxgkEngGetDCApiExt@@YAPEAUHDC__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1C00E0520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetDCApiExt(HWND a1, HDC *a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( qword_1C02944A0 && (int)qword_1C02944A0() >= 0 && qword_1C02944A8 )
    return qword_1C02944A8(a1, a2);
  return v2;
}
