/*
 * XREFs of NtGdiFlush @ 0x1C009C920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiFlush()
{
  if ( qword_1C0294D48 && (int)qword_1C0294D48() >= 0 && qword_1C0294D50 )
    qword_1C0294D50();
  return 0LL;
}
