/*
 * XREFs of HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0083100
 * Callers:
 *     HUBDSM_QueryingRegistryValuesForDevice @ 0x1C0021380 (HUBDSM_QueryingRegistryValuesForDevice.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001CA0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C0033EEC (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x1C0083D24 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C0084444 (HUBREG_QueryUsbflagsValuesForDevice.c)
 */

__int64 __fastcall HUBMISC_QueryAndCacheRegistryValuesForDevice(__int64 a1)
{
  int v1; // ebx
  int UsbflagsValuesForDevice; // esi
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-48h]
  char v7[8]; // [rsp+40h] [rbp-28h] BYREF
  char v8[8]; // [rsp+48h] [rbp-20h] BYREF
  char v9[8]; // [rsp+50h] [rbp-18h] BYREF

  v1 = a1 + 1988;
  HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 1988), v9, v8, v7);
  UsbflagsValuesForDevice = HUBREG_QueryUsbflagsValuesForDevice(a1, v9, v8, v7);
  HUBREG_QueryUsbHardwareVerifierValue(
    v1,
    (unsigned int)v9,
    (unsigned int)v8,
    (unsigned int)v7,
    (__int64)&g_HwVerifierDeviceName,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    a1 + 2436);
  if ( UsbflagsValuesForDevice < 0 )
  {
    *(_DWORD *)(a1 + 2432) = 1073807366;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LODWORD(v6) = UsbflagsValuesForDevice;
      McTemplateK0pq_EtwWriteTransfer(
        v4,
        &USBHUB3_ETW_EVENT_REGISTRY_FAILURE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        v6);
    }
  }
  result = 4065LL;
  if ( UsbflagsValuesForDevice >= 0 )
    return 4077LL;
  return result;
}
