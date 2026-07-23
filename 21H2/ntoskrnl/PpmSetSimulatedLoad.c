/*
 * XREFs of PpmSetSimulatedLoad @ 0x1408E65D0
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmSetSimulatedLoad(PPROCESSOR_NUMBER ProcNumber)
{
  void *v2; // rsi
  __int64 i; // rdx
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int v9; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  _BYTE *PoolWithTag; // rax

  v2 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( *(_DWORD *)ProcNumber < 0 )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      v4 = *(_DWORD *)(i + 200);
      v5 = 0;
      if ( v4 )
      {
        v6 = *(_QWORD *)(i + 216);
        while ( 1 )
        {
          v7 = 136LL * v5;
          if ( *(_DWORD *)(v7 + v6 + 16) == 1 && *(_DWORD *)(v7 + v6 + 20) == (*(_DWORD *)ProcNumber & 0x7FFFFFFF) )
            break;
          if ( ++v5 >= v4 )
            goto LABEL_10;
        }
        v8 = *(_QWORD *)(v7 + v6);
        if ( v8 )
          goto LABEL_16;
      }
LABEL_10:
      ;
    }
    goto LABEL_12;
  }
  if ( ProcNumber->Reserved
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
  {
LABEL_12:
    v9 = -1073741811;
    goto LABEL_19;
  }
  v8 = KeGetPrcb(ProcessorIndexFromNumber) + 33128;
LABEL_16:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2uLL, 0x704D5050u);
  if ( PoolWithTag )
  {
    *PoolWithTag = ProcNumber[1].Group;
    PoolWithTag[1] = HIBYTE(ProcNumber[1].Group);
    v2 = *(void **)(v8 + 24);
    *(_QWORD *)(v8 + 24) = PoolWithTag;
    v9 = 0;
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_19:
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x704D5050u);
  return v9;
}
