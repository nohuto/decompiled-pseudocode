/*
 * XREFs of PopTransitionCheckpoint @ 0x1407EBF04
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
        v7 = (_QWORD *)qword_140C24578;
        if ( *(PVOID **)qword_140C24578 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v6 = &PopTransitionCheckpoints;
        v6[1] = v7;
        *v7 = v6;
        qword_140C24578 = (__int64)v6;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
  }
}
