/*
 * XREFs of ?DxgkEngAccumD3DPresentBoundsApiExt@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0195870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAccumD3DPresentBoundsApiExt(HDC a1, const struct tagRECT *a2)
{
  if ( qword_1C02D56C0 && (int)qword_1C02D56C0() >= 0 )
  {
    if ( qword_1C02D56C8 )
      qword_1C02D56C8(a1, a2);
  }
}
