/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x140545BF4
 * Callers:
 *     HvlPhase1Initialize @ 0x140384654 (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x1402E8DA0 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRegisterNmiSxCallback @ 0x14056AA40 (KiRegisterNmiSxCallback.c)
 *     MmAllocateIndependentPages @ 0x140869AC0 (MmAllocateIndependentPages.c)
 *     MmAllocateMappingAddress @ 0x140869D00 (MmAllocateMappingAddress.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
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
  dword_140C5F01C = *(_DWORD *)a1;
  qword_140C5F020 = *(_QWORD *)(a1 + 8);
  dword_140C5F018 = v1;
  qword_140C5F010 = v3;
  if ( !v1 || (qword_140C5F008 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
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
      stru_140C5EF78.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C5EF78,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      *(_QWORD *)&HvlpCrashdumpData = KiRegisterNmiSxCallback(HvlCrashdumpCallbackRoutine, 0LL);
      qword_140C5F028 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140C5F028 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140C5EFA8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140C5EFA8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140C5EF78.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140C5EF78,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140C5EFD8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140C5EFD8,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          *(_QWORD *)&HvlpCrashdumpData = KiRegisterNmiSxCallback(HvlSkCrashdumpCallbackRoutine, 0LL);
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
