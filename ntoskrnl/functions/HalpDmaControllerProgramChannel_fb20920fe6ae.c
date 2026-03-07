__int64 __fastcall HalpDmaControllerProgramChannel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 CurrentIrql; // si
  char v11; // r15
  unsigned __int64 v12; // r8
  unsigned __int8 v13; // bl
  _DWORD *SchedulerAssist; // r10
  int v15; // r8d
  __int64 v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  char v29; // [rsp+30h] [rbp-38h]

  CurrentIrql = KeGetCurrentIrql();
  v11 = 0;
  if ( CurrentIrql == 15 )
    goto LABEL_20;
  v12 = *(unsigned __int8 *)(a1 + 176);
  v13 = KeGetCurrentIrql();
  __writecr8(v12);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)(v12 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v13 == (_BYTE)v12 )
      v15 = 1 << v12;
    else
      v15 = (-1LL << (v13 + 1)) & ((1LL << ((unsigned __int8)v12 + 1)) - 1) & 0xFFFFFFFC;
    SchedulerAssist[5] |= v15;
  }
  CurrentIrql = v13;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
  v16 = *(_QWORD *)(a2 + 360);
  v11 = 1;
  if ( v16 && (*(_DWORD *)(v16 + 12) & 1) != 0 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 168));
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && v13 <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v13);
    return 3221225760LL;
  }
  else
  {
LABEL_20:
    v23 = *(_QWORD *)(a1 + 56) + 160LL * *(unsigned int *)(a2 + 380);
    *(_QWORD *)(v23 + 8) = a3;
    *(_QWORD *)(v23 + 16) = a4;
    v29 = *(_BYTE *)(a2 + 443);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, char, char))(a1 + 104))(
      *(_QWORD *)(a1 + 64),
      *(unsigned int *)(a2 + 380),
      *(unsigned int *)(a2 + 384),
      a5,
      a6,
      a7,
      v29);
    if ( v11 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)(a1 + 168));
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
