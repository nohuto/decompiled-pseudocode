/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x1C0232470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CheckAndProcessSurfaceComplete())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0294EE0;
  if ( qword_1C0294EE0 )
    return (__int64 (*)(void))qword_1C0294EE0();
  return result;
}
