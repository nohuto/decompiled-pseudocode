/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C00BD2C0
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00BCDEC (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0247E7C (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     MNInitUAHMenu @ 0x1C00BE950 (MNInitUAHMenu.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // r11
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  MNInitUAHMenu(a3, a4, &v6);
  return xxxSendMessage(v4);
}
