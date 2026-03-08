/*
 * XREFs of MiDeleteSubsectionLargePages @ 0x14064C7F8
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiSetPfnTbFlushStamp @ 0x14028A3A0 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     MiGetLeafPfnBuddy @ 0x140386E8C (MiGetLeafPfnBuddy.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B3040 (MiConvertSmallPageRangeToLarge.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePages @ 0x140665C70 (MiFreeLargePages.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A2DCE0 (MmReturnChargesToLockPagedPool.c)
 *     MmUnlockPreChargedPagedPool @ 0x140A2DD70 (MmUnlockPreChargedPagedPool.c)
 */

__int64 __fastcall MiDeleteSubsectionLargePages(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // r15
  ULONG_PTR v8; // rsi
  unsigned __int64 LeafPfnBuddy; // r13
  __int64 v10; // r8
  _QWORD *v11; // rax
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rdx
  bool v16; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rbx
  struct _KPRCB *v26; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v28; // eax
  signed __int32 v30[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v33 = a3;
  v32 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v34 = 0LL;
  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( a2 )
  {
    do
    {
      v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4);
      LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
      if ( v10 )
      {
        MiUpdateLargePageBitMap(
          *(_QWORD *)(qword_140C67048 + 8 * ((v6[5] >> 43) & 0x3FFLL)),
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4),
          0x200uLL,
          0,
          1);
        v11 = v6 + 3072;
        if ( v6 < v6 + 3072 )
        {
          v12 = v6 + 3;
          v4 += 512LL;
          v13 = (unsigned __int64)v11;
          do
          {
            v14 = (unsigned __int8)MiLockPageInline((__int64)(v12 - 3));
            v15 = *v12 & 0xC000000000000000uLL;
            v16 = *((_WORD *)v12 + 4) == 2;
            *((_WORD *)v12 + 4) -= 2;
            *v12 = v15;
            if ( v16 )
            {
              _InterlockedOr(v30, 0);
              MiSetPfnTbFlushStamp((__int64)(v12 - 3), KiTbFlushTimeStamp, 1);
              MiInsertPageInFreeOrZeroedList(v8, 2);
              ++v5;
            }
            else
            {
              if ( (v15 & 0x4000000000000000LL) == 0 )
                *v12 = v15 | 0x4000000000000000LL;
              *((_BYTE *)v12 + 10) |= 7u;
            }
            _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
                v16 = (v20 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v20;
                if ( v16 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(v14);
            v12 += 6;
            ++v8;
          }
          while ( (unsigned __int64)(v12 - 3) < v13 );
          v3 = v34;
        }
      }
      else
      {
        MiConvertSmallPageRangeToLarge(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4), 1);
        v3 += MiFreeLargePages(
                *(_QWORD *)(qword_140C67048 + 8 * ((v6[5] >> 43) & 0x3FFLL)),
                (_DWORD)v6,
                (unsigned int)&v32,
                (unsigned int)&v32,
                3);
        v34 = v3;
        v4 += 512LL;
      }
      v6 = (_QWORD *)LeafPfnBuddy;
    }
    while ( LeafPfnBuddy );
    v7 = a1;
  }
  v21 = 8LL * *((unsigned int *)v7 + 11);
  MmUnlockPreChargedPagedPool(v7[1], v21);
  MmReturnChargesToLockPagedPool(v7[1], v21);
  v23 = *v7;
  v24 = *(_WORD *)(*v7 + 60) & 0x3FF;
  v25 = *(_QWORD *)(qword_140C67048 + 8 * v24);
  if ( !v5 )
    goto LABEL_35;
  MiReturnCommit(*(_QWORD *)(qword_140C67048 + 8 * v24), v5, v22);
  if ( (unsigned __int16 *)v25 != MiSystemPartition
    || (v26 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v26->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_34:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 17280), v5);
    goto LABEL_35;
  }
  if ( v5 + CachedResidentAvailable > 0x100 || v5 >= 0x80000 )
  {
LABEL_30:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v26->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 += (int)CachedResidentAvailable - 192;
    }
    if ( !v5 )
      goto LABEL_35;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v28 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v26->CachedResidentAvailable,
            CachedResidentAvailable + v5,
            CachedResidentAvailable);
    v16 = (_DWORD)CachedResidentAvailable == v28;
    LODWORD(CachedResidentAvailable) = v28;
    if ( v16 )
      break;
    if ( v28 == -1 || v5 + v28 > 0x100 )
      goto LABEL_30;
  }
LABEL_35:
  *(_QWORD *)(v23 + 120) ^= (*(_QWORD *)(v23 + 120) ^ (*(_QWORD *)(v23 + 120) - v4)) & 0xFFFFFFFFFLL;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v23 + 60) & 0x3FF)) + 17848LL),
    -v4);
  return v3;
}
