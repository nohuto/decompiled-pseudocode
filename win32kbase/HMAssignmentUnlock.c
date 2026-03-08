/*
 * XREFs of HMAssignmentUnlock @ 0x1C0072910
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1C00DC7D0 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0072A40 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall HMAssignmentUnlock(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF) == 1 )
    return HMUnlockObjectInternal(v1);
  return v1;
}
