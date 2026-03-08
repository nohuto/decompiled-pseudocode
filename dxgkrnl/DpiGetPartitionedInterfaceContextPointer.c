/*
 * XREFs of DpiGetPartitionedInterfaceContextPointer @ 0x1C039EB94
 * Callers:
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C039DF00 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C039E2B0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C039E440 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPartitionedInterfaceContextPointer(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  bool v5; // zf
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  LOBYTE(v4) = 1;
  v5 = RtlFindUnicodeSubstring(a2, &DestinationString, v4) == 0;
  result = a1 + 5416;
  if ( v5 )
    return a1 + 5384;
  return result;
}
