char __fastcall HalpAcpiPostSleep(unsigned int a1)
{
  __int16 v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  REGHANDLE v10; // rdi
  __int64 v11; // rcx
  _WORD v13[2]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v14[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v15; // [rsp+38h] [rbp-48h] BYREF
  int v16; // [rsp+3Ch] [rbp-44h] BYREF
  int v17; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  int *v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v16 = 0;
  v17 = 0;
  v15 = 0;
  v13[0] = 0;
  v14[0] = 0;
  if ( (HalpPlatformFlags & 1) != 0 )
  {
    HalpCheckFixedWakeSources();
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)v14, 2u, 0LL);
      v2 = v14[0];
      v13[0] = v14[0];
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)v14, 2u, 0LL);
        v2 = v13[0] | v14[0];
      }
      v13[0] = v2 & 0xFBFF;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)v13, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)v13, 2u, 0LL);
    }
  }
  HalpCheckLowMemoryPostSleep(&v16, &v17, &v15);
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockAfterSleep(v4, v3, v5);
  HalpTimerRestorePerformanceCounter();
  HalpTimerSwitchStallSource(0);
  HIBYTE(HalpWakeupState) = 0;
  *(_DWORD *)HalpWakeVector = 0;
  HalpInterruptReinitialize(a1, v6, v7, v8);
  if ( !HalpResumeFromHibernate )
  {
    ((void (__fastcall *)(_QWORD))off_140C01BD0)(((a1 >> 8) & 0xF) + 1);
    if ( HalpHvCpuManager )
      HalpHvNotifyDebugDeviceAvailable();
  }
  if ( v15 )
  {
    if ( HalpDiagnosticEventsRegistered )
    {
      v10 = HalpDiagnosticEventHandle;
      if ( EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION) )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v15;
        v20 = 4LL;
        v19 = &v16;
        v22 = 4LL;
        v21 = &v17;
        EtwWrite(v10, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION, 0LL, 3u, &UserData);
      }
    }
  }
  if ( (HalpSleepContext & 0x4000) != 0 )
  {
    if ( KdComPortInUse )
      KdInitialize(4LL, 0LL, 0LL, v9);
    HalpRestoreDmaControllerState();
  }
  HalpTimerInitializeVpptClockTimer();
  HalpTimerEnableHypervisorTimer();
  HalpPiix4Detect(0);
  if ( !HalpResumeFromHibernate )
    ((void (__fastcall *)(_QWORD))off_140C01AD0[0])(((a1 >> 8) & 0xF) + 1);
  v11 = PmAcpiDispatchTable;
  LOBYTE(v11) = 1;
  (*(void (__fastcall **)(__int64))(PmAcpiDispatchTable + 8))(v11);
  HalpRestoreNvsArea();
  HalpResetSBF();
  return 1;
}
