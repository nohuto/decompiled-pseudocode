/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x14060596C
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x14060514C (PspApplyJobChainLimitsToProcess.c)
 *     PspSetJobLimitsProcessCallback @ 0x1406A58C0 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     KeSetDisableQuantumProcess @ 0x140251964 (KeSetDisableQuantumProcess.c)
 *     PspSetProcessPriorityByClass @ 0x14035AE4C (PspSetProcessPriorityByClass.c)
 *     KeSetQuantumProcess @ 0x14035B384 (KeSetQuantumProcess.c)
 *     PspWritePebAffinityInfo @ 0x140612AB4 (PspWritePebAffinityInfo.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140618D9C (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140618E4C (PspLockJobMemoryLimitsShared.c)
 *     PspSetProcessAffinitySafe @ 0x140908614 (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspApplyJobLimitsToProcess(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // esi
  bool v9; // zf
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  result = (__int64)&retaddr;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 1296);
  if ( (a2 & 0x20) == 0 )
  {
    result = *(unsigned int *)(v6 + 848);
    if ( (result & 0x20) != 0 )
    {
      v9 = *(_BYTE *)(a1 + 1850) == 2;
      *(_BYTE *)(a1 + 1463) = *(_BYTE *)(v6 + 872);
      result = PspSetProcessPriorityByClass(a1, v9);
    }
  }
  if ( (a2 & 0x10) == 0 )
  {
    result = *(unsigned int *)(v6 + 848);
    if ( (result & 0x10) != 0 )
    {
      result = PspSetProcessAffinitySafe(a1, 1, (int)v6 + 616, 0, (__int64)&v11);
      if ( (int)result >= 0 )
      {
        if ( v11 )
          result = PspWritePebAffinityInfo(CurrentThread, a1);
      }
    }
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v6, CurrentThread);
    if ( (*(_DWORD *)(v6 + 848) & 0x100) != 0 )
      v7 = *(_QWORD *)(v6 + 808);
    else
      v7 = 0LL;
    *(_QWORD *)(a1 + 1600) = v7;
    result = PspUnlockJobMemoryLimitsShared(v6, CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && *(_BYTE *)(a1 + 1463) != 1 )
  {
    v8 = *(_DWORD *)(v6 + 852);
    if ( v8 >= 0xA )
      v8 = *(_DWORD *)(v6 + 484);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess(a1, *((_BYTE *)PspJobSchedulingClasses + v8));
    return KeSetDisableQuantumProcess(a1, v8 == 9);
  }
  return result;
}
