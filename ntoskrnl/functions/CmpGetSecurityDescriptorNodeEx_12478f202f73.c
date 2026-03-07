__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v8; // esi
  ULONG_PTR v12; // rdx
  int Cell; // edi
  const void *v14; // r14
  unsigned int v15; // r15d
  __int64 CellFlat; // rax
  _WORD *v17; // r14
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v25; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v25 = 0LL;
  v8 = -1;
  LODWORD(BugCheckParameter3a) = -1;
  v24 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v24 + 4);
  Cell = HvpMarkCellDirty(BugCheckParameter3, v12);
  if ( Cell < 0 )
    return (unsigned int)Cell;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter3, a3, a2);
  v14 = Src;
  if ( (unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter3, Src, a4, &BugCheckParameter4, 0LL) )
  {
    v15 = BugCheckParameter4;
    Cell = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)BugCheckParameter4);
    if ( Cell < 0 )
      return (unsigned int)Cell;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v15);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v17 = (_WORD *)CellFlat;
    v18 = *(_DWORD *)(CellFlat + 12) + 1;
    if ( !v18 )
    {
      Cell = -1073741675;
      goto LABEL_22;
    }
    *((_DWORD *)v17 + 3) = v18;
    *a7 = v15;
    goto LABEL_10;
  }
  if ( KeGetCurrentThread()->PreviousMode
    && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0
    && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
  {
    return (unsigned int)-1073741790;
  }
  v19 = RtlLengthSecurityDescriptorStrict();
  Cell = HvAllocateCell(
           BugCheckParameter3,
           v19 + 20,
           a4,
           (unsigned int)&BugCheckParameter3a,
           (__int64)&v25,
           (__int64)&v24);
  if ( Cell < 0 )
  {
    v8 = BugCheckParameter3a;
    v17 = v25;
LABEL_22:
    if ( v17 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v24);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v24);
    }
    goto LABEL_26;
  }
  v20 = RtlLengthSecurityDescriptorStrict();
  v21 = v25;
  *v25 = 27507;
  v21[3] = 1;
  v21[4] = v20;
  memmove(v21 + 5, v14, v20);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v24);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v24);
  v8 = BugCheckParameter3a;
  v17 = 0LL;
  Cell = CmpInsertSecurityCellList(BugCheckParameter3, a2, (unsigned int)BugCheckParameter3a);
  if ( Cell >= 0 )
  {
    *a7 = v8;
    v8 = -1;
LABEL_10:
    Cell = 0;
    goto LABEL_22;
  }
LABEL_26:
  if ( v8 != -1 )
    HvFreeCell(BugCheckParameter3, v8);
  return (unsigned int)Cell;
}
