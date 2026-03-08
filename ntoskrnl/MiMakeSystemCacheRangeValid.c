/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x140221870
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     PfSnLogPageFault @ 0x14028D4BC (PfSnLogPageFault.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402CFF20 (MiEmptyDeferredWorkingSetEntries.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, unsigned __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  char v8; // al
  volatile __int32 *v9; // rdi
  __int64 CurrentIrql; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // r13
  unsigned __int64 v14; // rcx
  char v15; // di
  __int64 v16; // r10
  __int64 v17; // rbx
  __int64 v18; // r14
  unsigned __int64 *v19; // r12
  unsigned __int64 v20; // rbx
  _QWORD *v21; // r15
  unsigned int v22; // eax
  bool v23; // sf
  int v24; // eax
  __int64 result; // rax
  unsigned __int64 *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v38; // rdx
  _DWORD *v39; // r9
  __int64 v40; // rdx
  unsigned __int8 v41; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v43; // r9
  bool v44; // zf
  signed __int32 v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+40h] [rbp-C0h]
  signed __int32 v47; // [rsp+48h] [rbp-B8h]
  __int64 v48; // [rsp+48h] [rbp-B8h]
  signed __int32 v49; // [rsp+48h] [rbp-B8h]
  __int128 v50; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h]
  unsigned int v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  _QWORD v58[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v59[16]; // [rsp+120h] [rbp+20h]

  v4 = a3;
  v53 = a2;
  v52 = a3;
  v57 = a4;
  v51 = 0LL;
  v50 = 0LL;
  memset(v58, 0, sizeof(v58));
  v59[0] = 0LL;
  v56 = 0LL;
  v6 = (__int64)(a1 << 25) >> 16;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = byte_140C6F538 & 7;
  if ( (byte_140C6F538 & 7u) > 4 )
  {
    if ( v8 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v54 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
          LODWORD(v38) = 4;
        else
          v38 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v38;
      }
      goto LABEL_10;
    }
  }
  else if ( v8 == 2 )
  {
    v9 = (volatile __int32 *)&unk_140C69E00;
    goto LABEL_4;
  }
  v9 = (volatile __int32 *)&unk_140C6F540;
LABEL_4:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v39 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v40) = 4;
    else
      v40 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    v39[5] |= v40;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, (unsigned __int8)CurrentIrql);
  }
  else
  {
    _m_prefetchw((const void *)v9);
    v47 = *v9 & 0x7FFFFFFF;
    v45 = _InterlockedCompareExchange(v9, v47 + 1, v47);
    if ( v45 != v47 )
    {
      while ( v45 >= 0 )
      {
        v49 = v45;
        v45 = _InterlockedCompareExchange(v9, v45 + 1, v45);
        if ( v45 == v49 )
          goto LABEL_7;
      }
      ExpWaitForSpinLockSharedAndAcquire(v9, (unsigned __int8)CurrentIrql);
    }
  }
LABEL_7:
  if ( *((_DWORD *)v9 + 1) )
    _InterlockedExchange(v9 + 1, 0);
  v54 = CurrentIrql;
LABEL_10:
  MiLockPageTableInternal(&unk_140C6F480, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
  v11 = *(_QWORD *)(48 * ((*(_QWORD *)(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL
                  + 16);
  if ( v11 )
    v11 += 40 * ((v6 >> 18) & 7);
  v12 = *(_QWORD *)(v11 + 24);
  v13 = WORD5(v50);
  v14 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  BYTE12(v50) = CurrentIrql;
  v51 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (v12 & 1) == 0 )
    v14 = v12;
  v15 = BYTE13(v50) | 4;
  BYTE13(v50) |= 4u;
  v16 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v14 + 60LL) & 0x3FF)) + 17344LL;
  v46 = v16;
  v17 = v16;
  *(_QWORD *)&v50 = v16;
  if ( (_DWORD)v4 )
  {
    v55 = v4;
    v48 = v4;
    v18 = 0LL;
    v19 = v53;
    while ( 1 )
    {
      v20 = *v19;
      v58[v18] = 0LL;
      if ( v20 )
      {
        if ( (v20 & 1) != 0 )
        {
          if ( (*(_BYTE *)a1 & 1) == 0 )
          {
            v21 = (_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
            v53 = (unsigned __int64 *)v21[2];
            v59[v18] = v53;
            if ( (v15 & 4) == 0 || (v15 & 1) != 0 || (v15 & 2) != 0 )
            {
              v24 = 0;
            }
            else
            {
              if ( !v13 )
              {
                v22 = a1;
                goto LABEL_24;
              }
              if ( v13 + WORD4(v50) != (((unsigned int)a1 >> 3) & 0x1FF) )
                goto LABEL_56;
              if ( (__int64)v21[5] >= 0 )
              {
                if ( (v15 & 0x10) == 0 )
                  goto LABEL_56;
              }
              else
              {
                if ( (v15 & 0x10) == 0 )
                  goto LABEL_46;
LABEL_56:
                MiEmptyDeferredWorkingSetEntries(&v50, 0LL, 511LL);
                LODWORD(v16) = v46;
                v13 = WORD5(v50);
                v15 = BYTE13(v50);
              }
LABEL_46:
              v22 = a1;
              if ( v13 )
              {
                WORD5(v50) = ++v13;
              }
              else
              {
LABEL_24:
                v13 = 1;
                WORD5(v50) = 1;
                v23 = (__int64)v21[5] < 0;
                WORD4(v50) = (v22 >> 3) & 0x1FF;
                if ( v23 )
                  v15 &= ~0x10u;
                else
                  v15 |= 0x10u;
                BYTE13(v50) = v15;
              }
              v24 = 4;
            }
            MiAllocateWsle(v16, a1, 48 * (v20 >> 12), 0, v20, v24, 0LL);
            if ( ((unsigned __int16)v53 & 0x400) != 0 && PfSnNumActiveTraces )
              v58[v18] = v21[1] | 0x8000000000000000uLL;
            goto LABEL_31;
          }
        }
        else
        {
          *v19 = v20 | 1;
        }
        v58[v18] = 1LL;
      }
LABEL_31:
      v16 = v46;
      ++v18;
      ++v19;
      a1 += 8LL;
      if ( !--v48 )
      {
        v7 = v51;
        v17 = v50;
        LOBYTE(CurrentIrql) = v54;
        v53 = v19;
        v4 = v55;
        break;
      }
    }
  }
  if ( v7 )
  {
    if ( v13 )
    {
      MiAddWorkingSetEntries(
        v17,
        ((unsigned __int64)WORD4(v50) << 12) + (((((v7 << 25) - v56) >> 16 << 25) - v56) >> 16),
        v13);
      WORD5(v50) = 0;
    }
    MiUnlockPageTableInternal(v17, v7);
    v16 = v46;
    BYTE13(v50) = v15 | 2;
    v51 = 0LL;
  }
  MiUnlockWorkingSetShared(v16, (unsigned __int8)CurrentIrql);
  result = -v4;
  v26 = &v53[-v4];
  if ( v52 )
  {
    v27 = 0LL;
    do
    {
      v28 = v58[v27];
      if ( v28 == 1 )
      {
        v34 = 48 * ((*v26 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v35 = (unsigned __int8)MiLockPageInline(v34);
        MiDecrementShareCount(v34);
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v36 = v57;
        v52 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v52);
          while ( *(__int64 *)(v36 + 24) < 0 );
        }
        MiDecrementShareCount(v36);
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          v41 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v41 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v43 = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
            v44 = ((unsigned int)result & v43[5]) == 0;
            v43[5] &= result;
            if ( v44 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v35);
      }
      else if ( v28 )
      {
        v29 = v59[v27];
        if ( qword_140C657C0 )
        {
          if ( (v29 & 0x10) == 0 )
            v29 &= ~qword_140C657C0;
        }
        v30 = v29 >> 16;
        v31 = *(_QWORD *)v30;
        v32 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v30, 1666411853LL);
        v33 = MiStartingOffset(v30, v28, 0xFFFFFFFFLL);
        PfSnLogPageFault(v32, v33, 4LL);
        result = ObFastDereferenceObjectDeferDelete(v31 + 64, v32, 1666411853LL);
      }
      ++v27;
      ++v26;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
