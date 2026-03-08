/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x14056D68C
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiSelectActiveTimerTable @ 0x1402521A0 (KiSelectActiveTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x1403966F4 (KiAdjustTimerDueTimes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  int v4; // edx
  __int64 active; // r10
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v7; // r15
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  char v15; // [rsp+20h] [rbp-30h] BYREF
  __int16 v16; // [rsp+21h] [rbp-2Fh]
  char v17; // [rsp+23h] [rbp-2Dh]
  int v18; // [rsp+24h] [rbp-2Ch]
  __int128 v19; // [rsp+28h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-18h]
  char v21; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+41h] [rbp-Fh]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+8h] BYREF

  result = (unsigned __int64)&retaddr;
  v16 = 0;
  v17 = 0;
  v20 = 0LL;
  v22 = 0;
  if ( KiSerializeTimerExpiration )
  {
    v3 = a2 - KiClockTimerOneShotStartTime;
    result = (unsigned int)KiTimerRebaseThresholdOnDripsExit;
    v20 = v3;
    if ( v3 > 10000000LL * (unsigned int)KiTimerRebaseThresholdOnDripsExit )
    {
      *(_QWORD *)(MmWriteableSharedUserData + 944) += v3;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v20 = -v20;
      v15 = 1;
      v18 = 0;
      v19 = 0LL;
      v21 = 1;
      active = KiSelectActiveTimerTable(a1, 0);
      CurrentIrql = KeGetCurrentIrql();
      v7 = (unsigned int)(v4 + 2);
      __writecr8(v7);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v9 = v4 + 4;
        if ( CurrentIrql != (_BYTE)v4 + 2 )
          v9 &= -1LL << (CurrentIrql + 1);
        SchedulerAssist[5] |= v9;
      }
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), active, (__int64)&v15);
      if ( KiIrqlFlags )
      {
        v10 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= (unsigned __int8)v7 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
