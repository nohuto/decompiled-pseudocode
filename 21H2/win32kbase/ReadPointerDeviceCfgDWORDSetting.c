/*
 * XREFs of ReadPointerDeviceCfgDWORDSetting @ 0x1C0083AE0
 * Callers:
 *     GetDWORDSettingValuesEx @ 0x1C0083920 (GetDWORDSettingValuesEx.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, __int64 a2)
{
  const WCHAR *v3; // rdx
  PVOID v5; // rdi
  __int64 v6; // rdx
  __int64 Pool2; // rbx
  NTSTATUS v8; // edi
  __int64 v10; // rax
  char v11; // si
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-C8h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-B8h] BYREF
  ULONG Length; // [rsp+108h] [rbp+10h] BYREF

  Length = 16;
  v3 = *(const WCHAR **)a2;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, v3);
  v5 = gpLeakTrackingAllocator;
  v6 = Length;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78707355) != 0x78707355
    || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, Length);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 2020635477 )
  {
    if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  v11 = 0;
  if ( Length < 0x1000uLL || (Length & 0xFFF) != 0 )
  {
    v11 = 1;
    v6 = Length + 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v6);
  if ( !Pool2 )
    return (unsigned int)-1073741595;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v5,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
LABEL_3:
      if ( Pool2 )
        goto LABEL_4;
      return (unsigned int)-1073741595;
    }
LABEL_23:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)-1073741595;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v5,
                           Pool2,
                           BackTrace) )
    goto LABEL_23;
LABEL_4:
  v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, (PVOID)Pool2, Length, &Length);
  if ( v8 >= 0 && *(_DWORD *)(Pool2 + 4) == 4 )
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(Pool2 + 12);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
  return (unsigned int)v8;
}
