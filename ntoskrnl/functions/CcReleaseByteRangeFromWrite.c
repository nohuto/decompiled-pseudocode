__int64 __fastcall CcReleaseByteRangeFromWrite(__int64 a1, __int64 *a2, unsigned int a3, _WORD *a4, char a5)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  unsigned int v7; // esi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = a4;
  v7 = a3;
  if ( a4 )
  {
    if ( *a4 != 765 )
      KeBugCheckEx(0x34u, 0x156FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    do
    {
      v10 = v6[2];
      if ( *(_WORD *)v6 == 765 )
      {
        v5 = v6[1];
        if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
          CcUnpinFileDataEx(v6);
        if ( a5 )
          CcSetDirtyPinnedData(v6, 0LL);
        result = CcUnpinFileDataEx(v6);
      }
      v6 = (_QWORD *)(v10 - 16);
    }
    while ( *a2 != v5 );
  }
  else if ( a5 )
  {
    v12 = *a2;
    v14 = *a2;
    if ( a3 )
    {
      do
      {
        if ( (v12 & 0xFFFFFFFFFE000000uLL) < ((v12 + v7 - 1LL) & 0xFFFFFFFFFE000000uLL) )
          v13 = ((v12 + 0x1FFFFFF) & 0xFE000000) - v12;
        else
          v13 = v7;
        if ( v13 > 0x2000000 )
          KeBugCheckEx(0x34u, 0x155CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        CcSetDirtyInMask(a1, &v14, v13, 0LL);
        result = v13;
        v12 += v13;
        v14 = v12;
        v7 -= v13;
      }
      while ( v7 );
    }
  }
  return result;
}
