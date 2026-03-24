/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C014A7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1, unsigned int a2)
{
  int v4; // eax

  if ( qword_1C02551A0 )
    v4 = qword_1C02551A0();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C02551A8 )
      qword_1C02551A8(a1, a2);
  }
}
