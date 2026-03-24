/*
 * XREFs of ?DxgkEngAcquireStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C0149A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableSpriteApiExt(void *a1, unsigned int a2)
{
  int v4; // eax

  if ( qword_1C0256190 )
    v4 = qword_1C0256190();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C0256198 )
      qword_1C0256198(a1, a2);
  }
}
