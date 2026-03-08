/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x1407D0108
 * Callers:
 *     IoSetIoCompletionEx3 @ 0x1402928A0 (IoSetIoCompletionEx3.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140340900 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140341170 (IoSetIoCompletionEx2.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068A5B0 (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall IopAllocateMiniCompletionPacket(char a1, char a2)
{
  char v3; // bl
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY result; // rax
  _GENERAL_LOOKASIDE *L; // rdi
  int v8; // edx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1;
  v9 = 0LL;
  if ( a1 == 4 )
  {
    v8 = 80;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[7].P;
    ++P->TotalAllocates;
    result = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( result )
      goto LABEL_3;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[7].L;
    ++L->TotalAllocates;
    result = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( result )
      goto LABEL_3;
    ++L->AllocateMisses;
    v8 = 56;
    if ( a2 )
    {
      v3 = 3;
      result = (PSLIST_ENTRY)ExAllocatePool2(65LL, 56LL, 544236361LL);
      goto LABEL_9;
    }
  }
  DWORD2(v9) = 0;
  LOBYTE(v9) = 1;
  result = (PSLIST_ENTRY)ExAllocatePool3(64, v8, 544236361, (unsigned int)&v9, 1);
LABEL_9:
  if ( result )
LABEL_3:
    LOBYTE(result[1].Next) = v3;
  return result;
}
