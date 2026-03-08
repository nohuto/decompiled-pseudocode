/*
 * XREFs of KeIdleSpecCtrl @ 0x140571510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIdleSpecCtrl(__int64 a1, int a2, _WORD *a3, char a4)
{
  __int16 v5; // ax
  unsigned __int16 v6; // r9
  __int16 v7; // ax
  __int64 v8; // rdx
  signed __int16 v9; // tt
  __int64 result; // rax
  __int64 v11; // rdx
  signed __int16 v12; // tt
  __int16 v13; // cx

  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 1762) & 1) != 0 )
    {
      v5 = *(_WORD *)(a1 + 1764);
      if ( v5 )
      {
        *(_WORD *)(a1 + 1760) |= 1u;
        *a3 = v5;
      }
    }
    _m_prefetchw((const void *)(a1 + 1772));
    v6 = *(_WORD *)(a1 + 1772);
    if ( (v6 & 4) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 1760) & 1) != 0 )
      {
        v7 = *(_WORD *)(a1 + 1764);
        if ( (v7 & 3) == 0 )
        {
          *(_WORD *)(a1 + 1764) = v7 | 2;
          *a3 |= 2u;
          __writemsr(0x48u, *(unsigned __int16 *)(a1 + 1764));
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(a1 + 1772), 2u);
      v8 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v8 + 1772));
      do
        v9 = *(_WORD *)(v8 + 1772);
      while ( v9 != _InterlockedCompareExchange16((volatile signed __int16 *)(v8 + 1772), v9 & 0xFFE4 | 0xA, v9) );
    }
    return v6;
  }
  else
  {
    if ( (a4 & 4) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v11 + 1772));
      do
        v12 = *(_WORD *)(v11 + 1772);
      while ( v12 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 1772), v12 & 0xFFF5 | 2, v12) );
      if ( (*(_WORD *)(a1 + 1772) & 0x10) == 0 )
      {
        v13 = *(_WORD *)(a1 + 1764);
        if ( (v13 & 2) != 0 )
        {
          *(_WORD *)(a1 + 1764) = v13 & 0xFFFD;
          __writemsr(0x48u, v13 & 0xFFFD);
        }
      }
    }
    result = 0LL;
    *(_WORD *)(a1 + 1760) &= ~1u;
  }
  return result;
}
