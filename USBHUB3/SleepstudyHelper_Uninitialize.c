/*
 * XREFs of SleepstudyHelper_Uninitialize @ 0x1C008F7C4
 * Callers:
 *     DriverCleanup @ 0x1C00021B0 (DriverCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SleepstudyHelper_Uninitialize())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C006DCD8;
  if ( qword_1C006DCD8 )
    return (__int64 (*)(void))qword_1C006DCD8();
  return result;
}
