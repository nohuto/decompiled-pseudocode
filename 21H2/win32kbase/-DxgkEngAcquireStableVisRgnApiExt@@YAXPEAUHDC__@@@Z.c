/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C0175DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  if ( qword_1C029AED0 && (int)qword_1C029AED0() >= 0 )
  {
    if ( qword_1C029AED8 )
      qword_1C029AED8(a1);
  }
}
