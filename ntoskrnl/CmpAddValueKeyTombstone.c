__int64 __fastcall CmpAddValueKeyTombstone(ULONG_PTR a1, unsigned __int16 *a2, unsigned int a3, int *a4)
{
  unsigned int v8; // r14d
  int v9; // eax
  _WORD *v10; // rbx
  unsigned int v11; // esi
  unsigned __int16 v12; // ax
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  void *v16; // [rsp+40h] [rbp-28h] BYREF

  v15 = 0LL;
  v14 = -1;
  v16 = 0LL;
  HvpGetCellContextReinitialize(&v15);
  v8 = (unsigned __int16)CmpNameSize(a2) + 20;
  v9 = HvAllocateCell(a1, v8, a3, &v14, (__int64)&v16, (__int64)&v15);
  v10 = v16;
  v11 = v9;
  if ( v9 >= 0 )
  {
    memset(v16, 0, v8);
    *v10 = 27510;
    v10[8] = 2;
    *((_DWORD *)v10 + 1) = 0;
    *((_DWORD *)v10 + 2) = -1;
    *((_DWORD *)v10 + 3) = 0;
    v12 = CmpCopyName((_BYTE *)v10 + 20, a2);
    v10[1] = v12;
    if ( v12 < *a2 )
      v10[8] |= 1u;
    v11 = 0;
    *a4 = v14;
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a1, &v15);
    else
      HvpReleaseCellPaged(a1, (unsigned int *)&v15);
  }
  return v11;
}
