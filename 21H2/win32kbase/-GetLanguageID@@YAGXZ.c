/*
 * XREFs of ?GetLanguageID@@YAGXZ @ 0x1C0090474
 * Callers:
 *     InitializeGreCSRSS @ 0x1C009000C (InitializeGreCSRSS.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 GetLanguageID(void)
{
  unsigned __int16 v0; // si
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  __int64 v4; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BackTrace[22]; // [rsp+70h] [rbp-90h] BYREF
  ULONG Length; // [rsp+130h] [rbp+30h] BYREF
  ULONG Value; // [rsp+138h] [rbp+38h] BYREF
  void *KeyHandle; // [rsp+140h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v0 = 1033;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    v1 = gpLeakTrackingAllocator;
    Length = 544;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64696C47) == 0x64696C47
      && (v4 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 1684630599 )
      {
        if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_3;
      }
      Pool2 = ExAllocatePool2(260LL, 560LL);
      if ( !Pool2 )
        goto LABEL_8;
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v1,
                                 Pool2,
                                 BackTrace) )
        {
LABEL_17:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_8;
        }
LABEL_5:
        RtlInitUnicodeString(&DestinationString, L"Default");
        if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, (PVOID)Pool2, Length, &Length) >= 0 )
        {
          Value = 0;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(Pool2 + 12));
          RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
          v0 = Value;
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)Pool2);
        goto LABEL_8;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v1,
                               Pool2,
                               BackTrace) )
        goto LABEL_17;
      Pool2 += 16LL;
    }
    else
    {
LABEL_3:
      Pool2 = ExAllocatePool2(260LL, 544LL);
    }
    if ( !Pool2 )
    {
LABEL_8:
      ZwClose(KeyHandle);
      return v0;
    }
    goto LABEL_5;
  }
  return v0;
}
