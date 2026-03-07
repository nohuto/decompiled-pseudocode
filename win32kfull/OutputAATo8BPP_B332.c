__int64 __fastcall OutputAATo8BPP_B332(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8)
{
  unsigned __int8 *v8; // r10
  __int64 result; // rax

  v8 = (unsigned __int8 *)(a2 + 4);
  if ( a2 + 4 < a3 )
  {
    do
    {
      if ( v8[3] )
      {
        result = *v8;
        *a4 = ((*(_DWORD *)(a5 + 4 * result) - (unsigned int)*a6) >> 16) & 3 | ((*(_DWORD *)(a5 + 4LL * v8[1] + 1024)
                                                                               - (unsigned int)a6[1]) >> 16) & 0x1C | ((*(_DWORD *)(a5 + 4LL * v8[2] + 2048) - (unsigned int)a6[2]) >> 16) & 0xE0;
      }
      ++a4;
      a6 += 3;
      if ( (unsigned __int64)a6 >= a7 )
      {
        result = a8;
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      }
      v8 += 4;
    }
    while ( (unsigned __int64)v8 < a3 );
  }
  return result;
}
