/*
 * XREFs of PopPepUpdateDripsDeviceVetoMask @ 0x140576340
 * Callers:
 *     PopFxUpdateVetoMaskWork @ 0x1408E5970 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A09B4 (PopPepUpdateIdleStateRefCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140565F2C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140574AD0 (PopPepGetMinimumDevicePowerState.c)
 */

__int64 __fastcall PopPepUpdateDripsDeviceVetoMask(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  volatile LONG *v4; // r14
  KIRQL v5; // al
  int v6; // r15d
  unsigned __int64 v7; // rsi
  char DeepSleepPlatformStateIndex; // al
  int *v9; // r9
  char v10; // bp
  __int64 v11; // r11
  int *v12; // rdx
  int v13; // ebx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  int v16; // eax
  char v17; // cl
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  char v20; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v24; // zf
  int v25; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v25 = 0;
  v4 = (volatile LONG *)(v2 + 64);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 64));
  v6 = *(_DWORD *)(v2 + 144);
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(v2 + 164);
  v7 = v5;
  DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
  v10 = DeepSleepPlatformStateIndex;
  if ( a2 >= 2 )
  {
    v11 = a2 - 1;
    v12 = v9;
    do
    {
      *v12++ |= 1 << DeepSleepPlatformStateIndex;
      --v11;
    }
    while ( v11 );
  }
  v13 = *v9;
  PopPepUpdateIdleStateRefCount(v6, *v9, 1);
  PopPepUpdateIdleStateRefCount(v6, v13, 0);
  PopPepGetMinimumDevicePowerState(v2, v10, 0, &v25, 0LL);
  v14 = *(_QWORD *)(v2 + 32) + 600LL;
  v15 = MEMORY[0xFFFFF78000000008];
  KxAcquireSpinLock((PKSPIN_LOCK)v14);
  v16 = v25;
  v17 = *(_BYTE *)(v14 + 8);
  if ( v25 == 1 )
  {
    v18 = *(_QWORD *)(v14 + 24);
    if ( v17 && v15 > v18 )
    {
      v19 = v15 - v18;
      *(_QWORD *)(v14 + 128) += v19;
      *(_QWORD *)(v14 + 136) += v19;
    }
    *(_DWORD *)(v14 + 12) = 5;
    v20 = 0;
  }
  else
  {
    if ( !v17 )
      *(_QWORD *)(v14 + 24) = v15;
    *(_DWORD *)(v14 + 12) = v16;
    v20 = 1;
  }
  *(_BYTE *)(v14 + 8) = v20;
  KxReleaseSpinLock((PKSPIN_LOCK)v14);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v24 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v24 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
