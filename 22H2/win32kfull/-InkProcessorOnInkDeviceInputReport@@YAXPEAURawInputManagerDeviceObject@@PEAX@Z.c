/*
 * XREFs of ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01FE25C
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01A6720 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1C01FE0B4 (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z @ 0x1C023E7EC (-ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceInputReport(struct RawInputManagerDeviceObject *a1, void *a2)
{
  int InkProcessor; // eax
  struct RawInputManagerDeviceObject *v3; // rdx
  const void *v4; // r8
  struct InkProcessor *v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  struct InkProcessor **v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v5 = 0LL;
  InkProcessor = GetInkProcessor(&v5);
  if ( InkProcessor >= 0 )
  {
    InkProcessor::ProcessInput(v5, v3, v4);
  }
  else if ( (unsigned int)dword_1C03540E0 > 2 )
  {
    v9 = 0;
    LODWORD(v5) = InkProcessor;
    v8 = 4;
    v7 = &v5;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03540E0, (unsigned __int8 *)dword_1C031C186, 0LL, 0LL, 3u, &v6);
  }
}
