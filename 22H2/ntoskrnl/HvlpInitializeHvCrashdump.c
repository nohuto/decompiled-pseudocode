/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1404F901C
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CF458 (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1402E7FA0 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039DF60 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeRegisterNmiCallback @ 0x140514850 (KeRegisterNmiCallback.c)
 *     MmAllocateMappingAddress @ 0x140691430 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x140762010 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // r9
  void *IndependentPages; // rax

  v1 = *(_DWORD *)(a1 + 4);
  v2 = -1073741823;
  v3 = *(_QWORD *)(a1 + 16);
  dword_140C4761C = *(_DWORD *)a1;
  qword_140C47620 = *(_QWORD *)(a1 + 8);
  dword_140C47618 = v1;
  qword_140C47610 = v3;
  if ( !v1 || (qword_140C47608 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    if ( !VslVsmEnabled )
    {
      CallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &CallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_16;
      stru_140C47578.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C47578,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      *(_QWORD *)&HvlpCrashdumpData = KeRegisterNmiCallback((PNMI_CALLBACK)HvlCrashdumpCallbackRoutine, 0LL);
      qword_140C47628 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140C47628 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140C475A8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140C475A8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140C47578.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140C47578,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140C475D8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140C475D8,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          *(_QWORD *)&HvlpCrashdumpData = KeRegisterNmiCallback((PNMI_CALLBACK)HvlSkCrashdumpCallbackRoutine, 0LL);
          return 0;
        }
      }
    }
  }
LABEL_16:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages(HvlpFallbackScratchPage, 4096LL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
