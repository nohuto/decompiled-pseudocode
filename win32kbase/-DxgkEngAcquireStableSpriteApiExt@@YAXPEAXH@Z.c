/*
 * XREFs of ?DxgkEngAcquireStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C00EF060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableSpriteApiExt(void *a1, unsigned int a2)
{
  if ( qword_1C02D5710 && (int)qword_1C02D5710() >= 0 )
  {
    if ( qword_1C02D5718 )
      qword_1C02D5718(a1, a2);
  }
}
