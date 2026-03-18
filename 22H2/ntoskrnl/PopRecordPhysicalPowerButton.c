/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x140981350
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140599180 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8
  __int128 v3; // xmm0

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C3A018 + dword_140C3A01C) & 0x3F);
  if ( a1 )
  {
    v3 = xmmword_140C3A040;
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C3A020 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C3A028 = MEMORY[0xFFFFF78000000014];
    ++dword_140C3A018;
    LOBYTE(xmmword_140C6AFE0) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140C6AFE0 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140C6AFE0) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    v3 = 0LL;
    *(_QWORD *)&xmmword_140C6AFD0 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C6AFD0);
    qword_140C3A020 &= ~v2;
    ++dword_140C3A01C;
    WORD6(xmmword_140C6AFD0) = MEMORY[0xFFFFF780000002C4];
    qword_140C3A030 = MEMORY[0xFFFFF78000000014];
  }
  xmmword_140C6AFC0 = v3;
  if ( dword_140C3A018 < (unsigned int)dword_140C3A01C || (unsigned int)(dword_140C3A018 - dword_140C3A01C) > 1 )
    byte_140C3A068 = 1;
  PopBsdHandleRequest(4u);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
