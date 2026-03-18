/*
 * XREFs of PfInitializeSuperfetch @ 0x140B65330
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x1402235B0 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x14041CAC0 (ZwNotifyChangeKey.c)
 *     PfpScenCtxStart @ 0x140847FF0 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x140848C34 (PfpScenCtxInitialize.c)
 *     PfTInitialize @ 0x140848CBC (PfTInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140B65430 (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140B655B0 (PfpParametersInitialize.c)
 *     PfpRpInitialize @ 0x140B65750 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C65128);
  PfpScenCtxInitialize((__int64)&qword_140C650B0);
  PfpScenCtxStart((__int64)&qword_140C650B0);
  ExInitializePushLock(&stru_140C651D0);
  ExWaitForRundownProtectionRelease(&stru_140C651D0);
  ExRundownCompleted(&stru_140C651D0);
  qword_140C651D8 = 0LL;
  qword_140C651E0 = 0LL;
  dword_140C651F8 |= 1u;
  qword_140C651F0 = (__int64)&qword_140C651E8;
  qword_140C651E8 = (__int64)&qword_140C651E8;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, (unsigned __int64 *)&PfKernelGlobals, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C64ED0, 4u, 1u);
  return 0LL;
}
