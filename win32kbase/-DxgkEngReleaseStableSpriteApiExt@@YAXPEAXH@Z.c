/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C0195DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1, unsigned int a2)
{
  if ( qword_1C02D5720 && (int)qword_1C02D5720() >= 0 )
  {
    if ( qword_1C02D5728 )
      qword_1C02D5728(a1, a2);
  }
}
