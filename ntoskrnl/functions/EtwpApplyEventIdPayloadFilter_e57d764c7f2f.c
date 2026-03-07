char __fastcall EtwpApplyEventIdPayloadFilter(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  volatile signed __int32 *v9; // rdi
  __int64 v12; // r10
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // r11
  char v15; // al
  _BYTE *v16; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // r11
  unsigned __int8 v20; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rdi
  char v26; // al
  _BYTE *v27; // rdx
  int v28; // eax
  char v29; // cl
  char v30[24]; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  v30[0] = 1;
  v12 = a1;
  if ( a9 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v19) = 4;
      else
        v19 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v19;
    }
    v14 = 104LL * a2;
    if ( *(_QWORD *)(v14 + *(_QWORD *)(a1 + 384) + 72) )
    {
      v15 = EtwpPerfectHashFunctionSearch(a5);
      if ( *v16 != v15 )
      {
        v30[0] = 0;
        goto LABEL_6;
      }
    }
    else if ( !v30[0] )
    {
LABEL_6:
      if ( KiIrqlFlags )
      {
        v20 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v24 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      goto LABEL_8;
    }
    v9 = *(volatile signed __int32 **)(*(_QWORD *)(v12 + 384) + v14 + 80);
    if ( v9 )
      _InterlockedIncrement(v9);
    goto LABEL_6;
  }
  v25 = 104LL * a2;
  if ( *(_QWORD *)(v25 + *(_QWORD *)(a1 + 384) + 72) )
  {
    v26 = EtwpPerfectHashFunctionSearch(a5);
    if ( *v27 != v26 )
      return 0;
  }
  v9 = *(volatile signed __int32 **)(v25 + *(_QWORD *)(v12 + 384) + 80);
LABEL_8:
  if ( !v9 )
    return v30[0];
  v28 = EtwpApplyPayloadFilterInternal(a4, a6, a7, a8, a3 == 0, v9 + 2, v30);
  v29 = v30[0];
  if ( v28 < 0 )
    v29 = 1;
  v30[0] = v29;
  if ( a9 < 2u )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v9, 0);
    return v30[0];
  }
  return v29;
}
