__int64 __fastcall EtwpReserveWithPmcCounters(__int64 a1, __int16 a2, int a3, __int64 a4, __int64 *a5, __int16 a6)
{
  int v8; // r13d
  unsigned int v9; // r14d
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v11; // cl
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  __int64 v27; // [rsp+70h] [rbp+8h]
  unsigned int v29; // [rsp+80h] [rbp+18h]

  v27 = *(_QWORD *)(a1 + 1016);
  v8 = *(_DWORD *)(v27 + 20);
  v29 = 8 * (unsigned __int8)v8 + 16;
  v9 = v29 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v13 = 4;
        if ( v11 != 2 )
          v13 = (-1LL << (v11 + 1)) & 4;
        SchedulerAssist[5] |= v13;
      }
    }
  }
  v14 = EtwpReserveTraceBuffer(a1, v9, a4, a5, a6);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 8) = *a5;
    *(_WORD *)(v14 + 4) = v9;
    *(_WORD *)(v14 + 6) = a2;
    *(_DWORD *)v14 = (unsigned __int8)a6 | ((unsigned __int8)v8 << 8) | 0xC0110000;
    v22 = *(_QWORD *)(v27 + 8LL * KeGetPcr()->Prcb.Number + 24);
    if ( v22 )
      ((void (__fastcall *)(__int64, __int64))off_140C01BE8[0])(v22, v14 + 16);
    else
      memset((void *)(v14 + 16), 0, 8LL * (unsigned __int8)v8);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v23 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    return v15 + v29;
  }
  else
  {
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v16 - 2) <= 0xDu )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
