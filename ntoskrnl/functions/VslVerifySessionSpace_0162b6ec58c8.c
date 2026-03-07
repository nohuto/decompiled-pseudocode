__int64 __fastcall VslVerifySessionSpace(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-28h]
  unsigned __int64 v4; // [rsp+30h] [rbp-20h]
  unsigned int v5; // [rsp+38h] [rbp-18h]
  int v6; // [rsp+3Ch] [rbp-14h]

  v6 = 0;
  v2 = 0LL;
  v3 = -1LL;
  v4 = 0LL;
  v5 = 0;
  if ( a1 )
    return 3221225485LL;
  MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))VslpVerifySessionSpace, (__int64)&v2);
  if ( !v4 )
    return 0LL;
  v2 = 0LL;
  v3 = (unsigned int)ExGenRandom(0) % v4;
  MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))VslpVerifySessionSpace, (__int64)&v2);
  result = v5;
  if ( v5 == -1073741670 )
    return 0LL;
  return result;
}
