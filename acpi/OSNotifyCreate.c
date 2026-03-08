/*
 * XREFs of OSNotifyCreate @ 0x1C00325E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C0022EB8 (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreateDevice @ 0x1C0032738 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C003285C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreatePowerResource @ 0x1C0032A14 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateProcessor @ 0x1C0032ABC (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C0032BC0 (OSNotifyCreateThermalZone.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  int v4; // edx
  KIRQL v5; // si
  int v6; // ebx
  int Device; // eax
  __int64 v8; // rdx

  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2);
      goto LABEL_14;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
      goto LABEL_14;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      goto LABEL_14;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      goto LABEL_14;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
LABEL_14:
      v6 = Device;
      goto LABEL_15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      21,
      10,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a1);
  }
  v6 = 0;
LABEL_15:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C006FA40 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
    byte_1C006FA44 = 0;
    WPP_RECORDER_SF_qsL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      6u,
      0xBu,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a2,
      &dword_1C006FA40,
      v6);
  }
  return 0LL;
}
