/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C0237874
 * Callers:
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C023534C (xxxMNDrawFullNC.c)
 *     xxxMenuDraw @ 0x1C02361F4 (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C023668C (xxxPaintMenuBar.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     MNInitUAHMenu @ 0x1C0234A4C (MNInitUAHMenu.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  ULONG_PTR v4; // r11
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  MNInitUAHMenu(a3, a4, (__int64)&v6);
  return xxxSendMessage(v4);
}
