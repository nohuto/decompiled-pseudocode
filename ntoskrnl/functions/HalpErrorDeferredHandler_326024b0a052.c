__int64 __fastcall HalpErrorDeferredHandler(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]

  v2 = a2[1];
  v4 = *a2;
  v5 = v2;
  result = HalpFreeDrsPool(a1 - 8);
  if ( HIDWORD(v2) == 1 )
    return HalpMemoryErrorDeferredHandler(&v4);
  if ( HIDWORD(v5) == 2 )
    return HalpPmemErrorDeferredHandler(&v4);
  return result;
}
