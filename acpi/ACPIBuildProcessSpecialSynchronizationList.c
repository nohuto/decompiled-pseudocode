__int64 ACPIBuildProcessSpecialSynchronizationList()
{
  PVOID *v0; // rdi
  char v1; // bl
  PVOID *v2; // rsi
  int v3; // eax
  _QWORD *v4; // rcx
  const char *v5; // r11
  const char *v6; // r8
  PVOID v7; // r10
  __int64 v8; // rdx
  PVOID *v9; // rdi
  PVOID *v10; // rsi
  const char *v11; // r10
  const char *v12; // rdx
  PVOID v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  char v17; // [rsp+80h] [rbp+8h]

  v0 = (PVOID *)AcpiBuildSpecialSynchronizationList;
  v1 = 1;
  v17 = 1;
  if ( AcpiBuildSpecialSynchronizationList == &AcpiBuildSpecialSynchronizationList )
    goto LABEL_28;
  do
  {
    v2 = v0;
    v0 = (PVOID *)*v0;
    v3 = *((_DWORD *)v2 + 20);
    if ( (v3 & 8) != 0 && (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList
      || (v3 & 0x20) != 0 && AcpiBuildSynchronizationList != &AcpiBuildSynchronizationList
      || (v3 & 1) != 0 && (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList
      || (v3 & 2) != 0 && (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList
      || (v3 & 0x10) != 0 && (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList
      || (v3 & 4) != 0 && (__int64 *)AcpiBuildPowerResourceList != &AcpiBuildPowerResourceList )
    {
      v1 = 0;
    }
    else
    {
      if ( (v3 & 0x80u) != 0 && (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
        v1 = 0;
      if ( (v3 & 0x40) == 0 )
      {
        v4 = v2[5];
        v5 = (const char *)&unk_1C00622D0;
        v6 = (const char *)&unk_1C00622D0;
        LOBYTE(v7) = 0;
        if ( v4 )
        {
          v8 = v4[1];
          v7 = v2[5];
          if ( (v8 & 0x200000000000LL) != 0 )
          {
            v5 = (const char *)v4[76];
            if ( (v8 & 0x400000000000LL) != 0 )
              v6 = (const char *)v4[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x45u,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            v3,
            (char)v7,
            v5,
            v6);
        ACPIBuildProcessGenericComplete(v2);
      }
    }
  }
  while ( v0 != &AcpiBuildSpecialSynchronizationList );
  v17 = v1;
  if ( v1 )
  {
LABEL_28:
    v9 = (PVOID *)AcpiBuildSpecialSynchronizationList;
    if ( AcpiBuildSpecialSynchronizationList != &AcpiBuildSpecialSynchronizationList )
    {
      do
      {
        v10 = v9;
        v11 = (const char *)&unk_1C00622D0;
        v9 = (PVOID *)*v9;
        v12 = (const char *)&unk_1C00622D0;
        LOBYTE(v13) = 0;
        v14 = v10[5];
        if ( v14 )
        {
          v15 = v14[1];
          v13 = v10[5];
          if ( (v15 & 0x200000000000LL) != 0 )
          {
            v11 = (const char *)v14[76];
            if ( (v15 & 0x400000000000LL) != 0 )
              v12 = (const char *)v14[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            0x46u,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            *((_DWORD *)v10 + 20),
            (char)v13,
            v11,
            v12);
        ACPIBuildProcessGenericComplete(v10);
      }
      while ( v9 != &AcpiBuildSpecialSynchronizationList );
      v1 = v17;
    }
  }
  return v1 == 0 ? 0x103 : 0;
}
