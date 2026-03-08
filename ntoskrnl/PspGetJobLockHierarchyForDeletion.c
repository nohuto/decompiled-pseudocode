/*
 * XREFs of PspGetJobLockHierarchyForDeletion @ 0x1406F6DC0
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 * Callees:
 *     PspLockJobAssignment @ 0x140700924 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x140700950 (PspUnlockJobAssignment.c)
 */

__int64 __fastcall PspGetJobLockHierarchyForDeletion(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockJobAssignment(CurrentThread);
  v5 = *(_QWORD *)(a1 + 1288);
  v6 = 0;
  if ( v5 )
  {
    *(_BYTE *)(a2 + 16) = 0;
    v6 = 1;
    *(_QWORD *)(a2 + 8) = v5;
  }
  v7 = 2LL * v6;
  *(_QWORD *)(a2 + 8 * v7 + 8) = a1;
  *(_BYTE *)(a2 + 8 * v7 + 16) = 0;
  *(_DWORD *)a2 = v6 + 1;
  return PspUnlockJobAssignment(CurrentThread);
}
