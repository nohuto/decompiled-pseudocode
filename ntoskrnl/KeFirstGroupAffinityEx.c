/*
 * XREFs of KeFirstGroupAffinityEx @ 0x1402AEC40
 * Callers:
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KiSetAffinityThread @ 0x1402AFA28 (KiSetAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmIdleInstallNewVetoList @ 0x140582BD8 (PpmIdleInstallNewVetoList.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PpmIdleInitializeConcurrency @ 0x1408258E4 (PpmIdleInitializeConcurrency.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // ax

  v2 = 0;
  if ( !*a2 )
    return 3221226021LL;
  while ( !*(_QWORD *)&a2[4 * v2 + 4] )
  {
    if ( ++v2 >= *a2 )
      return 3221226021LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = *(_QWORD *)&a2[4 * v2 + 4];
  return 0LL;
}
