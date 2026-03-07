__int64 __fastcall CmpFindTagIndex(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3, int a4)
{
  bool v6; // zf
  unsigned int v8; // ebx
  ULONG_PTR CellPaged; // rax
  unsigned int *v10; // rsi
  __int64 CellFlat; // rax
  unsigned int ValueByName; // ebx
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+20h] BYREF

  v16 = 0;
  P[0] = 0LL;
  v21 = 0xFFFFFFFFLL;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v17 = 0xFFFFFFFFLL;
  v8 = a2;
  v18 = 0xFFFFFFFFLL;
  v20 = 0xFFFFFFFFLL;
  v19 = 0xFFFFFFFFLL;
  LOBYTE(v23) = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v17);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v17);
  if ( !CellPaged )
    return (unsigned int)-2;
  v10 = (unsigned int *)CmpValueToData(BugCheckParameter3, v8, CellPaged, &v16);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v17);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
  if ( !v10 )
    return (unsigned int)-2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, &v18);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a3, (unsigned int *)&v18);
  if ( CellFlat )
  {
    ValueByName = CmpFindValueByName(BugCheckParameter3, CellFlat, a4);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v18);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v18);
    if ( ValueByName == -1 )
    {
      v14 = *v10;
      goto LABEL_26;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v13 = HvpGetCellFlat(BugCheckParameter3, ValueByName, &v19);
    else
      v13 = HvpGetCellPaged(BugCheckParameter3, ValueByName, (unsigned int *)&v19);
    if ( v13 )
    {
      CmpGetValueData(BugCheckParameter3, ValueByName, v13, &v16, (__int64)P, (__int64)&v23);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v19);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
      if ( P[0] )
      {
        v14 = 1;
        if ( *(_DWORD *)P[0] )
        {
          while ( *((_DWORD *)P[0] + v14) != *v10 )
          {
            if ( ++v14 > *(_DWORD *)P[0] )
              goto LABEL_22;
          }
        }
        else
        {
LABEL_22:
          v14 = -2;
        }
        if ( (_BYTE)v23 )
        {
          ExFreePoolWithTag(P[0], 0);
        }
        else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        {
          HvpReleaseCellFlat(BugCheckParameter3, &v20);
        }
        else
        {
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v20);
        }
        goto LABEL_26;
      }
    }
  }
  v14 = -2;
LABEL_26:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  return v14;
}
