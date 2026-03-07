__int64 __fastcall CcFlushCacheOneRange(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 v4; // r15
  char v5; // r12
  int *v6; // r14
  unsigned int v7; // edi
  __int64 VirtualAddressIfMapped; // rcx
  unsigned int v9; // eax
  BOOL v10; // eax
  __int64 v11; // rsi
  struct _KEVENT *v12; // rcx
  __int64 v13; // r13
  __int64 result; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 OldIrql; // rbx
  int v17; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  bool v22; // zf
  __int64 v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int64 v25; // [rsp+40h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-80h] BYREF
  __int128 v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  char v29; // [rsp+D0h] [rbp+8h]
  unsigned int v30; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+20h]

  v30 = 0;
  v27 = 0LL;
  v2 = a1[9];
  v3 = a1[3];
  v4 = a1[2];
  v5 = *((_BYTE *)a1 + 132);
  v6 = (int *)a1[14];
  v28 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v24 = *a1;
  v25 = a1[1];
  v29 = *((_BYTE *)a1 + 133);
  v31 = 0LL;
  v32 = v2;
  v23 = v3;
  if ( *((_BYTE *)a1 + 192) && !*((_BYTE *)a1 + 193) )
  {
    a1[25] = a1[5];
    *((_BYTE *)a1 + 193) = 1;
  }
  v7 = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 15) = 0;
  do
  {
    VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(
                               v4,
                               a1[5] + *((unsigned int *)a1 + 12) - (unsigned __int64)v7,
                               &v31,
                               &v30);
    v9 = v30;
    if ( VirtualAddressIfMapped )
    {
      if ( v30 > v7 )
      {
        v9 = v7;
        v30 = v7;
      }
      v10 = ((unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v9) || *((_DWORD *)a1 + 15))
         && a1[5] + *((unsigned int *)a1 + 12) < *(_QWORD *)(v4 + 40)
         && (*(_DWORD *)(v4 + 276) & 0xF) != 0
         && v5
         && !v29
         && (*(_DWORD *)(v4 + 152) & 0x200) == 0
         && !*(_BYTE *)a1[23];
      *((_DWORD *)a1 + 15) = v10;
      v11 = *(_QWORD *)(v31 + 8);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v31 + 16)) )
      {
        v12 = *(struct _KEVENT **)(v11 + 192);
        if ( v12 )
          KeSetEvent(v12, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v11 + 552));
      }
    }
    else
    {
      if ( v30 > v7 )
        v9 = v7;
      v30 = v9;
    }
    v7 -= v30;
  }
  while ( v7 );
  __addgsdword(0x8468u, *((_DWORD *)a1 + 15));
  v13 = v32;
  if ( *((_DWORD *)a1 + 15) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v24 + 768), &LockHandle);
    v15 = (unsigned __int64)*((unsigned int *)a1 + 12) >> 12;
    if ( CcEnablePerVolumeLazyWriter )
      *(_QWORD *)(v25 + 1096) += v15;
    else
      *(_QWORD *)(v24 + 1160) += v15;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return 0LL;
  }
  else
  {
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
      CcPerfLogFlushSection(a1[21], v4, (_DWORD)a1 + 40, *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 14));
    *v6 = v5 != 0 ? 0x80000016 : 0;
    result = MmFlushSection(v23, a1 + 5, *((unsigned int *)a1 + 12), v13, v6, *((_DWORD *)a1 + 14));
    if ( (int)result < 0 )
    {
      v17 = *v6;
      if ( v5 )
      {
        if ( v17 != -2147483626 )
          return result;
      }
      else if ( v17 )
      {
        return result;
      }
      *v6 = result;
    }
  }
  return result;
}
