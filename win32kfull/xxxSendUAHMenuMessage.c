/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C023A4DC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0237FB4 (xxxMNDrawFullNC.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C02392F4 (xxxPaintMenuBar.c)
 * Callees:
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     MNInitUAHMenu @ 0x1C02376B4 (MNInitUAHMenu.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v4; // r10d
  struct tagWND *v5; // r11
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  MNInitUAHMenu(a3, a4, (__int64)&v7);
  return xxxSendMessage(v5, v4);
}
