/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x180043830
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x180007A8C (RtlpHpMetadataHeapStart.c)
 *     RtlpLogCapabilityCheckLatency @ 0x180042364 (RtlpLogCapabilityCheckLatency.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800424AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CA4 (LdrpResReportResourceAccessInternal.c)
 *     EtwpRegisterProvider @ 0x180042ECC (EtwpRegisterProvider.c)
 *     RtlRandomEx @ 0x180043CA0 (RtlRandomEx.c)
 *     RtlQueryResourcePolicy @ 0x180044700 (RtlQueryResourcePolicy.c)
 *     RtlSetHeapInformation @ 0x180074DB0 (RtlSetHeapInformation.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x180085378 (LdrpLogCFGModuleInfoTelemetry.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088B84 (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800CF554 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF660 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800CF964 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800CFBF4 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800CFD40 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800CFE44 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800CFF24 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D0004 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010920C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180043AB0 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180084410 (RtlpRunOnceWaitForInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x1800FF2FC (RtlReportCriticalFailure.c)
 */

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  do
  {
    while ( 1 )
    {
      v11 = v4 & 3;
      if ( (v4 & 3) == 0 )
        break;
      if ( v11 != 1 )
      {
        if ( v11 != 3 )
          goto LABEL_2;
        v14 = -1073741584;
        v15[0] = 0;
        goto LABEL_20;
      }
      v4 = RtlpRunOnceWaitForInit(v4, a1);
    }
    v12 = v4;
    v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
  }
  while ( v4 != v12 );
  if ( !a2(a1, a3, a4) )
  {
    v9 = -1073741823;
    v14 = RtlRunOnceComplete(a1, 4LL, 0LL);
    if ( v14 >= 0 )
      return v9;
    v15[0] = 2;
    goto LABEL_20;
  }
  if ( a4 )
    v13 = *a4;
  else
    v13 = 0LL;
  v14 = RtlRunOnceComplete(a1, 0LL, v13);
  if ( v14 < 0 )
  {
    v15[0] = 1;
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v14, v15, 1LL);
    return (unsigned int)v14;
  }
  return 0;
}
