/*
 * XREFs of _IsChild @ 0x1C0016C4C
 * Callers:
 *     xxxDoPaint @ 0x1C008BD2C (xxxDoPaint.c)
 *     NtUserSelectPalette @ 0x1C009A090 (NtUserSelectPalette.c)
 *     CheckPwndFilter @ 0x1C00AA000 (CheckPwndFilter.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     _SelectPalette @ 0x1C0131050 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  do
  {
    if ( !a2 || (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0xC0) != 0x40 )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 104);
  }
  while ( a1 != a2 );
  return 1LL;
}
