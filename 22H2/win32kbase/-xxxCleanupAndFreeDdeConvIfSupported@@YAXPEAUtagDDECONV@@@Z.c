/*
 * XREFs of ?xxxCleanupAndFreeDdeConvIfSupported@@YAXPEAUtagDDECONV@@@Z @ 0x1C0113E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall xxxCleanupAndFreeDdeConvIfSupported(struct tagDDECONV *a1)
{
  int v2; // eax

  if ( qword_1C0256788 )
    v2 = qword_1C0256788();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0256790 )
      qword_1C0256790(a1);
  }
}
