__int64 __fastcall MiConstructLoaderEntry(
        __int64 a1,
        const void **a2,
        const void **a3,
        unsigned int a4,
        int a5,
        unsigned int **a6)
{
  char v9; // r14
  SIZE_T v10; // rdx
  unsigned int *v11; // rdi
  _WORD *Pool; // rax
  _WORD *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned int v16; // r14d
  unsigned int *v17; // rsi
  unsigned int v18; // r13d
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r12
  SIZE_T v24; // rdx
  _OWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  char *v30; // rbx
  char *v31; // r15
  char *v32; // rcx
  unsigned __int64 v33; // r14
  __int16 v34; // r8
  unsigned __int64 v35; // rsi
  int v36; // ecx
  int v37; // edx
  __int64 v38; // r8
  __int64 SectionInfo; // rax
  bool v41; // cc
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned int v44; // r9d
  unsigned int v45; // r8d
  __int64 v46; // rsi
  unsigned __int64 v47; // rcx
  unsigned int v48; // eax
  int v49; // edx
  __int64 v50; // r14
  unsigned __int64 v51; // r13
  unsigned int v52; // r8d
  __int64 v53; // r14
  __int64 v54; // rdi
  unsigned int *v55; // rsi
  __int64 v56; // rax
  unsigned int v57; // r12d
  unsigned int v58; // edx
  __int64 v59; // rax
  unsigned __int128 v60; // rax
  unsigned __int64 v61; // rax
  unsigned int v62; // ebx
  __int64 v63; // [rsp+20h] [rbp-128h]
  unsigned int v64; // [rsp+20h] [rbp-128h]
  int v65; // [rsp+28h] [rbp-120h]
  __int64 v66; // [rsp+30h] [rbp-118h]
  __int128 v67; // [rsp+38h] [rbp-110h]
  __int64 v68; // [rsp+48h] [rbp-100h]
  char *v69; // [rsp+50h] [rbp-F8h]
  __int64 v70; // [rsp+58h] [rbp-F0h]
  __int64 v71[29]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v74; // [rsp+160h] [rbp+18h] BYREF
  unsigned int v75; // [rsp+168h] [rbp+20h]

  v75 = a4;
  v9 = a4;
  memset(&v71[1], 0, 0x90uLL);
  v10 = *(unsigned __int16 *)a3 + 2LL;
  v63 = 0LL;
  *a6 = 0LL;
  v11 = 0LL;
  DWORD1(v67) = 0;
  Pool = MiAllocatePool(256, v10, 0x54446D4Du);
  *((_QWORD *)&v67 + 1) = Pool;
  v13 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  LOWORD(v67) = *(_WORD *)a3;
  WORD1(v67) = *(_WORD *)a3;
  memmove(Pool, a3[1], *(unsigned __int16 *)a3);
  v13[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v14 = *(_QWORD *)(a1 + 48);
  v66 = v14;
  v15 = RtlImageNtHeader(v14);
  v65 = v9 & 1;
  if ( (v9 & 1) != 0 )
  {
    v41 = *(_DWORD *)(v15 + 132) <= 6u;
    v16 = 0;
    v74 = 0LL;
    v17 = 0LL;
    v18 = 32;
    if ( !v41 )
    {
      v42 = *(unsigned int *)(v15 + 184);
      v74 = v15 + 184;
      if ( (_DWORD)v42 )
      {
        v43 = *(unsigned int *)(v15 + 188);
        if ( (_DWORD)v43 )
        {
          if ( (int)v43 + (int)v42 > (unsigned int)v42 )
          {
            v44 = *(_DWORD *)(v15 + 80);
            if ( (int)v43 + (int)v42 < v44 )
            {
              v18 = v43 + 32;
              v45 = 0;
              v46 = v14 + v42;
              v47 = v43 / 0x1C;
              if ( v47 )
              {
                do
                {
                  v48 = *(_DWORD *)(v46 + 20);
                  if ( v48 )
                  {
                    if ( v48 < v44 )
                    {
                      v49 = *(_DWORD *)(v46 + 16);
                      if ( v49 + v48 < v44 )
                        v18 += v49;
                    }
                  }
                  ++v45;
                  v46 += 28LL;
                }
                while ( v45 < v47 );
              }
              v17 = (unsigned int *)(-28LL * v45 + v46);
            }
          }
        }
      }
      v18 = (v18 + 7) & 0xFFFFFFF8;
    }
  }
  else
  {
    v16 = *(unsigned __int16 *)(v15 + 6);
    if ( 0xFFFFFFFFFFFFFFFFuLL / *(unsigned __int16 *)(v15 + 6) < 4 )
    {
      v62 = -1073741520;
      goto LABEL_81;
    }
    v17 = 0LL;
    v74 = 0LL;
    v18 = 0;
  }
  v19 = (*(_DWORD *)(v15 + 80) >> 12) + ((*(_DWORD *)(v15 + 80) & 0xFFF) != 0);
  v20 = 8 * ((v19 >> 6) + ((v19 & 0x3F) != 0) + 2);
  v21 = (unsigned int)v20;
  v22 = v20 + 330;
  v68 = v21;
  if ( v22 <= 0x14A )
    goto LABEL_79;
  if ( v18 )
  {
    if ( v22 + v18 <= v22 )
      goto LABEL_79;
    v22 += v18;
  }
  v23 = (*(unsigned __int16 *)a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v24 = v22 + v23;
  if ( v22 + v23 <= v22 )
  {
LABEL_79:
    v62 = -1073741701;
    goto LABEL_81;
  }
  if ( v16 )
  {
    if ( v24 + 4LL * v16 > v24 )
    {
      v24 += 4LL * v16;
      goto LABEL_11;
    }
    goto LABEL_79;
  }
LABEL_11:
  v69 = (char *)MiAllocatePool(64, v24, 0x644C6D4Du);
  v11 = (unsigned int *)v69;
  if ( !v69 )
    goto LABEL_80;
  v25 = (_OWORD *)a1;
  v26 = *(_QWORD *)(a1 + 112);
  v70 = v26;
  if ( !v26 )
    goto LABEL_15;
  v27 = *(_QWORD *)MiSectionControlArea(v26);
  v29 = v28;
  LOBYTE(v29) = (*(_DWORD *)(v27 + 8) & 0xFFF) != 0;
  v63 = (unsigned int)((*(_DWORD *)(v27 + 8) >> 12) + v29);
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, (unsigned int)v63, v28) )
  {
LABEL_80:
    v62 = -1073741670;
LABEL_81:
    ExFreePoolWithTag(v13, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v62;
  }
  v25 = (_OWORD *)a1;
LABEL_15:
  v30 = v69 + 160;
  *((_QWORD *)v69 + 33) = 0LL;
  *((_QWORD *)v69 + 38) = v69 + 296;
  *((_QWORD *)v69 + 37) = v69 + 296;
  v31 = &v69[v68 + 328];
  v32 = &v31[v18];
  *((_QWORD *)v69 + 34) = v69 + 328;
  *((_QWORD *)v69 + 32) = v31;
  *((_QWORD *)v69 + 27) = v63;
  if ( v16 )
    *((_QWORD *)v69 + 28) = &v32[v23];
  *(_OWORD *)v69 = *v25;
  *((_OWORD *)v69 + 1) = v25[1];
  *((_OWORD *)v69 + 2) = v25[2];
  *((_OWORD *)v69 + 3) = v25[3];
  *((_OWORD *)v69 + 4) = v25[4];
  *((_OWORD *)v69 + 5) = v25[5];
  *((_OWORD *)v69 + 6) = v25[6];
  *((_OWORD *)v69 + 7) = v25[7];
  *((_OWORD *)v69 + 8) = v25[8];
  *((_OWORD *)v69 + 9) = v25[9];
  if ( *(_WORD *)(v15 + 64) >= 5u && *(_WORD *)(v15 + 68) >= 5u )
    *((_DWORD *)v69 + 26) |= 0x8000000u;
  if ( (*(_BYTE *)(v15 + 94) & 0x80) != 0 )
    *((_DWORD *)v69 + 26) |= 0x20u;
  *((_QWORD *)v69 + 12) = v32;
  *((_WORD *)v69 + 44) = *(_WORD *)a2;
  *((_WORD *)v69 + 45) = *(_WORD *)a2;
  memmove(v32, a2[1], *(unsigned __int16 *)a2);
  *(_WORD *)(*((_QWORD *)v69 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *(_OWORD *)(v69 + 72) = v67;
  *((_QWORD *)v69 + 5) = 0LL;
  if ( v65 )
  {
    *((_DWORD *)v69 + 26) |= 0x20000000u;
    *((_QWORD *)v69 + 5) = v31;
    *((_DWORD *)v31 + 1) = v18;
    *(_DWORD *)v31 = 84302;
    *((_WORD *)v31 + 4) = *(_WORD *)(v15 + 4);
    *((_WORD *)v31 + 5) = *(_WORD *)(v15 + 22);
    *((_DWORD *)v31 + 3) = *(_DWORD *)(v15 + 8);
    *((_DWORD *)v31 + 4) = *(_DWORD *)(v15 + 88);
    *((_DWORD *)v31 + 5) = *(_DWORD *)(v15 + 80);
    *((_QWORD *)v31 + 3) = v66;
    if ( v17 )
    {
      v50 = v74;
      memmove(v31 + 32, v17, *(unsigned int *)(v74 + 4));
      v51 = *(unsigned int *)(v50 + 4);
      v64 = 0;
      v52 = 0;
      if ( v51 / 0x1C )
      {
        v53 = 0LL;
        v54 = v74;
        v55 = v17 + 4;
        do
        {
          v56 = v55[1];
          v57 = *v55;
          LODWORD(v74) = v51;
          if ( (_DWORD)v56
            && (v58 = *(_DWORD *)(v15 + 80), (unsigned int)v56 < v58)
            && v57 + (unsigned int)v56 > (unsigned int)v56
            && v57 + (unsigned int)v56 < v58 )
          {
            memmove(&v31[(unsigned int)v51 + 32], (const void *)(v66 + v56), v57);
            v52 = v64;
            LODWORD(v51) = v57 + v51;
          }
          else
          {
            LODWORD(v74) = 0;
          }
          ++v52;
          v59 = 28 * v53;
          v53 = v52;
          v55 += 7;
          v64 = v52;
          *(_DWORD *)&v31[v59 + 52] = v74;
          v60 = *(unsigned int *)(v54 + 4) * (unsigned __int128)0x2492492492492493uLL;
        }
        while ( v52 < (*((_QWORD *)&v60 + 1)
                     + (((unsigned __int64)*(unsigned int *)(v54 + 4) - *((_QWORD *)&v60 + 1)) >> 1)) >> 4 );
        v11 = (unsigned int *)v69;
        v30 = v69 + 160;
      }
    }
  }
  *((_QWORD *)v11 + 7) = v66 + *(unsigned int *)(v15 + 40);
  v11[30] = *(_DWORD *)(v15 + 88);
  if ( v70 )
  {
    v33 = MiSectionControlArea(v70);
    v34 = *((_WORD *)v11 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v33 + 15LL) >> 4);
    *((_WORD *)v11 + 55) = v34;
    *((_WORD *)v11 + 55) = v34 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v33 + 15LL) >> 1) & 7));
  }
  else
  {
    v33 = 0LL;
  }
  v11[38] = *(_DWORD *)(v15 + 80);
  v11[39] = *(_DWORD *)(v15 + 8);
  MiCaptureImageExceptionValues(v11);
  MiLockdownSections(v11);
  if ( v70 )
    v35 = *(unsigned int *)(*(_QWORD *)v33 + 8LL);
  else
    v35 = (unsigned __int64)v11[16] >> 12;
  if ( v65 )
    goto LABEL_30;
  *((_QWORD *)v30 + 5) = v35;
  *((_QWORD *)v30 + 6) = v35;
  if ( v66 == PsNtosImageBase )
    goto LABEL_73;
  if ( v66 == PsHalImageBase )
  {
    if ( v66 != PsNtosImageBase )
    {
      v61 = v35 - MxHalFreedGapCharges;
      goto LABEL_74;
    }
LABEL_73:
    v61 = v35 - MxKernelFreedGapCharges;
LABEL_74:
    *((_QWORD *)v30 + 5) = v61;
  }
LABEL_30:
  v36 = *((_DWORD *)v30 + 9);
  if ( !a5 )
  {
    v36 |= 1u;
    *((_DWORD *)v30 + 9) = v36;
  }
  v37 = v36;
  v38 = v75;
  if ( (dword_140D1D1C4 & 1) != 0 || (v75 & 2) != 0 )
  {
    v37 = v36 | 0x10;
    *((_DWORD *)v30 + 9) = v36 | 0x10;
  }
  if ( (v37 & 1) != 0 || (v38 & 0x20) != 0 )
    *((_DWORD *)v30 + 9) = v37 | 0x400;
  *((_QWORD *)v11 + 16) = 0LL;
  LODWORD(v74) = 0;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v11 + 6), &v74, v38, 1LL);
    if ( SectionInfo )
    {
      v11[31] = v74;
      *((_QWORD *)v11 + 16) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v11);
      ExCovReadjustUnloadedModuleEntry(v11, 1LL);
    }
    LODWORD(v38) = v75;
  }
  if ( dword_140C694FC && (((v38 & 0x40000001) == 1) & _bittest((const signed __int32 *)&MiFlags, 0xEu)) != 0 )
    *((_DWORD *)v30 + 9) |= 0x40u;
  MiProcessLoaderEntry((int *)v11, 1);
  if ( !v65 )
  {
    if ( v70 )
    {
      *((_DWORD *)v30 + 8) = -2;
      *((_QWORD *)v30 + 2) = v66 | 3;
      *((_QWORD *)v30 + 3) = (v35 << 12) + v66 - 1;
      v71[0] = v33;
      MiManageSubsectionView(v71, v30, 3);
    }
  }
  *a6 = v11;
  return 0LL;
}
