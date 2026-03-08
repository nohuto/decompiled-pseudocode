/*
 * XREFs of VmpFlushTb @ 0x14045E4DA
 * Callers:
 *     VmFlushTb @ 0x14045DE9C (VmFlushTb.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x14045E6CE (VmpProcessContextLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFlushTbVaRange @ 0x1405F6DF0 (VmpFlushTbVaRange.c)
 */

__int64 __fastcall VmpFlushTb(PEX_SPIN_LOCK SpinLock, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rbx
  unsigned __int64 *v4; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+48h] [rbp-8h]
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v16 = 0LL;
  v3 = -1LL;
  v19 = -1LL;
  v18 = 0LL;
  v4 = a3;
  v17 = 0LL;
  if ( a2 )
  {
    result = a2;
    v7 = (unsigned __int64)&a3[a2];
    if ( (unsigned __int64)a3 >= v7 )
      return result;
    do
    {
      v8 = *v4;
      result = 0x7FFFFFFEFFFFLL;
      if ( *v4 <= 0x7FFFFFFEFFFFLL )
      {
        v9 = (*v4 & 0x3FF) + 1;
        v10 = (v8 >> 10) & 3;
        if ( ((v8 >> 10) & 3) != 0 )
        {
          do
          {
            v9 <<= 9;
            --v10;
          }
          while ( v10 );
        }
        if ( v3 == -1 )
          v19 = VmpProcessContextLockExclusive(SpinLock);
        result = VmpFlushTbVaRange(SpinLock, (__int64)&v16, (__int64)&v19);
        v3 = v19;
      }
      ++v4;
    }
    while ( (unsigned __int64)v4 < v7 );
  }
  else
  {
    v19 = VmpProcessContextLockExclusive(SpinLock);
    result = VmpFlushTbVaRange(SpinLock, (__int64)&v16, (__int64)&v19);
    v3 = v19;
  }
  if ( v3 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        LOBYTE(v3) = v19;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = (unsigned __int8)v3;
    __writecr8((unsigned __int8)v3);
  }
  return result;
}
