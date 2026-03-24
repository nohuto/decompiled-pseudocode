/*
 * XREFs of NtGdiFlush @ 0x1C0083590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiFlush()
{
  int v0; // eax

  if ( qword_1C0255940 )
    v0 = qword_1C0255940();
  else
    v0 = -1073741637;
  if ( v0 >= 0 && qword_1C0255948 )
    qword_1C0255948();
  return 0LL;
}
