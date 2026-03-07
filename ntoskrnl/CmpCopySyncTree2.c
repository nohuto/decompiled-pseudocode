__int64 __fastcall CmpCopySyncTree2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        __int16 a6,
        int a7)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int v10; // esi
  _DWORD *v11; // r13
  unsigned int *v13; // r12
  ULONG_PTR v14; // rdx
  _DWORD *CellFlat; // rax
  unsigned int v16; // r8d
  int SubKeyByNumber; // edi
  unsigned int v18; // r14d
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // r14
  ULONG_PTR v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r13d
  __int64 v24; // rax
  char v25; // al
  int v26; // ecx
  bool v27; // zf
  char v28; // di
  char v29; // dl
  ULONG_PTR v30; // rdx
  __int64 CellPaged; // rax
  int v32; // ecx
  int v33; // edx
  __int64 v34; // rdx
  unsigned int v35; // esi
  _BYTE *v36; // r13
  void *Pool2; // rdi
  int v38; // r14d
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // rdi
  __int64 v42; // rax
  size_t v43; // r8
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rsi
  int v48; // eax
  ULONG_PTR v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // ecx
  char v52; // si
  int v53; // edx
  __int64 v54; // rcx
  char v55; // al
  char v56; // al
  unsigned int v57; // r9d
  ULONG_PTR v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  unsigned __int16 v62; // cx
  unsigned int v63; // eax
  ULONG_PTR v64; // [rsp+30h] [rbp-99h]
  __int16 v65; // [rsp+38h] [rbp-91h]
  int v66; // [rsp+48h] [rbp-81h]
  _BYTE *Src; // [rsp+50h] [rbp-79h]
  int v68; // [rsp+58h] [rbp-71h]
  ULONG_PTR v69; // [rsp+5Ch] [rbp-6Dh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+64h] [rbp-65h] BYREF
  int v71; // [rsp+6Ch] [rbp-5Dh]
  __int64 v72; // [rsp+70h] [rbp-59h] BYREF
  __int64 v73; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v74; // [rsp+80h] [rbp-49h]
  _DWORD *v75; // [rsp+88h] [rbp-41h]
  __int64 v76; // [rsp+90h] [rbp-39h] BYREF
  __int64 v77; // [rsp+98h] [rbp-31h] BYREF
  int v78; // [rsp+A0h] [rbp-29h]
  int v79; // [rsp+A4h] [rbp-25h]
  __int64 v80; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-11h] BYREF
  PVOID P; // [rsp+C0h] [rbp-9h]
  __int128 v84[4]; // [rsp+C8h] [rbp-1h] BYREF
  char v86; // [rsp+120h] [rbp+57h]
  bool v87; // [rsp+128h] [rbp+5Fh]

  P = 0LL;
  LODWORD(v7) = 0;
  BugCheckParameter4 = 0xFFFFFFFF00000000uLL;
  v8 = a1;
  v69 = 0x100000000LL;
  v10 = -1;
  v71 = 0;
  v66 = 0;
  v78 = a6 & 1;
  v86 = 0;
  v73 = 0xFFFFFFFFLL;
  v84[0] = 0LL;
  v77 = 0xFFFFFFFFLL;
  v76 = 0xFFFFFFFFLL;
  Src = 0LL;
  v11 = 0LL;
  v80 = 0xFFFFFFFFLL;
  v79 = -1;
  v87 = (unsigned int)(a7 - 1) <= 1;
  v72 = 0xFFFFFFFFLL;
  v74 = 0;
  v68 = -1;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    P = (PVOID)ExAllocatePool2(256LL, 512LL, 1851419971LL);
    if ( !P )
      return 3221225626LL;
    LODWORD(v7) = 0;
  }
  while ( 2 )
  {
    v13 = (unsigned int *)(v8 + 20LL * (unsigned int)v7);
    v13[2] = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v11 )
        {
          if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
            HvpReleaseCellFlat(a4, &v76);
          else
            HvpReleaseCellPaged(a4, (unsigned int *)&v76);
        }
        v14 = *v13;
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          CellFlat = (_DWORD *)HvpGetCellFlat(a4, v14, &v76);
        else
          CellFlat = (_DWORD *)HvpGetCellPaged(a4, v14, (unsigned int *)&v76);
        v16 = v13[2];
        v75 = CellFlat;
        v11 = CellFlat;
        SubKeyByNumber = CmpFindSubKeyByNumber(a4, CellFlat, v16, &BugCheckParameter4);
        if ( SubKeyByNumber < 0 )
          goto LABEL_154;
        ++v13[2];
        v18 = BugCheckParameter4;
        if ( (_DWORD)BugCheckParameter4 == -1 )
        {
          v28 = v78;
          goto LABEL_48;
        }
        if ( (_BYTE)v78 || (BugCheckParameter4 & 0x80000000) == 0LL )
          break;
        v28 = 0;
LABEL_48:
        if ( v87 && a7 != 2 )
        {
          v30 = v13[1];
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(BugCheckParameter3, v30, (_DWORD *)&BugCheckParameter4 + 1);
          else
            CellPaged = HvpGetCellPaged(BugCheckParameter3, v30, (unsigned int *)&BugCheckParameter4 + 1);
          if ( v28 )
            v32 = v11[6];
          else
            v32 = 0;
          if ( *(_DWORD *)(CellPaged + 20) + *(_DWORD *)(CellPaged + 24) > (unsigned int)(v11[5] + v32) )
            CmpSyncSubKeysAfterDelete(a4, v11, BugCheckParameter3, CellPaged, P);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (ULONG_PTR *)((char *)&BugCheckParameter4 + 4));
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&BugCheckParameter4 + 1);
        }
        if ( (v13[4] & 1) != 0 )
        {
          v68 = ++v10;
          if ( v10 < v74 )
          {
            v36 = Src;
          }
          else
          {
            v33 = 1;
            if ( v74 + 1 <= (v74 >> 1) + v74 )
              v33 = v74 >> 1;
            v34 = v74 + v33;
            v35 = v34;
            v36 = Src;
            Pool2 = (void *)ExAllocatePool2(256LL, 20 * v34, 538987843LL);
            if ( !Pool2 )
            {
              SubKeyByNumber = -1073741670;
LABEL_150:
              v47 = 0LL;
              v20 = 0LL;
              goto LABEL_156;
            }
            memmove(Pool2, Src, 20LL * v74);
            if ( Src )
              ExFreePoolWithTag(Src, 0);
            v74 = v35;
            v36 = Pool2;
            v10 = v68;
            Src = Pool2;
          }
          v13[2] = 0;
          v38 = HIDWORD(v69);
          v13[3] ^= (v13[3] ^ HIDWORD(v69)) & 7;
          *((_BYTE *)v13 + 16) &= ~1u;
          v39 = 5LL * v10;
          *(_OWORD *)&v36[4 * v39] = *(_OWORD *)v13;
          *(_DWORD *)&v36[4 * v39 + 16] = v13[4];
        }
        else
        {
          v36 = Src;
          v38 = HIDWORD(v69);
        }
        v40 = v66;
        if ( v66 )
        {
          v41 = a1;
        }
        else
        {
          if ( v10 == -1 )
          {
            if ( (a6 & 0x40) != 0 )
              *(_DWORD *)(BugCheckParameter3 + 4760) = *(_DWORD *)(BugCheckParameter3 + 280);
            SubKeyByNumber = 0;
            goto LABEL_150;
          }
          v41 = a1;
          v42 = v10--;
          v68 = v10;
          v43 = 20 * v42;
          if ( ((v36[12] ^ v36[20 * v42 + 12]) & 7) != 0 )
          {
            *(_OWORD *)a1 = *(_OWORD *)v36;
            *(_DWORD *)(a1 + 16) = *((_DWORD *)v36 + 4);
            memmove(v36, v36 + 20, v43);
          }
          else
          {
            *(_OWORD *)a1 = *(_OWORD *)&v36[v43];
            *(_DWORD *)(a1 + 16) = *(_DWORD *)&v36[v43 + 16];
          }
          if ( v38 == (int)(*(_DWORD *)(a1 + 12) << 29) >> 29 )
          {
            v44 = *(_DWORD *)(BugCheckParameter3 + 280);
            v40 = 1;
            HIDWORD(v69) = v38 + 1;
            if ( v38 == 1 )
            {
              *(_DWORD *)(BugCheckParameter3 + 4752) = v44;
            }
            else
            {
              *(_DWORD *)(BugCheckParameter3 + 4756) = v44;
              v68 = v10;
            }
          }
          else
          {
            v68 = v10;
            v40 = 1;
            HIDWORD(v69) = v38;
          }
        }
        v11 = v75;
        v45 = (unsigned int)(v40 - 1);
        v66 = v45;
        v13 = (unsigned int *)(v41 + 20 * v45);
        if ( v86 && (_DWORD)v45 == v79 )
        {
          v87 = 1;
          v86 = 0;
        }
      }
      if ( !v87 )
        goto LABEL_32;
      v19 = (*(_BYTE *)(a4 + 140) & 1) != 0
          ? HvpGetCellFlat(a4, (unsigned int)BugCheckParameter4, &v73)
          : HvpGetCellPaged(a4, BugCheckParameter4, (unsigned int *)&v73);
      v20 = v19;
      CmpInitializeKeyNameString(v19);
      v21 = v13[1];
      v22 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
          ? HvpGetCellFlat(BugCheckParameter3, v21, &v80)
          : HvpGetCellPaged(BugCheckParameter3, v21, (unsigned int *)&v80);
      LODWORD(v69) = 0;
      CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v22, (__int64)v84, &v69);
      v23 = v69;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v80);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v80);
      if ( v23 != -1 )
        break;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        HvpReleaseCellFlat(a4, &v73);
      else
        HvpReleaseCellPaged(a4, (unsigned int *)&v73);
      v18 = BugCheckParameter4;
      v11 = v75;
      v86 = 1;
LABEL_32:
      if ( (a6 & 0x40) == 0 )
        goto LABEL_121;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        v24 = HvpGetCellFlat(a4, v18, &v72);
      else
        v24 = HvpGetCellPaged(a4, v18, (unsigned int *)&v72);
      v25 = *(_BYTE *)(v24 + 12);
      if ( (v25 & 2) != 0 )
        v26 = 1;
      else
        v26 = ((v25 & 1) == 0) | 2;
      if ( v26 <= SHIDWORD(v69) )
      {
        v29 = *(_BYTE *)(a4 + 140) & 1;
        if ( v26 <= (int)(v13[3] << 29) >> 29 )
        {
          v27 = v29 == 0;
          goto LABEL_44;
        }
        if ( v29 )
          HvpReleaseCellFlat(a4, &v72);
        else
          HvpReleaseCellPaged(a4, (unsigned int *)&v72);
LABEL_121:
        SubKeyByNumber = CmpCopyKeyPartial(a4, v18, BugCheckParameter3, v13[1], a6 | 4u, v64, 2u, (unsigned int *)&v69);
        if ( SubKeyByNumber >= 0 )
        {
          v52 = 1;
          if ( (v13[4] & 2) != 0 )
            goto LABEL_125;
          SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v13[1], 0);
          if ( SubKeyByNumber >= 0 )
          {
            *((_BYTE *)v13 + 16) |= 2u;
LABEL_125:
            v57 = v11[((unsigned __int64)v18 >> 31) + 5];
            v23 = v69;
            SubKeyByNumber = CmpAddSubKeyEx(BugCheckParameter3, v13[1], v69, v57);
            if ( SubKeyByNumber >= 0 )
            {
              v58 = v13[1];
              v82 = 0xFFFFFFFFLL;
              v81 = 0xFFFFFFFFLL;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v59 = HvpGetCellFlat(BugCheckParameter3, v58, &v82);
              else
                v59 = HvpGetCellPaged(BugCheckParameter3, v58, (unsigned int *)&v82);
              v60 = v59;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v61 = HvpGetCellFlat(BugCheckParameter3, v23, &v81);
              else
                v61 = HvpGetCellPaged(BugCheckParameter3, v23, (unsigned int *)&v81);
              v62 = 2 * *(_WORD *)(v61 + 72);
              if ( (*(_BYTE *)(v61 + 2) & 0x20) == 0 )
                v62 = *(_WORD *)(v61 + 72);
              if ( (unsigned __int16)*(_DWORD *)(v60 + 52) < (unsigned int)v62 )
                *(_WORD *)(v60 + 52) = v62;
              v63 = *(unsigned __int16 *)(v61 + 74);
              if ( *(_DWORD *)(v60 + 56) < v63 )
                *(_DWORD *)(v60 + 56) = v63;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v81);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v81);
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v82);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v82);
              if ( !v87 || !v86 )
                goto LABEL_115;
              SubKeyByNumber = CmpMarkKeyParentDirty(BugCheckParameter3, v23);
              if ( SubKeyByNumber >= 0 )
              {
                v53 = v66;
                v79 = v66;
                v87 = 0;
                goto LABEL_116;
              }
            }
          }
        }
LABEL_154:
        v47 = 0LL;
        v20 = 0LL;
        goto LABEL_155;
      }
      *((_BYTE *)v13 + 16) |= 1u;
      v27 = (*(_BYTE *)(a4 + 140) & 1) == 0;
LABEL_44:
      if ( v27 )
        HvpReleaseCellPaged(a4, (unsigned int *)&v72);
      else
        HvpReleaseCellFlat(a4, &v72);
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v46 = HvpGetCellFlat(BugCheckParameter3, v23, &v77);
    else
      v46 = HvpGetCellPaged(BugCheckParameter3, v23, (unsigned int *)&v77);
    v47 = v46;
    if ( a7 != 2 && *(_QWORD *)(v46 + 4) >= *(_QWORD *)(v20 + 4) )
      goto LABEL_108;
    if ( (v13[4] & 2) == 0 && *(_WORD *)(v20 + 74) > *(_WORD *)(v46 + 74) )
    {
      SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v13[1], 0);
      if ( SubKeyByNumber < 0 )
        break;
      *((_BYTE *)v13 + 16) |= 2u;
    }
    if ( a7 == 2 )
      v48 = CmpMergeKeyValues(a4, v23, v47);
    else
      v48 = CmpSyncKeyValues(a4, v23, v47, v65);
    SubKeyByNumber = v48;
    if ( v48 >= 0 )
    {
      v49 = v13[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v50 = HvpGetCellFlat(BugCheckParameter3, v49, (_DWORD *)&BugCheckParameter4 + 1);
      else
        v50 = HvpGetCellPaged(BugCheckParameter3, v49, (unsigned int *)&BugCheckParameter4 + 1);
      v51 = *(unsigned __int16 *)(v47 + 74);
      if ( v51 > *(_DWORD *)(v50 + 56) )
        *(_DWORD *)(v50 + 56) = v51;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (ULONG_PTR *)((char *)&BugCheckParameter4 + 4));
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&BugCheckParameter4 + 1);
      *(_QWORD *)(v47 + 4) = *(_QWORD *)(v20 + 4);
LABEL_108:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v77);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v77);
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        HvpReleaseCellFlat(a4, &v73);
      else
        HvpReleaseCellPaged(a4, (unsigned int *)&v73);
      v18 = BugCheckParameter4;
      v52 = 0;
LABEL_115:
      v53 = v66;
LABEL_116:
      v7 = (unsigned int)(v53 + 1);
      v66 = v7;
      if ( (unsigned int)v7 < 0x200 )
      {
        v8 = a1;
        v54 = 5 * v7;
        v55 = *(_BYTE *)(a1 + 20 * v7 + 16);
        *(_DWORD *)(a1 + 4 * v54 + 12) &= 0xFFFFFFF8;
        v56 = (2 * v52) | v55 & 0xFC;
        *(_DWORD *)(a1 + 4 * v54 + 4) = v23;
        v10 = v68;
        v11 = v75;
        *(_BYTE *)(a1 + 4 * v54 + 16) = v56;
        *(_DWORD *)(a1 + 4 * v54) = v18;
        continue;
      }
      v20 = 0LL;
      SubKeyByNumber = -1073741670;
      v47 = 0LL;
    }
    break;
  }
LABEL_155:
  v36 = Src;
LABEL_156:
  if ( v75 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, &v76);
    else
      HvpReleaseCellPaged(a4, (unsigned int *)&v76);
  }
  if ( v20 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, &v73);
    else
      HvpReleaseCellPaged(a4, (unsigned int *)&v73);
  }
  if ( v47 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v77);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v77);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  return (unsigned int)SubKeyByNumber;
}
