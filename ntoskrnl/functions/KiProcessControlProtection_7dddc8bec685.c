__int64 __fastcall KiProcessControlProtection(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  volatile signed __int32 *UserCetLogging; // r9
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  unsigned int v13; // [rsp+24h] [rbp-94h]

  if ( *(_WORD *)(a1 + 368) == 16 )
    return KiProcessControlProtectionFromKernelMode(a1, a2, a1);
  v3 = *(_QWORD *)(a1 + 360);
  v13 = 2;
  UserCetLogging = (volatile signed __int32 *)KeGetCurrentThread()->ApcState.Process->UserCetLogging;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  if ( *(_WORD *)(a1 + 368) == 51 && *(_QWORD *)(a1 + 352) == 1LL )
  {
    v6 = __readmsr(0x6A7u);
    if ( (v6 & 7) == 0 )
    {
      v7 = *(_QWORD *)(a1 + 384);
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + 8 > 0x7FFFFFFF0000LL || v7 + 8 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v8 = *(_QWORD *)v7;
      if ( (unsigned __int64)(*(_QWORD *)v7 - 0x10000LL) <= 0x7FFFFFFDFFFFLL
        && (unsigned __int64)(v3 - 0x10000) <= 0x7FFFFFFDFFFFLL )
      {
        if ( v8 == qword_140D1F3B0 )
        {
          *(_QWORD *)v7 = *(_QWORD *)v6;
          v13 = 3;
          _InterlockedAdd(UserCetLogging + 21, 1u);
        }
        else
        {
          while ( 1 )
          {
            v6 += 8LL;
            if ( *(_QWORD *)v6 < 0x10000uLL )
              break;
            if ( *(_QWORD *)v6 == v8 )
            {
              __writemsr(0x6A7u, v6);
              v13 = 1;
              _InterlockedAdd(UserCetLogging + 20, 1u);
              break;
            }
            if ( (v6 & 0xFFF) == 0 )
            {
              if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
                break;
              v8 = *(_QWORD *)v7;
            }
          }
        }
      }
    }
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v9 - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
        SchedulerAssist[5] &= 0xFFFF0001;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(0LL);
  }
  return v13;
}
