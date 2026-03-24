/*
 * XREFs of MiAddSystemPageTableToList @ 0x14030E6C0
 * Callers:
 *     MiDeleteSystemPageTable @ 0x14030E4E0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiAddSystemPageTableToList(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  for ( i = a2; ; _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL) )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(i + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8, a2, a3, a4);
      while ( *(__int64 *)(i + 24) < 0 );
    }
    a2 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(i + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      break;
  }
  *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)i = *a1;
  *a1 = i;
  *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = 48 * (*(_QWORD *)(i + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v9, a2, a3, a4);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  result = MiDecrementShareCount(v6);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
