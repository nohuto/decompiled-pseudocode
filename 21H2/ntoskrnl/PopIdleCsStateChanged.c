/*
 * XREFs of PopIdleCsStateChanged @ 0x1408F5794
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140576600 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140381894 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x140576740 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14057C458 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(int a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = a1;
  PopAcquirePolicyLock(a1);
  byte_140C239B1 = v1;
  if ( v1 )
  {
    qword_140C239B8 = qword_140C4FF48;
    if ( !qword_140C4FF48 )
      qword_140C239B8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( (unsigned int)PopGetModernStandbyTransitionReason(0, 0LL) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140C23990 = 0;
    qword_140C239B8 = 0LL;
  }
  return PopReleasePolicyLock(v3, v2);
}
