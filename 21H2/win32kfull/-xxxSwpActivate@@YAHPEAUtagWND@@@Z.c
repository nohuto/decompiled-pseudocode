/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00FE1F4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00FE2A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  __int64 v2; // rax
  struct tagWND *v3; // rdx
  struct tagWND *v4; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == a1 || !xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  v3 = *(struct tagWND **)(v2 + 120);
  if ( v3 )
  {
    SetOrClrWF(1, v3, 0x101u, 1);
    v2 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v4 = *(struct tagWND **)(v2 + 128);
  if ( v4 )
    SetOrClrWF(1, v4, 0x101u, 1);
  return 1LL;
}
