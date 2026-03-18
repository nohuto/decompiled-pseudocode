/*
 * XREFs of PopIdleCsStateChanged @ 0x14099BEEC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140599840 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032EE20 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C7E5C (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E208 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(int a1)
{
  char v1; // bl
  unsigned int ModernStandbyTransitionReason; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = a1;
  PopAcquirePolicyLock(a1);
  byte_140C3CD91 = v1;
  ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0);
  if ( v1 )
  {
    qword_140C3CD98 = qword_140CF7CC8;
    if ( !qword_140CF7CC8 )
      qword_140C3CD98 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( ModernStandbyTransitionReason >= 0x1000000 || (ModernStandbyTransitionReason & 0xFFFFFF) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140C3CD70 = 0;
    qword_140C3CD98 = 0LL;
  }
  return PopReleasePolicyLock(v4, v3, v5);
}
