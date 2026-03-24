/*
 * XREFs of _IsChild @ 0x1C012B78C
 * Callers:
 *     xxxDoPaint @ 0x1C0053408 (xxxDoPaint.c)
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     CheckPwndFilter @ 0x1C00C14F0 (CheckPwndFilter.c)
 *     _SelectPalette @ 0x1C01013B4 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
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
