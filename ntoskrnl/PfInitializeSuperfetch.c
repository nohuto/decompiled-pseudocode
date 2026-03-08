/*
 * XREFs of PfInitializeSuperfetch @ 0x140B619EC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x140294280 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x140414730 (ZwNotifyChangeKey.c)
 *     PfpScenCtxStart @ 0x140844E90 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x140845AD4 (PfpScenCtxInitialize.c)
 *     PfTInitialize @ 0x140845B5C (PfTInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140B61AEC (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140B61C6C (PfpParametersInitialize.c)
 *     PfpRpInitialize @ 0x140B61E0C (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C64CA8);
  PfpScenCtxInitialize((__int64)&qword_140C64C30);
  PfpScenCtxStart((__int64)&qword_140C64C30);
  ExInitializePushLock(&RunRef);
  ExWaitForRundownProtectionRelease(&RunRef);
  ExRundownCompleted(&RunRef);
  qword_140C64D58 = 0LL;
  qword_140C64D60 = 0LL;
  dword_140C64D78 |= 1u;
  qword_140C64D70 = (__int64)&qword_140C64D68;
  qword_140C64D68 = (__int64)&qword_140C64D68;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, (unsigned __int64 *)&PfKernelGlobals, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C64A50, 4u, 1u);
  return 0LL;
}
