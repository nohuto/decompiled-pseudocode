/*
 * XREFs of ?DxgkEngWatchVisRgnChangeApiExt@@YAXPEAUHDC__@@H@Z @ 0x1C0176820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1, unsigned int a2)
{
  if ( qword_1C029AEF0 && (int)qword_1C029AEF0() >= 0 )
  {
    if ( qword_1C029AEF8 )
      qword_1C029AEF8(a1, a2);
  }
}
