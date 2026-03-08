/*
 * XREFs of Controller_TelemetryAddControllerData @ 0x1C0078AF0
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0034B08 (Controller_TelemetryReport.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     XilDeviceSlot_GetNumberOfDeviceSlots @ 0x1C0038204 (XilDeviceSlot_GetNumberOfDeviceSlots.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C0038210 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C00531E8 (TelemetryData_InsertTriageDataBlock.c)
 */

char __fastcall Controller_TelemetryAddControllerData(_QWORD *a1, __int64 *a2)
{
  __int64 UsbDeviceHandleArray; // rax
  const void *v5; // rdx
  const void *v6; // rdx
  const void *v7; // rdx
  const void *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const void *v12; // rax
  unsigned int v13; // r8d
  const void *v14; // rdx
  const void *v15; // rdx
  const void *v16; // rdx
  unsigned int v18; // [rsp+30h] [rbp-38h] BYREF
  const void *v19; // [rsp+38h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-28h] BYREF

  v19 = 0LL;
  v18 = 0;
  v20 = 0LL;
  if ( !a1
    || (LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, a1, 0x370u),
        (int)UsbDeviceHandleArray >= 0) )
  {
    LODWORD(UsbDeviceHandleArray) = imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, a1[9], &v19, &v18, &v20);
    if ( (int)UsbDeviceHandleArray >= 0 )
    {
      if ( !v19
        || (LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v19, v18),
            (int)UsbDeviceHandleArray >= 0) )
      {
        v5 = (const void *)a1[11];
        if ( !v5
          || (LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v5, 0x90u),
              (int)UsbDeviceHandleArray >= 0) )
        {
          v6 = (const void *)a1[15];
          if ( !v6
            || (LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v6, 0x130u),
                (int)UsbDeviceHandleArray >= 0) )
          {
            v7 = (const void *)a1[16];
            if ( !v7
              || (LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v7, 0x58u),
                  (int)UsbDeviceHandleArray >= 0) )
            {
              v8 = (const void *)a1[17];
              if ( !v8
                || (LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v8, 0x68u),
                    (int)UsbDeviceHandleArray >= 0) )
              {
                if ( !a1[17]
                  || (LOBYTE(UsbDeviceHandleArray) = Controller_IsSecureDevice((__int64)a1), (_BYTE)UsbDeviceHandleArray)
                  || (UsbDeviceHandleArray = XilDeviceSlot_GetUsbDeviceHandleArray(v9)) == 0
                  || (XilDeviceSlot_GetNumberOfDeviceSlots(v10),
                      v12 = (const void *)XilDeviceSlot_GetUsbDeviceHandleArray(v11),
                      LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v12, v13),
                      (int)UsbDeviceHandleArray >= 0) )
                {
                  v14 = (const void *)a1[18];
                  if ( !v14
                    || (LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v14, 0xE0u),
                        (int)UsbDeviceHandleArray >= 0) )
                  {
                    v15 = (const void *)a1[19];
                    if ( !v15
                      || (LODWORD(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v15, 0x40u),
                          (int)UsbDeviceHandleArray >= 0) )
                    {
                      v16 = (const void *)a1[20];
                      if ( v16 )
                        LOBYTE(UsbDeviceHandleArray) = TelemetryData_InsertTriageDataBlock(a2, v16, 0x18u);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return UsbDeviceHandleArray;
}
