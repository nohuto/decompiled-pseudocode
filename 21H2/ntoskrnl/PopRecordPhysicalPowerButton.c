/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1408E15E0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140578A90 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F8020 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C20938 + dword_140C2093C) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C20940 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C20948 = MEMORY[0xFFFFF78000000014];
    ++dword_140C20938;
    LOBYTE(xmmword_140C505D8) = PopBsdCurrentCsPhase;
    DWORD1(xmmword_140C505D8) = PopBsdTransitionLatestCheckpointId;
    DWORD2(xmmword_140C505D8) = PopBsdTransitionLatestCheckpointType;
    HIDWORD(xmmword_140C505D8) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140C505C8 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C505C8);
    qword_140C20940 &= ~v2;
    ++dword_140C2093C;
    WORD6(xmmword_140C505C8) = MEMORY[0xFFFFF780000002C4];
    qword_140C20950 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140C20938 < (unsigned int)dword_140C2093C || (unsigned int)(dword_140C20938 - dword_140C2093C) > 1 )
    byte_140C20968 = 1;
  PopBsdHandleRequest(4);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
