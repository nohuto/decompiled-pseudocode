char __fastcall MiAddSystemPageTableToList(_QWORD *a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v7; // rbx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == a3 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a3 == 2 )
    MiDecrementShareCount(a2);
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)a2 = *a1;
  *a1 = a2;
  result = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_BYTE *)(a2 + 34) = result;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 != 2 )
  {
    v7 = 48 * (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    result = MiDecrementShareCount(v7);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
