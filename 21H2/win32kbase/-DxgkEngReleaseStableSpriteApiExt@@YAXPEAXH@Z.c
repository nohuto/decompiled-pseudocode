/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C0176710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1, unsigned int a2)
{
  if ( qword_1C029AF20 && (int)qword_1C029AF20() >= 0 )
  {
    if ( qword_1C029AF28 )
      qword_1C029AF28(a1, a2);
  }
}
