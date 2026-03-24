/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x1C01FB9C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CheckAndProcessSurfaceComplete())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0255AE8;
  if ( qword_1C0255AE8 )
    return (__int64 (*)(void))qword_1C0255AE8();
  return result;
}
