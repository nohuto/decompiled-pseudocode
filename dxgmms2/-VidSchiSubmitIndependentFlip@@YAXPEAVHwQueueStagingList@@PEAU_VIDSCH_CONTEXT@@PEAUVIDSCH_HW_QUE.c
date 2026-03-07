void __fastcall VidSchiSubmitIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_HW_QUEUE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_DEVICE *a6)
{
  _DWORD *v6; // rsi
  __int64 v8; // rbx
  char v9; // dl
  __int64 v11; // rbp
  _DWORD *v12; // rdi
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r15
  unsigned int i; // r10d
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  char v23; // cl
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  int v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  unsigned int v28; // r8d
  bool j; // zf
  int v30; // eax
  char v31; // cl
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  char LowPart; // bl
  int v38; // eax
  int v39; // ecx
  int v40; // ecx
  char v41; // r12
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rax
  void *v48; // rcx
  int v49; // edx
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  __int64 v53; // r8
  unsigned int v54; // r9d
  __int64 v55; // r11
  unsigned int v56; // r10d
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // edx
  VIDMM_GLOBAL *v60; // rcx
  int v61; // r10d
  int v62; // eax
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // r8
  unsigned int v66; // edx
  __int64 v67; // r10
  int v68; // r11d
  __int64 v69; // rdi
  int v70; // esi
  int v71; // r14d
  int v72; // ecx
  unsigned int v73; // edx
  __int64 v74; // r9
  int v75; // [rsp+90h] [rbp-78h]
  int v76; // [rsp+A0h] [rbp-68h]
  char v77; // [rsp+A4h] [rbp-64h]
  int v78; // [rsp+A8h] [rbp-60h]
  _DWORD *v79; // [rsp+B8h] [rbp-50h]
  int v83; // [rsp+128h] [rbp+20h]
  char v84; // [rsp+138h] [rbp+30h]

  v13 = *((unsigned int *)a4 + 29);
  v6 = (_DWORD *)((char *)a4 + 600);
  v8 = (unsigned int)v13;
  v78 = *((_DWORD *)a4 + 29);
  v9 = -1;
  v11 = *((_QWORD *)a6 + 4);
  v12 = *(_DWORD **)(v11 + 8 * v13 + 3200);
  v79 = v12;
  j = !_BitScanForward((unsigned int *)&v13, *((_DWORD *)a4 + 150) & 0x3FF);
  if ( !j )
    v9 = v13;
  v14 = 0;
  if ( v9 != -1 )
    v14 = v9;
  v77 = v14;
  v15 = (unsigned int)v14;
  v16 = (int)v12[72 * v15 + 47];
  if ( (int)v16 <= -1 )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(v11 + 3328) + 160 * v16;
  for ( i = 0;
        i < *((_DWORD *)a4 + 35);
        *(_WORD *)((char *)&v6[16 * v22 + 8] + v21) = *(_WORD *)(*(_QWORD *)(v20 + 96) + 6LL) )
  {
    v19 = *((_DWORD *)a4 + 151) * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8)
        + ((unsigned __int64)(i * *((_DWORD *)a4 + 151)) << 6);
    v20 = *(_QWORD *)((char *)v6 + v19 + 48);
    *(_QWORD *)((char *)a4 + v19 + 640) = *(_QWORD *)(*(_QWORD *)(v20 + 96) + 32LL);
    LODWORD(v19) = *((_DWORD *)a4 + 151);
    v21 = (unsigned int)v19 * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8);
    v22 = i * (unsigned int)v19;
    ++i;
  }
  v23 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 5) + 16LL) + 137LL);
  v84 = v23;
  if ( (*(_DWORD *)a4 & 0x2000000) == 0 )
    goto LABEL_20;
  if ( (*((_DWORD *)a4 + 1) & 2) == 0 )
  {
    v25 = *((_DWORD *)a4 + 36);
    v83 = v25;
    if ( v25 == *(_DWORD *)(v17 + 100) )
      goto LABEL_16;
LABEL_20:
    v26 = *((_DWORD *)a4 + 31);
    v75 = v26;
    if ( !v26 && (v12[20737] & 1) != 0 && v23 )
      v83 = -1;
    else
      v83 = v12[20734];
    goto LABEL_25;
  }
  FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*((struct _D3DKMT_AUXILIARYPRESENTINFO **)a4 + 61));
  if ( !FlipManagerAuxiliaryPresentInfo || *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 3) )
  {
    v23 = v84;
    goto LABEL_20;
  }
  v25 = *(_DWORD *)(v17 + 100);
  v83 = v25;
  *((_DWORD *)a4 + 36) = v25;
LABEL_16:
  if ( !v25 )
    v83 = v12[20734];
  v26 = *((_DWORD *)a4 + 37);
  v75 = v26;
LABEL_25:
  _InterlockedIncrement((volatile signed __int32 *)a6 + v8 + 361);
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 5) + 32LL)
                              + 8LL * *(unsigned int *)(*((_QWORD *)a6 + 4) + 4LL))
                  + 8 * v8
                  + 88);
  if ( (*(_DWORD *)a4 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 8 * v8 + 6480) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
  if ( *(_DWORD *)(v17 + 112) == 1 )
  {
    WdLogSingleEntry5(
      8LL,
      *((_QWORD *)a4 + 13),
      *((unsigned int *)a4 + 28),
      v26,
      *(_QWORD *)((char *)a4 + v6[1] * ((8 * v6[2] + 231) & 0xFFFFFFF8) + 640),
      *(unsigned __int16 *)((char *)v6 + v6[1] * ((8 * v6[2] + 231) & 0xFFFFFFF8) + 32));
    *(_DWORD *)(v17 + 116) = 0;
    *(_DWORD *)(v17 + 112) = 2;
    *(_QWORD *)(v17 + 152) = a6;
  }
  ++*(_DWORD *)(v11 + 804);
  ++*((_DWORD *)a6 + 394);
  ++*(_DWORD *)(v17 + 116);
  ++v12[769];
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 )
    v28 = ((unsigned __int16)*v6 | (unsigned __int16)(*v6 >> 10)) & 0x3FF;
  else
    v28 = (1 << *(_DWORD *)(v11 + 152)) - 1;
  for ( j = !_BitScanForward((unsigned int *)&v30, v28); ; j = !_BitScanForward((unsigned int *)&v30, v28) )
  {
    v31 = -1;
    if ( !j )
      v31 = v30;
    if ( !v28 )
      break;
    ++*(_DWORD *)(288LL * v31 + *(_QWORD *)(v11 + 8 * v8 + 3200) + 196);
    v28 &= ~(1 << v31);
  }
  v32 = *(_QWORD *)&v12[2 * v15 + 10];
  v33 = 1384LL * *(unsigned int *)(v32 + 56);
  v76 = *(_DWORD *)(v32 + 56);
  _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)(v33 + v32 + 120));
  v34 = *(_DWORD *)(v33 + v32 + 1256);
  *(_QWORD *)(v33 + v32 + 1264) = *((_QWORD *)a4 + 12);
  v34 |= 0x20u;
  *(_QWORD *)(v33 + v32 + 1272) = *((_QWORD *)a4 + 13);
  *(_DWORD *)(v33 + v32 + 1256) = v34;
  v35 = ((unsigned __int8)v34 ^ (unsigned __int8)(*(_DWORD *)a4 >> 22)) & 0x10 ^ v34;
  *(_DWORD *)(v33 + v32 + 1256) = v35;
  if ( (*(_DWORD *)a4 & 8) != 0 && *(_DWORD *)(v11 + 2552) == 2 )
    *(_DWORD *)(v33 + v32 + 1256) = v35 | 0x1000;
  v36 = *((_DWORD *)a4 + 36);
  if ( v36 != *(_DWORD *)(v17 + 104) )
  {
    *(_DWORD *)(v17 + 104) = v36;
    *(_DWORD *)(v33 + v32 + 1256) |= 0x40u;
  }
  LowPart = a5.LowPart;
  *(_DWORD *)(v33 + v32 + 1168) = a5.LowPart;
  *(_DWORD *)(v33 + v32 + 1172) = 1;
  *(_DWORD *)(v33 + v32 + 1176) = *((_DWORD *)a4 + 28);
  *(_QWORD *)(v33 + v32 + 1184) = ++*(_QWORD *)(v32 + 88);
  if ( a2 )
  {
    *(_QWORD *)(v33 + v32 + 640) = *((_QWORD *)a2 + 20);
    goto LABEL_46;
  }
  if ( a3 )
  {
LABEL_46:
    *(_DWORD *)(v33 + v32 + 1212) = *((_DWORD *)a4 + 35);
    *(_DWORD *)(v33 + v32 + 1208) = *((_DWORD *)a4 + 35);
    v38 = *((_DWORD *)a4 + 35);
    goto LABEL_47;
  }
  *(_QWORD *)(v33 + v32 + 1208) = 0LL;
  v38 = 1;
LABEL_47:
  *(_DWORD *)(v33 + v32 + 1216) = v38;
  *(_QWORD *)(v33 + v32 + 1160) = a6;
  *(_BYTE *)(v33 + v32 + 1196) = (*(_DWORD *)a4 & 0x10) != 0;
  v39 = *(_DWORD *)(v11 + 2548);
  if ( !v39 )
    goto LABEL_50;
  v40 = v39 - 1;
  if ( !v40 )
    goto LABEL_53;
  if ( v40 != 1 )
  {
LABEL_50:
    if ( (*(_DWORD *)a4 & 0x10000000) != 0 )
      goto LABEL_51;
LABEL_53:
    v41 = 0;
    goto LABEL_54;
  }
LABEL_51:
  v41 = 1;
  if ( (*(_DWORD *)(v33 + v32 + 1256) & 0x10) != 0 && !*(_BYTE *)(v11 + 156) )
    goto LABEL_53;
LABEL_54:
  v42 = *(_DWORD *)(v33 + v32 + 1256) ^ (*(_DWORD *)(v33 + v32 + 1256) ^ (*(_DWORD *)a4 >> 19)) & 1;
  *(_DWORD *)(v33 + v32 + 1256) = v42;
  v43 = ((unsigned __int8)v42 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 2 ^ v42;
  *(_DWORD *)(v33 + v32 + 1256) = v43;
  v44 = ((unsigned __int8)v43 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 4 ^ v43;
  *(_DWORD *)(v33 + v32 + 1256) = v44;
  v45 = ((unsigned __int8)v44 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 8 ^ v44;
  *(_DWORD *)(v33 + v32 + 1256) = v45;
  *(_QWORD *)(v33 + v32 + 1280) = *((_QWORD *)a4 + 3);
  v46 = (v45 ^ (*(_DWORD *)a4 >> 20)) & 0x400 ^ v45;
  *(_DWORD *)(v33 + v32 + 1256) = v46;
  *(_DWORD *)(v33 + v32 + 1256) = v46 ^ (v46 ^ (*((_DWORD *)a4 + 1) << 11)) & 0x80000;
  v47 = *((_QWORD *)a4 + 4);
  *(_QWORD *)(v33 + v32 + 1288) = v47;
  if ( v47 )
    _InterlockedAdd((volatile signed __int32 *)(v47 + 12), 1u);
  v48 = (void *)*((_QWORD *)a4 + 4);
  if ( v48 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v48);
    *((_QWORD *)a4 + 4) = 0LL;
  }
  v49 = *(_DWORD *)(v33 + v32 + 1256);
  v50 = *((_DWORD *)a4 + 90);
  *(_DWORD *)(v33 + v32 + 1304) = v50;
  if ( (v49 & 0x400) != 0 )
  {
    v51 = v50 - 1;
    if ( v51 )
    {
      if ( v51 == 1 )
      {
        *(_OWORD *)(v33 + v32 + 1308) = *(_OWORD *)((char *)a4 + 364);
        *(_OWORD *)(v33 + v32 + 1324) = *(_OWORD *)((char *)a4 + 380);
        *(_OWORD *)(v33 + v32 + 1340) = *(_OWORD *)((char *)a4 + 396);
        *(_OWORD *)(v33 + v32 + 1356) = *(_OWORD *)((char *)a4 + 412);
        *(_QWORD *)(v33 + v32 + 1372) = *(_QWORD *)((char *)a4 + 428);
      }
    }
    else
    {
      *(_OWORD *)(v33 + v32 + 1308) = *(_OWORD *)((char *)a4 + 364);
      *(_QWORD *)(v33 + v32 + 1324) = *(_QWORD *)((char *)a4 + 380);
      *(_DWORD *)(v33 + v32 + 1332) = *((_DWORD *)a4 + 97);
    }
  }
  v52 = v49 ^ (v49 ^ (*(_DWORD *)a4 >> 20)) & 0x800;
  *(_DWORD *)(v33 + v32 + 1256) = v52;
  if ( (v52 & 0x800) != 0 )
  {
    *(_OWORD *)(v33 + v32 + 1380) = *(_OWORD *)((char *)a4 + 436);
    *(_OWORD *)(v33 + v32 + 1396) = *(_OWORD *)((char *)a4 + 452);
  }
  _VIDSCH_FLIP_QUEUE_ENTRY::FillVmState((_VIDSCH_FLIP_QUEUE_ENTRY *)(v33 + v32 + 120), a4);
  v56 = v54;
  if ( *(_DWORD *)(v33 + v32 + 1216) > v54 )
  {
    do
    {
      if ( a2 )
      {
        v57 = 8LL * v56;
        v58 = *(_QWORD *)((char *)a4 + v57 + *((unsigned int *)a4 + 138));
        *(_QWORD *)(v57 + v55 + 120) = v58;
        ++*(_DWORD *)(v58 + 792);
      }
      v59 = *((_DWORD *)a4 + 151);
      v60 = (VIDMM_GLOBAL *)(v59 * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8));
      VIDMM_GLOBAL::ReferencePrimaryAllocationForFlipping(
        v60,
        *(struct VIDMM_ALLOC **)((char *)v60 + 64 * (unsigned __int64)(v56 * v59) + (_QWORD)a4 + 648),
        v53,
        (unsigned __int64 *)((char *)a4 + (_QWORD)v60 + 64 * (unsigned __int64)(v56 * v59) + 664),
        (unsigned __int64 *)((char *)a4 + (_QWORD)v60 + 64 * (unsigned __int64)(v56 * v59) + 672));
      v56 = v61 + 1;
      v54 = 0;
    }
    while ( v56 < *(_DWORD *)(v33 + v32 + 1216) );
    LowPart = a5.LowPart;
  }
  *(_DWORD *)(v33 + v32 + 1260) = v83;
  if ( *(_BYTE *)(v33 + v32 + 1196) == (_BYTE)v54 )
  {
    if ( v75 )
    {
      *(_DWORD *)(v33 + v32 + 1192) = v75;
      goto LABEL_78;
    }
    *(_DWORD *)(v33 + v32 + 1192) = v54;
  }
  else
  {
    *(_DWORD *)(v33 + v32 + 1192) = v54;
    if ( v75 != v54 )
      goto LABEL_78;
  }
  v62 = *(_DWORD *)(v33 + v32 + 1256) | 0x80;
  *(_DWORD *)(v33 + v32 + 1256) = v62;
  if ( v41 )
    *(_DWORD *)(v33 + v32 + 1256) = v62 | 0x100;
LABEL_78:
  VidSchiVirtualizeFlipInterval(v79, v55 + 120);
  if ( (*(_DWORD *)(v33 + v32 + 1256) & 0x180) == 0x80 && (v79[20737] & 1) != 0 && v84 )
    *(_DWORD *)(v33 + v32 + 1256) |= 0x200u;
  memmove(*(void **)(v33 + v32 + 1296), (char *)a4 + 600, *((unsigned int *)a4 + 153));
  VidSchiAcquirePrivateDataReference(
    (struct _VIDSCH_GLOBAL *)v11,
    *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v33 + v32 + 1296));
  VidSchiReleasePrivateDataReference((struct _VIDSCH_GLOBAL *)v11, (struct VIDSCH_SUBMIT_DATA2 *)((char *)a4 + 600));
  *(_DWORD *)(v33 + v32 + 1200) = *((_DWORD *)a4 + 34);
  *(_DWORD *)(v33 + v32 + 1204) = *((_DWORD *)a4 + 34);
  if ( (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    v63 = *(_DWORD *)(v33 + v32 + 1256) | 0x2000;
    *(_DWORD *)(v33 + v32 + 1256) = v63;
    *(_QWORD *)(v33 + v32 + 1416) = *((_QWORD *)a4 + 60);
    v64 = *((_QWORD *)a4 + 61);
    *(_DWORD *)(v33 + v32 + 1192) = 0;
    *(_QWORD *)(v33 + v32 + 1448) = v64;
    *(_DWORD *)(v33 + v32 + 1256) = v63 & 0xFFFFFF7F;
  }
  if ( (*(_DWORD *)a4 & 0x800) != 0 )
    *(_BYTE *)(v33 + v32 + 1197) = 1;
  *(_DWORD *)(v32 + 56) = ((_BYTE)v76 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 808));
  _InterlockedIncrement(v79 + 770);
  if ( bTracingEnabled )
  {
    v65 = *((_QWORD *)a4 + 23);
    if ( v65 )
    {
      v66 = *(_DWORD *)(v33 + v32 + 1256);
      v67 = *(_QWORD *)(v33 + v32 + 1416);
      v68 = *(_DWORD *)(v33 + v32 + 1260);
      v69 = *(_QWORD *)(v33 + v32 + 1456);
      v70 = *((_DWORD *)a4 + 28);
      v71 = *((_DWORD *)a4 + 48);
      v72 = (v66 >> 8) & 1;
      v73 = v66 >> 19;
      if ( a2 )
      {
        v74 = *((_QWORD *)a2 + 7);
        if ( !v74 || (*((_DWORD *)a2 + 28) & 0x40) != 0 )
          LODWORD(v74) = (_DWORD)a2;
      }
      else if ( a3 )
      {
        v74 = *((_QWORD *)a3 + 6);
        if ( !v74 )
          LODWORD(v74) = (_DWORD)a3;
      }
      else
      {
        LODWORD(v74) = 0;
      }
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer(
          v72,
          v73 & 1,
          v65,
          v74,
          LowPart,
          v78,
          v65,
          v75,
          v77,
          v71,
          *(_QWORD *)v17,
          *(_QWORD *)(v17 + 8),
          v70,
          v72,
          v69,
          v68,
          v67,
          v73 & 1);
    }
  }
  VidSchUnwaitFlipQueue(a1, v11);
}
