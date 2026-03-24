/*
 * XREFs of ?xxxCleanupAndFreeDdeConvIfSupported@@YAXPEAUtagDDECONV@@@Z @ 0x1C0113B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall xxxCleanupAndFreeDdeConvIfSupported(struct tagDDECONV *a1)
{
  int v2; // eax

  if ( qword_1C0257788 )
    v2 = qword_1C0257788();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0257790 )
      qword_1C0257790(a1);
  }
}
