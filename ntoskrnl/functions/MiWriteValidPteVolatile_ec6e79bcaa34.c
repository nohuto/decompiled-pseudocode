signed __int64 __fastcall MiWriteValidPteVolatile(volatile signed __int64 *a1, int a2, unsigned __int8 a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rbx
  int v6; // edx
  unsigned __int64 v8; // rax
  signed __int64 v9; // rcx
  bool v10; // zf
  signed __int64 result; // rax

  v3 = *a1;
  v4 = a2 & 0x80000000;
  v5 = a2 & 1;
  v6 = a2 & 2;
  do
  {
    v8 = v3;
    if ( v4 )
      v8 = v3 ^ (v3 ^ ((unsigned __int64)a3 << 56)) & 0x7F00000000000000LL;
    v9 = v8 | 0x20;
    if ( !v5 )
      v9 = v8;
    if ( v6 )
      v9 |= 0x42uLL;
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64(a1, v9, v3);
    v10 = v3 == result;
    v3 = result;
  }
  while ( !v10 );
  return result;
}
