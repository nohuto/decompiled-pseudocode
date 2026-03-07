__int64 __fastcall FindBitmapResource(__int64 a1, __int64 a2)
{
  unsigned int *v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6[3]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6[2] = 0LL;
  v6[1] = a1;
  v6[0] = 2LL;
  if ( (int)LdrFindResource_U(0x140000000LL, v6, 3u, &v4) < 0
    || (int)LdrAccessResource(0x140000000uLL, (unsigned __int64)v4, (__int64)&v5, a2) < 0 )
  {
    return 0LL;
  }
  else
  {
    return v5;
  }
}
