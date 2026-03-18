/*
 * XREFs of ?DxgkEngAcquireStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C0175D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableSpriteApiExt(void *a1, unsigned int a2)
{
  if ( qword_1C029AF10 && (int)qword_1C029AF10() >= 0 )
  {
    if ( qword_1C029AF18 )
      qword_1C029AF18(a1, a2);
  }
}
