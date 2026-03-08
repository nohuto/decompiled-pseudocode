/*
 * XREFs of OSCreateHandle @ 0x1C008DB54
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

__int64 __fastcall OSCreateHandle(PCSZ SourceString, void *a2, void **a3)
{
  int v5; // edx
  NTSTATUS v6; // ebx
  int v7; // r9d
  int v8; // r8d
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp+7h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitAnsiString(&DestinationString, SourceString);
  v6 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v6 >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    *a3 = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    v6 = ZwCreateKey(a3, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 11;
      v7 = 11;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 10;
    v8 = 22;
LABEL_7:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      v8,
      v7,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
