/*
 * XREFs of UmfdUninitializeProcess @ 0x1C00B8184
 * Callers:
 *     GdiProcessCallout @ 0x1C014D030 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UmfdUninitializeProcess())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256688;
  if ( qword_1C0256688 )
    return (__int64 (*)(void))qword_1C0256688();
  return result;
}
