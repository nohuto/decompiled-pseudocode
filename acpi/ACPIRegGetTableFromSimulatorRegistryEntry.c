/*
 * XREFs of ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C008D15C
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00018A0 (ACPIMapNamedTable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x1C000AEC4 (WPP_RECORDER_SF_s.c)
 *     ACPIRegLocalCopyString @ 0x1C008D388 (ACPIRegLocalCopyString.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C008D920 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenHandle @ 0x1C008DF10 (OSOpenHandle.c)
 *     OSOpenLargestSubkey @ 0x1C008DFE0 (OSOpenLargestSubkey.c)
 */

bool __fastcall ACPIRegGetTableFromSimulatorRegistryEntry(__int64 *a1)
{
  __int64 v1; // rbp
  bool v2; // di
  char *Pool2; // rax
  char *v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx

  v1 = *a1;
  v2 = 0;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  Pool2 = (char *)ExAllocatePool2(256LL, 106LL, 1114661697LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  qmemcpy(Pool2, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\Simulator\\Tables\\", 85);
  v6 = (_BYTE *)ACPIRegLocalCopyString(Pool2 + 85, v1, 4LL);
  *v6 = 92;
  v7 = (_BYTE *)ACPIRegLocalCopyString(v6 + 1, v1 + 10, 6LL);
  *v7 = 92;
  *(_BYTE *)ACPIRegLocalCopyString(v7 + 1, v1 + 16, 8LL) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_s(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      11,
      37,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      (__int64)v5);
  }
  v9 = OSOpenHandle(v5);
  if ( v9 >= 0 )
  {
    v11 = OSOpenLargestSubkey(0LL);
    if ( v11 >= 0 )
    {
      v2 = (int)ACPIRegReadEntireSimulatorAcpiTable(0LL, a1) >= 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        11,
        39,
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
      38,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v9);
  }
  ExFreePoolWithTag(v5, 0);
  return v2;
}
