/*
 * XREFs of CmpSetValueDataNew @ 0x1407A4E40
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 *     CmpAddValueKeyNew @ 0x1407A5F18 (CmpAddValueKeyNew.c)
 *     CmpCopyValue @ 0x1408A6FF4 (CmpCopyValue.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 */

__int64 __fastcall CmpSetValueDataNew(ULONG_PTR BugCheckParameter2, char *Src, size_t Size, int a4, _DWORD *a5)
{
  size_t v6; // rsi
  __int64 result; // rax
  __int64 *v10; // rdx
  bool v11; // zf
  _DWORD *v12; // r12
  _DWORD *v13; // r14
  unsigned int *v14; // r8
  int v15; // r12d
  size_t v16; // r8
  unsigned int *v17; // rcx
  _BYTE *v18; // rsi
  unsigned __int16 i; // ax
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rdx
  int Cell; // [rsp+30h] [rbp-40h]
  __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  void *v26; // [rsp+50h] [rbp-20h] BYREF
  void *v27; // [rsp+58h] [rbp-18h] BYREF
  unsigned int *v28; // [rsp+60h] [rbp-10h]
  _DWORD *v29; // [rsp+A0h] [rbp+30h] BYREF

  v6 = (unsigned int)Size;
  v27 = 0LL;
  v23 = 0xFFFFFFFFLL;
  if ( *(_DWORD *)(BugCheckParameter2 + 220) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    result = HvAllocateCell(BugCheckParameter2, Size, a4, (_DWORD)a5, (__int64)&v27, (__int64)&v23);
    if ( (int)result < 0 )
      return result;
    memmove(v27, Src, v6);
    v10 = &v23;
    v11 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
    goto LABEL_5;
  }
  v12 = a5;
  v25 = 0xFFFFFFFFLL;
  v24 = 0xFFFFFFFFLL;
  v29 = 0LL;
  v26 = 0LL;
  result = HvAllocateCell(BugCheckParameter2, 8, a4, (_DWORD)a5, (__int64)&v29, (__int64)&v25);
  if ( (int)result < 0 )
    return result;
  v13 = v29;
  v14 = v29 + 1;
  *v29 = 25188;
  *v14 = -1;
  v28 = v14;
  LODWORD(v29) = (unsigned __int16)(((int)v6 + 16343) / 0x3FD8u);
  Cell = HvAllocateCell(BugCheckParameter2, 4 * (int)v29, a4, (_DWORD)v14, (__int64)&v26, (__int64)&v24);
  if ( Cell >= 0 )
  {
    if ( !(_DWORD)v29 )
    {
LABEL_19:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v24);
      else
        HvpReleaseCellPaged(BugCheckParameter2, &v24);
      v11 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
      v10 = &v25;
LABEL_5:
      if ( v11 )
        HvpReleaseCellPaged(BugCheckParameter2, v10);
      else
        HvpReleaseCellFlat(BugCheckParameter2, v10);
      return 0LL;
    }
    memset(v26, -1, 4LL * (unsigned int)v29);
    v15 = 0;
    while ( 1 )
    {
      Cell = HvAllocateCell(
               BugCheckParameter2,
               16344,
               a4,
               (unsigned int)v26 + 4 * *((unsigned __int16 *)v13 + 1),
               (__int64)&v27,
               (__int64)&v23);
      if ( Cell < 0 )
        break;
      v16 = (unsigned int)v6;
      if ( (unsigned int)v6 > 0x3FD8 )
        v16 = 16344LL;
      memmove(v27, Src, v16);
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v23);
      else
        HvpReleaseCellPaged(BugCheckParameter2, &v23);
      ++*((_WORD *)v13 + 1);
      v27 = 0LL;
      Src += 16344;
      LODWORD(v6) = v6 - 16344;
      if ( ++v15 >= (unsigned int)v29 )
        goto LABEL_19;
    }
    v12 = a5;
  }
  v17 = (unsigned int *)v26;
  v18 = (_BYTE *)(BugCheckParameter2 + 140);
  if ( v26 )
  {
    for ( i = *((_WORD *)v13 + 1); i; *((_WORD *)v13 + 1) = i )
    {
      v20 = v17[i];
      if ( (_DWORD)v20 != -1 )
      {
        HvFreeCell(BugCheckParameter2, v20);
        v17 = (unsigned int *)v26;
      }
      i = *((_WORD *)v13 + 1) - 1;
    }
    v18 = (_BYTE *)(BugCheckParameter2 + 140);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v24);
  }
  v21 = *v28;
  if ( (_DWORD)v21 != -1 )
  {
    HvFreeCell(BugCheckParameter2, v21);
    v18 = (_BYTE *)(BugCheckParameter2 + 140);
  }
  if ( (*v18 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v25);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v25);
  HvFreeCell(BugCheckParameter2, (unsigned int)*v12);
  result = (unsigned int)Cell;
  *v12 = -1;
  return result;
}
