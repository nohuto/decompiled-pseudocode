/*
 * XREFs of MiUpdateLargePageBitMap @ 0x14034D79C
 * Callers:
 *     MiFreeLargeZeroPages @ 0x14020FD6C (MiFreeLargeZeroPages.c)
 *     MiFreeMdlPageRun @ 0x14027AF50 (MiFreeMdlPageRun.c)
 *     MiLinkPoolCommitChain @ 0x140330100 (MiLinkPoolCommitChain.c)
 *     MiGetFastLargePages @ 0x14034D588 (MiGetFastLargePages.c)
 *     MiFreeLargePageMemory @ 0x1403505C0 (MiFreeLargePageMemory.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     MiDemoteSlabEntry @ 0x1403C826C (MiDemoteSlabEntry.c)
 *     MiRebuildLargePage @ 0x140466288 (MiRebuildLargePage.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MiFindLargeNodePage @ 0x14061B228 (MiFindLargeNodePage.c)
 *     MiFreeContiguousLargePageRun @ 0x14064780C (MiFreeContiguousLargePageRun.c)
 *     MiDeleteSubsectionLargePages @ 0x14064C7F8 (MiDeleteSubsectionLargePages.c)
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 *     MiDemotePfnListChain @ 0x140665964 (MiDemotePfnListChain.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiCreateEnclaveRegions @ 0x140B3A434 (MiCreateEnclaveRegions.c)
 *     MiCreateBootSlabEntries @ 0x140B3B858 (MiCreateBootSlabEntries.c)
 *     MiMarkLargePageRanges @ 0x140B4F274 (MiMarkLargePageRanges.c)
 *     MiMarkLargePagePte @ 0x140B5E0C0 (MiMarkLargePagePte.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  __int64 v8; // rdx
  __int64 v10; // r13
  int v11; // r15d
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r15
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r11
  __int64 *v25; // rsi
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v27; // rcx
  __int64 *v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rdx
  bool i; // zf
  unsigned __int64 v32; // r10
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rcx
  __int64 *v35; // r8
  __int64 v36; // r10
  __int64 *v37; // rdx
  bool k; // zf
  bool v39; // zf
  unsigned __int64 v40; // rcx
  __int64 *v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rdx
  bool j; // zf
  __int64 v45; // rdx
  __int64 *v46; // r8
  __int64 v47; // rsi
  __int64 *v48; // rdx
  bool m; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v53; // eax
  unsigned __int64 v54; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v57; // [rsp+90h] [rbp+18h]

  v8 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 < 0x200 )
    return;
  LODWORD(v10) = 2;
  v11 = 0;
  v57 = 0;
  while ( 1 )
  {
    v10 = (unsigned int)(v10 - 1);
    v12 = (unsigned __int64 *)(16LL * (unsigned int)v10 + v8 + 16008);
    if ( !*v12 )
      break;
    v13 = MiLargePageSizes[v10];
    v54 = v13;
    v14 = a2 / v13;
    v15 = (~(v13 - 1) & (a3 + v13 + a2 - 1)) / v13;
    v16 = v15;
    v17 = v15 - a2 / v13;
    if ( a5 )
      goto LABEL_11;
    if ( !a4 )
    {
      if ( v14 >= *v12 )
        goto LABEL_30;
      if ( v17 <= 1 )
      {
        if ( v17 == 1 )
        {
          v18 = !_bittest64((const signed __int64 *)(v12[1] + 8 * (v14 >> 6)), (a2 / v13) & 0x3F);
          goto LABEL_10;
        }
        goto LABEL_30;
      }
      if ( *v12 - v14 < v17 )
        goto LABEL_30;
      v27 = v12[1];
      v28 = (__int64 *)(v27 + 8 * (v14 >> 6));
      v29 = *v28;
      v30 = (__int64 *)(v27 + 8 * ((v15 - 1) >> 6));
      if ( v28 != v30 )
      {
        for ( i = (v29 & (-1LL << v14)) == 0; i; i = *v28 == 0 )
        {
          if ( ++v28 == v30 )
          {
            v39 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v15 - 1)) & *v28) == 0;
            goto LABEL_46;
          }
        }
LABEL_30:
        v18 = 0;
        goto LABEL_10;
      }
      v39 = (v29 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17) << v14)) == 0;
LABEL_46:
      v18 = v39;
      goto LABEL_10;
    }
    if ( v14 >= *v12 )
      goto LABEL_30;
    if ( v17 > 1 )
    {
      if ( *v12 - v14 < v17 )
        goto LABEL_30;
      v40 = v12[1];
      v41 = (__int64 *)(v40 + 8 * (v14 >> 6));
      v42 = *v41;
      v43 = (__int64 *)(v40 + 8 * ((v15 - 1) >> 6));
      if ( v41 != v43 )
      {
        for ( j = ((-1LL << v14) & v42) == -1LL << v14; j; j = *v41 == -1 )
        {
          if ( ++v41 == v43 )
          {
            v39 = (*v41 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v15 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v15 - 1);
            goto LABEL_46;
          }
        }
        goto LABEL_30;
      }
      v39 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17) << v14) & v42) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17) << v14;
      goto LABEL_46;
    }
    if ( v17 != 1 )
      goto LABEL_30;
    v18 = _bittest64((const signed __int64 *)(v12[1] + 8 * (v14 >> 6)), (a2 / v13) & 0x3F);
LABEL_10:
    if ( v18 )
      break;
LABEL_11:
    if ( !v11 )
    {
      v57 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_140C66980, &LockHandle);
    }
    if ( a4 )
      RtlSetBitsEx((__int64)v12, v14, v17);
    else
      RtlClearBitsEx((__int64)v12, v14, v17);
    if ( !(_DWORD)v10 )
      break;
    v19 = MiLargePageSizes[(unsigned int)(v10 - 1)] / v54;
    v20 = v19;
    v21 = ~(v19 - 1);
    v22 = v21 & (v19 + v16 - 1);
    v23 = v21 & v14;
    v24 = v22 - v23;
    if ( a4 )
    {
      if ( v23 >= *v12 )
        goto LABEL_21;
      if ( v19 > 1 )
      {
        if ( *v12 - v23 < v19 )
          goto LABEL_21;
        v25 = (__int64 *)(v12 + 1);
        v34 = v12[1];
        v35 = (__int64 *)(v34 + 8 * (v23 >> 6));
        v36 = *v35;
        v37 = (__int64 *)(v34 + 8 * ((v23 + v19 - 1) >> 6));
        if ( v35 == v37 )
        {
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v23) & v36) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v23 )
            goto LABEL_21;
        }
        else
        {
          for ( k = ((-1LL << v23) & v36) == -1LL << v23; k; k = *v35 == -1 )
          {
            if ( ++v35 == v37 )
            {
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v23 + (unsigned __int8)v19 - 1)) & *v35) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v23 + (unsigned __int8)v19 - 1) )
                break;
              goto LABEL_32;
            }
          }
LABEL_21:
          v24 -= v19;
          if ( !v24 )
            break;
          v23 += v19;
          v25 = (__int64 *)(v12 + 1);
        }
      }
      else
      {
        if ( v19 != 1 )
          goto LABEL_21;
        v25 = (__int64 *)(v12 + 1);
        if ( !_bittest64((const signed __int64 *)(v12[1] + 8 * (v23 >> 6)), v23 & 0x3F) )
          goto LABEL_21;
      }
LABEL_32:
      v32 = v22 - v19;
      if ( v22 - v19 < *v12 )
      {
        if ( v19 > 1 )
        {
          if ( *v12 - v32 >= v19 )
          {
            v45 = *v25;
            v46 = (__int64 *)(*v25 + 8 * (v32 >> 6));
            v47 = *v46;
            v48 = (__int64 *)(v45 + 8 * ((unsigned __int64)(v22 - 1) >> 6));
            if ( v46 == v48 )
            {
              v33 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v32) & v47) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v32;
              goto LABEL_36;
            }
            for ( m = ((-1LL << v32) & v47) == -1LL << v32; m; m = *v46 == -1 )
            {
              if ( ++v46 == v48 )
              {
                if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v22 - 1)) & *v46) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v22 - 1) )
                  goto LABEL_37;
                break;
              }
            }
          }
        }
        else if ( v19 == 1 )
        {
          v33 = _bittest64((const signed __int64 *)(*v25 + 8 * (v32 >> 6)), ((_BYTE)v22 - 1) & 0x3F);
LABEL_36:
          if ( v33 )
            goto LABEL_37;
        }
      }
      v24 -= v20;
      if ( !v24 )
        break;
    }
LABEL_37:
    v11 = v57;
    a2 = v54 * v23;
    a3 = v54 * v24;
    v8 = a1;
    a5 = a4;
  }
  if ( v57 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v53 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        i = (v53 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v53;
        if ( i )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
}
