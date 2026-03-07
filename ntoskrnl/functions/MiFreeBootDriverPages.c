void __fastcall MiFreeBootDriverPages(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int *a5)
{
  int *v5; // r14
  __int64 v8; // r15
  char v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // r15d
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // r8
  struct _KPRCB *v18; // r9
  unsigned __int64 v19; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v21; // zf
  signed __int32 v22; // eax
  __int64 v23; // r12
  unsigned __int64 v24; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  int v29; // [rsp+20h] [rbp-148h]
  int v30; // [rsp+24h] [rbp-144h]
  unsigned __int64 v32; // [rsp+30h] [rbp-138h]
  int *v33; // [rsp+38h] [rbp-130h]
  __int64 v34; // [rsp+48h] [rbp-120h] BYREF
  __int64 v35; // [rsp+50h] [rbp-118h]
  __int64 v36; // [rsp+58h] [rbp-110h]
  _QWORD v37[24]; // [rsp+60h] [rbp-108h] BYREF

  v5 = a5;
  v36 = a1;
  v8 = a1;
  v33 = a5;
  v9 = a4;
  memset(v37, 0, 0xB8uLL);
  v30 = v9 & 2;
  if ( !a5 )
  {
    v37[3] = 0LL;
    v5 = (int *)v37;
    v33 = (int *)v37;
    LODWORD(v37[1]) = 20;
  }
  v10 = a2 + 8 * (a3 - 1);
  v32 = v10;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v29 = 1;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v32 = v10;
  }
  else
  {
    v29 = 0;
    MiInsertTbFlushEntry((__int64)v5, (__int64)(a2 << 25) >> 16, (8 * (a3 - 1) + 8) >> 3, 0);
  }
  v11 = 0LL;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      v12 = ZeroPte;
      v34 = MI_READ_PTE_LOCK_FREE(a2);
      v13 = 0;
      if ( !MiPteInShadowRange(a2) )
        goto LABEL_7;
      if ( MiPteHasShadow() )
      {
        v13 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_7;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_7;
      }
      if ( (ZeroPte & 1) != 0 )
        v12 = ZeroPte | 0x8000000000000000uLL;
LABEL_7:
      *(_QWORD *)a2 = v12;
      if ( v13 )
        MiWritePteShadow(a2, v12, v14);
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFFLL;
      v16 = 48 * v15 - 0x220000000000LL;
      v35 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( v29 )
      {
        MiInsertLargeTbFlushEntry((__int64)v5, 1, a2);
        v23 = 512LL;
        do
        {
          v24 = (unsigned __int8)MiLockPageInline(v16);
          if ( !v30 )
            ++*(_WORD *)(v16 + 32);
          *(_BYTE *)(v16 + 35) &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
              v21 = (v28 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v28;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(v24);
          v16 += 48LL;
          --v23;
        }
        while ( v23 );
        MiFreeLargePageMemory(v15, 1u, v30 != 0 ? 4 : 6);
        v10 = v32;
        v5 = v33;
        v11 += 512LL;
      }
      else
      {
        *(_BYTE *)(v16 + 35) &= ~8u;
        MiLockAndDecrementShareCount(v16, 1);
        ++v11;
        MiReturnCommit((__int64)MiSystemPartition, 1LL, v17);
        v18 = KeGetCurrentPrcb();
        v19 = 1LL;
        CachedResidentAvailable = (int)v18->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_49;
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v22 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v18->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v21 = (_DWORD)CachedResidentAvailable == v22;
            LODWORD(CachedResidentAvailable) = v22;
            if ( v21 )
              goto LABEL_13;
          }
          while ( v22 != -1 && (unsigned __int64)(v22 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v18->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v19 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( v19 )
LABEL_49:
          _InterlockedExchangeAdd64(&qword_140C6F440, v19);
      }
LABEL_13:
      MiLockAndDecrementShareCount(v35, 0);
      a2 += 8LL;
      if ( a2 > v10 )
      {
        v8 = v36;
        v9 = a4;
        break;
      }
    }
  }
  if ( v5 == (int *)v37 )
    MiFlushTbList(v5);
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
  {
    qword_140C69628 -= v11;
  }
  else if ( (v9 & 1) != 0 )
  {
    _InterlockedExchangeAdd(&dword_140C69650, -(int)v11);
  }
}
