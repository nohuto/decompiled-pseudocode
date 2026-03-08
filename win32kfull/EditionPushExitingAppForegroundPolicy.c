/*
 * XREFs of EditionPushExitingAppForegroundPolicy @ 0x1C003F010
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::AppStarting_Clear @ 0x1C003CBD0 (_anonymous_namespace_--AppStarting_Clear.c)
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C003D0C4 (_anonymous_namespace_--CheckAllowForeground.c)
 *     _anonymous_namespace_::RecordParentPidLegacyPolicy @ 0x1C003F13C (_anonymous_namespace_--RecordParentPidLegacyPolicy.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage @ 0x1C012E440 (Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall EditionPushExitingAppForegroundPolicy(__int64 a1)
{
  HANDLE ProcessId; // rbp
  char v3; // si
  char v4; // di
  int v5; // r8d
  unsigned int v6; // eax
  HANDLE *v7; // rbx
  int v8; // eax
  int v9; // edx

  if ( *(_DWORD *)(a1 + 376) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 914LL);
  ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
  if ( (*(_DWORD *)(a1 + 12) & 0x8000) != 0 )
  {
    v3 = 1;
    v4 = (*(_DWORD *)(a1 + 12) & 0x40) != 0;
  }
  else
  {
    Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage();
    v8 = *(_DWORD *)(a1 + 12);
    v3 = 1;
    if ( (v8 & 1) != 0 )
      v4 = (v8 & 0x80100) != 0;
    else
      v4 = anonymous_namespace_::CheckAllowForeground(*(_QWORD *)a1);
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 )
    anonymous_namespace_::AppStarting_Clear(a1);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&unk_1C0362418, 0LL);
  if ( v4 )
    anonymous_namespace_::RecordParentPidLegacyPolicy(ProcessId);
  v6 = 5;
  v7 = (HANDLE *)&unk_1C0361228;
  while ( *v7 != ProcessId )
  {
    ++v6;
    v7 += 3;
    if ( v6 >= 0xF )
      goto LABEL_12;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 42;
    LOBYTE(v9) = v3;
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v5,
      (_DWORD)gFullLog,
      4,
      2,
      42,
      (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
      (char)ProcessId);
  }
  *(_OWORD *)v7 = 0LL;
  v7[2] = 0LL;
LABEL_12:
  ExReleasePushLockExclusiveEx(&unk_1C0362418, 0LL);
  KeLeaveCriticalRegion();
}
