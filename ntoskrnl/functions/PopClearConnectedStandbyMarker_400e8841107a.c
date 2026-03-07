void __fastcall PopClearConnectedStandbyMarker(int a1)
{
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) ^= (BYTE11(PopBsdPowerTransition) ^ a1) & 0x3F;
    BYTE7(xmmword_140CF7850) = BYTE7(xmmword_140CF7850) & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
