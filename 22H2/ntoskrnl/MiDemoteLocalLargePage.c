/*
 * XREFs of MiDemoteLocalLargePage @ 0x140231A80
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x1402EC204 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x1402837A0 (MiIsFreeZeroPfnCold.c)
 *     MiNodeFreeZeroPages @ 0x140299324 (MiNodeFreeZeroPages.c)
 *     MiInsertDemotedPages @ 0x1402EF170 (MiInsertDemotedPages.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AC2B0 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F52A8 (MiConvertEntireLargePageToSmall.c)
 *     MiGetFreeZeroLargePages @ 0x1403F5F94 (MiGetFreeZeroLargePages.c)
 *     MiAddPageToHeatList @ 0x1403F7308 (MiAddPageToHeatList.c)
 */

__int64 __fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int16 v4; // bx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  int v8; // r12d
  unsigned int v9; // esi
  int v10; // ebx
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  __int64 FreeZeroLargePages; // rax
  __int64 v15; // rbp
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r9
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // rax
  _DWORD *v29; // r9
  int v30; // edx
  unsigned int v31; // [rsp+40h] [rbp-E8h]
  __int64 v33; // [rsp+48h] [rbp-E0h]
  __int64 v34; // [rsp+50h] [rbp-D8h] BYREF
  int v35; // [rsp+58h] [rbp-D0h]
  __int128 v36; // [rsp+5Ch] [rbp-CCh]
  __int128 v37; // [rsp+6Ch] [rbp-BCh]
  __int128 v38; // [rsp+7Ch] [rbp-ACh]
  __int128 v39; // [rsp+8Ch] [rbp-9Ch]
  __int128 v40; // [rsp+9Ch] [rbp-8Ch]
  __int128 v41; // [rsp+ACh] [rbp-7Ch]
  __int128 v42; // [rsp+BCh] [rbp-6Ch]
  __int128 v43; // [rsp+CCh] [rbp-5Ch]
  int v44; // [rsp+DCh] [rbp-4Ch]

  v4 = a3;
  if ( (a3 & 1) != 0 )
    return 0LL;
  v6 = 0;
  v31 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v6 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_140C4DE8D);
    v31 = v6;
  }
  v7 = a2 >> byte_140C4DE8C;
  v33 = *(_QWORD *)(a1 + 16) + 4544LL * (a2 >> byte_140C4DE8C);
  if ( MiNodeFreeZeroPages(v33, v6, a3) >= a4 )
    return 0LL;
  if ( (v4 & 0x400) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    if ( (v4 & 0x800) != 0 )
      v8 = 2;
  }
  v9 = 3;
  v10 = (2 * (v4 & 2)) | 9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  while ( 1 )
  {
    v13 = v10;
    v10 |= 0x20u;
    if ( --v9 )
      v10 = v13;
    FreeZeroLargePages = MiGetFreeZeroLargePages(a1, v9, 1, v10, v7, a2, v6, v8);
    v15 = FreeZeroLargePages;
    if ( FreeZeroLargePages )
      break;
    v6 = v31;
    if ( !v9 )
    {
      if ( (v10 & 1) == 0 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = CurrentPrcb->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v20 = (v19 & v18[5]) == 0;
              v18[5] &= v19;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        return 0LL;
      }
      v9 = 3;
      v10 &= 0xFFFFFFDE;
    }
  }
  if ( (v10 & 0x20) != 0 )
  {
    MiInsertDemotedPages(v33, FreeZeroLargePages, v9, 1, FreeZeroLargePages);
    v9 = 1;
  }
  v22 = MiLargePageSizes[v9];
  v23 = (unsigned __int128)((v15 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v24 = *(_QWORD *)(a1 + 7104);
  if ( v24 )
    --v24;
  if ( v24 >= 0x9F
    || (v23 = *((unsigned int *)&KeGetCurrentThread()[1].SwapListEntry + 3), (v23 & 0xC) == 8)
    || (v24 >= 0x20 || (ULONG_PTR *)a1 != &MiSystemPartition)
    && ((v23 & 2) != 0 && v24 >= 0x21 || (*(_DWORD *)(a1 + 4) & 0x20) != 0) )
  {
    v25 = v15 + 48 * (a2 & (unsigned __int64)(v22 - 1));
  }
  else
  {
    v25 = 0LL;
  }
  if ( (unsigned int)MiIsFreeZeroPfnCold(v15, v23, v22, (v15 + 0x58000000000LL) / 48)
    && (HvlEnlightenments & 0x200000) != 0 )
  {
    v34 = 1LL;
    v35 = 1;
    v44 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    MiAddPageToHeatList(&v34, v26, v9);
    MiSetFreeZeroPfnCold(v15, 0LL);
  }
  MiConvertEntireLargePageToSmall(v15, v9, 1, (*(_DWORD *)(v15 + 16) & 0x3E0LL) != 0, v25, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v25;
}
