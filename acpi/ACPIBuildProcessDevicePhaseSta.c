__int64 __fastcall ACPIBuildProcessDevicePhaseSta(__int64 a1)
{
  ULONG_PTR v1; // rbx
  const char *v3; // rax
  __int64 v4; // rcx
  const char *v5; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v1 + 8) & 0x2000LL) != 0 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 184));
    *(_DWORD *)(v1 + 196) = 0;
    ACPIRegisterForDeviceNotificationsByDeviceExtension(v1, ACPICMButtonNotifyByDeviceExtension, v1);
  }
  *(_DWORD *)(a1 + 32) = 14;
  v3 = (const char *)&unk_1C00622D0;
  v4 = *(_QWORD *)(v1 + 8);
  v5 = (const char *)&unk_1C00622D0;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v3 = *(const char **)(v1 + 608);
    if ( (v4 & 0x400000000000LL) != 0 )
      v5 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x30u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      0,
      v1,
      v3,
      v5);
  ACPIDetectDuplicateHID(v1);
  if ( (*(_DWORD *)(v1 + 8) & 0x10000000) != 0 )
    LinkNodeAddLinkNode((PVOID)v1);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
