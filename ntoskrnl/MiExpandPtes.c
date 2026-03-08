/*
 * XREFs of MiExpandPtes @ 0x140210210
 * Callers:
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiObtainSystemVa @ 0x140210534 (MiObtainSystemVa.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSplitBitmapPages @ 0x14036C1A8 (MiSplitBitmapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // r13d
  BOOL v5; // r15d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  char v15; // r10
  volatile signed __int32 *v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int8 OldIrql; // r11
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int64 v29; // rbx
  __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned int v36; // eax
  unsigned __int64 v37; // [rsp+30h] [rbp-68h]
  unsigned __int64 v38; // [rsp+38h] [rbp-60h]
  unsigned __int64 v39; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v43; // [rsp+B0h] [rbp+18h]
  int v44; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *((_DWORD *)a1 + 7);
  v5 = 0;
  v6 = (a1[3] & 1) != 0 ? 16LL : 1LL;
  if ( a2 >= 0x200 )
    v5 = a1 == &qword_140C695C0;
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v8 = v4;
  v37 = v7 / v6;
  if ( v5 )
    v8 = 13LL;
  v9 = MiObtainSystemVa(v7 >> 9, v8);
  v39 = v9;
  if ( !v9 )
    return 0LL;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = (v10 - a1[2]) >> 3;
  v38 = v11;
  if ( v5 )
    goto LABEL_8;
  v42 = v11 / v6;
  v18 = a1[1] + ((v11 / v6) >> 3);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 5, &LockHandle);
  v19 = MiSplitBitmapPages(v4, v18, v37 + (v42 & 7));
  v11 = v38;
  v44 = v19;
  if ( v19 )
  {
    v20 = (v38 + v7) / v6;
    if ( v20 > *a1 )
      *a1 = v20;
    v21 = *((_DWORD *)a1 + 6);
    v22 = v42 & 0xFFFFFFFFFFFFFFC0uLL;
    if ( (v42 & 0x3F) == 0 )
      v22 = v42;
    if ( v22 < a1[8] || (v21 & 2) == 0 )
    {
      a1[8] = v22;
      *((_DWORD *)a1 + 6) = v21 | 2;
    }
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  v43 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v28 = (v27 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v27;
      if ( v28 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        OldIrql = v43;
      }
    }
  }
  __writecr8(OldIrql);
  if ( v44 )
  {
LABEL_8:
    if ( !(unsigned int)MiMakeZeroedPageTablesEx(v10, v10 + 8 * (v7 - 1), 16, v4, 0) )
    {
      if ( v5 )
        v4 = 13;
      goto LABEL_44;
    }
    _InterlockedExchangeAdd64(a1 + 10, v37);
    _InterlockedExchangeAdd64(a1 + 6, v37);
    if ( (dword_140D1D1CC & 2) != 0 && a1 == &qword_140C695C0 )
    {
      v29 = 2 * v11;
      v30 = qword_140C68020 + (v29 >> 3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 5, &LockHandle);
      if ( !(unsigned int)MiSplitBitmapPages(v4, v30, (v29 & 7) + 2 * v37) )
        dword_140D1D1CC &= ~2u;
      KxReleaseQueuedSpinLock(&LockHandle);
      v31 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v32 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v28 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      __writecr8(v31);
      v2 = a2;
    }
    if ( !v5 && v2 != v7 )
    {
      v13 = (v7 - v2) / v6;
      v14 = (v2 + v38) / v6;
      v15 = v14 & 0x1F;
      v16 = (volatile signed __int32 *)(a1[1] + 4 * (v14 >> 5));
      if ( v13 + (v14 & 0x1F) <= 0x20 )
      {
        if ( v13 == 32 )
        {
          *v16 = 0;
          return v10;
        }
        v36 = ~(((1 << v13) - 1) << v15);
      }
      else
      {
        if ( (v14 & 0x1F) != 0 )
        {
          _InterlockedAnd(v16, ~(((1 << (32 - (v14 & 0x1F))) - 1) << v15));
          v13 -= 32 - (unsigned int)(v14 & 0x1F);
          ++v16;
        }
        if ( v13 >= 0x20 )
        {
          v17 = v13 >> 5;
          v13 += -32LL * (v13 >> 5);
          do
          {
            *v16++ = 0;
            --v17;
          }
          while ( v17 );
        }
        if ( !v13 )
          return v10;
        v36 = -1 << v13;
      }
      _InterlockedAnd(v16, v36);
    }
    return v10;
  }
LABEL_44:
  MiReturnSystemVa(v39, (__int64)((v10 << 25) + (v7 << 28)) >> 16, v4, 0LL);
  return 0LL;
}
