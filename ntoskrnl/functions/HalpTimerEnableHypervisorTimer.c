__int64 HalpTimerEnableHypervisorTimer()
{
  __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // rdx
  bool v3; // sf
  int v4; // eax
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  int v7; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  unsigned int v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v14[2]; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+54h] [rbp-2Ch]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int128 *v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+68h] [rbp-18h] BYREF

  v0 = HalpHypervisorHpet;
  result = 0LL;
  v17 = 0;
  v13 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  if ( HalpHypervisorHpet )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(HalpHypervisorHpet + 104))(*(_QWORD *)(HalpHypervisorHpet + 72));
    if ( (int)result >= 0 )
    {
      if ( (*(_DWORD *)(v0 + 184) & 0x10) != 0 )
      {
        LOBYTE(v2) = 1;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v0 + 152))(
                   *(_QWORD *)(v0 + 72),
                   v2,
                   *(_QWORD *)(v0 + 232),
                   *(unsigned int *)(v0 + 240));
        v3 = (int)result < 0;
      }
      else
      {
        v4 = *(_DWORD *)(v0 + 224);
        if ( (v4 & 0x200) != 0 )
        {
          result = HalpInterruptGsiToLine(*(unsigned int *)(v0 + 88), &v13);
          if ( (int)result < 0 )
            return result;
        }
        else if ( (v4 & 0x100) != 0 )
        {
          v5 = *(_DWORD *)(v0 + 84);
          if ( v5 >= 8 )
          {
            LODWORD(v13) = 45057;
            v5 -= 8;
          }
          else
          {
            LODWORD(v13) = 45056;
          }
          HIDWORD(v13) = v5;
        }
        v14[0] = -1;
        v18 = &v19;
        v15 = 3;
        v14[1] = 1;
        v6 = HalpAcquireHighLevelLock(&HalpInterruptLock);
        v7 = HalpInterruptSetLineState(
               &v13,
               0xD4u,
               15,
               *(_DWORD *)(v0 + 96),
               *(_DWORD *)(v0 + 92),
               (__int64)&v15,
               (__int64)v14,
               v12);
        result = KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v11 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v6);
        v3 = v7 < 0;
      }
      if ( !v3 )
        return ((__int64 (*)(void))qword_140C62168)();
    }
  }
  return result;
}
