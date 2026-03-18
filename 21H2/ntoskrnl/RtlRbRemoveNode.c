/*
 * XREFs of RtlRbRemoveNode @ 0x14034D8D0
 * Callers:
 *     KiRemoveSchedulingGroupQueue @ 0x140210CE4 (KiRemoveSchedulingGroupQueue.c)
 *     KiSetClockInterval @ 0x14022F2FC (KiSetClockInterval.c)
 *     PfSnNameRemove @ 0x14023A9D0 (PfSnNameRemove.c)
 *     RtlpHpVaMgrAlloc @ 0x14023CDE0 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x14023DB74 (RtlpHpVaMgrRangeCoalesce.c)
 *     IoStopDiskIoAttributionForContext @ 0x14024F74C (IoStopDiskIoAttributionForContext.c)
 *     MiRescanPageFileBitmapPortion @ 0x14025EDC8 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14025FB48 (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1402E22B0 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1402E2738 (MiBitmapsCachedEntryLengthChanged.c)
 *     KiRemoveTimer2 @ 0x1402F2AD0 (KiRemoveTimer2.c)
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x14034D5C0 (RtlpHpVsChunkCoalesce.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140350070 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1403513D8 (RtlpHpVsFreeChunkRemove.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035A364 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14035A718 (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14036E090 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpLargeFree @ 0x140370928 (RtlpHpLargeFree.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14045B5B2 (KiSetVirtualHeteroClockIntervalRequest.c)
 *     HalpPopCommonBufferEntry @ 0x14051253C (HalpPopCommonBufferEntry.c)
 *     MiRemoveSlabEntry @ 0x1405B1910 (MiRemoveSlabEntry.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405E10BC (PspJobIoRateVolumeEntryRemove.c)
 *     RtlRemovePointerMapping @ 0x1405E7870 (RtlRemovePointerMapping.c)
 *     VmpFaultEntryRemove @ 0x1406297E0 (VmpFaultEntryRemove.c)
 *     VmpMergeMemoryRanges @ 0x14062AAC8 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14062BA64 (VmpRemoveMemoryRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14068D310 (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1407973D0 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x14079781C (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapShrinkStorage @ 0x14091A000 (HvpViewMapShrinkStorage.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1409EB970 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1409EBDD0 (EtwpRegisterPrivateSession.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140B1B784 (MiLimitLoaderBlockTotalMemory.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140B1B910 (MiLimitLoaderBlockHighMemory.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B2920C (MiRemoveLargeFreeLoaderDescriptors.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  char v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  BOOL v13; // ebp
  __int64 v14; // r9
  char v15; // r9
  unsigned __int64 v16; // rax
  char v17; // cl
  unsigned __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r10
  __int64 v23; // rax
  char v24; // cl
  __int64 v25; // rax
  char v26; // al
  unsigned __int64 v27; // rcx
  char v28; // cl
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // r10
  unsigned __int64 v32; // rcx
  char v33; // r14
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  char v37; // dl
  bool v38; // zf
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  char v41; // cl
  unsigned __int64 v42; // rax
  char v43; // cl
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  char v48; // r10
  unsigned __int64 v49; // r15
  __int64 v50; // r14
  unsigned __int64 *v51; // r14
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  char v58; // cl
  char v59; // cl
  unsigned __int64 v60; // r9
  unsigned __int64 *v61; // r10
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rax
  int v64; // ecx
  __int64 v65; // rax
  unsigned __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 *v69; // r9
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r8
  __int64 v72; // rax
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // rax
  int v75; // ecx
  unsigned __int64 v76; // r9
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  unsigned __int64 *v79; // r15
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r9
  __int64 v82; // rsi
  unsigned __int64 v83; // rbp
  unsigned __int64 v84; // r10
  _BOOL8 v85; // r9
  unsigned __int64 v86; // rax
  int v87; // ecx
  unsigned __int64 *v88; // r15
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rsi
  unsigned __int64 *v93; // rsi
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // r9
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rsi
  unsigned __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // r14
  unsigned __int64 v102; // r9
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // r14
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax

  v4 = *(_QWORD *)a2;
  if ( (a1[1] & 1) != 0 && v4 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v4 ^= a2;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( (a1[1] & 1) == 0 )
      goto LABEL_3;
  }
  if ( v5 )
    v5 ^= a2;
LABEL_3:
  v6 = v5;
  if ( v4 )
    v6 = v4;
  v7 = 0LL;
  v8 = a1[1] & 1;
  v9 = 0LL;
  if ( v4 )
    v9 = v5;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v8 && v10 )
      v10 ^= a2;
    v11 = a2;
    if ( !v10 )
    {
      if ( v6 )
        *(_QWORD *)(v6 + 16) = 0LL;
      v16 = a1[1];
      v27 = *a1;
      if ( (v16 & 1) != 0 )
      {
        if ( v27 )
          v27 ^= (unsigned __int64)a1;
        else
          v27 = 0LL;
      }
      if ( v27 == a2 )
      {
        if ( (v16 & 1) != 0 )
        {
          v107 = 0LL;
          LOBYTE(v16) = (unsigned __int8)a1 ^ v6;
          if ( v6 )
            v107 = (unsigned __int64)a1 ^ v6;
          a1[1] = v107;
          v28 = v107 | 1;
          *((_BYTE *)a1 + 8) = v28;
        }
        else
        {
          a1[1] = v6;
          v28 = v6;
        }
        if ( (v28 & 1) != 0 )
        {
          LOBYTE(v16) = (unsigned __int8)a1 ^ v6;
          if ( v6 )
            v7 = (unsigned __int64)a1 ^ v6;
        }
        else
        {
          v7 = v6;
        }
        goto LABEL_33;
      }
      goto LABEL_323;
    }
    v12 = *(_QWORD *)(v10 + 8);
    if ( v8 && v12 )
      v12 ^= v10;
    if ( v12 == a2 )
    {
      v13 = 1;
    }
    else
    {
      v55 = *(_QWORD *)v10;
      if ( v8 && v55 )
        v55 ^= v10;
      if ( v55 != a2 )
        goto LABEL_323;
      v56 = a1[1];
      v13 = 0;
      if ( (v56 & 1) != 0 )
      {
        if ( v56 == 1 )
        {
          v57 = 0LL;
          LOBYTE(v56) = 1;
        }
        else
        {
          v57 = v56 ^ ((unsigned __int64)a1 | 1);
        }
      }
      else
      {
        v57 = a1[1];
      }
      if ( v57 == a2 )
      {
        v58 = v56 & 1;
        if ( v6 )
        {
          if ( v58 )
          {
            a1[1] = (unsigned __int64)a1 ^ v6;
            *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v6 | 1;
          }
          else
          {
            a1[1] = v6;
          }
        }
        else if ( v58 )
        {
          a1[1] = (unsigned __int64)a1 ^ v10;
          *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v10 | 1;
        }
        else
        {
          a1[1] = v10;
        }
      }
    }
    LOBYTE(v14) = *(_BYTE *)(a2 + 16);
    goto LABEL_14;
  }
  v29 = *(_QWORD *)v5;
  v11 = v5;
  v10 = v5;
  v13 = 1;
  if ( *(_QWORD *)v5 )
  {
    v13 = 0;
    do
    {
      v10 = v11;
      if ( v8 && v29 )
        v11 ^= v29;
      else
        v11 = v29;
      v29 = *(_QWORD *)v11;
    }
    while ( *(_QWORD *)v11 );
  }
  if ( v8 && v4 )
    v30 = v4 ^ v11;
  else
    v30 = v4;
  *(_QWORD *)v11 = v30;
  v31 = *(_QWORD *)(v4 + 16);
  v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
  v33 = a1[1] & 1;
  if ( v33 && v32 )
    v32 ^= v4;
  if ( v32 != a2 )
    goto LABEL_323;
  v34 = v11;
  if ( v33 )
    v34 = v4 ^ v11;
  *(_QWORD *)(v4 + 16) = v34 | v31 & 3;
  v35 = *(_QWORD *)(v5 + 16);
  v36 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
  v37 = a1[1] & 1;
  if ( v37 && v36 )
    v36 ^= v5;
  if ( v36 != a2 )
    goto LABEL_323;
  v38 = v37 == 0;
  v39 = v11;
  if ( !v38 )
    v39 = v5 ^ v11;
  v40 = v11 ^ v5;
  *(_QWORD *)(v5 + 16) = v39 | v35 & 3;
  v6 = *(_QWORD *)(v11 + 8);
  v41 = a1[1] & 1;
  if ( v41 && v6 )
  {
    v6 ^= v11;
  }
  else if ( !v41 )
  {
    v40 = v5;
  }
  v14 = *(_QWORD *)(v11 + 16);
  *(_QWORD *)(v11 + 8) = v40;
  v42 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
  v43 = a1[1] & 1;
  if ( v43 && v42 )
    v44 = v11 ^ v42;
  else
    v44 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v44 != v10 )
  {
    if ( v43 )
    {
      if ( !v42 )
        goto LABEL_233;
      v42 ^= v11;
    }
    if ( v42 )
      goto LABEL_323;
LABEL_233:
    if ( v11 != v10 )
      goto LABEL_323;
  }
  v45 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v43 )
  {
    if ( v45 )
      v45 ^= a2;
    if ( v45 )
      v45 ^= v11;
  }
  v46 = v45 | v14 & 3;
  *(_QWORD *)(v11 + 16) = v46;
  *(_BYTE *)(v11 + 16) = v46 ^ (v46 ^ *(_BYTE *)(a2 + 16)) & 1;
  v47 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v47 )
  {
    v103 = a1[1];
    v104 = *a1;
    if ( (v103 & 1) != 0 )
    {
      if ( v104 )
        v104 ^= (unsigned __int64)a1;
      else
        v104 = 0LL;
    }
    if ( v104 != a2 )
      goto LABEL_323;
    v105 = v11;
    if ( (v103 & 1) != 0 )
      v105 = (unsigned __int64)a1 ^ v11;
    *a1 = v105;
    goto LABEL_14;
  }
  v48 = a1[1] & 1;
  if ( !v48 )
  {
    v49 = *(_QWORD *)(v47 + 8);
    goto LABEL_64;
  }
  v47 ^= a2;
  v49 = *(_QWORD *)(v47 + 8);
  if ( !v49 )
  {
LABEL_64:
    v50 = 0LL;
    if ( v49 == a2 )
      v50 = 8LL;
    v51 = (unsigned __int64 *)(v47 + v50);
    v52 = *v51;
    if ( !v48 )
      goto LABEL_67;
    goto LABEL_196;
  }
  v106 = 0LL;
  if ( (v47 ^ v49) == a2 )
    v106 = 8LL;
  v51 = (unsigned __int64 *)(v47 + v106);
  v52 = *v51;
LABEL_196:
  if ( v52 )
    v52 ^= v47;
LABEL_67:
  if ( v52 != a2 )
    goto LABEL_323;
  v53 = v11 ^ v47;
  v54 = v11;
  if ( v48 )
    v54 = v53;
  *v51 = v54;
LABEL_14:
  v15 = v14 & 1;
  if ( (a1[1] & 1) != 0 && v6 )
  {
    *(_QWORD *)(v10 + 8LL * v13) = v6 ^ v10;
    goto LABEL_79;
  }
  LOBYTE(v16) = v13;
  *(_QWORD *)(v10 + 8LL * v13) = v6;
  if ( v6 )
  {
LABEL_79:
    v16 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v59 = a1[1] & 1;
    if ( v59 && v16 )
      v16 ^= v6;
    if ( v16 == v11 )
    {
      if ( v59 && v10 )
        v10 ^= v6;
      *(_QWORD *)(v6 + 16) = v10;
      return v16;
    }
LABEL_323:
    __fastfail(0x1Du);
  }
  if ( v15 )
    return v16;
  v17 = *((_BYTE *)a1 + 8);
  while ( 1 )
  {
    v18 = v10;
    v19 = !v13;
    v20 = *(_QWORD *)(v10 + 8 * v19);
    if ( (v17 & 1) != 0 && v20 )
      v21 = v10 ^ v20;
    else
      v21 = *(_QWORD *)(v10 + 8 * v19);
    v22 = (unsigned __int64 *)(v21 + 16);
    if ( (*(_BYTE *)(v21 + 16) & 1) == 0 )
      goto LABEL_21;
    v73 = *a1;
    if ( (a1[1] & 1) != 0 )
    {
      if ( v73 )
        v73 ^= (unsigned __int64)a1;
      else
        v73 = 0LL;
    }
    v74 = *v22 & 0xFFFFFFFFFFFFFFFCuLL;
    v75 = a1[1] & 1;
    if ( (a1[1] & 1) != 0 && v74 )
      v74 ^= v21;
    if ( v74 != v10 )
      goto LABEL_323;
    if ( (a1[1] & 1) != 0 && v20 )
      v20 ^= v10;
    if ( v20 != v21 )
      goto LABEL_323;
    v76 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 )
    {
      if ( !v76 )
      {
LABEL_202:
        if ( v73 != v10 )
          goto LABEL_323;
        v73 = v21;
        goto LABEL_130;
      }
      v76 ^= v10;
    }
    if ( !v76 )
      goto LABEL_202;
    v77 = *(_QWORD *)(v76 + 8);
    if ( (a1[1] & 1) != 0 && v77 )
      v77 ^= v76;
    if ( v77 == v10 )
    {
      v78 = (a1[1] & 1) != 0 ? v21 ^ v76 : v21;
      *(_QWORD *)(v76 + 8) = v78;
    }
    else
    {
      v100 = *(_QWORD *)v76;
      if ( (a1[1] & 1) != 0 && v100 )
        v100 ^= v76;
      if ( v100 != v10 )
        goto LABEL_323;
      *(_QWORD *)v76 = (a1[1] & 1) != 0 ? v21 ^ v76 : v21;
    }
LABEL_130:
    if ( v75 && v76 )
    {
      v79 = (unsigned __int64 *)(v21 + 8LL * v13);
      *v22 = *(_DWORD *)v22 & 3 | v21 ^ v76;
      v80 = *v79;
    }
    else
    {
      v79 = (unsigned __int64 *)(v21 + 8LL * v13);
      *v22 = v76 | *(_DWORD *)v22 & 3;
      v80 = *v79;
      if ( !v75 )
        goto LABEL_132;
    }
    if ( !v80 )
      goto LABEL_133;
    v80 ^= v21;
LABEL_132:
    if ( v80 )
    {
      v98 = *(_QWORD *)(v80 + 16);
      v99 = v98 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v75 && v99 )
        v99 ^= v80;
      if ( v99 != v21 )
        goto LABEL_323;
      if ( v75 )
        *(_QWORD *)(v80 + 16) = v10 ^ v80 | v98 & 3;
      else
        *(_QWORD *)(v80 + 16) = v10 | v98 & 3;
    }
LABEL_133:
    if ( v75 && v80 )
    {
      *(_QWORD *)(v10 + 8 * v19) = v10 ^ v80;
      v81 = v10 ^ v21;
LABEL_266:
      *v79 = v81;
      goto LABEL_136;
    }
    *(_QWORD *)(v10 + 8 * v19) = v80;
    v81 = v10 ^ v21;
    if ( v75 )
      goto LABEL_266;
    *v79 = v10;
    v81 = v21;
LABEL_136:
    *(_QWORD *)(v10 + 16) = v81 | *(_DWORD *)(v10 + 16) & 3;
    if ( (a1[1] & 1) != 0 )
    {
      if ( v73 )
        v73 ^= (unsigned __int64)a1;
      else
        v73 = 0LL;
    }
    *a1 = v73;
    *(_BYTE *)v22 &= ~1u;
    *(_BYTE *)(v10 + 16) |= 1u;
    v17 = *((_BYTE *)a1 + 8);
    v21 = *(_QWORD *)(v10 + 8 * v19);
    if ( (v17 & 1) != 0 && v21 )
      v21 ^= v10;
LABEL_21:
    v23 = *(_QWORD *)v21;
    v24 = v17 & 1;
    if ( *(_QWORD *)v21 )
    {
      if ( v24 )
        v23 ^= v21;
      if ( (*(_BYTE *)(v23 + 16) & 1) != 0 )
        break;
    }
    v25 = *(_QWORD *)(v21 + 8);
    if ( v25 )
    {
      if ( v24 )
        v25 ^= v21;
      if ( (*(_BYTE *)(v25 + 16) & 1) != 0 )
        break;
    }
    v26 = *(_BYTE *)(v10 + 16);
    if ( (v26 & 1) != 0 )
    {
      LOBYTE(v16) = v26 & 0xFE;
      *(_BYTE *)(v10 + 16) = v16;
      *(_BYTE *)(v21 + 16) |= 1u;
      return v16;
    }
    *(_BYTE *)(v21 + 16) |= 1u;
    v17 = *((_BYTE *)a1 + 8);
    v16 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v17 & 1) != 0 && v16 )
      v10 ^= v16;
    else
      v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v10 )
      return v16;
    v72 = *(_QWORD *)(v10 + 8);
    if ( (v17 & 1) != 0 && v72 )
      v72 ^= v10;
    v13 = v72 == v18;
  }
  v60 = *(_QWORD *)(v21 + 8 * v19);
  if ( v24 )
  {
    if ( v60 )
    {
      v60 ^= v21;
      goto LABEL_91;
    }
LABEL_146:
    v84 = *(_QWORD *)(v21 + 8LL * v13);
    if ( v24 && v84 )
      v84 ^= v21;
    *(_BYTE *)(v84 + 16) &= ~1u;
    v85 = !v13;
    v86 = *(_QWORD *)(v84 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v87 = a1[1] & 1;
    if ( (a1[1] & 1) != 0 && v86 )
      v86 ^= v84;
    if ( v86 != v21 )
      goto LABEL_323;
    v88 = (unsigned __int64 *)(v21 + 8LL * v13);
    v89 = *v88;
    if ( (a1[1] & 1) != 0 && v89 )
      v89 ^= v21;
    if ( v89 != v84 )
      goto LABEL_323;
    v90 = *(_QWORD *)(v10 + 8 * v85);
    if ( (a1[1] & 1) != 0 && v90 )
      v90 ^= v10;
    if ( v90 != v21 )
      goto LABEL_323;
    v91 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 && v91 )
      v91 ^= v21;
    if ( v91 != v10 )
      goto LABEL_323;
    v92 = v10 ^ v84;
    if ( (a1[1] & 1) != 0 )
    {
      *(_QWORD *)(v10 + 8 * v85) = v92;
      if ( v10 )
      {
        v108 = v92 | *(_DWORD *)(v84 + 16) & 3;
        v93 = (unsigned __int64 *)(v84 + 8 * v85);
        *(_QWORD *)(v84 + 16) = v108;
        v94 = *v93;
LABEL_287:
        if ( !v94 )
          goto LABEL_159;
        v94 ^= v84;
LABEL_158:
        if ( v94 )
        {
          v101 = *(_QWORD *)(v94 + 16);
          v102 = v101 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v87 && v102 )
            v102 ^= v94;
          if ( v102 != v84 )
            goto LABEL_323;
          if ( v87 )
            *(_QWORD *)(v94 + 16) = v21 ^ v94 | v101 & 3;
          else
            *(_QWORD *)(v94 + 16) = v21 | v101 & 3;
        }
LABEL_159:
        if ( v87 && v94 )
        {
          *v88 = v21 ^ v94;
          v95 = v84 ^ v21;
        }
        else
        {
          *v88 = v94;
          v95 = v84 ^ v21;
          if ( !v87 )
          {
            *v93 = v21;
            v95 = v84;
LABEL_162:
            v96 = v95 | *(_DWORD *)(v21 + 16) & 3;
            v60 = v21;
            *(_QWORD *)(v21 + 16) = v96;
            v21 = v84;
            goto LABEL_93;
          }
        }
        *v93 = v95;
        goto LABEL_162;
      }
    }
    else
    {
      *(_QWORD *)(v10 + 8 * v85) = v84;
    }
    v93 = (unsigned __int64 *)(v84 + 8 * v85);
    *(_QWORD *)(v84 + 16) = v10 | *(_DWORD *)(v84 + 16) & 3;
    v94 = *v93;
    if ( !v87 )
      goto LABEL_158;
    goto LABEL_287;
  }
LABEL_91:
  if ( !v60 || (*(_BYTE *)(v60 + 16) & 1) == 0 )
    goto LABEL_146;
LABEL_93:
  v61 = (unsigned __int64 *)(v10 + 16);
  *(_BYTE *)(v21 + 16) ^= (*(_BYTE *)(v21 + 16) ^ *(_BYTE *)(v10 + 16)) & 1;
  *(_BYTE *)(v10 + 16) &= ~1u;
  *(_BYTE *)(v60 + 16) &= ~1u;
  v62 = *a1;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v62 )
      v62 ^= (unsigned __int64)a1;
    else
      v62 = 0LL;
  }
  v63 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v64 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v63 )
    v63 ^= v21;
  if ( v63 != v10 )
    goto LABEL_323;
  v65 = *(_QWORD *)(v10 + 8 * v19);
  if ( (a1[1] & 1) != 0 && v65 )
    v65 ^= v10;
  if ( v65 != v21 )
    goto LABEL_323;
  v66 = *v61 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) == 0 )
    goto LABEL_99;
  if ( !v66 )
    goto LABEL_190;
  v66 ^= v10;
LABEL_99:
  if ( !v66 )
  {
LABEL_190:
    if ( v62 == v10 )
    {
      v62 = v21;
      goto LABEL_105;
    }
    goto LABEL_323;
  }
  v67 = *(_QWORD *)(v66 + 8);
  if ( (a1[1] & 1) != 0 && v67 )
    v67 ^= v66;
  if ( v67 != v10 )
  {
    v97 = *(_QWORD *)v66;
    if ( (a1[1] & 1) != 0 && v97 )
      v97 ^= v66;
    if ( v97 == v10 )
    {
      if ( (a1[1] & 1) != 0 )
        *(_QWORD *)v66 = v21 ^ v66;
      else
        *(_QWORD *)v66 = v21;
      goto LABEL_105;
    }
    goto LABEL_323;
  }
  if ( (a1[1] & 1) != 0 )
    v68 = v21 ^ v66;
  else
    v68 = v21;
  *(_QWORD *)(v66 + 8) = v68;
LABEL_105:
  if ( v64 && v66 )
  {
    *(_QWORD *)(v21 + 16) = *(_DWORD *)(v21 + 16) & 3 | v21 ^ v66;
    v69 = (unsigned __int64 *)(v21 + 8LL * v13);
    v70 = *v69;
LABEL_241:
    if ( v70 )
    {
      v70 ^= v21;
      goto LABEL_107;
    }
    goto LABEL_108;
  }
  *(_QWORD *)(v21 + 16) = v66 | *(_DWORD *)(v21 + 16) & 3;
  v69 = (unsigned __int64 *)(v21 + 8LL * v13);
  v70 = *v69;
  if ( v64 )
    goto LABEL_241;
LABEL_107:
  if ( v70 )
  {
    v82 = *(_QWORD *)(v70 + 16);
    v83 = v82 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v64 && v83 )
      v83 ^= v70;
    if ( v83 == v21 )
    {
      if ( v64 )
        *(_QWORD *)(v70 + 16) = v10 ^ v70 | v82 & 3;
      else
        *(_QWORD *)(v70 + 16) = v10 | v82 & 3;
      goto LABEL_108;
    }
    goto LABEL_323;
  }
LABEL_108:
  if ( v64 && v70 )
  {
    *(_QWORD *)(v10 + 8 * v19) = v10 ^ v70;
    v71 = v21 ^ v10;
LABEL_255:
    *v69 = v71;
  }
  else
  {
    *(_QWORD *)(v10 + 8 * v19) = v70;
    v71 = v21 ^ v10;
    if ( v64 )
      goto LABEL_255;
    *v69 = v10;
    v71 = v21;
  }
  v16 = v71 | *(_DWORD *)v61 & 3;
  *v61 = v16;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v62 )
      v7 = (unsigned __int64)a1 ^ v62;
  }
  else
  {
    v7 = v62;
  }
LABEL_33:
  *a1 = v7;
  return v16;
}
