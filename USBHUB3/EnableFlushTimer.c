/*
 * XREFs of EnableFlushTimer @ 0x1C0043ED8
 * Callers:
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0043F40 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     InsertEventEntryInLookUpTable @ 0x1C0044208 (InsertEventEntryInLookUpTable.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C008FC50 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(a1, -10000LL * a2, 0LL, v3);
  }
  return result;
}
