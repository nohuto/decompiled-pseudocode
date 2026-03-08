/*
 * XREFs of GetCoalesceableMouseMessage @ 0x1C00C1F20
 * Callers:
 *     <none>
 * Callees:
 *     IsEqualInputSource @ 0x1C007EDD0 (IsEqualInputSource.c)
 */

__int64 __fastcall GetCoalesceableMouseMessage(int a1, unsigned __int64 *a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int16 v9; // cx

  v4 = *a2;
  v5 = a3;
  if ( !a3 )
    return 0LL;
  while ( *(_DWORD *)(v5 + 24) == 255 )
  {
    v5 = *(_QWORD *)(v5 + 8);
    if ( !v5 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v5 + 100) & 2) != 0 || *(_DWORD *)(v5 + 24) != a1 || !IsEqualInputSource((_DWORD *)(v5 + 120), a4) )
    return 0LL;
  if ( ((a1 - 522) & 0xFFFFFFFB) == 0 )
  {
    v9 = *(_WORD *)(v5 + 34) + WORD1(v4);
    if ( abs16(v9) <= 0x7FFFu )
    {
      *a2 = (unsigned __int16)v4 | ((unsigned __int64)v9 << 16);
      return v5;
    }
    return 0LL;
  }
  return v5;
}
