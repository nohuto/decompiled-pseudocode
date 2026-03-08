/*
 * XREFs of ?DxgkEngAddRedirBitmapD3DDirtyRgnApiExt@@YAXPEAUHDC__@@PEBUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x1C01958C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgnApiExt(HDC a1, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  if ( qword_1C02D56B0 && (int)qword_1C02D56B0() >= 0 )
  {
    if ( qword_1C02D56B8 )
      qword_1C02D56B8(a1, a2);
  }
}
