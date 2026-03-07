__int64 __fastcall CmpFindSubKeyInLeafWithStatus(int a1, __int64 a2, int a3, int a4, _DWORD *a5, unsigned int *a6)
{
  int v6; // eax
  unsigned int v7; // r15d
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v18; // [rsp+60h] [rbp+8h]

  v18 = a1;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = 0;
  v11 = 0;
  v12 = v6 - 1;
  v13 = (unsigned int)(v6 - 1) >> 1;
  if ( (_WORD)v6 )
  {
    while ( 1 )
    {
      v14 = CmpCompareInIndex(a1, a3, a4, v13, a2, (__int64)a5);
      if ( v14 == 2 )
        goto LABEL_20;
      if ( !v14 )
      {
        *a6 = v13;
        return 0LL;
      }
      if ( v14 < 0 )
        v12 = v13;
      else
        v11 = v13;
      if ( v12 - v11 <= 1 )
        break;
      a1 = v18;
      v13 = v11 + ((v12 - v11) >> 1);
    }
    v15 = CmpCompareInIndex(v18, a3, a4, v11, a2, (__int64)a5);
    if ( v15 == 2 )
      goto LABEL_20;
    if ( !v15 )
    {
      *a6 = v11;
      return 0LL;
    }
    if ( v15 < 0 )
    {
      *a6 = v11;
      return 3221225524LL;
    }
    v16 = CmpCompareInIndex(v18, a3, a4, v12, a2, (__int64)a5);
    if ( v16 == 2 )
    {
LABEL_20:
      *a5 = -1;
      *a6 = 0x80000000;
      return 3221225626LL;
    }
    *a6 = v12;
    if ( v16 )
      return (unsigned int)-1073741772;
    return v7;
  }
  else
  {
    *a5 = -1;
    *a6 = 0;
    return 3221225524LL;
  }
}
