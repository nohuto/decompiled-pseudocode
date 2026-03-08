/*
 * XREFs of PopTransitionCheckpoint @ 0x14067F1CC
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x14067EF08 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  __int64 CurrentServerSilo; // rax
  __int64 Pool2; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
    if ( PopTransitionCheckpoints != &PopTransitionCheckpoints || a1 == 1 )
    {
      Pool2 = ExAllocatePool2(256LL, 40LL, 1346587472LL);
      v6 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = PopTransitionCheckpointsSequenceNumber;
        *(_DWORD *)(Pool2 + 20) = a1;
        *(_DWORD *)(Pool2 + 24) = a2;
        *(_QWORD *)(Pool2 + 32) = MEMORY[0xFFFFF78000000008];
        v7 = (_QWORD *)qword_140C3F2A8;
        if ( *(PVOID **)qword_140C3F2A8 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v6 = &PopTransitionCheckpoints;
        v6[1] = v7;
        *v7 = v6;
        qword_140C3F2A8 = (__int64)v6;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
  }
}
