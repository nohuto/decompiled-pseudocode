/*
 * XREFs of CmpCheckValueList @ 0x1407B2930
 * Callers:
 *     CmpCheckKey @ 0x1407B4B80 (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpCompareCompressedName @ 0x140775138 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x14077B3C0 (CmpCompareUnicodeString.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvIsCellAllocated @ 0x1407B0B10 (HvIsCellAllocated.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AF26CC (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR BugCheckParameter3,
        char a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR a5,
        int a6,
        PRTL_BITMAP BitMapHeader,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  unsigned int v11; // r12d
  unsigned int v13; // r15d
  _BYTE *v14; // rcx
  _BYTE *v15; // r13
  unsigned int v16; // esi
  __int64 CellMap; // rax
  __int64 v18; // rsi
  __int64 CellPaged; // rax
  __int64 BinAddress; // rax
  unsigned int *v21; // rcx
  int v22; // r9d
  __int64 v23; // rcx
  unsigned int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // r8
  bool v27; // si
  __int64 v28; // rax
  __int64 v29; // r14
  unsigned int v30; // eax
  int v31; // edx
  __int16 v32; // r8
  __int64 v33; // rcx
  int v34; // eax
  char v35; // r9
  unsigned __int16 v36; // cx
  int v37; // eax
  __int16 v38; // cx
  __int16 v39; // r8
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // ax
  unsigned int v42; // r13d
  unsigned int v43; // r14d
  __int64 v44; // r15
  _BYTE *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int *v50; // rcx
  int v51; // r9d
  __int64 v52; // rcx
  unsigned int v53; // r9d
  __int64 v54; // rdx
  __int64 v55; // r8
  bool v56; // si
  __int64 v57; // rax
  _BYTE *v58; // rsi
  __int64 *v59; // rdx
  bool v60; // zf
  ULONG_PTR v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r12
  unsigned __int64 v64; // rcx
  __int64 v65; // r14
  _DWORD *v66; // rsi
  __int64 v67; // rax
  unsigned int v68; // eax
  __int64 CellFlat; // rax
  __int64 v70; // rsi
  void *v71; // rcx
  __int64 v72; // rcx
  _BYTE *v73; // rsi
  int v74; // eax
  int v76; // [rsp+20h] [rbp-89h]
  int v77; // [rsp+20h] [rbp-89h]
  int v78; // [rsp+20h] [rbp-89h]
  int v79; // [rsp+20h] [rbp-89h]
  int v80; // [rsp+20h] [rbp-89h]
  __int64 v81; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v82; // [rsp+38h] [rbp-71h]
  _WORD v83[2]; // [rsp+3Ch] [rbp-6Dh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-69h]
  __int64 v85; // [rsp+48h] [rbp-61h] BYREF
  _BYTE *v86; // [rsp+50h] [rbp-59h]
  __int64 v87; // [rsp+58h] [rbp-51h] BYREF
  __int64 v88; // [rsp+60h] [rbp-49h] BYREF
  __int64 v89; // [rsp+68h] [rbp-41h] BYREF
  __int64 v90; // [rsp+70h] [rbp-39h] BYREF
  __int64 v91; // [rsp+78h] [rbp-31h] BYREF
  __int64 v92; // [rsp+80h] [rbp-29h]
  __int128 v93; // [rsp+88h] [rbp-21h] BYREF
  void *v94; // [rsp+98h] [rbp-11h]
  char v95; // [rsp+E8h] [rbp+3Fh]
  __int64 v96; // [rsp+F0h] [rbp+47h]
  unsigned int v97; // [rsp+F8h] [rbp+4Fh]
  char v98; // [rsp+118h] [rbp+6Fh]

  v97 = a4;
  v96 = a3;
  v95 = a2;
  v11 = 0;
  v81 = 0xFFFFFFFFLL;
  v92 = 0LL;
  v82 = 0;
  v13 = 0;
  v85 = 0xFFFFFFFFLL;
  v90 = 0xFFFFFFFFLL;
  v89 = 0xFFFFFFFFLL;
  v88 = 0xFFFFFFFFLL;
  v98 = 0;
  v93 = 0LL;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  if ( !a4 )
    return v11;
  v14 = (_BYTE *)(BugCheckParameter3 + 140);
  v15 = v14;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a3 + 4LL * v13);
    LODWORD(BugCheckParameter4) = v16;
    v94 = (void *)(a3 + 4LL * v13);
    v86 = v15;
    if ( a2 )
    {
      v86 = v14;
      v15 = v14;
      if ( a4 != 1 )
      {
        v11 = -1073741492;
        SetFailureLocation(a8, 0, 15, -1073741492, 64);
        goto LABEL_265;
      }
    }
    if ( v16 != -1 )
      break;
    v11 = -1073741492;
    v98 = 1;
    SetFailureLocation(a8, 1, 15, -1073741492, 80);
    if ( !a8 )
      goto LABEL_250;
    *(_DWORD *)(a8 + 284) = -1;
LABEL_249:
    *(_DWORD *)(a8 + 280) = v13;
LABEL_250:
    if ( (a6 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a8, 0, 15, -1073741492, 48);
      return v11;
    }
    SetFailureLocation(a8, 1, 15, -1073741492, 0);
    if ( (*v15 & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)a5);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v70 = CellFlat;
    if ( !CellFlat )
    {
      v11 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 16);
      return v11;
    }
    v11 = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)a5);
    if ( (v11 & 0x80000000) != 0 )
    {
      v92 = 0LL;
      v74 = 24;
      goto LABEL_300;
    }
    v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v70 + 40));
    if ( (v11 & 0x80000000) != 0 )
    {
      v74 = 40;
LABEL_300:
      SetFailureLocation(a8, v92, 15, v11, v74);
      v59 = &v90;
      goto LABEL_301;
    }
    v71 = v94;
    --*(_DWORD *)(v70 + 36);
    memmove(v71, (const void *)(v96 + 4LL * (v13 + 1)), 4LL * (--v97 - v13));
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    if ( (*v15 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v90);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v90);
LABEL_262:
    a4 = v97;
    if ( v13 >= v97 )
    {
      if ( v98 )
        return (unsigned int)-2147483606;
      else
        return 0;
    }
    a2 = v95;
    v14 = (_BYTE *)(BugCheckParameter3 + 140);
    a3 = v96;
  }
  v87 = 0xFFFFFFFFLL;
  v83[0] = 0;
  HvpGetBinContextInitialize((char *)&v87 + 4);
  HvpGetBinContextInitialize(v83);
  if ( (*v15 & 1) != 0 )
    goto LABEL_41;
  if ( (v16 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (v16 >> 31) + BugCheckParameter3 + 280) || (v16 & 7) != 0 )
    goto LABEL_37;
  if ( BitMapHeader && (v16 & 0x80000000) == 0 )
  {
    if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, v16 >> 3) )
    {
      RtlClearBits(BitMapHeader, v16 >> 3, 1u);
      goto LABEL_15;
    }
LABEL_37:
    v11 = -1073741492;
    v98 = 1;
    SetFailureLocation(a8, 1, 15, -1073741492, 96);
    if ( !a8 )
      goto LABEL_250;
    *(_DWORD *)(a8 + 284) = v16;
    goto LABEL_249;
  }
LABEL_15:
  CellMap = HvpGetCellMap(BugCheckParameter3, v16);
  v18 = CellMap;
  if ( !CellMap || (*(_BYTE *)(CellMap + 8) & 2) != 0 )
  {
    v16 = BugCheckParameter4;
    goto LABEL_37;
  }
  if ( (*v15 & 1) != 0 )
    CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4);
  else
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  if ( CellPaged && CellPaged != 4 )
  {
    BinAddress = HvpMapEntryGetBinAddress(CellPaged - 4, v18, v83);
    v22 = (int)v21;
    v23 = *v21;
    v24 = v22 - BinAddress;
    v25 = (unsigned int)-(int)v23;
    v27 = 0;
    if ( (int)v23 < 0 )
    {
      v23 = (unsigned int)(v25 - 8);
      if ( (unsigned int)v23 <= 0xFFFF8 )
      {
        v26 = *(unsigned int *)(BinAddress + 8);
        v23 = v26 - 32;
        if ( (unsigned int)v25 <= (unsigned __int64)(v26 - 32)
          && (unsigned int)v25 + v24 <= (unsigned int)v26
          && v24 >= 0x20 )
        {
          v27 = 1;
        }
      }
    }
    if ( BinAddress )
      HvpMapEntryReleaseBinAddress(v23, v25, v83);
    if ( (*v15 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v87);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v87);
    v60 = !v27;
    v16 = BugCheckParameter4;
    if ( !v60 )
      goto LABEL_40;
    goto LABEL_37;
  }
  v16 = BugCheckParameter4;
LABEL_40:
  if ( (*v15 & 1) != 0 )
LABEL_41:
    v28 = HvpGetCellFlat(BugCheckParameter3, v16);
  else
    v28 = HvpGetCellPaged(BugCheckParameter3);
  v87 = v28;
  v29 = v28;
  if ( !v28 )
  {
    v11 = -1073741670;
    SetFailureLocation(a8, 0, 15, -1073741670, 112);
LABEL_265:
    if ( a8 )
    {
      *(_DWORD *)(a8 + 280) = v13;
      *(_DWORD *)(a8 + 284) = v16;
    }
    return v11;
  }
  v30 = -4 - *(_DWORD *)(v28 - 4);
  if ( v30 < 0x14 )
  {
    v98 = 1;
    v11 = -1073741492;
    SetFailureLocation(a8, 1, 15, -1073741492, 128);
    if ( a8 )
    {
      *(_DWORD *)(a8 + 280) = v13;
      *(_DWORD *)(a8 + 284) = v16;
      *(_QWORD *)(a8 + 288) = v29;
    }
    v33 = BugCheckParameter3;
    if ( (*v15 & 1) == 0 )
    {
LABEL_97:
      HvpReleaseCellPaged(v33, &v81);
      goto LABEL_250;
    }
    goto LABEL_245;
  }
  if ( *(_WORD *)v29 != 27510 )
  {
    v98 = 1;
    v11 = -1073741492;
    SetFailureLocation(a8, 1, 15, -1073741492, 136);
    if ( a8 )
    {
      *(_DWORD *)(a8 + 280) = v13;
      *(_DWORD *)(a8 + 284) = v16;
      *(_QWORD *)(a8 + 288) = v29;
    }
    v33 = BugCheckParameter3;
    if ( (*v15 & 1) == 0 )
      goto LABEL_97;
    goto LABEL_245;
  }
  v31 = *(unsigned __int16 *)(v29 + 2);
  if ( v31 + 20 > v30 )
  {
    v98 = 1;
    v11 = -1073741492;
    SetFailureLocation(a8, 1, 15, -1073741492, 144);
    if ( a8 )
    {
      *(_DWORD *)(a8 + 280) = v13;
      *(_DWORD *)(a8 + 284) = v16;
      *(_QWORD *)(a8 + 288) = v29;
    }
    goto LABEL_236;
  }
  v32 = *(_WORD *)(v29 + 16);
  if ( (v32 & 1) != 0 )
  {
    if ( (unsigned __int16)v31 > 0x3FFFu )
    {
      v98 = 1;
      v11 = -1073741492;
      SetFailureLocation(a8, 1, 15, -1073741492, 146);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v13;
        *(_DWORD *)(a8 + 284) = v16;
        *(_QWORD *)(a8 + 288) = v29;
      }
      v33 = BugCheckParameter3;
      if ( (*v15 & 1) == 0 )
        goto LABEL_97;
      goto LABEL_245;
    }
  }
  else
  {
    if ( (v31 & 1) != 0 )
    {
      v98 = 1;
      v11 = -1073741492;
      SetFailureLocation(a8, 1, 15, -1073741492, 148);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v13;
        *(_DWORD *)(a8 + 284) = v16;
        *(_QWORD *)(a8 + 288) = v29;
      }
      v33 = BugCheckParameter3;
      if ( (*v15 & 1) == 0 )
        goto LABEL_97;
      goto LABEL_245;
    }
    if ( (unsigned __int16)v31 > 0x7FFFu )
    {
      v98 = 1;
      v11 = -1073741492;
      SetFailureLocation(a8, 1, 15, -1073741492, 150);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v13;
        *(_DWORD *)(a8 + 284) = v16;
        *(_QWORD *)(a8 + 288) = v29;
      }
      v33 = BugCheckParameter3;
      if ( (*v15 & 1) == 0 )
        goto LABEL_97;
      goto LABEL_245;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) != 0 || (v32 & 2) == 0 )
  {
LABEL_64:
    v35 = v95;
    if ( !v95 )
      goto LABEL_72;
    v36 = *(_WORD *)(v29 + 2);
    if ( (*(_BYTE *)(v29 + 16) & 1) != 0 )
    {
      v37 = CmpCompareCompressedName((__int64)&CmSymbolicLinkValueName, (unsigned __int8 *)(v29 + 20), v36, 0);
    }
    else
    {
      *((_QWORD *)&v93 + 1) = v29 + 20;
      LOWORD(v93) = v36;
      WORD1(v93) = v36;
      v37 = CmpCompareUnicodeString((__int64)&CmSymbolicLinkValueName, (__int64)&v93, 0);
    }
    if ( v37 )
    {
      v79 = 160;
    }
    else
    {
      if ( *(_DWORD *)(v29 + 12) == 6 || (*(_BYTE *)(v29 + 16) & 2) != 0 )
      {
        v35 = v95;
LABEL_72:
        v38 = *(_WORD *)(v29 + 2);
        v39 = *(_WORD *)(v29 + 16);
        v40 = 2 * v38;
        if ( (v39 & 1) == 0 )
          v40 = *(_WORD *)(v29 + 2);
        if ( *a9 < (unsigned int)v40 )
        {
          v41 = 2 * v38;
          if ( (v39 & 1) == 0 )
            v41 = *(_WORD *)(v29 + 2);
          *a9 = v41;
        }
        v42 = *(_DWORD *)(v29 + 4);
        if ( v35 )
        {
          if ( (v42 & 1) != 0 )
          {
            v80 = 192;
          }
          else
          {
            if ( v42 <= 0xFFFF )
              goto LABEL_81;
            v80 = 208;
          }
          v11 = -1073741492;
          SetFailureLocation(a8, 0, 15, -1073741492, v80);
          if ( a8 )
          {
            *(_DWORD *)(a8 + 280) = v13;
            *(_DWORD *)(a8 + 284) = v16;
            *(_QWORD *)(a8 + 288) = v29;
          }
          goto LABEL_278;
        }
LABEL_81:
        if ( (v39 & 2) != 0 )
        {
          if ( !v42 && !*(_DWORD *)(v29 + 12) )
          {
            v43 = *(_DWORD *)(v29 + 8);
            v44 = 0LL;
LABEL_91:
            if ( v43 != -1 )
            {
              v77 = 224;
LABEL_93:
              v98 = 1;
              v11 = -1073741492;
              SetFailureLocation(a8, 1, 15, -1073741492, v77);
              v13 = v82;
              if ( a8 )
              {
                *(_QWORD *)(a8 + 288) = v87;
                *(_DWORD *)(a8 + 280) = v13;
                *(_DWORD *)(a8 + 284) = v16;
              }
              v15 = v86;
LABEL_96:
              v33 = BugCheckParameter3;
              if ( (*v15 & 1) == 0 )
                goto LABEL_97;
LABEL_245:
              HvpReleaseCellFlat(v33, &v81);
              goto LABEL_250;
            }
            v45 = v86;
            goto LABEL_136;
          }
          v76 = 224;
LABEL_86:
          v98 = 1;
          v11 = -1073741492;
          SetFailureLocation(a8, 1, 15, -1073741492, v76);
          if ( a8 )
          {
            *(_DWORD *)(a8 + 280) = v13;
            *(_DWORD *)(a8 + 284) = v16;
            *(_QWORD *)(a8 + 288) = v29;
          }
          v15 = v86;
          goto LABEL_236;
        }
        if ( v42 >= 0x80000000 )
        {
          if ( v42 + 0x80000000 <= 4 )
            goto LABEL_215;
          v76 = 416;
          goto LABEL_86;
        }
        v43 = *(_DWORD *)(v29 + 8);
        v44 = 0LL;
        if ( !v42 )
          goto LABEL_91;
        v91 = 0xFFFFFFFFLL;
        v83[0] = 0;
        HvpGetBinContextInitialize((char *)&v91 + 4);
        HvpGetBinContextInitialize(v83);
        v45 = v86;
        if ( (*v86 & 1) != 0 )
          goto LABEL_130;
        if ( (v43 & 0x7FFFFFFF) < *(_DWORD *)(632LL * (v43 >> 31) + BugCheckParameter3 + 280) && (v43 & 7) == 0 )
        {
          if ( BitMapHeader && (v43 & 0x80000000) == 0 )
          {
            if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, v43 >> 3) )
              goto LABEL_127;
            RtlClearBits(BitMapHeader, v43 >> 3, 1u);
          }
          v46 = HvpGetCellMap(BugCheckParameter3, v43);
          v47 = v46;
          if ( v46 && (*(_BYTE *)(v46 + 8) & 2) == 0 )
          {
            if ( (*v45 & 1) != 0 )
              v48 = HvpGetCellFlat(BugCheckParameter3, v43);
            else
              v48 = HvpGetCellPaged(BugCheckParameter3);
            if ( !v48 || v48 == 4 )
            {
              v16 = BugCheckParameter4;
            }
            else
            {
              v49 = HvpMapEntryGetBinAddress(v48 - 4, v47, v83);
              v51 = (int)v50;
              v52 = *v50;
              v53 = v51 - v49;
              v54 = (unsigned int)-(int)v52;
              v56 = 0;
              if ( (int)v52 < 0 )
              {
                v52 = (unsigned int)(v54 - 8);
                if ( (unsigned int)v52 <= 0xFFFF8 )
                {
                  v55 = *(unsigned int *)(v49 + 8);
                  v52 = v55 - 32;
                  if ( (unsigned int)v54 <= (unsigned __int64)(v55 - 32)
                    && (unsigned int)v54 + v53 <= (unsigned int)v55
                    && v53 >= 0x20 )
                  {
                    v56 = 1;
                  }
                }
              }
              if ( v49 )
                HvpMapEntryReleaseBinAddress(v52, v54, v83);
              if ( (*v45 & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v91);
              else
                HvpReleaseCellPaged(BugCheckParameter3, &v91);
              v60 = !v56;
              v16 = BugCheckParameter4;
              if ( v60 )
              {
                v77 = 240;
                goto LABEL_93;
              }
            }
            if ( (*v45 & 1) == 0 )
            {
              v57 = HvpGetCellPaged(BugCheckParameter3);
LABEL_132:
              v44 = v57;
              if ( v57 )
              {
LABEL_136:
                if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || v42 <= 0x3FD8 )
                {
                  if ( !v42 || v42 <= -4 - *(_DWORD *)(v44 - 4) )
                  {
                    v15 = v86;
LABEL_211:
                    if ( v44 )
                    {
                      if ( (*v15 & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, &v85);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, &v85);
                    }
                    v29 = v87;
                    v13 = v82;
LABEL_215:
                    v68 = *(_DWORD *)(v29 + 4);
                    if ( v68 >= 0x80000000 )
                      v68 += 0x80000000;
                    if ( *a10 < v68 )
                      *a10 = v68;
                    if ( (*v86 & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v81);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, &v81);
                    ++v13;
                    v15 = (_BYTE *)(BugCheckParameter3 + 140);
                    v82 = v13;
                    goto LABEL_262;
                  }
                  v98 = 1;
                  v11 = -1073741492;
                  SetFailureLocation(a8, 1, 15, -1073741492, 400);
                  v13 = v82;
                  if ( a8 )
                  {
                    *(_QWORD *)(a8 + 288) = v87;
                    *(_DWORD *)(a8 + 280) = v13;
                    *(_DWORD *)(a8 + 284) = v16;
                  }
                  v15 = v86;
LABEL_187:
                  if ( (*v15 & 1) != 0 )
                    HvpReleaseCellFlat(BugCheckParameter3, &v85);
                  else
                    HvpReleaseCellPaged(BugCheckParameter3, &v85);
                  goto LABEL_96;
                }
                if ( (unsigned int)(-4 - *(_DWORD *)(v44 - 4)) >= 8 && *(_WORD *)v44 == 25188 )
                {
                  if ( *(_WORD *)(v44 + 2) )
                  {
                    v61 = *(unsigned int *)(v44 + 4);
                    if ( (_DWORD)v61 != -1 )
                    {
                      if ( !HvIsCellAllocated(BugCheckParameter3, v61, BitMapHeader) )
                      {
                        v98 = 1;
                        v11 = -1073741492;
                        SetFailureLocation(a8, 1, 15, -1073741492, 288);
                        if ( a8 )
                        {
                          *(_DWORD *)(a8 + 280) = v82;
                          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v44 + 4);
                          *(_QWORD *)(a8 + 288) = v44;
                        }
                        v15 = v86;
                        if ( (*v86 & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v85);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, &v85);
                        if ( (*v15 & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v81);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, &v81);
                        v13 = v82;
                        goto LABEL_250;
                      }
                      if ( (*v45 & 1) != 0 )
                        v62 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v44 + 4));
                      else
                        v62 = HvpGetCellPaged(BugCheckParameter3);
                      v63 = v62;
                      if ( !v62 )
                      {
                        v11 = -1073741670;
                        SetFailureLocation(a8, 0, 15, -1073741670, 304);
                        if ( a8 )
                        {
                          *(_DWORD *)(a8 + 280) = v82;
                          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v44 + 4);
                        }
                        v73 = v86;
                        if ( (*v86 & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v85);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, &v85);
                        v60 = (*v73 & 1) == 0;
                        v59 = &v81;
                        goto LABEL_302;
                      }
                      v64 = 4LL * *(unsigned __int16 *)(v44 + 2);
                      if ( v64 < 4 || v64 > (unsigned int)(-4 - *(_DWORD *)(v62 - 4)) )
                      {
                        v78 = 320;
                      }
                      else
                      {
                        if ( *(unsigned __int16 *)(v44 + 2) == (v42 + 16343) / 0x3FD8 )
                        {
                          v15 = v86;
                          v65 = 0LL;
                          if ( *(_WORD *)(v44 + 2) )
                          {
                            while ( 1 )
                            {
                              v66 = (_DWORD *)(v63 + 4 * v65);
                              if ( !HvIsCellAllocated(BugCheckParameter3, (unsigned int)*v66, BitMapHeader) )
                                break;
                              if ( (*v15 & 1) != 0 )
                                v67 = HvpGetCellFlat(BugCheckParameter3, (unsigned int)*v66);
                              else
                                v67 = HvpGetCellPaged(BugCheckParameter3);
                              if ( !v67 )
                              {
                                v11 = -1073741670;
                                SetFailureLocation(a8, 0, 15, -1073741670, 368);
                                if ( a8 )
                                {
                                  *(_DWORD *)(a8 + 280) = v65;
                                  *(_DWORD *)(a8 + 284) = *v66;
                                  *(_QWORD *)(a8 + 288) = v44;
                                }
                                if ( (*v15 & 1) != 0 )
                                  HvpReleaseCellFlat(BugCheckParameter3, &v88);
                                else
                                  HvpReleaseCellPaged(BugCheckParameter3, &v88);
                                if ( (*v15 & 1) != 0 )
                                  HvpReleaseCellFlat(BugCheckParameter3, &v85);
                                else
                                  HvpReleaseCellPaged(BugCheckParameter3, &v85);
                                v59 = &v81;
                                goto LABEL_301;
                              }
                              if ( (unsigned int)(-4 - *(_DWORD *)(v67 - 4)) < 0x3FD8 )
                              {
                                v98 = 1;
                                v11 = -1073741492;
                                SetFailureLocation(a8, 1, 15, -1073741492, 384);
                                if ( a8 )
                                {
                                  *(_DWORD *)(a8 + 280) = v65;
                                  *(_DWORD *)(a8 + 284) = *v66;
                                  *(_QWORD *)(a8 + 288) = v44;
                                }
                                if ( (*v15 & 1) != 0 )
                                  HvpReleaseCellFlat(BugCheckParameter3, &v89);
                                else
                                  HvpReleaseCellPaged(BugCheckParameter3, &v89);
LABEL_170:
                                if ( (*v15 & 1) != 0 )
                                  HvpReleaseCellFlat(BugCheckParameter3, &v88);
                                else
                                  HvpReleaseCellPaged(BugCheckParameter3, &v88);
                                if ( (*v15 & 1) != 0 )
                                  HvpReleaseCellFlat(BugCheckParameter3, &v85);
                                else
                                  HvpReleaseCellPaged(BugCheckParameter3, &v85);
                                if ( (*v15 & 1) != 0 )
                                  HvpReleaseCellFlat(BugCheckParameter3, &v81);
                                else
                                  HvpReleaseCellPaged(BugCheckParameter3, &v81);
                                v13 = v82;
                                goto LABEL_250;
                              }
                              if ( (*v15 & 1) != 0 )
                                HvpReleaseCellFlat(BugCheckParameter3, &v89);
                              else
                                HvpReleaseCellPaged(BugCheckParameter3, &v89);
                              v65 = (unsigned int)(v65 + 1);
                              if ( (unsigned int)v65 >= *(unsigned __int16 *)(v44 + 2) )
                                goto LABEL_161;
                            }
                            v98 = 1;
                            v11 = -1073741492;
                            SetFailureLocation(a8, 1, 15, -1073741492, 352);
                            if ( a8 )
                            {
                              *(_DWORD *)(a8 + 280) = v65;
                              *(_DWORD *)(a8 + 284) = *v66;
                              *(_QWORD *)(a8 + 288) = v44;
                            }
                            goto LABEL_170;
                          }
LABEL_161:
                          if ( (*v15 & 1) != 0 )
                            HvpReleaseCellFlat(BugCheckParameter3, &v88);
                          else
                            HvpReleaseCellPaged(BugCheckParameter3, &v88);
                          goto LABEL_211;
                        }
                        v78 = 336;
                      }
                      v98 = 1;
                      v11 = -1073741492;
                      SetFailureLocation(a8, 1, 15, -1073741492, v78);
                      v13 = v82;
                      if ( a8 )
                      {
                        *(_QWORD *)(a8 + 288) = v87;
                        *(_DWORD *)(a8 + 280) = v13;
                        *(_DWORD *)(a8 + 284) = v16;
                      }
                      v15 = v86;
                      if ( (*v86 & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, &v88);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, &v88);
                      goto LABEL_187;
                    }
                  }
                }
                v98 = 1;
                v11 = -1073741492;
                SetFailureLocation(a8, 1, 15, -1073741492, 272);
                v13 = v82;
                if ( a8 )
                {
                  *(_DWORD *)(a8 + 280) = v82;
                  *(_DWORD *)(a8 + 284) = v43;
                }
                v15 = v86;
                if ( (*v86 & 1) != 0 )
                  HvpReleaseCellFlat(BugCheckParameter3, &v85);
                else
                  HvpReleaseCellPaged(BugCheckParameter3, &v85);
LABEL_236:
                v33 = BugCheckParameter3;
                if ( (*v15 & 1) == 0 )
                  goto LABEL_97;
                goto LABEL_245;
              }
              v11 = -1073741670;
              SetFailureLocation(a8, 0, 15, -1073741670, 256);
              if ( a8 )
              {
                v58 = v86;
                v59 = &v81;
                *(_DWORD *)(a8 + 280) = v82;
                *(_DWORD *)(a8 + 284) = v43;
                v60 = (*v58 & 1) == 0;
LABEL_302:
                v72 = BugCheckParameter3;
                if ( !v60 )
                  goto LABEL_303;
LABEL_269:
                HvpReleaseCellPaged(v72, v59);
                return v11;
              }
LABEL_278:
              v59 = &v81;
              v60 = (*v86 & 1) == 0;
              goto LABEL_302;
            }
LABEL_130:
            v57 = HvpGetCellFlat(BugCheckParameter3, v43);
            goto LABEL_132;
          }
          v16 = BugCheckParameter4;
        }
LABEL_127:
        v77 = 240;
        goto LABEL_93;
      }
      v79 = 176;
    }
    v11 = -1073741492;
    SetFailureLocation(a8, 0, 15, -1073741492, v79);
    if ( a8 )
    {
      *(_DWORD *)(a8 + 280) = v13;
      *(_DWORD *)(a8 + 284) = v16;
      *(_QWORD *)(a8 + 288) = v29;
    }
    v59 = &v81;
LABEL_301:
    v60 = (*v15 & 1) == 0;
    goto LABEL_302;
  }
  v98 = 1;
  v11 = -1073741492;
  if ( a8 )
  {
    *(_DWORD *)(a8 + 280) = v13;
    *(_DWORD *)(a8 + 284) = v16;
    *(_QWORD *)(a8 + 288) = v29;
  }
  if ( (a6 & 0x20000) == 0 && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) )
  {
    SetFailureLocation(a8, 1, 15, -1073741492, 152);
    v34 = HvpMarkCellDirty(BugCheckParameter3, v16);
    v11 = v34;
    if ( v34 < 0 )
    {
      SetFailureLocation(a8, 1, 15, v34, 154);
      v59 = &v81;
      goto LABEL_301;
    }
    *(_WORD *)(v29 + 16) &= ~2u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    goto LABEL_64;
  }
  SetFailureLocation(a8, 0, 15, -1073741492, 156);
  v59 = &v81;
  v72 = BugCheckParameter3;
  if ( (*v15 & 1) == 0 )
    goto LABEL_269;
LABEL_303:
  HvpReleaseCellFlat(v72, v59);
  return v11;
}
