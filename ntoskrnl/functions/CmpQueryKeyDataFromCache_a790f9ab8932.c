__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rax
  unsigned __int16 v10; // si
  __int64 v11; // r15
  int VisibleMaxNameLenAndClassLen; // r14d
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  __int64 CellFlat; // rax
  __int64 v18; // rcx
  int v20; // [rsp+30h] [rbp-48h] BYREF
  int v21; // [rsp+34h] [rbp-44h] BYREF
  int v22; // [rsp+38h] [rbp-40h]
  _QWORD v23[2]; // [rsp+40h] [rbp-38h] BYREF
  int v24; // [rsp+80h] [rbp+8h] BYREF

  v23[0] = 0xFFFFFFFFLL;
  v24 = 0;
  v20 = 0;
  v21 = 0;
  v9 = *(_QWORD *)(a1 + 80);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    v11 = a6;
    VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(a1, 0, a6, (unsigned int)&v24, 0LL);
    if ( VisibleMaxNameLenAndClassLen >= 0 )
    {
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                       a1,
                                       0,
                                       v11,
                                       (unsigned int)&v20,
                                       (__int64)&v21);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        *a5 = 40;
        if ( a4 < 0x28 )
        {
          VisibleMaxNameLenAndClassLen = -1073741789;
          v22 = -1073741789;
        }
        else
        {
          *(_QWORD *)a3 = CmGetKeyLastWriteTime(a1, 0LL, v11);
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 32) = v10;
          if ( v11 && (v15 = *(_QWORD *)(a1 + 288)) != 0 && v15 == v11 )
            v13 = *(_DWORD *)(a1 + 280);
          else
            v13 = *(_DWORD *)(a1 + 96);
          *(_DWORD *)(a3 + 20) = v13;
          *(_DWORD *)(a3 + 16) = v24;
          *(_DWORD *)(a3 + 24) = v20;
          *(_DWORD *)(a3 + 28) = v21;
          v14 = *(_DWORD *)(a1 + 8);
          if ( (v14 & 0x40) != 0 || *(_QWORD *)(a1 + 208) != a1 + 208 )
          {
            v16 = *(_QWORD *)(a1 + 32);
            if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v16, *(unsigned int *)(a1 + 40));
            else
              CellFlat = HvpGetCellPaged(v16);
            if ( CellFlat )
            {
              *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, CellFlat, v11);
              v18 = *(_QWORD *)(a1 + 32);
              if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v18, v23);
              else
                HvpReleaseCellPaged(v18, v23);
            }
            else
            {
              VisibleMaxNameLenAndClassLen = -1073741670;
              v22 = -1073741670;
            }
          }
          else if ( (v14 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 0;
          }
          else if ( (v14 & 2) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 1;
          }
          else if ( (v14 & 4) != 0 )
          {
            *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 112);
          }
          else
          {
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 112);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)VisibleMaxNameLenAndClassLen;
}
