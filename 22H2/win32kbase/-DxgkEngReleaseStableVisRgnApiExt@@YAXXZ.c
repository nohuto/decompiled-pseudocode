/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXXZ @ 0x1C014A800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void DxgkEngReleaseStableVisRgnApiExt(void)
{
  int v0; // eax

  if ( qword_1C0255160 )
    v0 = qword_1C0255160();
  else
    v0 = -1073741637;
  if ( v0 >= 0 )
  {
    if ( qword_1C0255168 )
      qword_1C0255168();
  }
}
