__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, _DWORD *a2, size_t a3)
{
  size_t v3; // r15
  _DWORD *v4; // rsi
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  int v12; // ebx
  int NumHistoryLayersUsed; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edi
  int NumFlipAllocAttribs; // eax
  __int64 v17; // r11
  int v18; // edi
  size_t v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // r12d
  char *v24; // r13
  int v25; // edi
  char *v26; // r15
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v28; // r10d
  __int64 v29; // r11
  __int64 v30; // rcx
  char *v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int *v34; // r9
  unsigned int v35; // r11d
  unsigned int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  int v39; // ecx
  unsigned int v40; // ecx
  __int64 v41; // rbx
  unsigned int v42; // edx
  unsigned int v43; // r8d
  bool v44; // zf
  unsigned int v45; // edx
  int v46; // r12d
  int v47; // eax
  char v48; // cl
  unsigned int v49; // r9d
  char v50; // cl
  unsigned int v51; // r11d
  int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // ecx
  int v58; // edx
  int v59; // eax
  int v60; // ecx
  int v61; // edx
  __int64 v62; // r8
  _DWORD *v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  unsigned int v66; // ecx
  __int64 v67; // r9
  __int64 v68; // r8
  unsigned int v69; // eax
  __int64 v70; // r10
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  int v76; // [rsp+30h] [rbp-69h]
  int v77; // [rsp+34h] [rbp-65h]
  int NumFlipQueueEntriesUsed; // [rsp+38h] [rbp-61h]
  __int64 v79; // [rsp+40h] [rbp-59h]
  unsigned int v80; // [rsp+48h] [rbp-51h]
  int NumOverlayPlanesUsed; // [rsp+4Ch] [rbp-4Dh]
  __int64 v82; // [rsp+58h] [rbp-41h]
  unsigned int *v83; // [rsp+68h] [rbp-31h]
  __int64 v84; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v85; // [rsp+78h] [rbp-21h]
  unsigned int v86; // [rsp+80h] [rbp-19h]
  unsigned int v87; // [rsp+84h] [rbp-15h]
  int v88; // [rsp+88h] [rbp-11h]
  unsigned int v89; // [rsp+8Ch] [rbp-Dh]
  unsigned int v90; // [rsp+90h] [rbp-9h]
  __int64 v91; // [rsp+98h] [rbp-1h] BYREF
  int v92; // [rsp+A0h] [rbp+7h]
  int v93; // [rsp+A4h] [rbp+Bh]
  size_t v94; // [rsp+A8h] [rbp+Fh]
  unsigned int v95; // [rsp+100h] [rbp+67h]
  unsigned int v98; // [rsp+118h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2928LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 744);
  if ( v7 == 2 )
  {
    v9 = *(_QWORD *)(v8 + 3024);
    v10 = 16LL;
    v11 = (_QWORD *)(v9 + 560);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 3024), *v11, *((_DWORD *)v11 - 4) == 3, (__int64)(v11 - 4));
      v11 += 7;
      --v10;
    }
    while ( v10 );
    if ( v3 >= 0x390 )
      v3 = 912LL;
    memmove(v4, (const void *)(v9 + 496), v3);
  }
  else if ( v7 == 3 )
  {
    v12 = *(_DWORD *)(a1 + 80);
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 744), v12);
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, v12);
    v14 = *(_DWORD *)(a1 + 80);
    v77 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v14);
    v15 = ((_DWORD)v4 + 163) & 0xFFFFFFF8;
    LODWORD(v82) = v15 - (_DWORD)v4;
    NumFlipAllocAttribs = VidSchiGetNumFlipAllocAttribs(v8, v14);
    v17 = 4LL;
    HIDWORD(v82) = v15 + 280 * NumFlipAllocAttribs - (_DWORD)v4;
    v18 = v15 + 280 * NumFlipAllocAttribs + 48 * v77 - (_DWORD)v4;
    v19 = (unsigned int)(v18 + 48 * NumFlipQueueEntriesUsed);
    v94 = v19;
    if ( v3 >= v19 )
    {
      memset(v4, 0, (unsigned int)v19);
      *v4 = v18 + 48 * NumFlipQueueEntriesUsed;
      v4[1] = 3;
      v4[3] = VidSchiGetVSyncState(v8, *(_DWORD *)(a1 + 80));
      v20 = *(unsigned int *)(a1 + 80);
      v4[2] = v20;
      v4[37] = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(v4 + 35) = *(_QWORD *)(a1 + 96);
      *((_QWORD *)v4 + 16) = v82;
      v4[34] = v18;
      if ( (_DWORD)v20 != -1 && (unsigned int)v20 < *(_DWORD *)(v8 + 40) )
      {
        v21 = *(_QWORD *)(v8 + 8 * v20 + 3200);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 16);
          if ( v22 )
          {
            VidSchiCaptureProcessName(v22, (_BYTE *)v4 + 16);
            v23 = 0;
            v95 = 0;
            v24 = (char *)v4 + (unsigned int)v4[34];
            v4[8] = *(_DWORD *)(v21 + 4);
            v25 = -1;
            v26 = (char *)v4 + (unsigned int)v4[33];
            v92 = v4[2];
            v76 = 0;
            v98 = 0;
            v91 = v8;
            while ( 1 )
            {
              v93 = v25;
              if ( v25 == *(_DWORD *)(v8 + 152) )
                break;
              FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v91);
              if ( FlipQueue )
              {
                v30 = v28;
                v31 = (char *)FlipQueue + 1296;
                v32 = 280 * v30;
                *(_DWORD *)(v32 + v29) = v25;
                *(_DWORD *)(v32 + v29 + 4) = *((_DWORD *)FlipQueue + 14);
                *(_DWORD *)(v32 + v29 + 8) = *((_DWORD *)FlipQueue + 15);
                *(_DWORD *)(v32 + v29 + 12) = *((_DWORD *)FlipQueue + 16);
                v33 = 64LL;
                *(_DWORD *)(v32 + v29 + 16) = *((_DWORD *)FlipQueue + 17);
                v34 = (unsigned int *)(v32 + v29 + 24);
                *(_DWORD *)(v32 + v29 + 20) = *((_DWORD *)FlipQueue + 19);
                v35 = v95;
                v83 = v34;
                v79 = 64LL;
                do
                {
                  v36 = *((_DWORD *)v31 - 31);
                  if ( v36 <= 0xC && (v37 = 4673, _bittest(&v37, v36)) )
                  {
                    *v34 = -1;
                  }
                  else
                  {
                    *v34 = v35;
                    v38 = 0;
                    v39 = *((_DWORD *)v31 - 24);
                    if ( (v39 & 1) == 0 )
                    {
                      do
                      {
                        if ( v38 >= *(_DWORD *)(v8 + 76) )
                          break;
                        ++v38;
                      }
                      while ( !_bittest(&v39, v38) );
                    }
                    v40 = 0;
                    v84 = v8;
                    if ( v38 != *(_DWORD *)(v8 + 76) )
                      v40 = v38;
                    v80 = v40;
                    v41 = 6LL * v35;
                    *(_DWORD *)&v24[8 * v41] = v23;
                    *(_DWORD *)&v24[8 * v41 + 44] ^= (*(_DWORD *)&v24[48 * v35 + 44] ^ **(_DWORD **)v31) & 0x3FF;
                    v85 = *(unsigned int **)v31;
                    v42 = *v85;
                    v43 = *v85 & 0x3FF;
                    v44 = *(_BYTE *)(v8 + 156) == 0;
                    v86 = v43;
                    if ( v44 )
                      v45 = 0;
                    else
                      v45 = (v42 >> 10) & 0x3FF;
                    v46 = 0;
                    v44 = !_BitScanForward((unsigned int *)&v47, v43);
                    v48 = -1;
                    v87 = v45;
                    v88 = 0;
                    if ( !v44 )
                      v48 = v47;
                    v49 = v48;
                    v50 = -1;
                    v51 = v98;
                    v44 = !_BitScanForward((unsigned int *)&v52, v45);
                    v89 = v49;
                    if ( !v44 )
                      v50 = v52;
                    v53 = v50;
                    v90 = v50;
                    while ( v43 || v45 )
                    {
                      if ( v49 < v53 )
                      {
                        v54 = 6LL * v51;
                        *(_QWORD *)&v26[8 * v54] = *(_QWORD *)(((unsigned __int64)(v46
                                                                                 + v80
                                                                                 * *(_DWORD *)(*(_QWORD *)v31 + 4LL)) << 6)
                                                             + *(_QWORD *)v31
                                                             + *(_DWORD *)(*(_QWORD *)v31 + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 231) & 0xFFFFFFF8)
                                                             + 40);
                        v55 = *(_QWORD *)v31;
                        v56 = v46 * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 231) & 0xFFFFFFF8);
                        *(_OWORD *)&v26[8 * v54 + 8] = *(_OWORD *)(v56 + *(_QWORD *)v31 + 160);
                        *(_OWORD *)&v26[8 * v54 + 24] = *(_OWORD *)(v56 + v55 + 176);
                        *(_DWORD *)&v26[8 * v54 + 40] = *(_DWORD *)(v56 + v55 + 192);
                      }
                      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v84);
                      v53 = v90;
                      v45 = v87;
                      v43 = v86;
                      v49 = v89;
                      v46 = v88;
                    }
                    v34 = v83;
                    *(_DWORD *)&v24[8 * v41 + 4] = *((_DWORD *)v31 - 31);
                    *(_DWORD *)&v24[8 * v41 + 8] = *((_DWORD *)v31 - 30);
                    v98 = v51;
                    *(_DWORD *)&v24[8 * v41 + 44] ^= (*(_DWORD *)&v24[8 * v41 + 44] ^ (*((_DWORD *)v31 - 26) << 10)) & 0x3C00;
                    v57 = *(_DWORD *)&v24[8 * v41 + 44];
                    v23 = v51;
                    *(_DWORD *)&v24[8 * v41 + 12] = *((_DWORD *)v31 - 24);
                    *(_QWORD *)&v24[8 * v41 + 16] = *((_QWORD *)v31 - 9);
                    *(_QWORD *)&v24[8 * v41 + 24] = *((_QWORD *)v31 - 8);
                    *(_DWORD *)&v24[8 * v41 + 36] = *((_DWORD *)v31 - 12);
                    v58 = v57 ^ (v57 ^ ((unsigned __int8)*(v31 - 100) << 18)) & 0x40000;
                    *(_DWORD *)&v24[8 * v41 + 44] = v58;
                    v24[8 * v41 + 40] = *(v31 - 88);
                    v24[8 * v41 + 41] = *(v31 - 84);
                    v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v31 - 10) << 10)) & 0x4000;
                    *(_DWORD *)&v24[8 * v41 + 44] = v59;
                    v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v31 - 10) << 10)) & 0x8000;
                    *(_DWORD *)&v24[8 * v41 + 44] = v60;
                    v61 = v60 ^ (v60 ^ (*((_DWORD *)v31 - 10) << 9)) & 0x10000;
                    v33 = v79;
                    *(_DWORD *)&v24[8 * v41 + 44] = v61;
                    v35 = v95 + 1;
                    *(_DWORD *)&v24[8 * v41 + 44] = v61 ^ (v61 ^ (*((_DWORD *)v31 - 10) << 9)) & 0x20000;
                    ++v95;
                  }
                  ++v34;
                  v31 += 1384;
                  --v33;
                  v83 = v34;
                  v79 = v33;
                }
                while ( v33 );
                ++v76;
              }
              ++v25;
            }
            v4 = a2;
            v3 = a3;
          }
        }
      }
      v62 = 0LL;
      v4[14] = *(_DWORD *)(v8 + 2208);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 152);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v77;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 76); (unsigned int)v62 < *(_DWORD *)(v8 + 40); v62 = (unsigned int)(v62 + 1) )
        v4[v62 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2920LL) + 128LL)
                                 + 4000LL * (unsigned int)v62
                                 + 1088);
      v3 -= v94;
      v17 = 4LL;
      v4 = (_DWORD *)((char *)v4 + v94);
    }
    if ( v3 >= 0x40 )
    {
      v63 = v4;
      v64 = 4LL;
      v65 = (*(_DWORD *)(v8 + 6416) - 1) & 3;
      do
      {
        *(_QWORD *)v63 = *(_QWORD *)(v8 + 8 * v65 + 6424);
        v63[2] = *(_DWORD *)(v8 + 4 * v65 + 6456);
        v65 = ((_DWORD)v65 - 1) & 3;
        v63 += 4;
        --v64;
      }
      while ( v64 );
      v3 -= 64LL;
      v4 += 16;
    }
    v66 = *(_DWORD *)(v8 + 40);
    v67 = 0LL;
    if ( v66 )
    {
      do
      {
        v68 = *(_QWORD *)(v8 + 8 * v67 + 3200);
        v69 = v66;
        if ( v3 >= 0x160 && v68 )
        {
          v70 = 4LL;
          v71 = (*(_DWORD *)(v68 + 44332) - 1) & 3;
          do
          {
            *(_QWORD *)v4 = *(_QWORD *)(v68 + 8 * v71 + 44336);
            v72 = 10 * v71;
            v71 = ((_DWORD)v71 - 1) & 3;
            *(_OWORD *)(v4 + 2) = *(_OWORD *)(v68 + 8 * v72 + 44368);
            *(_OWORD *)(v4 + 6) = *(_OWORD *)(v68 + 8 * v72 + 44384);
            *(_OWORD *)(v4 + 10) = *(_OWORD *)(v68 + 8 * v72 + 44400);
            *(_OWORD *)(v4 + 14) = *(_OWORD *)(v68 + 8 * v72 + 44416);
            *(_OWORD *)(v4 + 18) = *(_OWORD *)(v68 + 8 * v72 + 44432);
            v4 += 22;
            --v70;
          }
          while ( v70 );
          v69 = *(_DWORD *)(v8 + 40);
          v3 -= 352LL;
        }
        v67 = (unsigned int)(v67 + 1);
        v66 = v69;
      }
      while ( (unsigned int)v67 < v69 );
    }
    if ( v3 >= 0x160 )
    {
      v73 = (*(_DWORD *)(v8 + 6056) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v73 + 6064);
        v74 = 10 * v73;
        v4 += 22;
        v73 = ((_DWORD)v73 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v74 + 6096);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v74 + 6112);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v74 + 6128);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v74 + 6144);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v74 + 6160);
        --v17;
      }
      while ( v17 );
    }
  }
  return 0LL;
}
