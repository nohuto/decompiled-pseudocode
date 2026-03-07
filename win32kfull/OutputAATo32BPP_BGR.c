__int64 __fastcall OutputAATo32BPP_BGR(unsigned int *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 *v6; // rdx
  _BYTE *v7; // r10
  __int64 v8; // r9
  _BYTE *v9; // r10
  __int64 v10; // r9

  result = *a1;
  v6 = (unsigned __int8 *)(a2 + 4);
  if ( (result & 0x80u) == 0LL )
  {
    if ( (unsigned __int64)v6 < a3 )
    {
      v9 = (_BYTE *)(a4 + 2);
      v10 = a4 - (_QWORD)v6;
      do
      {
        v6[v10] = ~*(_BYTE *)(a5 + 4LL * v6[2] + 2048);
        *(v9 - 1) = ~*(_BYTE *)(a5 + 4LL * v6[1] + 1024);
        result = *v6;
        v6 += 4;
        *v9 = ~*(_BYTE *)(a5 + 4 * result);
        v9 += 4;
      }
      while ( (unsigned __int64)v6 < a3 );
    }
  }
  else if ( (unsigned __int64)v6 < a3 )
  {
    v7 = (_BYTE *)(a4 + 2);
    v8 = a4 - (_QWORD)v6;
    do
    {
      if ( v6[3] )
      {
        v6[v8] = ~*(_BYTE *)(a5 + 4LL * v6[2] + 2048);
        *(v7 - 1) = ~*(_BYTE *)(a5 + 4LL * v6[1] + 1024);
        result = *v6;
        *v7 = ~*(_BYTE *)(a5 + 4 * result);
      }
      v7 += 4;
      v6 += 4;
    }
    while ( (unsigned __int64)v6 < a3 );
  }
  return result;
}
