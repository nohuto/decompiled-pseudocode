char __fastcall ACPIRegReadAMLRegistryEntry(__int64 *a1)
{
  __int64 v1; // r15
  char v2; // r14
  char *Pool2; // rax
  char *v5; // rdi
  char *v6; // rax
  char *v7; // rax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v18; // [rsp+20h] [rbp-20h]

  v1 = *a1;
  v2 = 0;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  Pool2 = (char *)ExAllocatePool2(256LL, 89LL, 1399874369LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  qmemcpy(Pool2, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\", 68);
  v6 = ACPIRegLocalCopyString(Pool2 + 68, v1, 4u);
  *v6 = 92;
  v7 = ACPIRegLocalCopyString(v6 + 1, v1 + 10, 6u);
  *v7 = 92;
  *ACPIRegLocalCopyString(v7 + 1, v1 + 16, 8u) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_s(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      11,
      30,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      (__int64)v5);
  }
  v9 = OSOpenHandle(v5);
  if ( v9 >= 0 )
  {
    v11 = OSOpenLargestSubkey(0LL);
    if ( v11 >= 0 )
    {
      v13 = OSReadRegValue("Action");
      if ( v13 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ld(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16, v18, v13, 4);
      }
      else if ( (int)ACPIRegReadEntireAcpiTable(0LL, a1) >= 0 )
      {
        v2 = 1;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        11,
        32,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        v11);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      11,
      31,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v9);
  }
  ExFreePoolWithTag(v5, 0);
  return v2;
}
