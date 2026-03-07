__int64 __fastcall IpmiLibpAddSelRawData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v6; // r9
  __int64 result; // rax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int16 v11; // [rsp+20h] [rbp-20h] BYREF
  char v12; // [rsp+22h] [rbp-1Eh]
  __int128 v13; // [rsp+28h] [rbp-18h] BYREF

  v11 = 0;
  v12 = 0;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 3221225473LL;
  v8 = 0;
  v13 = 0LL;
  BYTE2(v13) = v6;
  *(_WORD *)((char *)&v13 + 7) = 311;
  BYTE9(v13) = 0;
  if ( !a4 )
    return 0LL;
  while ( 1 )
  {
    *(_DWORD *)((char *)&v13 + 10) = 0;
    HIWORD(v13) = 0;
    v9 = a4 - v8;
    if ( a4 - v8 > 6 )
      v9 = 6;
    memmove((char *)&v13 + 10, (const void *)(a3 + v8), v9);
    result = IpmiLibAddSelRecord(v10, &v13, (__int64)&v11);
    if ( (int)result < 0 )
      break;
    v8 += v9;
    if ( v8 >= a4 )
      return 0LL;
  }
  return result;
}
