/*
 * XREFs of PspLockJobChain @ 0x140682C34
 * Callers:
 *     PspLockJobsAndProcessExclusive @ 0x1406820CC (PspLockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x140682900 (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x140682A98 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     PspUnlockJobAssignment @ 0x140682CF0 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x140682D58 (PspLockJobAssignment.c)
 */

BOOLEAN __fastcall PspLockJobChain(__int64 a1, __int64 a2, char a3)
{
  char v5; // bp
  unsigned __int64 v6; // rax
  BOOLEAN result; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 i; // rsi

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  if ( (a3 & 1) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    PspLockJobAssignment(a2);
  }
  v6 = *(_QWORD *)(a1 + 1296);
  if ( v6 )
  {
    if ( v6 > 1 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1272) + 56LL), 1u);
      v8 = *(_QWORD *)(a1 + 1296);
      if ( v8 > 2 )
      {
        for ( i = v8 - 2; i; --i )
          ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1304) + 8 * i - 8) + 56LL), 1u);
      }
    }
    ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1264) + 56LL), 1u);
  }
  result = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !v5 )
    return PspUnlockJobAssignment(a2);
  return result;
}
