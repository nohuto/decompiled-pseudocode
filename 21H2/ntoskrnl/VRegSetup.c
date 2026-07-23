/*
 * XREFs of VRegSetup @ 0x1407CB1E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     ObSetSecurityObjectByPointer @ 0x140655280 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D254 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PspStorageAllocSlot @ 0x140795A48 (PspStorageAllocSlot.c)
 *     ObCreateObjectTypeEx @ 0x140795AF0 (ObCreateObjectTypeEx.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x1407CB3A4 (VrpInitializeLoadedDifferencingHives.c)
 */

__int64 __fastcall VRegSetup(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-39h] BYREF
  __int128 v9[8]; // [rsp+60h] [rbp-29h] BYREF

  DestinationString = 0LL;
  SourceString = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02168, 0LL, 0LL);
  RtlpQueryRegistryValues(
    2147483650LL,
    L"Session Manager\\Configuration Manager",
    (__int64)&VrpRegistryValuesTable,
    0LL);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\VRegDriver");
  v2 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x22u, 0x100u, 0, &VrpDeviceObject);
  if ( v2 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v2, 1uLL, 0LL);
  VrpActiveSilosLock = 0LL;
  VrpDriverObject = (__int64)DriverObject;
  v3 = ObSetSecurityObjectByPointer((__int64)VrpDeviceObject, 12, (__int64)&VrpHardCodedSdBlob);
  if ( v3 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v3, 2uLL, 0LL);
  VrpDeviceObject->Flags &= ~0x80u;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)VrpRegistryUnload;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)VrpRegistryDispatch;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)VrpRegistryDispatch;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)VrpIoctlDeviceDispatch;
  RtlInitUnicodeString(&SourceString, L"VRegConfigurationContext");
  memset(v9, 0, 0x78uLL);
  BYTE2(v9[0]) |= 4u;
  LOWORD(v9[0]) = 120;
  *(_QWORD *)&v9[1] = 0x2000000020000LL;
  *((_QWORD *)&v9[0] + 1) = 0x2000000000100LL;
  *((_QWORD *)&v9[1] + 1) = 0xF0000000F0000LL;
  *((_QWORD *)&v9[4] + 1) = VrpJobContextDelete;
  *(_QWORD *)((char *)&v9[2] + 4) = 0x6000000001LL;
  v4 = ObCreateObjectTypeEx(&SourceString, v9, 0LL, 0LL, (__int64 *)&VrpJobContextType);
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v4, 4uLL, 0LL);
  v5 = VrpInitializeLoadedDifferencingHives();
  if ( v5 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v5, 5uLL, 0LL);
  result = PspStorageAllocSlot((ULONG *)&VrpSiloContextSlot);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 6uLL, 0LL);
  return result;
}
