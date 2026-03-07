__int64 __fastcall IommuSetAddressSpace(__int64 *a1, __int64 a2)
{
  __int64 v2; // r15
  KIRQL v4; // r13
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  _QWORD *v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // r13
  _QWORD *v11; // rsi
  __int64 v12; // r12
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  _QWORD *v25; // [rsp+40h] [rbp-58h]
  char v26; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+10h]
  KIRQL v28; // [rsp+B0h] [rbp+18h]
  __int64 v29; // [rsp+B8h] [rbp+20h]

  v27 = a2;
  v2 = a1[1];
  v26 = 0;
  v29 = *a1;
  v4 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v28 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v7) = 0x8000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v7;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
  v8 = (_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 32) = a2;
  v9 = *(_QWORD **)(v2 + 40);
  if ( v9 != (_QWORD *)(v2 + 40) )
  {
    v10 = v29;
    do
    {
      v11 = (_QWORD *)v9[3];
      if ( v11 != v9 + 3 )
      {
        v12 = v27;
        do
        {
          v26 = 1;
          v25 = (_QWORD *)v11[5];
          v13 = *(unsigned int *)(v2 + 16);
          v14 = v25[7];
          v29 = v25[3];
          if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64, char *))(v29 + 240))(
                 *(_QWORD *)(v29 + 16),
                 v14,
                 v13,
                 v12,
                 &v26) >= 0
            && v26 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v29 + 248))(
              *(_QWORD *)(v29 + 16),
              *(unsigned int *)(v2 + 16),
              *(unsigned int *)(v10 + 16),
              v25[12],
              0LL,
              0,
              0LL);
          }
          v11 = (_QWORD *)*v11;
        }
        while ( v11 != v9 + 3 );
        v8 = (_QWORD *)(v2 + 40);
      }
      v9 = (_QWORD *)*v9;
    }
    while ( v9 != v8 );
    v4 = v28;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 24));
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  KxReleaseSpinLock((volatile signed __int64 *)&IommupPasidTableLock);
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && v4 <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (v4 + 1));
      v19 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  __writecr8(v4);
  return 0LL;
}
