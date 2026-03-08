/*
 * XREFs of ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01F95BC
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F9750 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C00F2294 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     RIMExtractPointerPropertyValues @ 0x1C01B5500 (RIMExtractPointerPropertyValues.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        int *a7)
{
  __int64 i; // rcx

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14222);
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14257);
  if ( !a3 || a3 > *((_DWORD *)a2 + 14) )
    return 0LL;
  for ( i = *((_QWORD *)a2 + 29); i && *(_DWORD *)(i + 4) != a3; i = *(_QWORD *)(i + 24) )
    ;
  if ( i )
    return RIMExtractPointerPropertyValues(
             *((_QWORD *)a2 + 32),
             a4,
             *(_DWORD *)(i + 8),
             *(unsigned __int8 **)(i + 16),
             a5,
             (__int64)a6,
             (__int64)a7);
  else
    return 0LL;
}
