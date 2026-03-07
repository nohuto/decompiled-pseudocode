__int64 __fastcall FopGetTableOffsetAndSize(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int32 *a4,
        unsigned __int32 *a5)
{
  int v9; // r8d
  unsigned int v10; // ebx
  unsigned __int16 v11; // ax
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned __int32 v14; // edx
  unsigned __int32 v15; // r9d
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+28h] [rbp-18h]
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF

  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v9 = FioFwReadBytesAtOffset(a1, a2, 0xCu, &v17);
  if ( v9 >= 0 )
  {
    if ( _byteswap_ulong(v17) == 0x10000 )
    {
      v10 = 0;
      v11 = __ROR2__(WORD2(v17), 8);
      v12 = a2 + 12;
      v13 = v11;
      if ( v11 )
      {
        while ( 1 )
        {
          v9 = FioFwReadBytesAtOffset(a1, v12, 0x10u, &v19);
          if ( v9 < 0 )
            break;
          v9 = 0;
          *(_QWORD *)&v19 = _byteswap_uint64(__PAIR64__(v19, DWORD1(v19)));
          v14 = _byteswap_ulong(DWORD2(v19));
          DWORD2(v19) = v14;
          v15 = _byteswap_ulong(HIDWORD(v19));
          HIDWORD(v19) = v15;
          if ( (_DWORD)v19 == a3 )
          {
            *a4 = v14;
            *a5 = v15;
            return (unsigned int)v9;
          }
          ++v10;
          v12 += 16;
          if ( v10 >= v13 )
            return (unsigned int)-1073741275;
        }
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v9;
}
