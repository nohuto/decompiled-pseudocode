/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C00EF0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  if ( qword_1C02D56D0 && (int)qword_1C02D56D0() >= 0 )
  {
    if ( qword_1C02D56D8 )
      qword_1C02D56D8(a1);
  }
}
