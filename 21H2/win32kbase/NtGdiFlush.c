/*
 * XREFs of NtGdiFlush @ 0x1C0092AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiFlush()
{
  if ( qword_1C029B6B0 && (int)qword_1C029B6B0() >= 0 && qword_1C029B6B8 )
    qword_1C029B6B8();
  return 0LL;
}
