__int64 __fastcall IvtIommuSendCommand(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  char v13; // r8
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  signed __int32 v30[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+80h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 8);
  v32 = v3;
  v6 = *(_QWORD *)(a1 + 128) >> ((*(_BYTE *)(a1 + 320) != 0) + 4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 == 1 )
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
        LODWORD(v21) = 0x8000;
      else
        v21 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v21;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    v3 = v32;
  }
  v8 = *(_QWORD *)(v3 + 136);
  if ( *(_BYTE *)(a1 + 320) )
    v9 = (v8 >> 5) & 0x3FFF;
  else
    v9 = (v8 >> 4) & 0x7FFF;
  v10 = 0;
  if ( v9 + 1 != (_DWORD)v6 )
    v10 = v9 + 1;
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v3 + 128);
    v13 = *(_BYTE *)(a1 + 320);
    v14 = v13 ? (v12 >> 5) & 0x3FFF : (v12 >> 4) & 0x7FFF;
    if ( v10 != v14 )
      break;
    if ( (++v11 & dword_140C6211C) != 0 || !qword_140C62120 )
    {
      _mm_pause();
    }
    else
    {
      qword_140C62120(v11);
      v3 = v32;
    }
  }
  v15 = *(_QWORD *)(a1 + 112);
  if ( v13 )
  {
    v17 = (_QWORD *)(v15 + 32LL * v9);
    v16 = v17;
  }
  else
  {
    v16 = (_QWORD *)(v15 + 16LL * v9);
    v17 = 0LL;
  }
  *v16 = *(_QWORD *)a2;
  v18 = a2 & -(__int64)(v13 != 0);
  v16[1] = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (*(_BYTE *)a2 & 0xF) == 9 )
    {
      v22 = v17 + 2;
      v23 = v18 - (_QWORD)v17;
      v24 = 2LL;
      do
      {
        *v22 = *(_QWORD *)((char *)v22 + v23);
        ++v22;
        --v24;
      }
      while ( v24 );
    }
    else
    {
      *((_OWORD *)v17 + 1) = 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 320) )
    result = ((unsigned int)v8 ^ (32 * v10)) & 0x7FFE0;
  else
    result = ((unsigned int)v8 ^ (16 * v10)) & 0x7FFF0;
  *(_QWORD *)(v3 + 136) = result ^ v8;
  _InterlockedOr(v30, 0);
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v27 = CurrentPrcb->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v29 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
