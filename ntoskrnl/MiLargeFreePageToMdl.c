/*
 * XREFs of MiLargeFreePageToMdl @ 0x1403D1BC4
 * Callers:
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 * Callees:
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiIsFreeZeroPfnCold @ 0x140350240 (MiIsFreeZeroPfnCold.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageHeatImmediate @ 0x1406517FC (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int16 v7; // ax
  __int64 v8; // rsi
  ULONG_PTR v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // r8
  _QWORD *v19; // r8
  int v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = 0;
  v7 = 0;
  if ( KeGetCurrentIrql() < 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 && (a5 & 8) == 0 )
    v7 = 128;
  v8 = MiLargePageSizes[a3];
  v9 = a2 & ~(v8 - 1);
  result = MiTryUnlinkNodeLargePages(a1, v9, a3, 1LL, v7, &v20, 0LL);
  v11 = result;
  if ( result )
  {
    if ( MiIsFreeZeroPfnCold(result) && (a5 & 0x3000000) == 0 )
    {
      MiChangePageHeatImmediate(v9, a3, 1LL);
      v12 = (unsigned __int8)MiLockPageInline(v11);
      *(_QWORD *)(v11 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v11 + 16), 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v12);
    }
    MiConvertEntireLargePageToSmall(v11, a3, 0, 1, 0LL, 0LL, 0LL);
    if ( a4 )
    {
      v18 = ((unsigned __int64)*(unsigned int *)(a4 + 40) >> 12) + 6;
      *(_DWORD *)(a4 + 40) += (_DWORD)v8 << 12;
      v19 = (_QWORD *)(a4 + 8 * v18);
      do
      {
        *v19++ = v9++;
        --v8;
      }
      while ( v8 );
    }
    return 1LL;
  }
  return result;
}
