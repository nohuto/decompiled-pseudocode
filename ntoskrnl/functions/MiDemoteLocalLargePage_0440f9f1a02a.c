__int64 __fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r12
  int v6; // esi
  unsigned int v8; // r15d
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // r11d
  int v12; // ebp
  unsigned __int64 v13; // rax
  int v14; // edx
  int v15; // eax
  unsigned int v16; // ebp
  int v17; // ebx
  unsigned __int8 CurrentIrql; // r14
  __int64 v19; // rsi
  __int64 v20; // r15
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx
  BOOL v23; // r14d
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // r10
  __int64 v27; // rcx
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  int v33; // edx
  unsigned __int8 v34; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned int v38; // [rsp+50h] [rbp-108h]
  unsigned __int8 v39; // [rsp+58h] [rbp-100h]
  int v40; // [rsp+60h] [rbp-F8h]
  int v41; // [rsp+68h] [rbp-F0h]
  __int64 v42; // [rsp+70h] [rbp-E8h]
  __int64 v43; // [rsp+78h] [rbp-E0h]
  __int64 v44; // [rsp+80h] [rbp-D8h] BYREF
  int v45; // [rsp+88h] [rbp-D0h]
  _DWORD v46[32]; // [rsp+8Ch] [rbp-CCh] BYREF

  v4 = a2;
  v6 = a3;
  if ( (a3 & 0x10000) != 0 )
    return 0LL;
  v8 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v8 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_140C6570E);
  v9 = a2 >> byte_140C6570D;
  v10 = 25408LL * (a2 >> byte_140C6570D) + *(_QWORD *)(a1 + 16);
  v11 = (a2 & ~dword_140C65778) << 12;
  v41 = v11;
  v43 = 25408LL * (a2 >> byte_140C6570D);
  v42 = v10;
  v12 = a3 & 0x800;
  if ( (a3 & 0x800) != 0 )
  {
    v13 = *(_QWORD *)(v10 + 22784);
  }
  else if ( (a3 & 0x400) != 0 )
  {
    v13 = *(_QWORD *)(v10 + 22768);
  }
  else
  {
    v13 = MiNodeFreeZeroPages(v10, v8, a3);
    v11 = v41;
  }
  if ( v13 >= a4 )
    return 0LL;
  v14 = 1;
  v38 = 1;
  if ( (v6 & 0x400) != 0 )
  {
    v14 = 0;
    goto LABEL_41;
  }
  if ( v12 )
  {
    v14 = 2;
LABEL_41:
    v38 = v14;
  }
  v15 = 0;
  v16 = 3;
  v17 = (2 * (v6 & 2)) | 0x43;
  if ( (v6 & 0x20000) != 0 )
    v15 = 2;
  v40 = v15;
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v26) = 4;
    else
      v26 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v26;
  }
LABEL_14:
  if ( --v16 < 2 )
    v17 |= 0x100u;
  while ( 1 )
  {
    v19 = MiUnlinkNodeLargePages(a1, v11, v16, 1, v9, v8, v14, v17, 0LL);
    if ( v19 )
      goto LABEL_17;
    if ( v16 != v40 )
    {
      if ( v16 )
      {
        v14 = v38;
        v11 = v41;
        goto LABEL_14;
      }
LABEL_17:
      if ( (v17 & 0x100) != 0 )
      {
        if ( !v16 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v42 + 23104));
          v27 = 1LL;
          do
          {
            ++*(_DWORD *)(v43 + *(_QWORD *)(a1 + 16) + 23004);
            --v27;
          }
          while ( v27 );
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v42 + 23104));
        }
        do
        {
          MiInsertDemotedPages(v42, v19, v16, v16 + 1, v19);
          ++v16;
        }
        while ( v16 <= 1 );
      }
      v20 = MiLargePageSizes[v16];
      v21 = *(_QWORD *)(a1 + 17216);
      if ( v21 )
        --v21;
      if ( v21 >= 0x9F
        || (v33 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3), (v33 & 0xC) == 8)
        || (v21 >= 0x20 || (_UNKNOWN *)a1 != &MiSystemPartition)
        && ((v33 & 2) != 0 && v21 >= 0x21 || (*(_DWORD *)(a1 + 4) & 0x10) != 0) )
      {
        v22 = v19 + 48 * (v4 & (v20 - 1));
      }
      else
      {
        v22 = 0LL;
      }
      if ( (unsigned int)MiIsFreeZeroPfnCold(v19) && (HvlEnlightenments & 0x200000) != 0 )
      {
        memset(v46, 0, sizeof(v46));
        v44 = 1LL;
        v45 = 1;
        if ( (unsigned int)MiAddPageToHeatRanges(&v44, 0xAAAAAAAAAAAAAAABuLL * ((v19 + 0x220000000000LL) >> 4), v16) )
          MiNotifyPageHeat(&v44);
        *(_QWORD *)(v19 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v19 + 16), 0LL);
      }
      v23 = (*(_DWORD *)(v19 + 16) & 0x3E0LL) != 0;
      if ( *(unsigned __int8 *)(v19 + 34) >> 6 != v38 )
        MiChangePageAttributeContiguous(0xAAAAAAAAAAAAAAABuLL * ((v19 + 0x220000000000LL) >> 4), v20, v38, v23 + 1);
      MiConvertEntireLargePageToSmall(v19, v16, 1, v23, v22, 0LL, 0LL);
      if ( KiIrqlFlags )
      {
        v34 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && v39 <= 0xFu && v34 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v36 = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (v39 + 1));
          v32 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v39);
      return v22;
    }
    if ( (v17 & 1) == 0 )
      break;
    v14 = v38;
    v17 &= 0xFFFFFEFE;
    v11 = v41;
    v16 = 2;
  }
  if ( KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v32 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
