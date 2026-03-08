/*
 * XREFs of _GetParent @ 0x1C00C85CC
 * Callers:
 *     NtUserGetAncestor @ 0x1C00C84D0 (NtUserGetAncestor.c)
 *     _GetAncestor @ 0x1C00EA498 (_GetAncestor.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C01F3DE8 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetParent(_QWORD *a1)
{
  char v1; // dl

  v1 = *(_BYTE *)(a1[5] + 31LL) & 0xC0;
  if ( !v1 )
    return 0LL;
  if ( v1 == 64 )
    return a1[13];
  return a1[15];
}
