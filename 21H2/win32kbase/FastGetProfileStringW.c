/*
 * XREFs of FastGetProfileStringW @ 0x1C0019800
 * Callers:
 *     FastGetProfileIntW @ 0x1C0061160 (FastGetProfileIntW.c)
 *     FastGetProfileStringFromIDW @ 0x1C0061220 (FastGetProfileStringFromIDW.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall FastGetProfileStringW(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned int a6,
        int a7)
{
  char v8; // r15
  void *v9; // rsi
  unsigned int v10; // r13d
  PVOID v11; // rdi
  __int64 v12; // rdx
  __int64 Pool2; // rbx
  NTSTATUS ValueKey; // eax
  unsigned int v16; // edi
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD DestinationString[3]; // [rsp+38h] [rbp-B1h] BYREF
  PVOID BackTrace[26]; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v23; // [rsp+140h] [rbp+57h]

  v23 = a2;
  HIDWORD(DestinationString[0]) = a7 | gdwPolicyFlags;
  v8 = 0;
  LODWORD(DestinationString[0]) = 0;
  *(_OWORD *)&DestinationString[1] = 0LL;
  v9 = (void *)OpenCacheKeyEx(a1, a2, 131097LL, (char *)DestinationString + 4);
  if ( !v9 )
  {
LABEL_13:
    if ( (a7 & 0x10) == 0 )
    {
LABEL_11:
      if ( a4 && RtlStringCchCopyW(a5, a6, a4) >= 0 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( *(_WORD *)(v17 + 2 * v18) );
        return (unsigned int)(v18 + 1);
      }
    }
    return 0LL;
  }
  v10 = 2 * a6 + 12;
  while ( 1 )
  {
    v11 = gpLeakTrackingAllocator;
    v12 = v10;
    LODWORD(DestinationString[0]) = 2 * a6 + 12;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72707355) != 0x72707355
      || (v19 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_4:
      Pool2 = ExAllocatePool2(261LL, v10);
LABEL_5:
      if ( !Pool2 )
        goto LABEL_10;
      goto LABEL_6;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != 1919972181 )
    {
      if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_4;
    }
    if ( v10 < 0x1000uLL || (v10 & 0xFFF) != 0 )
    {
      v8 = 1;
      v12 = v10 + 16LL;
    }
    Pool2 = ExAllocatePool2(261LL, v12);
    if ( !Pool2 )
      goto LABEL_10;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v8 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      v8 = 0;
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v11,
                               Pool2,
                               BackTrace) )
        goto LABEL_38;
      Pool2 += 16LL;
      goto LABEL_5;
    }
    v8 = 0;
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v11,
                             Pool2,
                             BackTrace) )
    {
LABEL_38:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_10;
    }
LABEL_6:
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], a3);
    ValueKey = ZwQueryValueKey(
                 v9,
                 (PUNICODE_STRING)&DestinationString[1],
                 KeyValuePartialInformation,
                 (PVOID)Pool2,
                 DestinationString[0],
                 (PULONG)DestinationString);
    if ( ValueKey == -2147483643 || ValueKey >= 0 )
      break;
    if ( !HIDWORD(DestinationString[0]) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (void *)Pool2);
LABEL_10:
      ZwClose(v9);
      goto LABEL_11;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
    ZwClose(v9);
    v9 = (void *)OpenCacheKeyEx(a1, v23, 131097LL, (char *)DestinationString + 4);
    if ( !v9 )
      goto LABEL_13;
  }
  v16 = a6;
  if ( *(_DWORD *)(Pool2 + 8) >> 1 < a6 )
    v16 = *(_DWORD *)(Pool2 + 8) >> 1;
  if ( *(_DWORD *)(Pool2 + 8) < 2u )
  {
    *a5 = 0;
  }
  else
  {
    *(_WORD *)(Pool2 + 2LL * (v16 - 1) + 12) = 0;
    RtlStringCchCopyW(a5, a6, (const unsigned __int16 *)(Pool2 + 12));
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
  ZwClose(v9);
  return v16;
}
