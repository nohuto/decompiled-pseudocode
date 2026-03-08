/*
 * XREFs of ?DxgkEngWatchVisRgnChangeApiExt@@YAXPEAUHDC__@@H@Z @ 0x1C00EF210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1, unsigned int a2)
{
  if ( qword_1C02D56F0 && (int)qword_1C02D56F0() >= 0 )
  {
    if ( qword_1C02D56F8 )
      qword_1C02D56F8(a1, a2);
  }
}
