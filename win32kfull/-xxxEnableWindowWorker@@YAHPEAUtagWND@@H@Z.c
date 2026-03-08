/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C000AEB8
 * Callers:
 *     xxxEnableWindow @ 0x1C000AE3C (xxxEnableWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01CF6A0 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C009A3E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v6; // bp

  v3 = a2;
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v6 = *(_BYTE *)(v4 + 31) & 8;
  if ( a2 )
  {
    *(_BYTE *)(v4 + 31) &= ~8u;
    *((_DWORD *)a1 + 80) &= ~0x100u;
  }
  else
  {
    xxxSendMessage(a1, 31LL, 0LL, 0LL);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
      xxxSetFocus(0LL);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) |= 8u;
  }
  if ( (v6 == 0) != (_DWORD)v3 )
  {
    xxxWindowEvent(0x800Au, 0);
    xxxSendMessage(a1, 10LL, v3, 0LL);
  }
  LOBYTE(v5) = v6 != 0;
  return v5;
}
