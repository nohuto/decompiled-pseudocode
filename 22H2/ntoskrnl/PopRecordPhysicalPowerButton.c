/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1408E14D0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140578790 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F76F4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C20918 + dword_140C2091C) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C20920 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C20928 = MEMORY[0xFFFFF78000000014];
    ++dword_140C20918;
    LOBYTE(xmmword_140C50578) = PopBsdCurrentCsPhase;
    DWORD1(xmmword_140C50578) = PopBsdTransitionLatestCheckpointId;
    DWORD2(xmmword_140C50578) = PopBsdTransitionLatestCheckpointType;
    HIDWORD(xmmword_140C50578) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140C50568 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C50568);
    qword_140C20920 &= ~v2;
    ++dword_140C2091C;
    WORD6(xmmword_140C50568) = MEMORY[0xFFFFF780000002C4];
    qword_140C20930 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140C20918 < (unsigned int)dword_140C2091C || (unsigned int)(dword_140C20918 - dword_140C2091C) > 1 )
    byte_140C20948 = 1;
  PopBsdHandleRequest(4);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
