/*
 * XREFs of ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021A82C
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0102A40 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01CD100 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024C7DC (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessorOnInkDeviceAttached(struct RawInputManagerDeviceObject *a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  int v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+60h] [rbp-10h]
  int v8; // [rsp+64h] [rbp-Ch]

  if ( InkProcessor::s_pInstance )
  {
    v2 = InkProcessor::OnDeviceAttached(InkProcessor::s_pInstance, a1);
    v1 = v2;
    if ( v2 < 0 && (unsigned int)dword_1C0326250 > 2 )
    {
      v4 = v2;
      goto LABEL_7;
    }
  }
  else
  {
    v1 = -1073741823;
    if ( (unsigned int)dword_1C0326250 > 2 )
    {
      v4 = -1073741823;
LABEL_7:
      v8 = 0;
      v6 = &v4;
      v7 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0326250,
        (unsigned __int8 *)dword_1C02EFE22,
        0LL,
        0LL,
        3u,
        &v5);
    }
  }
  return v1;
}
