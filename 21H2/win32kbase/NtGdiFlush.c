/*
 * XREFs of NtGdiFlush @ 0x1C0082340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiFlush()
{
  int v0; // eax

  if ( qword_1C0256940 )
    v0 = qword_1C0256940();
  else
    v0 = -1073741637;
  if ( v0 >= 0 && qword_1C0256948 )
    qword_1C0256948();
  return 0LL;
}
