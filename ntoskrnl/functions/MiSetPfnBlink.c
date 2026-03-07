unsigned __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  signed __int64 v5; // rdx
  unsigned __int64 result; // rax
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v3 = a2 & 0xFFFFFFFFFFLL;
  if ( a3 )
  {
    result = v3 | *(_QWORD *)(a1 + 24) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v5 & 0xFFFFFF0000000000uLL, v5);
    v7 = result;
    if ( v5 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v3 | v7 & 0xFFFFFF0000000000uLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
