unsigned __int64 __fastcall SeMaximumAuditMask(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned __int8 v10; // cl
  int v11; // esi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  *a4 = 0;
  if ( a1 )
  {
    result = *(unsigned __int16 *)(a1 + 4);
    if ( (_WORD)result )
    {
      v8 = a1 + 8;
      v9 = *(unsigned __int16 *)(a1 + 4);
      do
      {
        v10 = *(_BYTE *)(v8 + 1);
        if ( (v10 & 8) == 0 && (*(_BYTE *)v8 == 2 || *(_BYTE *)v8 == 13) )
        {
          v11 = *(_DWORD *)(v8 + 4) & a2;
          if ( ((v10 >> 6) & (v11 != 0)) != 0 )
          {
            if ( SepSidInTokenSidHash((_DWORD *)(a3 + 232), 0LL, (unsigned __int8 *)(v8 + 8), 1, 0, 0) )
              *a4 |= v11;
          }
        }
        result = *(unsigned __int16 *)(v8 + 2);
        v8 += result;
        --v9;
      }
      while ( v9 );
    }
  }
  return result;
}
