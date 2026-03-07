KSPIN_LOCK __fastcall HsaIommuSendCommand(KSPIN_LOCK *a1, KSPIN_LOCK *a2, int a3)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  KSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // r8
  unsigned int v10; // eax
  unsigned __int64 v11; // rbx
  KSPIN_LOCK v12; // r9
  unsigned int v13; // r13d
  __int64 v14; // rbp
  __int64 v15; // r15
  KSPIN_LOCK result; // rax
  unsigned int v17; // ebx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  signed __int32 v23[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  KSPIN_LOCK v25; // [rsp+80h] [rbp+8h]
  KSPIN_LOCK v26; // [rsp+88h] [rbp+10h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
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
    KeAcquireInStackQueuedSpinLockAtDpcLevel(a1 + 19, &LockHandle);
  }
  if ( *a2 >> 60 == 1 )
  {
    v8 = a1[17];
    a1[15] = 1LL;
    *a2 = v8;
    a2[1] = a1[18];
  }
  v9 = *a1;
  v10 = 0;
  v25 = *a1;
  v11 = *(_QWORD *)(*a1 + 8200);
  v12 = a1[6];
  v26 = v12;
  if ( ((v11 >> 4) & 0x7FFF) + 1 != (unsigned int)(a1[8] >> 4) )
    v10 = ((*(_QWORD *)(*a1 + 8200) >> 4) & 0x7FFF) + 1;
  v13 = 0;
  v14 = v10;
  if ( v10 == ((*(_QWORD *)(v9 + 0x2000) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v13 & dword_140C6211C) != 0 || !qword_140C62120 )
      {
        _mm_pause();
      }
      else
      {
        qword_140C62120(v13);
        v9 = v25;
      }
    }
    while ( v14 == ((*(_QWORD *)(v9 + 0x2000) >> 4) & 0x7FFFLL) );
    v12 = v26;
  }
  v15 = 2 * ((v11 >> 4) & 0x7FFF);
  *(_QWORD *)(v12 + 8 * v15) = *a2;
  *(_QWORD *)(v12 + 8 * v15 + 8) = a2[1];
  *(_QWORD *)(v9 + 8200) = ((unsigned int)v11 ^ (16 * (_DWORD)v14)) & 0x7FFF0 ^ v11;
  _InterlockedOr(v23, 0);
  result = *a2 >> 60;
  if ( (_BYTE)result == 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      result = a1[15];
      if ( !result )
        break;
      if ( (++v17 & dword_140C6211C) != 0 || !qword_140C62120 )
        _mm_pause();
      else
        qword_140C62120(v17);
    }
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
