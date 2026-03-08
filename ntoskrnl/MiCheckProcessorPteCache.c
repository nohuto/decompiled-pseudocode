/*
 * XREFs of MiCheckProcessorPteCache @ 0x140327B90
 * Callers:
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140299F00 (MiEmptyPteBins.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v3; // rdi
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v5; // rbx
  signed __int64 *p_PteBitCache; // r11
  signed __int64 v7; // r8
  unsigned __int64 v8; // r10
  signed __int64 *v9; // r9
  signed __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  _BYTE *v14; // rsi
  char v15; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r9
  unsigned __int64 *v21; // r15
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r12
  __int64 *v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // r8
  bool v29; // zf
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rdx
  volatile signed __int64 *v32; // r8
  signed __int64 v33; // rax
  unsigned __int8 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rcx
  unsigned int v38; // edi
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  __int64 v41; // rdi
  _DWORD *v42; // rsi
  __int64 v43; // rcx
  unsigned __int64 v44; // r12
  bool v45; // sf
  __int64 v46; // rdx
  unsigned int v47; // ecx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // cl
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int64 OldIrql; // r12
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 v59; // cl
  struct _KPRCB *v60; // rax
  _DWORD *v61; // r9
  int v62; // edx
  __int128 v63; // [rsp+38h] [rbp-38h] BYREF
  __int64 v64; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF

  v63 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v3) = 4;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v18) = 4;
    else
      v18 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v18;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0LL;
  if ( CurrentPrcb->PteBitCache != -1LL )
    goto LABEL_3;
  if ( KiIrqlFlags )
  {
    v50 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v50 <= 0xFu && CurrentIrql <= 0xFu && v50 >= 2u )
    {
      v51 = KeGetCurrentPrcb();
      v52 = v51->SchedulerAssist;
      v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v29 = (v53 & v52[5]) == 0;
      v52[5] &= v53;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(v51);
    }
  }
  __writecr8(CurrentIrql);
  v19 = qword_140C695F8;
  while ( 2 )
  {
    v20 = qword_140C69600;
    v21 = (unsigned __int64 *)&qword_140C695C0;
    v64 = qword_140C69600;
    if ( qword_140C69600 )
    {
      while ( qword_140C695C0 < v20 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C695E8, &LockHandle);
        KxReleaseQueuedSpinLock(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v55 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = v56->SchedulerAssist;
            v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v29 = (v58 & v57[5]) == 0;
            v57[5] &= v58;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(v56);
          }
        }
        __writecr8(OldIrql);
        v20 = qword_140C69600;
        v64 = qword_140C69600;
        if ( !qword_140C69600 )
          goto LABEL_29;
      }
      v21 = (unsigned __int64 *)&v63;
      *(_QWORD *)&v63 = qword_140C695C0 - v20;
      *((_QWORD *)&v63 + 1) = qword_140C695C8 + 8 * (v20 >> 6);
      if ( v19 )
        v19 -= v20;
    }
LABEL_29:
    v22 = *v21;
    v23 = v19;
    v24 = v21[1];
    if ( v19 >= v22 )
      v23 = 0LL;
    v25 = v22 - 1;
    while ( 1 )
    {
      if ( v25 - v23 == -1LL )
        goto LABEL_79;
      v26 = (__int64 *)(v24 + 8 * (v23 >> 6));
      v27 = ((1LL << (v23 & 0x3F)) - 1) | *v26;
      if ( v27 == -1 )
      {
        while ( (unsigned __int64)++v26 <= v24 + 8 * (v25 >> 6) )
        {
          v27 = *v26;
          if ( *v26 != -1 )
            goto LABEL_34;
        }
LABEL_79:
        v28 = -1LL;
        goto LABEL_80;
      }
LABEL_34:
      _BitScanForward64((unsigned __int64 *)&v27, ~v27);
      v28 = v27 + ((__int64)((__int64)v26 - v24) >> 3 << 6);
      if ( v28 > v25 )
      {
        v28 = -1LL;
      }
      else
      {
        v29 = v28 == -1LL;
        if ( v28 != -1LL )
          goto LABEL_36;
      }
LABEL_80:
      if ( !v23 )
        break;
      v44 = v19 + 1;
      if ( v19 + 1 > v22 )
        v44 = v22;
      v25 = v44 - 1;
      v23 = 0LL;
    }
    v29 = v28 == -1LL;
LABEL_36:
    if ( v29 )
    {
      if ( (unsigned int)MiEmptyPteBins((__int64)&qword_140C695C0) )
      {
        v19 = 0LL;
        continue;
      }
      return 0LL;
    }
    else
    {
      v30 = (v28 + v64) & 0xFFFFFFFFFFFFFFC0uLL;
      v31 = *(_QWORD *)(qword_140C695C8 + 8 * (v30 >> 6));
      v32 = (volatile signed __int64 *)(qword_140C695C8 + 8 * (v30 >> 6));
      if ( v31 == -1LL )
      {
LABEL_108:
        v19 = v30 + 64;
        continue;
      }
      while ( 1 )
      {
        v33 = _InterlockedCompareExchange64(v32, -1LL, v31);
        if ( v31 == v33 )
          break;
        v31 = v33;
        if ( v33 == -1 )
          goto LABEL_108;
      }
      v34 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
      {
        v42 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v34 != 2 )
          v3 = (-1LL << (v34 + 1)) & 4;
        v42[5] |= v3;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentIrql = v34;
      if ( CurrentPrcb->PteBitCache == -1LL )
      {
        CurrentPrcb->PteBitCache = v31;
        CurrentPrcb->PteBitOffset = v30;
        v35 = ~v31 - ((~v31 >> 1) & 0x5555555555555555LL);
        _InterlockedExchangeAdd64(
          &qword_140C69610,
          -(__int64)((0x101010101010101LL
                    * (((v35 & 0x3333333333333333LL)
                      + ((v35 >> 2) & 0x3333333333333333LL)
                      + (((v35 & 0x3333333333333333LL) + ((v35 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
        qword_140C695F8 = v30 + 64;
      }
      else
      {
        _InterlockedAnd64(v32, v31);
      }
LABEL_3:
      *(_QWORD *)&v63 = 64LL;
      *((_QWORD *)&v63 + 1) = &CurrentPrcb->PteBitCache;
      p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
      if ( !a1 )
        goto LABEL_13;
      if ( a1 > 0x40 )
        goto LABEL_71;
      v7 = *p_PteBitCache;
      v8 = 63 - a1 + 1;
      v9 = &p_PteBitCache[v8 >> 6];
      v10 = (signed __int64 *)&CurrentPrcb->PteBitCache;
      if ( a1 >= 0x40 )
      {
LABEL_84:
        v45 = v7 < 0;
        while ( !v45 )
        {
LABEL_86:
          v29 = !_BitScanReverse64((unsigned __int64 *)&v46, v7);
          if ( v29 )
            v47 = 64;
          else
            v47 = 63 - v46;
          v12 = ((v10 - p_PteBitCache + 1) << 6) - v47;
          if ( v12 > v8 )
            goto LABEL_71;
          v48 = a1 - v47;
          if ( a1 == v47 )
            goto LABEL_9;
          v7 = v10[1];
          ++v10;
          if ( v48 < 0x40 )
            goto LABEL_91;
          v45 = v7 < 0;
          if ( !v7 )
          {
            v48 -= 64LL;
            if ( !v48 )
              goto LABEL_9;
            v7 = v10[1];
            ++v10;
LABEL_91:
            v29 = !_BitScanForward64(&v49, v7);
            if ( v29 )
              v49 = 64LL;
            if ( v49 >= v48 )
              goto LABEL_9;
            goto LABEL_84;
          }
        }
        while ( 1 )
        {
          if ( ++v10 > v9 )
            goto LABEL_71;
          v7 = *v10;
          if ( *v10 >= 0 )
            goto LABEL_86;
        }
      }
      if ( a1 > 1 )
      {
        v36 = 0LL;
        while ( 1 )
        {
          if ( v7 == -1 )
          {
            while ( 1 )
            {
              if ( ++v10 > v9 )
                goto LABEL_70;
              v7 = *v10;
              if ( *v10 != -1 )
              {
                v36 = 0LL;
                break;
              }
            }
          }
          v29 = !_BitScanForward64((unsigned __int64 *)&v37, v7);
          if ( v29 )
            LODWORD(v37) = 64;
          if ( (unsigned int)(v36 + v37) >= a1 )
            break;
          v38 = a1;
          v39 = ~v7;
          while ( 1 )
          {
            v39 &= v39 >> (v38 >> 1);
            if ( !v39 )
              break;
            v38 -= v38 >> 1;
            if ( v38 <= 1 )
            {
              _BitScanForward64(&v40, v39);
              v41 = (unsigned int)v40;
              goto LABEL_57;
            }
          }
          if ( v10 == p_PteBitCache )
            goto LABEL_70;
          v29 = !_BitScanReverse64((unsigned __int64 *)&v43, v7);
          if ( v29 )
            v36 = 64LL;
          else
            v36 = (unsigned int)(63 - v43);
          v7 = v10[1];
          ++v10;
        }
        v41 = -v36;
LABEL_57:
        v12 = ((v10 - p_PteBitCache) << 6) + v41;
        if ( v12 > v8 )
LABEL_70:
          v12 = -1LL;
      }
      else
      {
        if ( v7 == -1 )
        {
          while ( ++v10 <= v9 )
          {
            v7 = *v10;
            if ( *v10 != -1 )
              goto LABEL_8;
          }
        }
        else
        {
LABEL_8:
          _BitScanForward64(&v11, ~v7);
          v12 = (unsigned int)v11 + ((v10 - p_PteBitCache) << 6);
          if ( v12 <= v8 )
            goto LABEL_9;
        }
LABEL_71:
        v12 = -1LL;
      }
LABEL_9:
      if ( v12 != -1LL )
      {
        v13 = v12 & 7;
        v14 = (char *)p_PteBitCache + (v12 >> 3);
        if ( v13 + a1 <= 8 )
        {
          v5 = v12;
          v15 = byte_140018DE0[a1] << v13;
          goto LABEL_12;
        }
        if ( (v12 & 7) != 0 )
        {
          *v14++ |= byte_1400165E0[v13];
          a1 -= (unsigned int)(8 - v13);
        }
        if ( a1 > 8 )
        {
          memset(v14, 255, a1 >> 3);
          v14 += a1 >> 3;
          a1 &= 7u;
        }
        v5 = v12;
        if ( a1 )
        {
          v15 = byte_140018DE0[a1];
LABEL_12:
          *v14 |= v15;
        }
LABEL_13:
        v5 = qword_140C695D0 + 8 * (v5 + CurrentPrcb->PteBitOffset);
      }
      if ( KiIrqlFlags )
      {
        v59 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v59 <= 0xFu && CurrentIrql <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v61 = v60->SchedulerAssist;
          v62 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v62 & v61[5]) == 0;
          v61[5] &= v62;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
      __writecr8(CurrentIrql);
      return v5;
    }
  }
}
