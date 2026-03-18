/*
 * XREFs of InitCreateUserSubsystem @ 0x1C02E32B8
 * Callers:
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     wcsstr @ 0x1C00D5E08 (wcsstr.c)
 *     wcschr @ 0x1C00D5E68 (wcschr.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 InitCreateUserSubsystem()
{
  char v0; // dl
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  void *v3; // r14
  PVOID v4; // rdi
  __int64 v5; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdi
  int v8; // edi
  wchar_t *v9; // rax
  wchar_t *v10; // rax
  wchar_t *v11; // rdi
  ULONG v12; // eax
  wchar_t *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v20[26]; // [rsp+100h] [rbp+0h] BYREF
  ULONG Length; // [rsp+1E0h] [rbp+E0h] BYREF
  int v22; // [rsp+1E8h] [rbp+E8h] BYREF

  String = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (v0 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v0 = 0;
  }
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      20,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78747355) != 0x78747355
    || (v15 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_8:
    Pool2 = ExAllocatePool2(261LL, 1280LL);
    goto LABEL_9;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 2020897621 )
  {
    if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_8;
  }
  Pool2 = ExAllocatePool2(261LL, 1296LL);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v1,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_48;
    Pool2 += 16LL;
LABEL_9:
    if ( Pool2 )
      goto LABEL_10;
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v1,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_48:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
LABEL_10:
  Length = 0;
  v22 = gdwPolicyFlags;
  DestinationString = 0LL;
  v3 = OpenCacheKeyEx(0LL, 10LL, 131097LL, &v22);
  if ( !v3 )
  {
LABEL_19:
    if ( RtlStringCchCopyW((unsigned __int16 *)Pool2, 0x25FuLL, (size_t *)L"SharedSection=,3072") >= 0 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(Pool2 + 2 * v7) );
      v8 = v7 + 1;
      goto LABEL_23;
    }
    goto LABEL_63;
  }
  while ( 1 )
  {
    v4 = gpLeakTrackingAllocator;
    Length = 1226;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72707355) != 0x72707355
      || (v16 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_12:
      v5 = ExAllocatePool2(261LL, 1226LL);
LABEL_13:
      if ( !v5 )
        goto LABEL_18;
      goto LABEL_14;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 1919972181 )
    {
      if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_12;
    }
    v5 = ExAllocatePool2(261LL, 1242LL);
    if ( !v5 )
      goto LABEL_18;
    memset(v20, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, v20, 0LL);
    if ( (unsigned __int64)(v5 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v4,
              (const void *)v5,
              (struct NSInstrumentation::CBackTrace *)v20) )
      {
LABEL_58:
        ExFreePoolWithTag((PVOID)v5, 0);
        goto LABEL_18;
      }
      v5 += 16LL;
      goto LABEL_13;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
            (__int64)v4,
            v5,
            (struct NSInstrumentation::CBackTrace *)v20) )
      goto LABEL_58;
LABEL_14:
    RtlInitUnicodeString(&DestinationString, L"Windows");
    v6 = ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, (PVOID)v5, Length, &Length);
    if ( v6 == -2147483643 || v6 >= 0 )
      break;
    if ( !v22 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v5);
LABEL_18:
      ZwClose(v3);
      goto LABEL_19;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v5);
    ZwClose(v3);
    v3 = OpenCacheKeyEx(0LL, 10LL, 131097LL, &v22);
    if ( !v3 )
      goto LABEL_19;
  }
  v8 = 607;
  if ( *(_DWORD *)(v5 + 8) >> 1 < 0x25Fu )
    v8 = *(_DWORD *)(v5 + 8) >> 1;
  if ( *(_DWORD *)(v5 + 8) < 2u )
  {
    *(_WORD *)Pool2 = 0;
  }
  else
  {
    *(_WORD *)(v5 + 2LL * (unsigned int)(v8 - 1) + 12) = 0;
    RtlStringCchCopyW((unsigned __int16 *)Pool2, 0x25FuLL, (size_t *)(v5 + 12));
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)v5);
  ZwClose(v3);
LABEL_23:
  if ( !v8 )
  {
LABEL_63:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
    return 0LL;
  }
  gdwDesktopSectionSize = 512;
  gdwNOIOSectionSize = 128;
  v9 = wcsstr((const wchar_t *)Pool2, L"SharedSection");
  if ( v9 )
  {
    v9[32] = 0;
    v10 = wcschr(v9, 0x2Cu);
    v11 = v10;
    if ( v10 )
    {
      RtlInitUnicodeString(&String, v10 + 1);
      RtlUnicodeStringToInteger(&String, 0, &gdwDesktopSectionSize);
      v12 = gdwDesktopSectionSize;
      if ( gdwDesktopSectionSize < 0x200 )
      {
        v12 = 512;
        gdwDesktopSectionSize = 512;
      }
      gdwNOIOSectionSize = v12;
      v13 = wcschr(v11 + 1, 0x2Cu);
      if ( v13 )
      {
        RtlInitUnicodeString(&String, v13 + 1);
        RtlUnicodeStringToInteger(&String, 0, &gdwNOIOSectionSize);
        if ( gdwNOIOSectionSize < 0x80 )
          gdwNOIOSectionSize = 128;
      }
    }
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
  return 1LL;
}
