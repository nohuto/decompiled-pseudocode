/*
 * XREFs of _IsChild @ 0x1C012BB3C
 * Callers:
 *     xxxDoPaint @ 0x1C00534A8 (xxxDoPaint.c)
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     CheckPwndFilter @ 0x1C00C1850 (CheckPwndFilter.c)
 *     _SelectPalette @ 0x1C0101704 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C0234A48 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  while ( a2 && (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    a2 = *(_QWORD *)(a2 + 104);
    if ( a1 == a2 )
      return 1LL;
  }
  return 0LL;
}
