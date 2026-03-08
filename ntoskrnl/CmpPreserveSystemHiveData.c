/*
 * XREFs of CmpPreserveSystemHiveData @ 0x140A1F84C
 * Callers:
 *     CmReplaceKey @ 0x140A12A54 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x1403D3C80 (_strnicmp.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     CmpGetValueData @ 0x1407AAC20 (CmpGetValueData.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpWalkPath @ 0x1407FE938 (CmpWalkPath.c)
 *     CmpCopySyncTree @ 0x140A1E748 (CmpCopySyncTree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 CellFlat; // rax
  bool v9; // zf
  __int64 v10; // rbx
  __int64 CellPaged; // rax
  int v12; // r14d
  PCWSTR *v13; // r15
  const WCHAR *v14; // rbx
  int v15; // r13d
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // r12d
  WCHAR *v20; // r12
  __int64 v21; // rax
  unsigned int ValueByName; // ebx
  __int64 v23; // rax
  __int64 v24; // rbx
  ULONG_PTR v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  _WORD *v28; // r14
  unsigned int v29; // ebx
  size_t v30; // rbx
  char v31; // r13
  unsigned int v32; // r15d
  __int64 *v33; // rbx
  unsigned int v34; // eax
  unsigned __int64 v35; // r14
  unsigned int *v36; // r8
  __int64 v37; // rax
  unsigned int v38; // eax
  unsigned int *v39; // r8
  __int64 v40; // rax
  _DWORD *v41; // rcx
  unsigned int v42; // r12d
  unsigned int v43; // r13d
  __int64 v44; // rax
  const char *v45; // rcx
  int v46; // eax
  bool v47; // bl
  int *v48; // r14
  unsigned int v49; // r15d
  unsigned int v50; // eax
  __int64 v51; // rax
  int v52; // ebx
  unsigned int v53; // ebx
  __int64 v54; // rax
  unsigned int v55; // r15d
  __int64 *v56; // r14
  unsigned int *v57; // rdx
  unsigned int *v58; // rdx
  void *v59; // rcx
  unsigned int *v60; // rdx
  size_t Size; // [rsp+28h] [rbp-D8h]
  __int64 v63; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v68; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v72[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-58h] BYREF
  int v74; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-48h]
  _DWORD v76[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v78[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-20h] BYREF
  int v80; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v81; // [rsp+ECh] [rbp-14h] BYREF
  _BYTE v82[4]; // [rsp+F4h] [rbp-Ch] BYREF
  const wchar_t *v83; // [rsp+F8h] [rbp-8h]
  const wchar_t *v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+108h] [rbp+8h]
  __int64 v86; // [rsp+110h] [rbp+10h]
  int v87; // [rsp+118h] [rbp+18h]
  int v88; // [rsp+11Ch] [rbp+1Ch]
  int v89; // [rsp+120h] [rbp+20h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  int v91; // [rsp+130h] [rbp+30h]
  int v92; // [rsp+134h] [rbp+34h]
  __int64 v93; // [rsp+138h] [rbp+38h]
  int v94; // [rsp+140h] [rbp+40h]
  __int64 v95; // [rsp+144h] [rbp+44h]
  char v96; // [rsp+14Ch] [rbp+4Ch]
  ULONG_PTR BugCheckParameter4; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR v98; // [rsp+1A8h] [rbp+A8h]
  WCHAR *Pool2; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h] BYREF

  v72[0] = L"WPA";
  v72[2] = L"Control\\FastCache";
  v76[1] = 0;
  v78[1] = 0;
  v81 = 0LL;
  v83 = L"Control\\ProductOptions";
  v84 = L"ProductPolicy";
  v88 = 0;
  v92 = 0;
  v95 = 0LL;
  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  v100 = 0xFFFFFFFFLL;
  v69 = 0xFFFFFFFFLL;
  v66 = 0xFFFFFFFFLL;
  v64 = 0xFFFFFFFFLL;
  v65 = 0xFFFFFFFFLL;
  v67 = 0xFFFFFFFFLL;
  v63 = 0xFFFFFFFFLL;
  v73 = 0LL;
  v74 = -1;
  v75 = 0LL;
  v76[0] = -1;
  v76[2] = -1;
  v77 = 0LL;
  v78[0] = -1;
  v79 = 0LL;
  v80 = -1;
  v82[0] = 0;
  v85 = -1;
  v86 = 0LL;
  v87 = -1;
  v89 = -1;
  v90 = 0LL;
  v91 = -1;
  v93 = 0LL;
  v94 = -1;
  v96 = 0;
  v5 = *(_DWORD *)(v4 + 36);
  v6 = *(_QWORD *)(a2 + 64);
  LODWORD(BugCheckParameter4) = 0;
  Pool2 = 0LL;
  v70 = 0LL;
  v7 = *(_DWORD *)(v6 + 36);
  v68 = 0LL;
  LODWORD(v98) = v5;
  DestinationString = 0LL;
  if ( v5 == -1 || v7 == -1 )
  {
    v17 = -1073741492;
    v20 = 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, &v67);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, (unsigned int *)&v67);
    v9 = (*(_BYTE *)(a2 + 140) & 1) == 0;
    v10 = CellFlat;
    v70 = CellFlat;
    if ( v9 )
      CellPaged = HvpGetCellPaged(a2, v7, (unsigned int *)&v69);
    else
      CellPaged = HvpGetCellFlat(a2, v7, &v69);
    v68 = (_DWORD *)CellPaged;
    if ( v10 && CellPaged )
    {
      v12 = 0;
      v13 = (PCWSTR *)v72;
      do
      {
        v14 = *v13;
        v15 = CmpWalkPath(BugCheckParameter3, v5, *v13);
        v16 = CmpWalkPath(a2, v7, v14);
        if ( v15 == -1 || v16 == -1 )
        {
LABEL_73:
          v17 = -1073741492;
          goto LABEL_74;
        }
        v17 = CmpCopySyncTree(BugCheckParameter3, v15, a2, v16, 2, 1);
        if ( v17 < 0 )
          goto LABEL_124;
        v5 = v98;
        ++v12;
        ++v13;
      }
      while ( !v12 );
      v18 = CmpWalkPath(BugCheckParameter3, (unsigned int)v98, L"CurrentControlSet");
      v19 = v18;
      if ( v18 == -1 )
      {
        v17 = 0;
        v20 = 0LL;
        goto LABEL_125;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v21 = HvpGetCellFlat(BugCheckParameter3, v18, &v65);
      else
        v21 = HvpGetCellPaged(BugCheckParameter3, v18, (unsigned int *)&v65);
      if ( !v21 )
      {
LABEL_22:
        v17 = -1073741670;
        goto LABEL_74;
      }
      ValueByName = CmpFindValueByName(BugCheckParameter3, v21, (int)&CmSymbolicLinkValueName);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v65);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v65);
      if ( ValueByName != -1 )
      {
        v23 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
            ? HvpGetCellFlat(BugCheckParameter3, ValueByName, &v63)
            : HvpGetCellPaged(BugCheckParameter3, ValueByName, (unsigned int *)&v63);
        v24 = v23;
        if ( v23 )
        {
          if ( *(_DWORD *)(v23 + 12) == 6 )
          {
            v25 = *(unsigned int *)(v23 + 8);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v26 = HvpGetCellFlat(BugCheckParameter3, v25, &v64);
            else
              v26 = HvpGetCellPaged(BugCheckParameter3, v25, (unsigned int *)&v64);
            v20 = 0LL;
            v27 = v26;
            if ( !v26 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v63);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v63);
              v17 = -1073741670;
              goto LABEL_125;
            }
            v28 = (_WORD *)(*(unsigned int *)(v24 + 4) + v26 - 2);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v63);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v63);
            v29 = 0;
            while ( *v28 != 92 && (unsigned __int64)v28 >= v27 )
            {
              ++v29;
              --v28;
            }
            Pool2 = (WCHAR *)ExAllocatePool2(256LL, 2LL * (v29 + 1), 1750093123LL);
            v20 = Pool2;
            if ( !Pool2 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v64);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
              v17 = -1073741801;
              goto LABEL_125;
            }
            v30 = v29;
            memmove(Pool2, v28 + 1, v30 * 2);
            v20[v30] = 0;
            v19 = CmpWalkPath(BugCheckParameter3, v5, v20);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v64);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
            if ( v19 == -1 )
            {
              v17 = 0;
              goto LABEL_74;
            }
          }
          else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          {
            HvpReleaseCellFlat(BugCheckParameter3, &v63);
          }
          else
          {
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v63);
          }
        }
      }
      v31 = 0;
      v32 = 0;
      v33 = &v73;
      do
      {
        v34 = CmpWalkPath(BugCheckParameter3, v19, (PCWSTR)*(v33 - 1));
        *((_DWORD *)v33 + 2) = v34;
        if ( v34 != -1 )
        {
          if ( *v33 )
          {
            v35 = 88LL * v32;
            v36 = &v76[v35 / 4];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v37 = HvpGetCellFlat(BugCheckParameter3, v34, v36);
            else
              v37 = HvpGetCellPaged(BugCheckParameter3, v34, v36);
            v33[2] = v37;
            if ( !v37 )
              goto LABEL_22;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)*v33);
            v38 = CmpFindValueByName(BugCheckParameter3, v33[2], (int)&DestinationString);
            *((_DWORD *)v33 + 8) = v38;
            if ( v38 != -1 )
            {
              v31 = 1;
              v39 = &v78[v35 / 4];
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v40 = HvpGetCellFlat(BugCheckParameter3, v38, v39);
              else
                v40 = HvpGetCellPaged(BugCheckParameter3, v38, v39);
              v33[5] = v40;
              if ( !v40 )
                goto LABEL_22;
              if ( !CmpGetValueData(
                      BugCheckParameter3,
                      *((unsigned int *)v33 + 8),
                      v40,
                      (unsigned int *)&v82[v35 - 4],
                      (__int64)&v79 + v35,
                      (__int64)&v82[v35]) )
                goto LABEL_73;
            }
          }
          else
          {
            v31 = 1;
          }
        }
        ++v32;
        v33 += 11;
      }
      while ( v32 < 2 );
      v17 = 0;
      if ( v31 )
      {
        v41 = v68;
        v42 = 0;
        if ( v68[5] )
        {
          do
          {
            CmpFindSubKeyByNumber(a2, v41, v42, &BugCheckParameter4);
            v43 = BugCheckParameter4;
            v44 = (*(_BYTE *)(a2 + 140) & 1) != 0
                ? HvpGetCellFlat(a2, (unsigned int)BugCheckParameter4, &v100)
                : HvpGetCellPaged(a2, BugCheckParameter4, (unsigned int *)&v100);
            if ( !v44 )
              goto LABEL_22;
            if ( *(_WORD *)(v44 + 72) == 13 )
            {
              v45 = (const char *)(v44 + 76);
              if ( (*(_BYTE *)(v44 + 2) & 0x20) != 0 )
                v46 = strnicmp(v45, "ControlSet000", 0xAuLL);
              else
                v46 = wcsnicmp((const wchar_t *)v45, L"ControlSet000", 0xAuLL);
              v47 = v46 == 0;
              if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                HvpReleaseCellFlat(a2, &v100);
              else
                HvpReleaseCellPaged(a2, (unsigned int *)&v100);
              if ( v47 )
              {
                v17 = 0;
                v48 = &v74;
                v49 = 0;
                while ( 1 )
                {
                  if ( *v48 != -1 && (!*((_QWORD *)v48 - 1) || v48[6] != -1) )
                  {
                    v50 = CmpWalkPath(a2, v43, *((PCWSTR *)v48 - 2));
                    if ( v50 != -1 )
                    {
                      if ( *((_QWORD *)v48 - 1) )
                      {
                        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                          v51 = HvpGetCellFlat(a2, v50, &v100);
                        else
                          v51 = HvpGetCellPaged(a2, v50, (unsigned int *)&v100);
                        v52 = v51;
                        if ( !v51 )
                          goto LABEL_22;
                        RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v48 - 1));
                        v53 = CmpFindValueByName(a2, v52, (int)&DestinationString);
                        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(a2, &v100);
                        else
                          HvpReleaseCellPaged(a2, (unsigned int *)&v100);
                        if ( v53 != -1 )
                        {
                          if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                            v54 = HvpGetCellFlat(a2, v53, &v66);
                          else
                            v54 = HvpGetCellPaged(a2, v53, (unsigned int *)&v66);
                          if ( !v54 )
                            goto LABEL_22;
                          LODWORD(Size) = v48[16];
                          v17 = CmpSetValueKeyExisting(
                                  a2,
                                  v53,
                                  v54,
                                  *(_DWORD *)(*((_QWORD *)v48 + 4) + 12LL),
                                  *((void **)v48 + 6),
                                  Size,
                                  v53 >> 31);
                          if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(a2, &v66);
                          else
                            HvpReleaseCellPaged(a2, (unsigned int *)&v66);
                          if ( v17 < 0 )
                            goto LABEL_74;
                        }
                        v17 = 0;
                      }
                      else
                      {
                        CmpCopySyncTree(BugCheckParameter3, *v48, a2, v50, 2, 1);
                      }
                    }
                  }
                  ++v49;
                  v48 += 22;
                  if ( v49 >= 2 )
                    goto LABEL_121;
                }
              }
              v17 = 0;
            }
            else if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
            {
              HvpReleaseCellFlat(a2, &v100);
            }
            else
            {
              HvpReleaseCellPaged(a2, (unsigned int *)&v100);
            }
LABEL_121:
            v41 = v68;
          }
          while ( ++v42 < v68[5] );
        }
      }
LABEL_74:
      v20 = Pool2;
      goto LABEL_125;
    }
    v17 = -1073741670;
LABEL_124:
    v20 = 0LL;
  }
LABEL_125:
  v55 = 0;
  v56 = &v77;
  do
  {
    if ( *(v56 - 3) )
    {
      v57 = &v76[22 * v55];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v57);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v57);
    }
    if ( *v56 )
    {
      v58 = &v78[22 * v55];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v58);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v58);
    }
    v59 = (void *)v56[2];
    if ( v59 )
    {
      if ( *((_BYTE *)v56 + 36) )
      {
        ExFreePoolWithTag(v59, 0);
      }
      else
      {
        v60 = (unsigned int *)(&v80 + 22 * v55);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v60);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v60);
      }
    }
    ++v55;
    v56 += 11;
  }
  while ( v55 < 2 );
  if ( v70 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v67);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v67);
  }
  if ( v68 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, &v69);
    else
      HvpReleaseCellPaged(a2, (unsigned int *)&v69);
  }
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  return (unsigned int)v17;
}
