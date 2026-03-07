__int64 __fastcall CmpQueryKeyDataFromNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8)
{
  ULONG_PTR v11; // r13
  const void *v12; // r14
  __int64 v13; // rbx
  unsigned __int16 v14; // cx
  unsigned int v15; // edx
  unsigned int v16; // r12d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int i; // eax
  int VisibleMaxNameLenAndClassLen; // ebx
  __int64 PrevElement; // rax
  __int64 v23; // r13
  int v24; // ebx
  __int64 CellFlat; // rax
  __int64 CellPaged; // rax
  __int64 v27; // [rsp+50h] [rbp-68h] BYREF
  __int64 v28; // [rsp+58h] [rbp-60h] BYREF
  __int128 v29; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+70h] [rbp-48h] BYREF
  __int128 v31; // [rsp+80h] [rbp-38h] BYREF

  v11 = BugCheckParameter3;
  v12 = 0LL;
  v27 = 0LL;
  HvpGetCellContextReinitialize(&v27);
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( !a3 )
  {
    v28 = 0LL;
    if ( a2 )
    {
      v13 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v14 = *(_WORD *)(a2 + 72);
        if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          v14 *= 2;
        v15 = v14;
        v16 = v14 + 16;
        *a6 = v16;
        if ( a5 < 0x10 )
        {
          VisibleMaxNameLenAndClassLen = -1073741789;
        }
        else
        {
          *(_QWORD *)a4 = v13;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = v14;
          v17 = a5 - 16;
          if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          {
            v18 = v17 >> 1;
            if ( v18 >= *(unsigned __int16 *)(a2 + 72) )
              v18 = *(unsigned __int16 *)(a2 + 72);
            for ( i = 0; i < v18; ++i )
              *(_WORD *)(a4 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
          }
          else
          {
            if ( v17 <= v14 )
              v15 = a5 - 16;
            memmove((void *)(a4 + 16), (const void *)(a2 + 76), v15);
          }
          if ( a5 < v16 )
            VisibleMaxNameLenAndClassLen = -2147483643;
          else
            VisibleMaxNameLenAndClassLen = 0;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v13 = *(_QWORD *)(a7 + 168);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(a7 + 208, &v28);
        v23 = PrevElement;
        if ( !PrevElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a8) && *(_DWORD *)(v23 + 68) == 8 )
        {
          v13 = *(_QWORD *)(v23 + 88);
          break;
        }
      }
      v11 = BugCheckParameter3;
    }
    goto LABEL_4;
  }
  v24 = a3 - 1;
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      *(_QWORD *)&v29 = CmGetKeyLastWriteTime(a7, a2, a8);
      DWORD2(v29) = 0;
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(
                                       a7,
                                       a2,
                                       a8,
                                       (unsigned int *)&v30 + 2,
                                       (unsigned int *)&v30 + 3);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                         a7,
                                         a2,
                                         a8,
                                         (_DWORD *)&v31 + 1,
                                         (unsigned int *)&v31 + 2);
        if ( VisibleMaxNameLenAndClassLen >= 0 )
        {
          DWORD1(v30) = CmGetVisibleSubkeyCount(a7, a2, a8);
          LODWORD(v31) = CmGetVisibleValueCount(a7, a2, a8);
          if ( *(_WORD *)(a2 + 74) )
          {
            if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v11, *(unsigned int *)(a2 + 48));
            else
              CellFlat = HvpGetCellPaged(v11);
            v12 = (const void *)CellFlat;
          }
          VisibleMaxNameLenAndClassLen = CmpPopulateKeyFullInformation(
                                           (__int64)&v29,
                                           v12,
                                           *(unsigned __int16 *)(a2 + 74),
                                           a4,
                                           a5,
                                           a6);
        }
      }
    }
    else
    {
      VisibleMaxNameLenAndClassLen = -1073741811;
    }
  }
  else
  {
    *(_QWORD *)&v29 = CmGetKeyLastWriteTime(a7, a2, a8);
    DWORD2(v29) = 0;
    if ( *(_WORD *)(a2 + 74) )
    {
      if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v11, *(unsigned int *)(a2 + 48));
      else
        CellPaged = HvpGetCellPaged(v11);
      v12 = (const void *)CellPaged;
    }
    VisibleMaxNameLenAndClassLen = CmpPopulateKeyNodeInformation(
                                     (__int64)&v29,
                                     a2,
                                     v12,
                                     *(unsigned __int16 *)(a2 + 74),
                                     a4,
                                     a5,
                                     a6);
  }
LABEL_20:
  if ( v12 )
  {
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v11, &v27);
    else
      HvpReleaseCellPaged(v11, &v27);
  }
  return (unsigned int)VisibleMaxNameLenAndClassLen;
}
