/*
 * XREFs of PspGetMemoryPartitionContext @ 0x14070D690
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 * Callees:
 *     PspGetMemoryPartitionImplicit @ 0x140798000 (PspGetMemoryPartitionImplicit.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1409AF458 (PspGetMemoryPartitionFromJobList.c)
 */

__int64 __fastcall PspGetMemoryPartitionContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int MemoryPartitionImplicit; // r10d

  MemoryPartitionImplicit = 0;
  *a5 = 0LL;
  if ( !a1
    || !*(_QWORD *)(a1 + 1296)
    || (MemoryPartitionImplicit = PspGetMemoryPartitionImplicit(*(_QWORD *)(a1 + 1296), a2, a5),
        MemoryPartitionImplicit >= 0) )
  {
    if ( !*a5 && a4 )
      return (unsigned int)PspGetMemoryPartitionFromJobList(a3, a4, a5);
  }
  return (unsigned int)MemoryPartitionImplicit;
}
