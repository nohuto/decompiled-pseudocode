/*
 * XREFs of PpmClearSimulatedLoad @ 0x1409837F0
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmClearSimulatedLoad(PPROCESSOR_NUMBER ProcNumber)
{
  void *v2; // rdi
  __int64 i; // rcx
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // rax
  unsigned int v8; // ebx
  ULONG ProcessorIndexFromNumber; // eax

  v2 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( *(_DWORD *)ProcNumber < 0 )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      v4 = *(_DWORD *)(i + 296);
      v5 = 0LL;
      if ( v4 )
      {
        v6 = *(_QWORD *)(i + 312);
        while ( *(_DWORD *)(v6 + 144 * v5 + 16) != 1
             || *(_DWORD *)(v6 + 144 * v5 + 20) != (*(_DWORD *)ProcNumber & 0x7FFFFFFF) )
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= v4 )
            goto LABEL_10;
        }
        v7 = *(_QWORD *)(v6 + 144 * v5);
        if ( v7 )
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
    v8 = -1073741811;
    goto LABEL_17;
  }
  v7 = KeGetPrcb(ProcessorIndexFromNumber) + 33968;
LABEL_16:
  v2 = *(void **)(v7 + 24);
  *(_QWORD *)(v7 + 24) = 0LL;
  v8 = 0;
LABEL_17:
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x704D5050u);
  return v8;
}
