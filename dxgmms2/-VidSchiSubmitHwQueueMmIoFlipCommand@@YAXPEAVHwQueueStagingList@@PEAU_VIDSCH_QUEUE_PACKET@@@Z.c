// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // r8d
  bool v14; // zf
  int v15; // eax
  char v16; // cl
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r9
  struct VIDSCH_HW_CONTEXT *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int16 v24; // dx
  __int64 v25; // rax
  int *v26; // r15
  unsigned int v27; // r8d
  int v28; // eax
  char v29; // cl
  int v30; // eax
  struct VIDSCH_HW_CONTEXT *v31; // rcx
  int v32; // r8d
  bool IsFocusHwContext; // al
  int v34; // r8d
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // r9
  int v38; // r10d
  int v39; // edx
  int v40; // ecx
  int v41; // ecx
  int *v42; // rdx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  bool v52; // r8
  __int64 v53; // rax
  int v54; // eax
  char v55; // r11
  __int64 *v56; // r9
  unsigned int v57; // edx
  unsigned int v58; // r8d
  unsigned int v59; // edx
  int v60; // eax
  char v61; // cl
  int v62; // eax
  unsigned int v63; // r10d
  unsigned int v64; // eax
  int v65; // eax
  int v66; // r15d
  unsigned int v67; // ecx
  int v68; // edx
  unsigned int v69; // r11d
  __int64 v70; // r8
  int v71; // ecx
  __int64 v72; // r10
  __int64 v73; // r10
  struct VIDSCH_FLIP_QUEUE *v74; // r14
  __int64 v75; // r13
  int v76; // eax
  unsigned int v77; // r15d
  struct VIDSCH_HW_CONTEXT **v78; // rax
  __int64 v79; // r9
  unsigned int v80; // [rsp+40h] [rbp-79h]
  int v81; // [rsp+44h] [rbp-75h]
  int v82; // [rsp+44h] [rbp-75h]
  unsigned int v83; // [rsp+48h] [rbp-71h]
  __int64 *v84; // [rsp+50h] [rbp-69h]
  int v85; // [rsp+58h] [rbp-61h]
  int v86; // [rsp+74h] [rbp-45h]
  __int64 v87; // [rsp+78h] [rbp-41h]
  __int64 v88; // [rsp+80h] [rbp-39h]
  __int64 v89; // [rsp+88h] [rbp-31h]
  __int64 v90; // [rsp+90h] [rbp-29h] BYREF
  unsigned int *v91; // [rsp+98h] [rbp-21h]
  unsigned int v92; // [rsp+A0h] [rbp-19h]
  unsigned int v93; // [rsp+A4h] [rbp-15h]
  int v94; // [rsp+A8h] [rbp-11h]
  unsigned int v95; // [rsp+ACh] [rbp-Dh]
  unsigned int v96; // [rsp+B0h] [rbp-9h]
  unsigned __int64 v97; // [rsp+B8h] [rbp-1h]
  struct VIDMM_ALLOC *v98; // [rsp+C0h] [rbp+7h]
  struct VIDSCH_FLIP_QUEUE *v99; // [rsp+C8h] [rbp+Fh]
  signed __int32 v101; // [rsp+128h] [rbp+6Fh] BYREF
  struct VIDSCH_HW_CONTEXT *v102; // [rsp+130h] [rbp+77h] BYREF
  char v103; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a2 + 12);
  v4 = *((unsigned int *)a2 + 40);
  v5 = 1LL;
  v80 = v4;
  v6 = (unsigned int)v4;
  v88 = v4;
  v102 = *(struct VIDSCH_HW_CONTEXT **)(v2 + 40);
  v7 = *((_QWORD *)v102 + 1);
  v87 = v7;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v8 + 8 * v4 + 3200);
  if ( (*(_BYTE *)(v8 + 3036) & 1) != 0
    || *(_DWORD *)(v8 + 3012)
    || *(_BYTE *)(v7 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)
    || (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    goto LABEL_100;
  }
  if ( *((_QWORD *)a2 + 50) - *(_QWORD *)(v7 + 8 * v4 + 376) > (unsigned __int64)(unsigned int)(64
                                                                                              - *(_DWORD *)(v9 + 3076)) )
  {
    v10 = *((int *)a2 + 12);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v2, a2, v10);
    __debugbreak();
  }
  LOBYTE(v101) = 0;
  if ( *(_DWORD *)(v9 + 4) == 3 || !*((_DWORD *)a2 + 99) && (*((_DWORD *)a2 + 68) & 0x10000000) != 0 )
  {
    v81 = v5;
    v89 = v5;
  }
  else
  {
    v81 = 0;
    v89 = 0LL;
  }
  v11 = *(_QWORD *)(v9 + 32);
  v12 = *((_DWORD *)a2 + 18) >> 23;
  v99 = (struct VIDSCH_FLIP_QUEUE *)v11;
  if ( ((unsigned __int8)v12 & (unsigned __int8)v5) != 0 )
    v13 = ((unsigned __int16)*((_DWORD *)a2 + 218) | (unsigned __int16)(*((_DWORD *)a2 + 218) >> 10)) & 0x3FF;
  else
    v13 = ((_DWORD)v5 << *(_DWORD *)(v8 + 152)) - v5;
  v14 = !_BitScanForward((unsigned int *)&v15, v13);
  v16 = -1;
  if ( !v14 )
    v16 = v15;
  if ( v13 )
  {
    while ( 1 )
    {
      v17 = (unsigned int)v16;
      v18 = *(int *)(288 * v17 + *(_QWORD *)(v8 + 8 * v4 + 3200) + 188);
      if ( (int)v18 > -1 && *(_DWORD *)(160 * v18 + *(_QWORD *)(v8 + 3328) + 112) == 2 )
        break;
      v16 = -1;
      v13 &= ~(1 << v17);
      v14 = !_BitScanForward((unsigned int *)&v19, v13);
      if ( !v14 )
        v16 = v19;
      if ( !v13 )
      {
        LODWORD(v4) = v6;
        goto LABEL_25;
      }
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v16, v6, v8);
    __debugbreak();
  }
  else
  {
LABEL_25:
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 40) + 2632LL) )
      VidSchiUpdateVSyncMultiplier(
        (struct _VIDSCH_GLOBAL *)v8,
        v4,
        (struct _VIDSCH_PRESENT_INFO *)v9,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 272));
    v85 = *((_DWORD *)a2 + 100) - *(_DWORD *)(v7 + 8 * v6 + 376);
    v20 = (*((_BYTE *)a2 + 400) - *(_BYTE *)(v7 + 8 * v6 + 376) + (unsigned __int8)*(_DWORD *)(v11 + 56)) & 0x3F;
    v86 = (*((_BYTE *)a2 + 400) - *(_BYTE *)(v7 + 8 * v6 + 376) + (unsigned __int8)*(_DWORD *)(v11 + 56)) & 0x3F;
    v6 = v11 + 1384 * v20 + 120;
    WdLogSingleEntry4(8LL, a2, v11, v20, *(int *)(v6 + 1052));
    v21 = v102;
    v22 = *(_QWORD *)(v8 + 632);
    v23 = *(unsigned __int16 *)(*((_QWORD *)v102 + 2) + 4LL);
    if ( (unsigned int)v23 < *(_DWORD *)(v8 + 704) )
      v22 += 8 * v23;
    v24 = *(_WORD *)(*(_QWORD *)v22 + 6LL);
    v83 = v24;
    if ( *(_DWORD *)(v6 + 1052) == 8 )
    {
      *(_QWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 1092)) = *((_QWORD *)a2 + 100);
      *(_QWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 1092) + 512) = *((_QWORD *)a2 + 101);
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + 100) + 36LL), 1u);
      v25 = *((_QWORD *)v21 + 1);
      v26 = (int *)(v6 + 1136);
      ++*(_DWORD *)(v6 + 1092);
      *(_QWORD *)(v6 + 1040) = v25;
      *(_DWORD *)(v6 + 1084) |= 1 << v24;
LABEL_61:
      v84 = (__int64 *)(v6 + 1176);
      goto LABEL_62;
    }
  }
  ++*(_DWORD *)(v8 + 804);
  ++*(_DWORD *)(v7 + 1576);
  ++*(_DWORD *)(v9 + 3076);
  if ( (*((_DWORD *)a2 + 68) & 0x800000) != 0 )
    v27 = ((unsigned __int16)*((_DWORD *)a2 + 218) | (unsigned __int16)(*((_DWORD *)a2 + 218) >> 10)) & 0x3FF;
  else
    v27 = (1 << *(_DWORD *)(v8 + 152)) - 1;
  v14 = !_BitScanForward((unsigned int *)&v28, v27);
  v29 = -1;
  if ( !v14 )
    v29 = v28;
  while ( v27 )
  {
    ++*(_DWORD *)(288LL * v29 + *(_QWORD *)(v8 + 8 * v88 + 3200) + 196);
    v30 = 1 << v29;
    v29 = -1;
    v27 &= ~v30;
    v14 = !_BitScanForward((unsigned int *)&v30, v27);
    if ( !v14 )
      v29 = v30;
  }
  _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)v6);
  v31 = v102;
  v26 = (int *)(v6 + 1136);
  v32 = *(_DWORD *)(v6 + 1136) | 0x4000;
  *(_QWORD *)(v6 + 1040) = *((_QWORD *)v102 + 1);
  *(_DWORD *)(v6 + 1136) = v32;
  IsFocusHwContext = VidSchiIsFocusHwContext(v31);
  *(_DWORD *)(v6 + 1136) = v34 & 0xFFFF7FFF | (IsFocusHwContext << 15);
  *(_QWORD *)v6 = *((_QWORD *)a2 + 100);
  *(_QWORD *)(v6 + 512) = *((_QWORD *)a2 + 101);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + 100) + 36LL), 1u);
  *(_DWORD *)(v6 + 1048) = *((_DWORD *)a2 + 28);
  *(_DWORD *)(v6 + 1056) = *((_DWORD *)a2 + 96);
  *(_BYTE *)(v6 + 1076) = (*((_DWORD *)a2 + 68) & 0x10) != 0;
  v35 = *v26 ^ (*v26 ^ (*((_DWORD *)a2 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v6 + 1136) = v35;
  v36 = (v35 ^ (*((_DWORD *)a2 + 68) >> 20)) & 0x400 ^ v35;
  *(_DWORD *)(v6 + 1136) = v36;
  *(_DWORD *)(v6 + 1136) = v36 ^ ((unsigned __int16)v36 ^ (*((_DWORD *)a2 + 68) >> 20)) & 0x800;
  _VIDSCH_FLIP_QUEUE_ENTRY::FillVmState(
    (_VIDSCH_FLIP_QUEUE_ENTRY *)v6,
    (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 272));
  if ( !v85 )
  {
    *(_QWORD *)(v11 + 88) += v37;
    *(_QWORD *)(v6 + 1064) = *(_QWORD *)(v11 + 88);
  }
  v39 = *v26;
  v40 = *((_DWORD *)a2 + 158);
  *(_DWORD *)(v6 + 1184) = v40;
  if ( (v39 & v38) != 0 )
  {
    v41 = v40 - v37;
    if ( v41 )
    {
      if ( v41 == (_DWORD)v37 )
      {
        *(_OWORD *)(v6 + 1188) = *(_OWORD *)((char *)a2 + 636);
        *(_OWORD *)(v6 + 1204) = *(_OWORD *)((char *)a2 + 652);
        *(_OWORD *)(v6 + 1220) = *(_OWORD *)((char *)a2 + 668);
        *(_OWORD *)(v6 + 1236) = *(_OWORD *)((char *)a2 + 684);
        *(_QWORD *)(v6 + 1252) = *(_QWORD *)((char *)a2 + 700);
      }
    }
    else
    {
      *(_OWORD *)(v6 + 1188) = *(_OWORD *)((char *)a2 + 636);
      *(_QWORD *)(v6 + 1204) = *(_QWORD *)((char *)a2 + 652);
      *(_DWORD *)(v6 + 1212) = *((_DWORD *)a2 + 165);
    }
  }
  if ( (v39 & 0x800) != 0 )
  {
    *(_OWORD *)(v6 + 1260) = *(_OWORD *)((char *)a2 + 708);
    *(_OWORD *)(v6 + 1276) = *(_OWORD *)((char *)a2 + 724);
  }
  v84 = (__int64 *)(v6 + 1176);
  memmove(*(void **)(v6 + 1176), (char *)a2 + 872, *((unsigned int *)a2 + 221));
  VidSchiAcquirePrivateDataReference(
    (struct _VIDSCH_GLOBAL *)v8,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v6 + 1176));
  VidSchiReleasePrivateDataReference((struct _VIDSCH_GLOBAL *)v8, (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 872));
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v8,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v6 + 1176));
  v42 = (int *)((char *)a2 + 272);
  *(_DWORD *)(v6 + 1080) = *((_DWORD *)a2 + 102);
  *(_DWORD *)(v6 + 1084) = 1 << v83;
  v43 = *v26 ^ (*v26 ^ (*((_DWORD *)a2 + 68) >> 19)) & 1;
  *v26 = v43;
  v44 = ((unsigned __int8)v43 ^ (unsigned __int8)(*((_DWORD *)a2 + 68) >> 19)) & 2 ^ v43;
  *v26 = v44;
  v45 = ((unsigned __int8)v44 ^ (unsigned __int8)(*((_DWORD *)a2 + 68) >> 19)) & 4 ^ v44;
  *v26 = v45;
  *v26 = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(*((_DWORD *)a2 + 68) >> 19)) & 8;
  *(_QWORD *)(v6 + 1160) = *((_QWORD *)a2 + 37);
  v46 = *((_QWORD *)a2 + 38);
  *(_QWORD *)(v6 + 1168) = v46;
  if ( v46 )
    _InterlockedAdd((volatile signed __int32 *)(v46 + 12), 1u);
  v47 = *v42;
  *(_DWORD *)(v6 + 1092) = 1;
  if ( (v47 & 0x400) != 0 )
  {
    *(_DWORD *)(v6 + 1088) = *((_DWORD *)a2 + 103);
    v48 = *((_DWORD *)a2 + 103);
  }
  else
  {
    *(_DWORD *)(v6 + 1088) = 1;
    v48 = 1;
  }
  *(_DWORD *)(v6 + 1096) = v48;
  if ( *(_BYTE *)(v6 + 1076) || v81 )
  {
    *(_DWORD *)(v6 + 1072) = 0;
    v51 = *v26 ^ (*v26 ^ ((unsigned int)*v42 >> 21)) & 0x80;
    *v26 = v51;
    *v26 = v51 ^ ((unsigned __int16)v51 ^ ((unsigned int)*v42 >> 20)) & 0x100;
    goto LABEL_61;
  }
  v49 = *((_DWORD *)a2 + 99);
  if ( v49 )
  {
    *(_DWORD *)(v6 + 1072) = v49;
    goto LABEL_61;
  }
  v50 = *v26 | 0x80;
  *(_DWORD *)(v6 + 1072) = 0;
  *v26 = v50 & 0xFFFFFEFF;
LABEL_62:
  VidSchiVirtualizeFlipInterval(v9, v6);
  v52 = 0;
  if ( (*(_DWORD *)(v9 + 82948) & 1) != 0 )
  {
    v53 = *(_QWORD *)(v87 + 40);
    if ( *(_BYTE *)(v53 + 2632) || *(_BYTE *)(*(_QWORD *)(v53 + 16) + 137LL) )
    {
      if ( (*v26 & 0x80u) != 0 || v81 )
        v52 = (*(_DWORD *)*v84 & 0x3FF) != 0;
      if ( (*v26 & 0x180) == 0x80 )
        *v26 |= 0x200u;
    }
  }
  v54 = *((_DWORD *)a2 + 104);
  if ( v54 )
    goto LABEL_74;
  if ( !v52 )
  {
    v54 = *(_DWORD *)(v9 + 82936);
LABEL_74:
    v55 = -1;
    goto LABEL_75;
  }
  v55 = -1;
  v54 = -1;
LABEL_75:
  *(_DWORD *)(v6 + 1140) = v54;
  if ( (*((_DWORD *)a2 + 68) & 0x800) != 0 )
    *(_BYTE *)(v6 + 1077) = 1;
  v56 = v84;
  v90 = v8;
  v91 = (unsigned int *)*v84;
  v57 = *v91;
  v58 = *v91 & 0x3FF;
  v92 = v58;
  if ( *(_BYTE *)(v8 + 156) )
    v59 = (v57 >> 10) & 0x3FF;
  else
    v59 = 0;
  v14 = !_BitScanForward((unsigned int *)&v60, v58);
  v61 = -1;
  v93 = v59;
  if ( !v14 )
    v61 = v60;
  v94 = 0;
  v14 = !_BitScanForward((unsigned int *)&v62, v59);
  v63 = v61;
  if ( !v14 )
    v55 = v62;
  v95 = v61;
  v64 = v55;
  v96 = v55;
  while ( v58 || v59 )
  {
    if ( v63 >= v64 )
      goto LABEL_95;
    v65 = *(_DWORD *)(v6 + 1080);
    v66 = 0;
    v67 = v83;
    v68 = 1;
    v82 = v65;
    v69 = 0;
    while ( (v65 & v68) == 0 )
    {
LABEL_92:
      ++v69;
      v68 *= 2;
      if ( v69 > v67 )
        goto LABEL_95;
    }
    v70 = *v56;
    v71 = *(_DWORD *)(*v56 + 4);
    v97 = v71 * ((8 * *(_DWORD *)(*v56 + 8) + 231) & 0xFFFFFFF8);
    v72 = (unsigned int)(v94 + v66 * v71);
    v67 = v83;
    v73 = v72 << 6;
    v98 = *(struct VIDMM_ALLOC **)(v73 + v97 + v70 + 48);
    if ( ((*((_DWORD *)v98 + 8) >> 2) & 0x3F) != v83 )
    {
      v65 = v82;
      ++v66;
      goto LABEL_92;
    }
    VIDMM_GLOBAL::ReferencePrimaryAllocationForFlipping(
      (VIDMM_GLOBAL *)(v70 + v73),
      v98,
      v97,
      (unsigned __int64 *)(v70 + v73 + v97 + 64),
      (unsigned __int64 *)(v70 + v73 + v97 + 72));
LABEL_95:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v90);
    v64 = v96;
    v59 = v93;
    v58 = v92;
    v63 = v95;
  }
  v74 = v99;
  LODWORD(v75) = v86;
  if ( *(_DWORD *)(v6 + 1088) <= *(_DWORD *)(v6 + 1092) )
  {
    if ( v85 )
    {
      *(_DWORD *)(v6 + 1052) = 7;
      goto LABEL_98;
    }
    while ( 1 )
    {
      *((_DWORD *)v74 + 14) = ((_BYTE)v75 + 1) & 0x3F;
      ++*(_QWORD *)(v87 + 8 * v88 + 376);
      _InterlockedAdd((volatile signed __int32 *)(v8 + 808), 1u);
      _InterlockedAdd((volatile signed __int32 *)(v9 + 3080), 1u);
      if ( *(_DWORD *)(v6 + 1052) == 7 )
        *(_QWORD *)(v6 + 1064) = ++*((_QWORD *)v74 + 11);
      if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v6) && *(_BYTE *)(v9 + 78788) )
        break;
      *(_DWORD *)(v6 + 1052) = 16;
LABEL_135:
      v75 = *((unsigned int *)v74 + 14);
      v6 = (__int64)v74 + 1384 * v75 + 120;
      if ( *(_DWORD *)(v6 + 1052) != 7 )
        goto LABEL_98;
    }
    *(_DWORD *)(v6 + 1052) = 2;
    v76 = *((_DWORD *)v74 + 16);
    if ( v89 )
    {
      if ( (_DWORD)v75 == v76 )
      {
        if ( *(_BYTE *)(v8 + 156)
          && VidSchiCheckPendingFlipsForThisEntry(
               (struct _VIDSCH_GLOBAL *)v8,
               (struct _VIDSCH_PRESENT_INFO *)v9,
               v6,
               v74) )
        {
          v77 = v80;
          if ( !*(_BYTE *)(v8 + 59) )
            *(_QWORD *)(v6 + 1104) = MEMORY[0xFFFFF78000000320];
          goto LABEL_119;
        }
        LOBYTE(v102) = 0;
        v77 = v80;
        *(_DWORD *)(v6 + 1052) = 4;
        VidSchiExecuteMmIoFlip((__int64)a1, v8, v80, (__int64)v74, v75, &v101, &v102);
        if ( (_BYTE)v102 )
        {
          v78 = &v102;
LABEL_132:
          VidSchiExecuteMmIoFlip((__int64)a1, v8, v77, (__int64)v74, v75, &v101, v78);
          goto LABEL_119;
        }
        goto LABEL_119;
      }
    }
    else if ( (_DWORD)v75 == v76 || *(_BYTE *)(v6 + 1076) )
    {
      if ( !*(_BYTE *)(v8 + 59) )
        *(_QWORD *)(v6 + 1104) = MEMORY[0xFFFFF78000000320];
      if ( !VidSchiCheckPendingFlipsForThisEntry(
              (struct _VIDSCH_GLOBAL *)v8,
              (struct _VIDSCH_PRESENT_INFO *)v9,
              v6,
              v74) )
      {
        v77 = v80;
        if ( *(_BYTE *)(v6 + 1076) )
          VidSchiRestartQueuedFlip(a1, v87, v80, v74, v75);
        if ( !*((_DWORD *)v74 + 28) )
        {
          *(_DWORD *)(v6 + 1052) = 4;
          v103 = 0;
          VidSchiExecuteMmIoFlip((__int64)a1, v8, v80, (__int64)v74, v75, &v101, &v103);
          if ( !v103 )
            goto LABEL_119;
          v78 = (struct VIDSCH_HW_CONTEXT **)&v103;
          goto LABEL_132;
        }
        *(_DWORD *)(v6 + 1052) = 3;
LABEL_119:
        if ( *(_BYTE *)(v8 + 59) && *(_DWORD *)(v6 + 1052) == 2 )
          VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)v8, v77);
        if ( *((_DWORD *)v74 + 346 * *((unsigned int *)v74 + 15) + 293) != 16 )
          *((_DWORD *)v74 + 15) = *((_DWORD *)v74 + 14);
        goto LABEL_135;
      }
    }
    else
    {
      v79 = ((_BYTE)v75 - 1) & 0x3F;
      if ( (*((_DWORD *)v74 + 346 * v79 + 314) & 0x20) != 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v79, v74, v8);
        __debugbreak();
        JUMPOUT(0x1C0043CEELL);
      }
    }
    v77 = v80;
    goto LABEL_119;
  }
  *(_DWORD *)(v6 + 1052) = 8;
LABEL_98:
  *((_DWORD *)a2 + 16) |= 2u;
  if ( (_BYTE)v101 )
    VidSchiCompletePendingFlipOnPlane((__int64)a1, v8, v80, (__int64)v74, 9u);
LABEL_100:
  VidSchiCompleteHwQueuePacket(a1, (unsigned __int64)a2, 0);
}
