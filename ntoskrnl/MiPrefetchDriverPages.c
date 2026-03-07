__int64 MiPrefetchDriverPages()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v0 = 0LL;
  result = MiMakeDemandZeroPte(4);
  v9 = 0LL;
  v4 = result;
  v8 = 0LL;
  v5 = 0LL;
  if ( v2 <= v6 )
  {
    do
    {
      result = *(_QWORD *)v2;
      if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiReadPteShadow(v2, *(_QWORD *)v2);
      if ( (result & 1) == 0 && ((result & 0x400) != 0 || (result & 0x800) == 0 && result != v4) )
      {
        result = 0LL;
        v7 = v2 << 25;
        if ( !v0 )
        {
          v5 = v7 >> 16;
          v8 = v7 >> 16;
        }
        v0 = ((v7 + 0x10000000) >> 16) - v5;
        v9 = v0;
      }
      v2 += 8LL;
    }
    while ( v2 <= v3 );
    if ( v0 > 0x1000 )
      return MiPrefetchVirtualMemory(1uLL, (__int64)&v8, 1LL, 45);
  }
  return result;
}
