/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C01645D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeQDCActivePathsData @ 0x1C006DCC4 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C006E0F0 (RIMGetQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164C1C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165650 (rimFindMonitorForDigitizerWithQDCData.c)
 */

void __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        int a3,
        __int64 a4)
{
  unsigned int *v8; // rsi
  unsigned int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v9 = 0LL;
  v8 = RIMGetQDCActivePathsData(v9);
  rimFindMonitorForDigitizerWithQDCData(a1, v8, a4);
  if ( a3 )
    RIMSetDeviceOutputConfig(a1, a2);
  RIMFreeQDCActivePathsData((__int64)v8);
}
