__int64 ACPIInitializeAMLI()
{
  int v0; // edi
  int v1; // edx
  int v2; // ebx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v7; // [rsp+28h] [rbp-10h]
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v8 = 4;
  if ( (int)OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, &v8) < 0 )
    gAMLIInitFlags = 0;
  v8 = 4;
  if ( (int)OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, &v8) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  v2 = OSReadAcpiConfigurationData(&v9);
  if ( v2 >= 0 )
  {
    E820Info = (PVOID)(v9 + 44);
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v3, v0, v4, v5);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v2;
    LOBYTE(v1) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v1,
      22,
      36,
      (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
      v7);
  }
  return (unsigned int)v2;
}
