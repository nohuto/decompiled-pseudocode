/*
 * XREFs of MiFreePageFileHashPfns @ 0x1403619CC
 * Callers:
 *     MiScanPagefiles @ 0x140361A24 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x140A2FB40 (MiDeletePagefile.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePageFileHashPfn @ 0x1406638E8 (MiFreePageFileHashPfn.c)
 */

__int64 __fastcall MiFreePageFileHashPfns(union _SLIST_HEADER *a1)
{
  __int64 Region; // rbp
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  unsigned __int64 v12; // r8
  struct _KPRCB *v13; // r9
  __int64 CachedResidentAvailable; // rdx

  Region = a1[15].Region;
  v2 = 0LL;
  result = (__int64)RtlpInterlockedFlushSList(a1 + 5);
  v4 = result;
  if ( result )
  {
    do
    {
      v5 = *(_QWORD *)v4;
      v6 = (unsigned __int8)MiLockPageInline(v4);
      MiFreePageFileHashPfn(0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4));
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          v7 = (unsigned int)result & SchedulerAssist[5];
          SchedulerAssist[5] = v7;
          if ( v11 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v6);
      ++v2;
      v4 = v5;
    }
    while ( v5 );
    if ( v2 )
    {
      MiReturnCommit(Region, v2, v7);
      result = (__int64)&MiSystemPartition;
      v12 = v2;
      if ( (_UNKNOWN *)Region != &MiSystemPartition )
        goto LABEL_23;
      v13 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v13->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_23;
      for ( ; v2 + CachedResidentAvailable <= 0x100; result = v2 + (int)result )
      {
        if ( v2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&v13->CachedResidentAvailable,
                                 CachedResidentAvailable + v2,
                                 CachedResidentAvailable);
        v11 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v11 )
          goto LABEL_24;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&v13->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          v12 = v2 + (int)result;
        }
      }
      if ( v12 )
LABEL_23:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(Region + 17280), v12);
LABEL_24:
      _InterlockedExchangeAdd64(&qword_140C69EA8, -(__int64)v2);
    }
  }
  return result;
}
