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
