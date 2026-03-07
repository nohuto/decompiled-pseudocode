__int64 __fastcall IommuFlushTb(__int64 *a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  _QWORD *i; // rsi
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 v16; // [rsp+70h] [rbp+8h]

  v4 = a1[1];
  v16 = *a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v8) = 0x8000;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v8;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 24));
  for ( i = *(_QWORD **)(v4 + 40); i != (_QWORD *)(v4 + 40); i = (_QWORD *)*i )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, int, __int64))(i[2] + 248LL))(
      *(_QWORD *)(i[2] + 16LL),
      *(unsigned int *)(v4 + 16),
      *(unsigned int *)(v16 + 16),
      0LL,
      i + 3,
      a2,
      a3);
  KxReleaseSpinLock((volatile signed __int64 *)(v4 + 24));
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
