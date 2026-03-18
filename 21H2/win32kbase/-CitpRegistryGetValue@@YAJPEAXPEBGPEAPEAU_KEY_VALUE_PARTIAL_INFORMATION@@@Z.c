/*
 * XREFs of ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00A5EDC
 * Callers:
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C00A5814 (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpRegistryGetValue(
        HANDLE KeyHandle,
        const unsigned __int16 *a2,
        struct _KEY_VALUE_PARTIAL_INFORMATION **a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  PVOID v7; // rbx
  __int64 v8; // rdx
  const char *v9; // rdx
  __int64 Pool2; // rdi
  char *v11; // rsi
  NTSTATUS v12; // eax
  const char *v13; // rdx
  __int64 v15; // rax
  char v16; // si
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-69h] BYREF
  PVOID BackTrace[20]; // [rsp+48h] [rbp-59h] BYREF
  const unsigned __int16 *ResultLength; // [rsp+110h] [rbp+6Fh] BYREF

  ResultLength = a2;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"BuildLabEx");
  LODWORD(ResultLength) = 0;
  v5 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, (PULONG)&ResultLength);
  v6 = v5;
  if ( (v5 == -1073741789 || v5 == -2147483643) && (_DWORD)ResultLength )
  {
    v7 = gpLeakTrackingAllocator;
    v8 = (unsigned int)ResultLength;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) == 0x49637355 )
    {
      v15 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 1231254357 )
        {
          if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_4;
        }
        v16 = 0;
        if ( (unsigned int)ResultLength < 0x1000uLL || ((unsigned __int16)ResultLength & 0xFFF) != 0 )
        {
          v16 = 1;
          v8 = (unsigned int)ResultLength + 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v8);
        if ( !Pool2 )
          goto LABEL_28;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v16 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v7,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_5:
            v11 = (char *)Pool2;
            if ( Pool2 )
              goto LABEL_6;
LABEL_28:
            v6 = -1073741670;
            CitpLogFailureWorker(-1073741670, v9, 0x8ADu);
            return v6;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v7,
                                     Pool2,
                                     BackTrace) )
        {
          v11 = (char *)Pool2;
LABEL_6:
          v12 = ZwQueryValueKey(
                  KeyHandle,
                  &DestinationString,
                  KeyValuePartialInformation,
                  (PVOID)Pool2,
                  (ULONG)ResultLength,
                  (PULONG)&ResultLength);
          v6 = v12;
          if ( v12 < 0 )
          {
            CitpLogFailureWorker(v12, v13, 0x8B9u);
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              v11);
          }
          else
          {
            *a3 = (struct _KEY_VALUE_PARTIAL_INFORMATION *)Pool2;
            return 0;
          }
          return v6;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_28;
      }
    }
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, (unsigned int)ResultLength);
    goto LABEL_5;
  }
  if ( v5 >= 0 )
    return (unsigned int)-1073741823;
  return v6;
}
