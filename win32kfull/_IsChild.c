/*
 * XREFs of _IsChild @ 0x1C00164BC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     xxxDoPaint @ 0x1C00C3298 (xxxDoPaint.c)
 *     NtUserSelectPalette @ 0x1C00D0140 (NtUserSelectPalette.c)
 *     CheckPwndFilter @ 0x1C00E10D0 (CheckPwndFilter.c)
 *     _SelectPalette @ 0x1C0125A20 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
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
