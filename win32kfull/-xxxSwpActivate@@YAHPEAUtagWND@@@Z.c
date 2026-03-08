/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00DBEA4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00DBF58 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  __int64 *v2; // rdx
  __int64 *v3; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    xxxSendMessage(a1, 0x22u);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) == a1 || !xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  if ( v2 )
    SetOrClrWF(1, v2, 0x101u, 1);
  v3 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 136LL);
  if ( v3 )
    SetOrClrWF(1, v3, 0x101u, 1);
  return 1LL;
}
