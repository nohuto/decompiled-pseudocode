/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C0169030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1, unsigned int a2)
{
  if ( qword_1C02945B0 && (int)qword_1C02945B0() >= 0 )
  {
    if ( qword_1C02945B8 )
      qword_1C02945B8(a1, a2);
  }
}
