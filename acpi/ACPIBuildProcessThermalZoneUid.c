__int64 __fastcall ACPIBuildProcessThermalZoneUid(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rdx
  const char *v6; // rcx
  unsigned int v7; // edi
  const char *v8; // rax

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x400000000000uLL);
  v3 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1145653343LL);
  if ( !v3 )
    KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x4449485FuLL, 0LL);
  AMLIDereferenceHandleEx(v3);
  *(_DWORD *)(a1 + 32) = 7;
  v4 = ACPIGet(v1, 1145653343, 671612966, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
  v5 = *(_QWORD *)(v1 + 8);
  v6 = (const char *)&unk_1C00622D0;
  v7 = v4;
  v8 = (const char *)&unk_1C00622D0;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(v1 + 608);
    if ( (v5 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x50u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v7,
      v1,
      v6,
      v8);
  if ( v7 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v7, 0LL, a1);
  return v7;
}
