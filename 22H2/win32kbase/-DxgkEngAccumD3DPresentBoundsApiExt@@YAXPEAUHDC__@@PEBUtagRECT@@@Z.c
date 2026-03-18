/*
 * XREFs of ?DxgkEngAccumD3DPresentBoundsApiExt@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0168AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAccumD3DPresentBoundsApiExt(HDC a1, const struct tagRECT *a2)
{
  if ( qword_1C0294550 && (int)qword_1C0294550() >= 0 )
  {
    if ( qword_1C0294558 )
      qword_1C0294558(a1, a2);
  }
}
