void __fastcall PopSetConnectedStandbyMarker(__int64 a1, int a2)
{
  __int64 v3; // rdi

  v3 = PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 2u;
    *((_QWORD *)&xmmword_140CF7850 + 1) = v3;
    BYTE10(PopBsdPowerTransition) ^= (BYTE10(PopBsdPowerTransition) ^ a2) & 0x3F;
    BYTE7(xmmword_140CF7850) ^= (BYTE7(xmmword_140CF7850) ^ HIBYTE(a2)) & 0xF;
    PopBsdHandleRequest(3u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
