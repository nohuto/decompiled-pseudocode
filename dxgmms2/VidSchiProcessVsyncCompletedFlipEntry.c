/*
 * XREFs of VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000CDD0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1C004900C (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_K.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C000E0D4 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000E600 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001124C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiValidateHwFlipQueueCompletionTimestamp@@YAXPEAUVIDSCH_FLIP_QUEUE@@K_K1@Z @ 0x1C004B250 (-VidSchiValidateHwFlipQueueCompletionTimestamp@@YAXPEAUVIDSCH_FLIP_QUEUE@@K_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BYTE *__fastcall VidSchiProcessVsyncCompletedFlipEntry(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6)
{
  __int64 v6; // rdi
  int v8; // r13d
  __int64 v10; // rbp
  __int64 v11; // r10
  __int64 v12; // rbx
  int v13; // edx
  __int64 v14; // r11
  unsigned int v15; // r15d
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int *v19; // rdx
  int v20; // r9d
  int v21; // r8d
  unsigned int v22; // eax
  int v23; // r10d
  int v24; // r9d
  __int64 v25; // rdx
  int v26; // ecx
  _BYTE *result; // rax
  __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // edx
  bool v31; // zf
  unsigned int v32; // r8d
  int v33; // eax
  char v34; // cl
  char v35; // cl
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // r8d
  int v42; // eax
  int v43; // esi
  unsigned int v44; // ecx
  int v45; // edx
  int v46; // [rsp+40h] [rbp-78h]
  __int64 v47; // [rsp+48h] [rbp-70h]
  __int64 v48; // [rsp+50h] [rbp-68h]
  _QWORD v49[2]; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-50h]
  unsigned int v51; // [rsp+6Ch] [rbp-4Ch]
  int v52; // [rsp+70h] [rbp-48h]
  unsigned int v53; // [rsp+74h] [rbp-44h]
  unsigned int v54; // [rsp+78h] [rbp-40h]
  char v56; // [rsp+C8h] [rbp+10h]

  v6 = *((unsigned int *)a2 + 4);
  v8 = *((_DWORD *)a2 + 8);
  v10 = *a2;
  v11 = a1;
  v12 = a2[3];
  v13 = 4673;
  v46 = v6;
  v48 = 0LL;
  v14 = *(_QWORD *)(v10 + 8 * v6 + 3200);
  v15 = ((_BYTE)v8 + 1) & 0x3F;
  v16 = *(_DWORD *)(v12 + 68);
  v47 = v14;
  if ( v16 != v15 )
  {
    do
    {
      v6 = 1384LL * v16 + v12 + 120;
      v17 = *(_DWORD *)(v6 + 1052);
      if ( v17 > 0xC || !_bittest(&v13, v17) )
      {
        *(_QWORD *)(v6 + 1128) = *((unsigned int *)a2 + 10);
        v18 = *(_QWORD *)(v6 + 1304);
        *(_DWORD *)(v6 + 1052) = 11;
        if ( !v18 )
          v18 = a2[6];
        *(_QWORD *)(v6 + 1112) = v18;
        if ( *(_BYTE *)(v10 + 59) )
        {
          VidSchiValidateHwFlipQueueCompletionTimestamp(
            (struct VIDSCH_FLIP_QUEUE *)v12,
            v16,
            *(_QWORD *)(v6 + 1104),
            a2[6]);
          v14 = v47;
          v11 = a1;
        }
        v19 = *(unsigned int **)(v6 + 1176);
        *(_QWORD *)(v6 + 1120) = a2[7];
        if ( (*(_DWORD *)(v6 + 1136) & 0x10) != 0 )
          v20 = ((unsigned __int16)*v19 | (unsigned __int16)(*v19 >> 10)) & 0x3FF;
        else
          v20 = (1 << *(_DWORD *)(v10 + 152)) - 1;
        if ( *(_BYTE *)(v10 + 59) )
        {
          v29 = *v19;
          v49[1] = v19;
          v30 = v29 & 0x3FF;
          v49[0] = v10;
          v31 = *(_BYTE *)(v10 + 156) == 0;
          v50 = v30;
          if ( v31 )
            v32 = 0;
          else
            v32 = (v29 >> 10) & 0x3FF;
          v31 = !_BitScanForward((unsigned int *)&v33, v30);
          v34 = -1;
          v51 = v32;
          if ( !v31 )
            v34 = v33;
          v52 = 0;
          v36 = v34;
          v35 = -1;
          v53 = v36;
          v31 = !_BitScanForward(&v36, v32);
          if ( !v31 )
            v35 = v36;
          v37 = (unsigned int)v35;
          v54 = v35;
          while ( v30 || v32 )
          {
            if ( v53 < (unsigned int)v37 )
              v37 = v53;
            v56 = v37;
            v38 = (unsigned int)v37;
            v39 = v14 + 288 * v37;
            v40 = *(_DWORD *)(v39 + 200);
            if ( !v40 )
              goto LABEL_49;
            v41 = v40 - 1;
            *(_DWORD *)(v39 + 200) = v41;
            if ( (*(_DWORD *)(v6 + 1136) & 0x20) != 0 )
            {
              v42 = *(_DWORD *)(v39 + 204);
              if ( !v42 )
              {
                g_DxgMmsBugcheckExportIndex = 1;
                WdLogSingleEntry5(0LL, 281LL, 45056LL, v10, v14, v38);
                __debugbreak();
LABEL_49:
                g_DxgMmsBugcheckExportIndex = 1;
                v22 = WdLogSingleEntry5(0LL, 281LL, 45056LL, v10, v14, v38);
                __debugbreak();
                goto LABEL_50;
              }
              *(_DWORD *)(v39 + 204) = v42 - 1;
            }
            if ( !v41 )
              *(_DWORD *)(v14 + 3088) &= ~(1 << v56);
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v49);
            v37 = v54;
            v32 = v51;
            v30 = v50;
          }
        }
        else
        {
          *(_DWORD *)(v14 + 3088) &= ~v20;
        }
        LODWORD(v48) = v20;
        HIDWORD(v48) = *(_DWORD *)(v6 + 1048);
        VidSchiUnreferenceDisplayingAllocationsForThisEntry(v11, v10, v14, v6);
        VidSchiReferenceDisplayingAllocationsForThisEntry(a1, v10, v47, v6);
        v13 = 4673;
        v14 = v47;
        v11 = a1;
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 436LL) & 0x200) != 0 && *(_QWORD *)(v12 + 48) == v6 )
        {
          *(_DWORD *)(v12 + 40) = 0;
          *(_QWORD *)(v12 + 48) = 0LL;
        }
      }
      v16 = ((_BYTE)v16 + 1) & 0x3F;
    }
    while ( v16 != v15 );
    LODWORD(v6) = v46;
  }
  v21 = *(_DWORD *)(v12 + 72);
  v22 = ((_BYTE)v8 + 1) & 0x3F;
  v23 = *(_DWORD *)(v12 + 68);
  v24 = ((_BYTE)v21 + 1) & 0x3F;
  if ( v15 != v24 )
  {
LABEL_50:
    v43 = 4673;
    while ( 1 )
    {
      v44 = *(_DWORD *)(1384LL * v15 + v12 + 1172);
      if ( v44 > 0xC || !_bittest(&v43, v44) )
        break;
      v15 = ((_BYTE)v15 + 1) & 0x3F;
      if ( v15 == v24 )
        goto LABEL_16;
    }
    v22 = v15;
  }
LABEL_16:
  *(_DWORD *)(v12 + 68) = v22;
  if ( v21 == v8 )
  {
    *(_DWORD *)(v12 + 72) = v22;
    LOBYTE(v21) = v22;
  }
  if ( !*(_BYTE *)(v10 + 59) && v22 != (((_BYTE)v21 + 1) & 0x3F) )
  {
    do
    {
      v25 = 1384LL * v22;
      v26 = *(_DWORD *)(v25 + v12 + 1172);
      if ( v26 == 5 || v26 == 15 )
      {
        if ( (*(_DWORD *)(v25 + v12 + 1256) & 0x10) != 0 )
          v45 = ((unsigned __int16)**(_DWORD **)(v25 + v12 + 1296) | (unsigned __int16)(**(_DWORD **)(v25 + v12 + 1296) >> 10)) & 0x3FF;
        else
          v45 = (1 << *(_DWORD *)(v10 + 152)) - 1;
        *(_DWORD *)(v14 + 3088) |= v45;
      }
      v22 = ((_BYTE)v22 + 1) & 0x3F;
    }
    while ( v22 != (((unsigned __int8)*(_DWORD *)(v12 + 72) + 1) & 0x3F) );
  }
  result = (_BYTE *)VidSchiCompleteFlipEntry(a1, v10, (unsigned int)v6, v12, v23, v8, 0, 0LL);
  *a5 = (_DWORD)result;
  if ( (_DWORD)result )
  {
    v28 = (unsigned int)*a4;
    *(_QWORD *)(a3 + 8 * v28) = v48;
    *a4 = v28 + 1;
    result = a6;
    *a6 = 1;
  }
  return result;
}
