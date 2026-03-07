void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8
  __int128 v3; // xmm0

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C39C38 + dword_140C39C3C) & 0x3F);
  if ( a1 )
  {
    v3 = xmmword_140C39C60;
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C39C40 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C39C48 = MEMORY[0xFFFFF78000000014];
    ++dword_140C39C38;
    LOBYTE(xmmword_140C6AA70) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140C6AA70 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140C6AA70) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    v3 = 0LL;
    *(_QWORD *)&xmmword_140C6AA60 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C6AA60);
    qword_140C39C40 &= ~v2;
    ++dword_140C39C3C;
    WORD6(xmmword_140C6AA60) = MEMORY[0xFFFFF780000002C4];
    qword_140C39C50 = MEMORY[0xFFFFF78000000014];
  }
  xmmword_140C6AA50 = v3;
  if ( dword_140C39C38 < (unsigned int)dword_140C39C3C || (unsigned int)(dword_140C39C38 - dword_140C39C3C) > 1 )
    byte_140C39C88 = 1;
  PopBsdHandleRequest(4u);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
