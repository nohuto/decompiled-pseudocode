/*
 * XREFs of HMAssignmentUnlockWorker @ 0x1C004573C
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0033370 (DestroyThreadsObjects.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0045770 (HMUnlockObjectWorker.c)
 */

__int64 __fastcall HMAssignmentUnlockWorker(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return HMUnlockObjectWorker(result);
  return result;
}
