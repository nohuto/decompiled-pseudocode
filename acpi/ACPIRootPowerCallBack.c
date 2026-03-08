/*
 * XREFs of ACPIRootPowerCallBack @ 0x1C003D600
 * Callers:
 *     <none>
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C000518C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPISetDeviceWorker @ 0x1C00474D4 (ACPISetDeviceWorker.c)
 *     OSCloseHandle @ 0x1C008DB38 (OSCloseHandle.c)
 *     OSCreateHandle @ 0x1C008DB54 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C008EC30 (OSWriteRegValue.c)
 */

void __fastcall ACPIRootPowerCallBack(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v4; // ebx
  KIRQL v5; // al
  KIRQL v6; // al
  int v7; // ecx
  KIRQL v8; // al
  int v9; // ecx
  KIRQL Irql; // [rsp+40h] [rbp+20h] BYREF
  int Data; // [rsp+48h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+30h]
  __int64 v13; // [rsp+58h] [rbp+38h]

  if ( (_DWORD)Argument1 == 3 )
  {
    Data = 0;
    KeyHandle = 0LL;
    v13 = 0LL;
    v4 = (int)Argument2;
    Irql = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
    AcpiPowerLeavingS0 = v4 != 1;
    KeReleaseSpinLock(&GpeTableLock, Irql);
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( v4 == 1 )
    {
      if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters") >= 0 )
      {
        v6 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
        v7 = AMLIMaxCTObjs;
        Irql = v6;
        if ( gdwcCTObjsMax > (unsigned int)AMLIMaxCTObjs )
        {
          v7 = gdwcCTObjsMax;
          AMLIMaxCTObjs = gdwcCTObjsMax;
        }
        Data = v7;
        KeReleaseSpinLock(&gdwGContextSpinLock, v6);
        OSWriteRegValue("AMLIMaxCTObjs", KeyHandle, &Data, 4u);
        if ( (int)OSCreateHandle("WakeUp") < 0 )
        {
          v13 = 0LL;
LABEL_15:
          if ( KeyHandle )
            OSCloseHandle();
          return;
        }
        v8 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
        v9 = AMLIMaxCTObjs;
        Irql = v8;
        if ( gdwcCTObjsMax > (unsigned int)AMLIMaxCTObjs )
        {
          v9 = gdwcCTObjsMax;
          AMLIMaxCTObjs = gdwcCTObjsMax;
        }
        Data = v9;
        KeReleaseSpinLock(&gdwGContextSpinLock, v8);
        ACPISetDeviceWorker(CallbackContext, 31LL);
      }
      else
      {
        KeyHandle = 0LL;
      }
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
      gdwcCTObjsMax = 0;
      Irql = v5;
      KeReleaseSpinLock(&gdwGContextSpinLock, v5);
    }
    if ( v13 )
      OSCloseHandle();
    goto LABEL_15;
  }
}
