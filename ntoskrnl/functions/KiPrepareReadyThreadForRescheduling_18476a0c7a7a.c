__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 a3)
{
  int v4; // r10d
  char v6; // cl
  int v7; // r8d

  v4 = KiLockQuantumTarget;
  v6 = 15;
  v7 = 800;
  if ( (KiVelocityFlags & 0x8000) == 0 || a2 < 8 )
  {
    if ( a2 <= 0 )
      return KiInsertDeferredReadyList(a3, a1);
    goto LABEL_8;
  }
  if ( a2 > 9 )
  {
LABEL_8:
    if ( a2 >= 15 )
      return KiInsertDeferredReadyList(a3, a1);
    goto LABEL_9;
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks) < *(_DWORD *)(a1 + 436) )
  {
LABEL_9:
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) < *(_DWORD *)(a1 + 436) )
      return KiInsertDeferredReadyList(a3, a1);
    goto LABEL_6;
  }
  v6 = 11;
  v4 = KiLockQuantumTarget * KiNormalPriorityBoostingPeriodMultiplier;
LABEL_6:
  LOBYTE(v7) = v6;
  KiSetPriorityBoost(0, a1, v7, *(_QWORD *)(a1 + 72), v4);
  return KiInsertDeferredReadyList(a3, a1);
}
