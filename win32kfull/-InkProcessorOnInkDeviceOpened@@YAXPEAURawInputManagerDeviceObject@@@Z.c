/*
 * XREFs of ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200E78
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00D53F0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A7C60 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1C0200C34 (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C02410A0 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
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
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v7 = 0;
    LODWORD(v3) = InkProcessor;
    v6 = 4;
    v5 = &v3;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v4);
  }
}
