__int64 __fastcall MiLockHotPatchPages(__int64 *a1, __int64 a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  int v6; // ebx
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 result; // rax
  unsigned int v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0;
  v6 = a3;
  v13 = 0;
  v8 = a4;
  if ( !a3 )
    return 0LL;
  v10 = a6;
  while ( 1 )
  {
    RtlDetermineHotPatchExtent(a5, *(_DWORD *)(a2 + 4 * v10), 34404, (unsigned int)&v12, (__int64)&v13);
    result = MiLockDriverPageRange(a1, v12, v13, 1, 0LL);
    if ( (int)result < 0 )
      break;
    a2 += 4 * v8;
    if ( !--v6 )
      return 0LL;
  }
  return result;
}
