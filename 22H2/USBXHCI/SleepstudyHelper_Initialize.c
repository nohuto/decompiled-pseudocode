/*
 * XREFs of SleepstudyHelper_Initialize @ 0x1C0074790
 * Callers:
 *     DriverEntry @ 0x1C00743A0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(_QWORD *a1, __int64 a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // r8d

  v4 = RtlRunOnceExecuteOnce(&SleepstudyHelperInitializeRunOnce, SleepstudyHelperInitializeOnce, 0LL, 0LL);
  v5 = 0;
  if ( v4 >= 0 && qword_1C0064AE0 )
    return (unsigned int)qword_1C0064AE0(a1, a2, 0LL);
  else
    *a1 = &SleepstudyHelperUnsupportedHandle;
  return v5;
}
