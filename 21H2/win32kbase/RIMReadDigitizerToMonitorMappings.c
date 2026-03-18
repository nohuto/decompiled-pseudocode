/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1C0198450
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C0182990 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C01976C4 (rimReadSingleDigitizerToMonitorMappings.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(const UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  int result; // eax
  PVOID v6; // rdi
  __int64 v7; // rax
  __int64 Pool2; // rbx
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  void *KeyHandle; // [rsp+140h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\Pen\\Digimon");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v6 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D707352) == 0x6D707352
      && (v7 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1836086098 )
      {
        if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_12;
      }
      Pool2 = ExAllocatePool2(260LL, 540LL);
      if ( !Pool2 )
        return ZwClose(KeyHandle);
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v6,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_20:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          return ZwClose(KeyHandle);
        }
        goto LABEL_14;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v6,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_20;
      Pool2 += 16LL;
    }
    else
    {
LABEL_12:
      Pool2 = ExAllocatePool2(260LL, 524LL);
    }
    if ( !Pool2 )
      return ZwClose(KeyHandle);
LABEL_14:
    rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0xAu, v9, (char *)Pool2, v11, (unsigned __int16 *)(a2 + 276));
    rimReadSingleDigitizerToMonitorMappings(
      a1,
      KeyHandle,
      0x14u,
      v10,
      (char *)Pool2,
      v12,
      (unsigned __int16 *)(a2 + 20));
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
    return ZwClose(KeyHandle);
  }
  return result;
}
