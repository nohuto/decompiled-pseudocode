/*
 * XREFs of OSWriteRegValue @ 0x1C008EC30
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C003D600 (ACPIRootPowerCallBack.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FC4 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 *     ACPIRootWorker @ 0x1C0094950 (ACPIRootWorker.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C0094AA0 (ACPIWriteOscSupportToRegistry.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00A9FEC (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall OSWriteRegValue(PCSZ SourceString, HANDLE KeyHandle, PVOID Data, ULONG DataSize)
{
  NTSTATUS v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  NTSTATUS v10; // eax
  int v11; // edx
  ULONG DataSizeb; // [rsp+28h] [rbp-30h]
  __int64 DataSizea; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  SourceStringa = 0LL;
  DestinationString = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v7 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
    v9 = v10;
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(DataSizea) = v10;
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        11,
        29,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        DataSizea,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    }
    RtlFreeUnicodeString(&DestinationString);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    DataSizeb = v7;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      28,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      DataSizeb,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return v9;
}
