/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x140700CC4
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     PspLockJobChain @ 0x1406F9018 (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // si
  unsigned int i; // ebx
  __int64 v7; // rcx

  --*(_WORD *)(a3 + 486);
  v4 = a4 & 1;
  if ( a2 )
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
  for ( i = 0; i < *a1; ++i )
  {
    v7 = *(_QWORD *)&a1[4 * i + 2];
    if ( LOBYTE(a1[4 * i + 4]) )
      PspLockJobChain(v7, 0LL, v4);
    else
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 56), 1u);
  }
}
