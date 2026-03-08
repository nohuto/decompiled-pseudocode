/*
 * XREFs of OSNotifyDeviceEject @ 0x1C0032E08
 * Callers:
 *     NotifyHandler @ 0x1C0004EE0 (NotifyHandler.c)
 *     OSNotifyDeviceCheck @ 0x1C0032C80 (OSNotifyDeviceCheck.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0013BE0 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C00152B8 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  __int64 v6; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C006FA40 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    v5 = dword_1C006FA40;
    LOBYTE(v5) = 4;
    byte_1C006FA44 = 0;
    WPP_RECORDER_SF_qs(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      12,
      25,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a1,
      (__int64)&dword_1C006FA40);
  }
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( v6 )
    ACPIBuildSynchronizationRequestInternal(
      v6,
      (__int64)ACPIBuildIssueNotifyDeviceEject,
      *(_QWORD *)(*(_QWORD *)a1 + 104LL),
      a4,
      1);
  return 0LL;
}
