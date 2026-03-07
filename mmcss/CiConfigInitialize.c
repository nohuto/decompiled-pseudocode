__int64 CiConfigInitialize()
{
  NTSTATUS v0; // ebx
  unsigned int DWORD; // edx
  int v2; // r9d
  int v3; // eax
  int v4; // r9d
  bool v5; // cl
  int v6; // r9d
  int DpcData_high; // r9d
  ULONG ActiveThreadCount; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)0x1C0010110LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
  if ( v0 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Cu,
        (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
        v0);
  }
  else
  {
    DWORD = CiConfigReadDWORD(KeyHandle, 0x1C0010090LL, 100LL);
    if ( DWORD - 10 > 0x5A )
      v2 = 20;
    else
      v2 = 10 * (DWORD / 0xA);
    CiSystemResponsiveness = v2;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x12u,
        (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
        v2);
    if ( CiSystemResponsiveness == 100 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x13u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids);
      v0 = -1073741696;
    }
    else
    {
      v3 = CiConfigReadDWORD(KeyHandle, 0x1C00100A0LL, 10LL);
      LODWORD(WPP_MAIN_CB.Dpc.DpcData) = v3;
      v4 = v3;
      if ( v3 )
      {
        if ( (unsigned int)(v3 - 71) <= 0xFFFFFFB7 )
        {
          v4 = 70;
          LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 70;
        }
      }
      else
      {
        v4 = 1;
        LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 1;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x14u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v4);
      v5 = (unsigned __int8)CiConfigReadDWORD(KeyHandle, 0x1C0010080LL, 0LL) != 0;
      CiSchedulerDisallowLazyMode = v5;
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x15u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v5);
      v6 = CiConfigReadDWORD(KeyHandle, 0x1C00100B0LL, 2LL);
      CiSchedulerIdleDetectionCycles = v6;
      if ( (unsigned int)(v6 - 1) > 0x1E )
      {
        v6 = 2;
        CiSchedulerIdleDetectionCycles = 2;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x16u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v6);
      CiSchedulerIdleCycleBitMask = (1 << CiSchedulerIdleDetectionCycles) - 1;
      HIDWORD(WPP_MAIN_CB.Dpc.DpcData) = CiConfigReadDWORD(KeyHandle, 0x1C00100C0LL, 1000000LL);
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      if ( !HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
      {
        DpcData_high = 1000000;
        HIDWORD(WPP_MAIN_CB.Dpc.DpcData) = 1000000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x17u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          DpcData_high);
      WPP_MAIN_CB.ActiveThreadCount = CiConfigReadDWORD(KeyHandle, 0x1C00100D0LL, 10000LL);
      ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
      if ( WPP_MAIN_CB.ActiveThreadCount > 0x2710 )
      {
        ActiveThreadCount = 10000;
        WPP_MAIN_CB.ActiveThreadCount = 10000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x18u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          ActiveThreadCount);
      v9 = CiConfigReadDWORD(KeyHandle, 0x1C00100E0LL, 100000LL);
      *(&WPP_MAIN_CB.ActiveThreadCount + 1) = v9;
      if ( (unsigned int)(v9 - 50000) > 0xE7EF0 )
      {
        v9 = 100000;
        *(&WPP_MAIN_CB.ActiveThreadCount + 1) = 100000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x19u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v9);
      v10 = CiConfigReadDWORD(KeyHandle, 0x1C00100F0LL, 32LL);
      CiMaxThreadsPerProcess = v10;
      if ( (unsigned int)(v10 - 8) > 0x78 )
      {
        v10 = 32;
        CiMaxThreadsPerProcess = 32;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Au,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v10);
      v11 = CiConfigReadDWORD(KeyHandle, 0x1C0010100LL, 256LL);
      CiMaxThreadsTotal = v11;
      if ( (unsigned int)(v11 - 64) > 0xFFBF )
      {
        v11 = 256;
        CiMaxThreadsTotal = 256;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Bu,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v11);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)0x1C0010120LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v0 = ZwOpenKey(&Handle, 0x80000100, &ObjectAttributes);
      if ( v0 >= 0 )
      {
        v0 = CiConfigInitializeFromRegistry(Handle);
        ZwClose(Handle);
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v0;
}
