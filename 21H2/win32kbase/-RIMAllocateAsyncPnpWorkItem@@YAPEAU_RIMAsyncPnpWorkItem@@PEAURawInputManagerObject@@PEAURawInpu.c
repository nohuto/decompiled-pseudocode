/*
 * XREFs of ?RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInputManagerDeviceObject@@PEAXPEAU_IVRIMDEV@@KPEAU_GUID@@4PEAU_UNICODE_STRING@@KW4tagASYNCPNP_TYPE@@@Z @ 0x1C01A9C34
 * Callers:
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AA71C (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01AA8A8 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AB3DC (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01AB59C (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01AB718 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAllocateAsyncPnpWorkItem(
        void *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _OWORD *a6,
        _OWORD *a7,
        PCUNICODE_STRING SourceString,
        int a9,
        int a10)
{
  PVOID v10; // rbx
  __int64 v13; // rbp
  void *v14; // r15
  __int64 v15; // rax
  __int64 Pool2; // rdi
  __int64 v17; // rbx
  PVOID v18; // rbp
  unsigned __int64 MaximumLength; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  char v29; // r15
  PVOID BackTrace[20]; // [rsp+40h] [rbp-178h] BYREF
  PVOID v31[27]; // [rsp+E0h] [rbp-D8h] BYREF

  v10 = gpLeakTrackingAllocator;
  v13 = a3;
  v14 = a1;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) == 0x70707352
    && (v15 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 1886417746 )
    {
      if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 136LL);
    if ( !Pool2 )
      return 0LL;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v10,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        v17 = Pool2;
        goto LABEL_7;
      }
LABEL_38:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return 0LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v10,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_38;
    Pool2 += 16LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 120LL);
  }
  v17 = Pool2;
  if ( !Pool2 )
    return v17;
LABEL_7:
  if ( SourceString )
  {
    v18 = gpLeakTrackingAllocator;
    MaximumLength = SourceString->MaximumLength;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) != 0x70707352
      || (v20 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_12:
      v21 = ExAllocatePool2(260LL, MaximumLength);
LABEL_13:
      *(_QWORD *)(Pool2 + 48) = v21;
      if ( v21 )
      {
        *(_WORD *)(Pool2 + 42) = SourceString->MaximumLength;
        RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 40), SourceString);
        v13 = a3;
        goto LABEL_15;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
      return 0LL;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v20) != 1886417746 )
    {
      if ( ++v20 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_12;
    }
    v29 = 0;
    if ( MaximumLength < 0x1000 || (MaximumLength & 0xFFF) != 0 )
    {
      v29 = 1;
      MaximumLength += 16LL;
    }
    v21 = ExAllocatePool2(260LL, MaximumLength);
    if ( v21 )
    {
      memset(v31, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, v31, 0LL);
      if ( v29 && (unsigned __int64)(v21 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v18,
               (const void *)v21,
               (struct NSInstrumentation::CBackTrace *)v31) )
        {
          v21 += 16LL;
          goto LABEL_44;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v18,
                  v21,
                  (struct NSInstrumentation::CBackTrace *)v31) )
      {
        goto LABEL_44;
      }
      ExFreePoolWithTag((PVOID)v21, 0);
    }
    v21 = 0LL;
LABEL_44:
    v14 = a1;
    goto LABEL_13;
  }
LABEL_15:
  *(_QWORD *)(v17 + 8) = v17;
  *(_QWORD *)v17 = v17;
  if ( ObReferenceObjectByPointer(v14, 3u, ExRawInputManagerObjectType, 0) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
  *(_QWORD *)(v17 + 24) = v14;
  if ( a2 )
  {
    if ( ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
    *(_QWORD *)(v17 + 56) = a2;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMVirtPnpQuickRelease__private_reporting,
    30688442LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
    1,
    3);
  if ( v13 )
    *(_QWORD *)(v17 + 96) = v13;
  if ( a4 )
    *(_QWORD *)(v17 + 104) = a4;
  *(_DWORD *)(v17 + 112) = a9;
  *(_DWORD *)(v17 + 32) = a5;
  if ( a6 )
    *(_OWORD *)(v17 + 64) = *a6;
  if ( a7 )
    *(_OWORD *)(v17 + 80) = *a7;
  *(_DWORD *)(v17 + 16) = a10;
  return v17;
}
