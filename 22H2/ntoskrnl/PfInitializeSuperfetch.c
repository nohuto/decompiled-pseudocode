/*
 * XREFs of PfInitializeSuperfetch @ 0x140A6A76C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402517A0 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x140341EF0 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x1403FBD60 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1407BF500 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1407C0590 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1407C0800 (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x140A6A864 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140A6AA00 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x140A6ACA4 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C50358);
  PfpScenCtxInitialize((__int64)&qword_140C502E0);
  PfpScenCtxStart((__int64)&qword_140C502E0);
  ExInitializePushLock(&stru_140C50400);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C50400);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C50400);
  qword_140C50408 = 0LL;
  qword_140C50410 = 0LL;
  dword_140C50428 |= 1u;
  qword_140C50420 = (__int64)&qword_140C50418;
  qword_140C50418 = (__int64)&qword_140C50418;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C50100, 4u, 1u);
  return 0LL;
}
