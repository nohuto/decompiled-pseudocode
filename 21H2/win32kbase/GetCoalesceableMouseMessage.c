/*
 * XREFs of GetCoalesceableMouseMessage @ 0x1C00ACC10
 * Callers:
 *     <none>
 * Callees:
 *     IsEqualInputSource @ 0x1C00ACCA0 (IsEqualInputSource.c)
 */

__int64 __fastcall GetCoalesceableMouseMessage(int a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int16 v8; // cx

  v3 = *a2;
  v4 = a3;
  if ( !a3 )
    return 0LL;
  while ( *(_DWORD *)(v4 + 24) == 255 )
  {
    v4 = *(_QWORD *)(v4 + 8);
    if ( !v4 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v4 + 100) & 2) != 0 || *(_DWORD *)(v4 + 24) != a1 || !(unsigned __int8)IsEqualInputSource(v4 + 120) )
    return 0LL;
  if ( ((a1 - 522) & 0xFFFFFFFB) == 0 )
  {
    v8 = *(_WORD *)(v4 + 34) + WORD1(v3);
    if ( abs16(v8) <= 0x7FFFu )
    {
      *a2 = (unsigned __int16)v3 | ((unsigned __int64)v8 << 16);
      return v4;
    }
    return 0LL;
  }
  return v4;
}
