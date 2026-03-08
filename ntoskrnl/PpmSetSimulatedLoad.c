/*
 * XREFs of PpmSetSimulatedLoad @ 0x140983BA4
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmSetSimulatedLoad(PPROCESSOR_NUMBER ProcNumber)
{
  void *v2; // rsi
  __int64 i; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rbx
  unsigned int v8; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  _BYTE *Pool2; // rax

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
    goto LABEL_19;
  }
  v7 = KeGetPrcb(ProcessorIndexFromNumber) + 33968;
LABEL_16:
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 2LL, 1884115024LL);
  if ( Pool2 )
  {
    *Pool2 = ProcNumber[1].Group;
    Pool2[1] = HIBYTE(ProcNumber[1].Group);
    v2 = *(void **)(v7 + 24);
    *(_QWORD *)(v7 + 24) = Pool2;
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_19:
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x704D5050u);
  return v8;
}
