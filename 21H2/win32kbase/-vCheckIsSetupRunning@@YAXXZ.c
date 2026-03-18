/*
 * XREFs of ?vCheckIsSetupRunning@@YAXXZ @ 0x1C00902C0
 * Callers:
 *     InitializeGreCSRSS @ 0x1C009000C (InitializeGreCSRSS.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void vCheckIsSetupRunning(void)
{
  PVOID v0; // rdi
  __int64 Pool2; // rbx
  __int64 v2; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  ULONG Length; // [rsp+120h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+128h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
    v0 = gpLeakTrackingAllocator;
    Length = 20;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7447) == 0x706D7447
      && (v2 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v2) != 1886221383 )
      {
        if ( ++v2 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_3;
      }
      Pool2 = ExAllocatePool2(260LL, 36LL);
      if ( !Pool2 )
        goto LABEL_9;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v0,
                                 Pool2,
                                 BackTrace) )
        {
LABEL_18:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_9;
        }
LABEL_5:
        if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, (PVOID)Pool2, Length, &Length) >= 0 )
        {
          if ( *(_DWORD *)(Pool2 + 12) )
            gbGUISetup = 1;
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)Pool2);
        goto LABEL_9;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v0,
                               Pool2,
                               BackTrace) )
        goto LABEL_18;
      Pool2 += 16LL;
    }
    else
    {
LABEL_3:
      Pool2 = ExAllocatePool2(260LL, 20LL);
    }
    if ( !Pool2 )
    {
LABEL_9:
      ZwClose(KeyHandle);
      return;
    }
    goto LABEL_5;
  }
}
