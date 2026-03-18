/*
 * XREFs of ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FE2F8
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C009EC90 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A6A30 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1C01FE0B4 (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C023E3D0 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceOpened(struct RawInputManagerDeviceObject *a1)
{
  int InkProcessor; // eax
  struct InkProcessor *v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  struct InkProcessor **v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v3 = 0LL;
  InkProcessor = GetInkProcessor(&v3);
  if ( InkProcessor >= 0 )
  {
    InkProcessor::OnDeviceOpened(v3, a1);
  }
  else if ( (unsigned int)dword_1C03540E0 > 2 )
  {
    v7 = 0;
    LODWORD(v3) = InkProcessor;
    v6 = 4;
    v5 = &v3;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03540E0, (unsigned __int8 *)dword_1C031C186, 0LL, 0LL, 3u, &v4);
  }
}
