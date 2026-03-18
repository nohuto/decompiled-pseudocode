/*
 * XREFs of TtmpPublishDeviceEvent @ 0x1409A29D4
 * Callers:
 *     TtmiAssignDevice @ 0x1409A1BAC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1409A1D70 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSessionDeviceListWorker @ 0x1409A1E04 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     memset @ 0x140435E00 (memset.c)
 *     TtmiWriteEventToAllQueues @ 0x1409A5188 (TtmiWriteEventToAllQueues.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A7718 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceAssignedTerminalEvent @ 0x1409A7858 (TtmiLogDeviceAssignedTerminalEvent.c)
 *     TtmiLogDeviceDepartedTerminalEvent @ 0x1409A7948 (TtmiLogDeviceDepartedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A7B30 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AB3EC (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmpPublishDeviceEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // esi
  int v9; // edx
  __int64 v10; // r11
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  _DWORD v16[136]; // [rsp+38h] [rbp-D0h] BYREF

  memset(&v16[1], 0, 0x21CuLL);
  v8 = 0;
  v16[0] = a4;
  switch ( a4 )
  {
    case 0:
    case 3:
      v16[2] = *(_DWORD *)(a3 + 32);
      v16[3] = *(_DWORD *)(a3 + 596);
      v16[4] = *(_DWORD *)(a3 + 16);
      v16[5] = *(_DWORD *)(a3 + 72);
      RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v16[6], 0x104uLL, (NTSTRSAFE_PCWSTR)(a3 + 76));
      v11 = *(_DWORD *)(a3 + 72);
      v12 = *(_DWORD *)(a3 + 16);
      v13 = *(_DWORD *)(a3 + 596);
      v14 = *(_DWORD *)(a3 + 32);
      if ( a4 )
        TtmiLogDeviceArrivedTerminalEvent(v14, v13, v12, v11, v10);
      else
        TtmiLogDeviceEnumeratedTerminalEvent(v14, v13, v12, v11, v10);
      break;
    case 4:
      v9 = *(_DWORD *)(a3 + 596);
      v16[2] = *(_DWORD *)(a3 + 32);
      v16[3] = v9;
      TtmiLogDeviceAssignedTerminalEvent();
      break;
    case 5:
      v16[2] = *(_DWORD *)(a3 + 32);
      TtmiLogDeviceDepartedTerminalEvent();
      break;
  }
  if ( a2 )
    return (unsigned int)TtmiWriteEventToSingleQueue(a2, v16);
  else
    TtmiWriteEventToAllQueues(a1, v16);
  return v8;
}
