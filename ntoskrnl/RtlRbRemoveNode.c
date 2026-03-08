/*
 * XREFs of RtlRbRemoveNode @ 0x14024C010
 * Callers:
 *     MiInvalidatePageFileBitmapsCache @ 0x14020A3E4 (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14020B47C (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14020B884 (MiBitmapsCachedEntryLengthChanged.c)
 *     KiRemoveTimer2 @ 0x140248860 (KiRemoveTimer2.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x14024AB60 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x14024B8C0 (RtlpHpVsChunkCoalesce.c)
 *     KiAbEntryRemoveFromTree @ 0x14024BC30 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14024E660 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14024E804 (RtlpHpSegFreeRangeRemove.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402AEF44 (KiRemoveSchedulingGroupQueue.c)
 *     RtlpHpLargeFree @ 0x1402B6B40 (RtlpHpLargeFree.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402C4224 (IoStopDiskIoAttributionForContext.c)
 *     MiRescanPageFileBitmapPortion @ 0x1402DF480 (MiRescanPageFileBitmapPortion.c)
 *     PfSnNameRemove @ 0x1402E820C (PfSnNameRemove.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x1402F136C (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpVaMgrAlloc @ 0x14030424C (RtlpHpVaMgrAlloc.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140358150 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035827C (KiAbEntryUpdateOwnerTreePosition.c)
 *     KasanDriverUnloadImage @ 0x14036C820 (KasanDriverUnloadImage.c)
 *     KiSetClockInterval @ 0x1403ACBC4 (KiSetClockInterval.c)
 *     MiRemoveSlabEntry @ 0x1403BC4FC (MiRemoveSlabEntry.c)
 *     VmpFaultEntryRemove @ 0x14045E3A6 (VmpFaultEntryRemove.c)
 *     HalpPopCommonBufferEntry @ 0x14050DB00 (HalpPopCommonBufferEntry.c)
 *     KiResetClockInterval @ 0x14056D814 (KiResetClockInterval.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405A2268 (PspJobIoRateVolumeEntryRemove.c)
 *     RtlRemovePointerMapping @ 0x1405A8600 (RtlRemovePointerMapping.c)
 *     VmpMergeMemoryRanges @ 0x1405F7BB4 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x1405F88E4 (VmpRemoveMemoryRange.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140695900 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x140695C68 (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 *     PfProcessExitNotification @ 0x1407E6B80 (PfProcessExitNotification.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1409E9610 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1409E9A6C (EtwpRegisterPrivateSession.c)
 *     HvpViewMapShrinkStorage @ 0x140A1A654 (HvpViewMapShrinkStorage.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140B5FB90 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140B5FCCC (MiLimitLoaderBlockTotalMemory.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B69ECC (MiRemoveLargeFreeLoaderDescriptors.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  char v2; // bl
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r11
  char v12; // cl
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  char v16; // cl
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  BOOL v20; // ebp
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // r9
  char v24; // al
  char v25; // r9
  char v26; // cl
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  _BOOL8 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 *v33; // r9
  __int64 v34; // rax
  char v35; // cl
  __int64 v36; // rax
  char v37; // al
  unsigned __int64 v38; // rcx
  char v39; // bl
  unsigned __int64 v40; // rcx
  __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  char v43; // r14
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  char v47; // dl
  bool v48; // zf
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  char v51; // cl
  unsigned __int64 v52; // rax
  char v53; // cl
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  char v58; // bl
  unsigned __int64 v59; // r15
  unsigned __int64 *v60; // r14
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rax
  char v64; // cl
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rbp
  unsigned __int64 v67; // rax
  int v68; // ecx
  __int64 v69; // rax
  unsigned __int64 v70; // r8
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 *v73; // r9
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // r8
  char v77; // cl
  __int64 v78; // rax
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // rax
  int v81; // ecx
  unsigned __int64 v82; // r8
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 *v85; // r13
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // r8
  __int64 v89; // rsi
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // r9
  _BOOL8 v92; // rbp
  unsigned __int64 v93; // rax
  int v94; // ecx
  _BOOL8 v95; // r8
  unsigned __int64 *v96; // r15
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rbp
  unsigned __int64 *v101; // r14
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // r8
  unsigned __int64 v105; // rax
  __int64 v106; // r14
  unsigned __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rbp
  unsigned __int64 v111; // r8
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rbx
  unsigned __int64 v114; // rcx
  __int64 v115; // r14
  unsigned __int64 v117; // [rsp+30h] [rbp+8h]

  v2 = *((_BYTE *)a1 + 8);
  v4 = *(_QWORD *)a2;
  if ( (v2 & 1) != 0 && v4 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v4 ^= a2;
    v7 = v4;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)a2;
    if ( (v2 & 1) == 0 )
      goto LABEL_3;
  }
  if ( v6 )
    v6 ^= a2;
LABEL_3:
  v8 = v6;
  if ( v4 )
    v8 = v7;
  v9 = 0LL;
  v10 = 0LL;
  if ( v4 )
    v10 = v6;
  if ( !v10 )
  {
    v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v12 = v2 & 1;
    if ( (v2 & 1) != 0 && v11 )
      v11 ^= a2;
    v13 = a2;
    if ( !v11 )
    {
      if ( v8 )
        *(_QWORD *)(v8 + 16) = 0LL;
      v14 = a1[1];
      v15 = *a1;
      if ( (v14 & 1) != 0 && v15 )
        v15 ^= (unsigned __int64)a1;
      if ( v15 == a2 )
      {
        if ( (v14 & 1) != 0 )
        {
          v114 = 0LL;
          LOBYTE(v14) = (unsigned __int8)a1 ^ v8;
          if ( v8 )
            v114 = (unsigned __int64)a1 ^ v8;
          a1[1] = v114;
          v16 = v114 | 1;
          *((_BYTE *)a1 + 8) = v16;
        }
        else
        {
          a1[1] = v8;
          v16 = v8;
        }
        if ( (v16 & 1) != 0 )
        {
          LOBYTE(v14) = (unsigned __int8)a1 ^ v8;
          if ( v8 )
            v9 = (unsigned __int64)a1 ^ v8;
        }
        else
        {
          v9 = v8;
        }
        goto LABEL_18;
      }
      goto LABEL_323;
    }
    v17 = *(_QWORD *)(v11 + 8);
    if ( v12 && v17 )
      v17 ^= v11;
    if ( v17 == a2 )
    {
      v20 = 1;
    }
    else
    {
      v18 = *(_QWORD *)v11;
      if ( v12 && v18 )
        v18 ^= v11;
      if ( v18 != a2 )
        goto LABEL_323;
      v19 = a1[1];
      v20 = 0;
      if ( (v19 & 1) != 0 )
      {
        if ( v19 == 1 )
          v21 = 0LL;
        else
          v21 = v19 ^ ((unsigned __int64)a1 | 1);
      }
      else
      {
        v21 = a1[1];
      }
      v2 = a1[1];
      if ( v21 == a2 )
      {
        v22 = v19 & 1;
        if ( v8 )
        {
          if ( v22 )
          {
            a1[1] = (unsigned __int64)a1 ^ v8;
            *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v8 | 1;
            v2 = (unsigned __int8)a1 ^ v8 | 1;
          }
          else
          {
            a1[1] = v8;
            v2 = v8;
          }
        }
        else if ( v22 )
        {
          a1[1] = (unsigned __int64)a1 ^ v11;
          *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v11 | 1;
          v2 = (unsigned __int8)a1 ^ v11 | 1;
        }
        else
        {
          a1[1] = v11;
          v2 = v11;
        }
      }
    }
    LOBYTE(v23) = *(_BYTE *)(a2 + 16);
    v24 = v2;
    goto LABEL_36;
  }
  v38 = *(_QWORD *)v6;
  v20 = 1;
  v39 = v2 & 1;
  v13 = v6;
  v11 = v6;
  if ( *(_QWORD *)v6 )
  {
    v20 = 0;
    do
    {
      v11 = v13;
      if ( v39 && v38 )
        v13 ^= v38;
      else
        v13 = v38;
      v38 = *(_QWORD *)v13;
    }
    while ( *(_QWORD *)v13 );
  }
  if ( v39 && v4 )
    v40 = v4 ^ v13;
  else
    v40 = v4;
  *(_QWORD *)v13 = v40;
  v41 = *(_QWORD *)(v4 + 16);
  v42 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
  v43 = a1[1] & 1;
  if ( v43 && v42 )
    v42 ^= v4;
  if ( v42 != a2 )
    goto LABEL_323;
  v44 = v13;
  if ( v43 )
    v44 = v4 ^ v13;
  *(_QWORD *)(v4 + 16) = v44 | v41 & 3;
  v45 = *(_QWORD *)(v6 + 16);
  v46 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
  v47 = a1[1] & 1;
  if ( v47 && v46 )
    v46 ^= v6;
  if ( v46 != a2 )
    goto LABEL_323;
  v48 = v47 == 0;
  v49 = v13;
  if ( !v48 )
    v49 = v6 ^ v13;
  v50 = v6 ^ v13;
  *(_QWORD *)(v6 + 16) = v49 | v45 & 3;
  v8 = *(_QWORD *)(v13 + 8);
  v51 = a1[1] & 1;
  if ( v51 && v8 )
  {
    v8 ^= v13;
  }
  else if ( !v51 )
  {
    v50 = v6;
  }
  v23 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 8) = v50;
  v52 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
  v53 = a1[1] & 1;
  if ( v53 && v52 )
    v54 = v13 ^ v52;
  else
    v54 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v54 != v11 )
  {
    if ( v53 )
    {
      if ( !v52 )
        goto LABEL_229;
      v52 ^= v13;
    }
    if ( v52 )
      goto LABEL_323;
LABEL_229:
    if ( v13 != v11 )
      goto LABEL_323;
  }
  v55 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v53 )
  {
    if ( v55 )
      v55 ^= a2;
    if ( v55 )
      v55 ^= v13;
  }
  v56 = v55 | v23 & 3;
  *(_QWORD *)(v13 + 16) = v56;
  *(_BYTE *)(v13 + 16) = v56 ^ (*(_BYTE *)(a2 + 16) ^ v56) & 1;
  v57 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v57 )
  {
    v112 = a1[1];
    v113 = *a1;
    v24 = v112;
    if ( (v112 & 1) != 0 && v113 )
      v113 ^= (unsigned __int64)a1;
    if ( v113 != a2 )
      goto LABEL_323;
    if ( (v112 & 1) != 0 )
    {
      *a1 = (unsigned __int64)a1 ^ v13;
    }
    else
    {
      v24 = a1[1];
      *a1 = v13;
    }
    goto LABEL_36;
  }
  v58 = a1[1] & 1;
  if ( v58 )
  {
    v57 ^= a2;
    v59 = *(_QWORD *)(v57 + 8);
    if ( v59 )
    {
      v115 = 0LL;
      if ( (v57 ^ v59) == a2 )
        v115 = 8LL;
      v60 = (unsigned __int64 *)(v57 + v115);
      v61 = *v60;
      goto LABEL_210;
    }
  }
  else
  {
    v59 = *(_QWORD *)(v57 + 8);
  }
  v60 = (unsigned __int64 *)(v57 + 8LL * (v59 == a2));
  v61 = *v60;
  if ( v58 )
  {
LABEL_210:
    if ( v61 )
      v61 ^= v57;
  }
  if ( v61 != a2 )
    goto LABEL_323;
  v62 = v13 ^ v57;
  v63 = v13;
  if ( v58 )
    v63 = v62;
  *v60 = v63;
  v24 = *((_BYTE *)a1 + 8);
LABEL_36:
  v25 = v23 & 1;
  if ( (v24 & 1) != 0 && v8 )
  {
    *(_QWORD *)(v11 + 8LL * v20) = v8 ^ v11;
    goto LABEL_76;
  }
  LOBYTE(v14) = v20;
  *(_QWORD *)(v11 + 8LL * v20) = v8;
  if ( v8 )
  {
LABEL_76:
    v14 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v64 = a1[1] & 1;
    if ( v64 && v14 )
      v14 ^= v8;
    if ( v14 == v13 )
    {
      if ( v64 && v11 )
        v11 ^= v8;
      *(_QWORD *)(v8 + 16) = v11;
      return v14;
    }
    goto LABEL_323;
  }
  if ( v25 )
    return v14;
  while ( 1 )
  {
    v26 = *((_BYTE *)a1 + 8);
    v27 = v11;
    v28 = !v20;
    v29 = v20;
    v30 = 8 * v28;
    v31 = *(_QWORD *)(8 * v28 + v11);
    if ( (v26 & 1) != 0 && v31 )
      v32 = v11 ^ v31;
    else
      v32 = *(_QWORD *)(8 * v28 + v11);
    v33 = (unsigned __int64 *)(v32 + 16);
    if ( (*(_BYTE *)(v32 + 16) & 1) == 0 )
      goto LABEL_42;
    v79 = *a1;
    if ( (a1[1] & 1) != 0 && v79 )
      v79 ^= (unsigned __int64)a1;
    v80 = *v33 & 0xFFFFFFFFFFFFFFFCuLL;
    v117 = v79;
    v81 = v26 & 1;
    if ( v81 && v80 )
      v80 ^= v32;
    if ( v80 != v11 )
      goto LABEL_323;
    if ( v81 && v31 )
      v31 ^= v11;
    if ( v31 != v32 )
      goto LABEL_323;
    v82 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v81 )
    {
      if ( !v82 )
      {
LABEL_186:
        if ( v79 != v11 )
          goto LABEL_323;
        v79 = v32;
        v117 = v32;
        goto LABEL_128;
      }
      v82 ^= v11;
    }
    if ( !v82 )
      goto LABEL_186;
    v83 = *(_QWORD *)(v82 + 8);
    if ( v81 && v83 )
      v83 ^= v82;
    if ( v83 == v11 )
    {
      v84 = v81 ? v32 ^ v82 : v32;
      *(_QWORD *)(v82 + 8) = v84;
    }
    else
    {
      v109 = *(_QWORD *)v82;
      if ( v81 && v109 )
        v109 ^= v82;
      if ( v109 != v11 )
        goto LABEL_323;
      *(_QWORD *)v82 = v81 ? v32 ^ v82 : v32;
    }
LABEL_128:
    if ( v81 && v82 )
    {
      v85 = (unsigned __int64 *)(v32 + 8LL * v20);
      *v33 = v32 ^ v82 | *(_DWORD *)v33 & 3;
      v86 = *v85;
    }
    else
    {
      v85 = (unsigned __int64 *)(v32 + 8LL * v20);
      *v33 = v82 | *(_DWORD *)v33 & 3;
      v86 = *v85;
      if ( !v81 )
        goto LABEL_130;
    }
    if ( !v86 )
    {
LABEL_131:
      v87 = v11 ^ v86;
      goto LABEL_132;
    }
    v86 ^= v32;
LABEL_130:
    if ( !v86 )
      goto LABEL_131;
    v106 = *(_QWORD *)(v86 + 16);
    v107 = v106 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v81 && v107 )
      v107 ^= v86;
    if ( v107 != v32 )
      goto LABEL_323;
    v87 = v11 ^ v86;
    *(_QWORD *)(v86 + 16) = v81 ? v87 | v106 & 3 : v11 | v106 & 3;
    v79 = v117;
LABEL_132:
    if ( v81 && v86 )
    {
      *(_QWORD *)(v30 + v11) = v87;
      v88 = v11 ^ v32;
LABEL_265:
      *v85 = v88;
      goto LABEL_135;
    }
    *(_QWORD *)(v30 + v11) = v86;
    v88 = v11 ^ v32;
    if ( v81 )
      goto LABEL_265;
    *v85 = v11;
    v88 = v32;
LABEL_135:
    *(_QWORD *)(v11 + 16) = v88 | *(_DWORD *)(v11 + 16) & 3;
    if ( (a1[1] & 1) != 0 )
    {
      if ( v79 )
        v79 ^= (unsigned __int64)a1;
      else
        v79 = 0LL;
    }
    *a1 = v79;
    *(_BYTE *)v33 &= ~1u;
    *(_BYTE *)(v11 + 16) |= 1u;
    v26 = *((_BYTE *)a1 + 8);
    v32 = *(_QWORD *)(v30 + v11);
    if ( (v26 & 1) != 0 && v32 )
      v32 ^= v11;
LABEL_42:
    v34 = *(_QWORD *)v32;
    v35 = v26 & 1;
    if ( *(_QWORD *)v32 )
    {
      if ( v35 )
        v34 ^= v32;
      if ( (*(_BYTE *)(v34 + 16) & 1) != 0 )
        break;
    }
    v36 = *(_QWORD *)(v32 + 8);
    if ( v36 )
    {
      if ( v35 )
        v36 ^= v32;
      if ( (*(_BYTE *)(v36 + 16) & 1) != 0 )
        break;
    }
    v37 = *(_BYTE *)(v11 + 16);
    if ( (v37 & 1) != 0 )
    {
      LOBYTE(v14) = v37 & 0xFE;
      *(_BYTE *)(v11 + 16) = v14;
      *(_BYTE *)(v32 + 16) |= 1u;
      return v14;
    }
    *(_BYTE *)(v32 + 16) |= 1u;
    v14 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v77 = a1[1] & 1;
    if ( v77 && v14 )
      v11 ^= v14;
    else
      v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v11 )
      return v14;
    v78 = *(_QWORD *)(v11 + 8);
    if ( v77 && v78 )
      v78 ^= v11;
    v20 = v78 == v27;
  }
  v65 = *(_QWORD *)(v30 + v32);
  if ( v35 )
  {
    if ( v65 )
    {
      v65 ^= v32;
      goto LABEL_84;
    }
LABEL_145:
    v91 = *(_QWORD *)(v32 + 8LL * v20);
    if ( v35 && v91 )
      v91 ^= v32;
    *(_BYTE *)(v91 + 16) &= ~1u;
    v92 = !v20;
    v93 = *(_QWORD *)(v91 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v94 = a1[1] & 1;
    if ( (a1[1] & 1) != 0 && v93 )
      v93 ^= v91;
    if ( v93 != v32 )
      goto LABEL_323;
    v95 = v92;
    v96 = (unsigned __int64 *)(v32 + 8 * !v92);
    v97 = *v96;
    if ( (a1[1] & 1) != 0 && v97 )
      v97 ^= v32;
    if ( v97 != v91 )
      goto LABEL_323;
    v98 = *(_QWORD *)(v11 + 8 * v92);
    if ( (a1[1] & 1) != 0 && v98 )
      v98 ^= v11;
    if ( v98 != v32 )
      goto LABEL_323;
    v99 = *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 && v99 )
      v99 ^= v32;
    if ( v99 != v11 )
      goto LABEL_323;
    v100 = v91 ^ v11;
    if ( (a1[1] & 1) != 0 )
    {
      *(_QWORD *)(v11 + 8 * v95) = v100;
      if ( v11 )
      {
        v101 = (unsigned __int64 *)(v91 + 8 * v95);
        *(_QWORD *)(v91 + 16) = v100 | *(_DWORD *)(v91 + 16) & 3;
        v102 = *v101;
LABEL_282:
        if ( !v102 )
          goto LABEL_158;
        v102 ^= v91;
LABEL_157:
        if ( v102 )
        {
          v110 = *(_QWORD *)(v102 + 16);
          v111 = v110 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v94 && v111 )
            v111 ^= v102;
          if ( v111 != v91 )
            goto LABEL_323;
          v103 = v102 ^ v32;
          if ( v94 )
            *(_QWORD *)(v102 + 16) = v103 | v110 & 3;
          else
            *(_QWORD *)(v102 + 16) = v32 | v110 & 3;
LABEL_159:
          if ( v94 && v102 )
          {
            *v96 = v103;
            v104 = v91 ^ v32;
          }
          else
          {
            *v96 = v102;
            v104 = v91 ^ v32;
            if ( !v94 )
            {
              *v101 = v32;
              v104 = v91;
LABEL_162:
              v105 = v104 | *(_DWORD *)(v32 + 16) & 3;
              v65 = v32;
              *(_QWORD *)(v32 + 16) = v105;
              v32 = v91;
              goto LABEL_86;
            }
          }
          *v101 = v104;
          goto LABEL_162;
        }
LABEL_158:
        v103 = v32 ^ v102;
        goto LABEL_159;
      }
    }
    else
    {
      *(_QWORD *)(v11 + 8 * v95) = v91;
    }
    v101 = (unsigned __int64 *)(v91 + 8 * v95);
    *(_QWORD *)(v91 + 16) = v11 | *(_DWORD *)(v91 + 16) & 3;
    v102 = *v101;
    if ( !v94 )
      goto LABEL_157;
    goto LABEL_282;
  }
LABEL_84:
  if ( !v65 || (*(_BYTE *)(v65 + 16) & 1) == 0 )
    goto LABEL_145;
LABEL_86:
  *(_BYTE *)(v32 + 16) ^= (*(_BYTE *)(v32 + 16) ^ *(_BYTE *)(v11 + 16)) & 1;
  *(_BYTE *)(v11 + 16) &= ~1u;
  *(_BYTE *)(v65 + 16) &= ~1u;
  v66 = *a1;
  if ( (a1[1] & 1) != 0 && v66 )
    v66 ^= (unsigned __int64)a1;
  v67 = *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v68 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v67 )
    v67 ^= v32;
  if ( v67 != v11 )
    goto LABEL_323;
  v69 = *(_QWORD *)(v30 + v11);
  if ( (a1[1] & 1) != 0 && v69 )
    v69 ^= v11;
  if ( v69 != v32 )
    goto LABEL_323;
  v70 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) == 0 )
    goto LABEL_92;
  if ( !v70 )
    goto LABEL_184;
  v70 ^= v11;
LABEL_92:
  if ( !v70 )
  {
LABEL_184:
    if ( v66 == v11 )
    {
      v66 = v32;
      goto LABEL_98;
    }
    goto LABEL_323;
  }
  v71 = *(_QWORD *)(v70 + 8);
  if ( (a1[1] & 1) != 0 && v71 )
    v71 ^= v70;
  if ( v71 != v11 )
  {
    v108 = *(_QWORD *)v70;
    if ( (a1[1] & 1) != 0 && v108 )
      v108 ^= v70;
    if ( v108 == v11 )
    {
      if ( (a1[1] & 1) != 0 )
        *(_QWORD *)v70 = v32 ^ v70;
      else
        *(_QWORD *)v70 = v32;
      goto LABEL_98;
    }
    goto LABEL_323;
  }
  if ( (a1[1] & 1) != 0 )
    v72 = v32 ^ v70;
  else
    v72 = v32;
  *(_QWORD *)(v70 + 8) = v72;
LABEL_98:
  if ( v68 && v70 )
  {
    v73 = (unsigned __int64 *)(v32 + 8 * v29);
    *(_QWORD *)(v32 + 16) = v32 ^ v70 | *(_DWORD *)(v32 + 16) & 3;
    v74 = *v73;
LABEL_238:
    if ( v74 )
    {
      v74 ^= v32;
      goto LABEL_100;
    }
    goto LABEL_101;
  }
  v73 = (unsigned __int64 *)(v32 + 8 * v29);
  *(_QWORD *)(v32 + 16) = v70 | *(_DWORD *)(v32 + 16) & 3;
  v74 = *v73;
  if ( v68 )
    goto LABEL_238;
LABEL_100:
  if ( !v74 )
  {
LABEL_101:
    v75 = v11 ^ v74;
    goto LABEL_102;
  }
  v89 = *(_QWORD *)(v74 + 16);
  v90 = v89 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v68 && v90 )
    v90 ^= v74;
  if ( v90 != v32 )
LABEL_323:
    __fastfail(0x1Du);
  v75 = v11 ^ v74;
  if ( v68 )
    *(_QWORD *)(v74 + 16) = v75 | v89 & 3;
  else
    *(_QWORD *)(v74 + 16) = v11 | v89 & 3;
LABEL_102:
  if ( v68 && v74 )
  {
    *(_QWORD *)(v30 + v11) = v75;
    v76 = v11 ^ v32;
LABEL_256:
    *v73 = v76;
  }
  else
  {
    *(_QWORD *)(v30 + v11) = v74;
    v76 = v11 ^ v32;
    if ( v68 )
      goto LABEL_256;
    *v73 = v11;
    v76 = v32;
  }
  v14 = v76 | *(_DWORD *)(v11 + 16) & 3;
  *(_QWORD *)(v11 + 16) = v14;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v66 )
      v9 = (unsigned __int64)a1 ^ v66;
  }
  else
  {
    v9 = v66;
  }
LABEL_18:
  *a1 = v9;
  return v14;
}
