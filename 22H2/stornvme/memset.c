/*
 * XREFs of memset @ 0x1C0004B80
 * Callers:
 *     MdlToPrp @ 0x1C0001A70 (MdlToPrp.c)
 *     NVMeHwAdapterControl @ 0x1C0003550 (NVMeHwAdapterControl.c)
 *     NVMeControllerAllocateLocalCommand @ 0x1C00041A4 (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerReclaimLocalCommand @ 0x1C0004448 (NVMeControllerReclaimLocalCommand.c)
 *     DriverEntry @ 0x1C00076D8 (DriverEntry.c)
 *     FillControllerConfiguration @ 0x1C0007808 (FillControllerConfiguration.c)
 *     FillControllerRuntimeLog @ 0x1C0007A5C (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0007D4C (NVMeControllerStartFailureEventLog.c)
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 *     NVMeHwUnitControl @ 0x1C00086C0 (NVMeHwUnitControl.c)
 *     NVMeLogEtwControllerInfo @ 0x1C00088CC (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetry @ 0x1C0008AC4 (NVMeLogTelemetry.c)
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     AdminQueuesFreeResources @ 0x1C00094DC (AdminQueuesFreeResources.c)
 *     ControllerReset @ 0x1C0009728 (ControllerReset.c)
 *     GetProcessorInformation @ 0x1C0009F80 (GetProcessorInformation.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x1C000C3F0 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeControllerInitPart1 @ 0x1C000D858 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DAA0 (NVMeControllerInitPart2.c)
 *     NVMeControllerRemove @ 0x1C000E23C (NVMeControllerRemove.c)
 *     NVMeControllerReset @ 0x1C000E580 (NVMeControllerReset.c)
 *     NVMeControllerStop @ 0x1C000EC50 (NVMeControllerStop.c)
 *     NVMeInitStreams @ 0x1C000F6D0 (NVMeInitStreams.c)
 *     FirmwareGetInfo @ 0x1C0011D64 (FirmwareGetInfo.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0012E60 (IoctlCreateReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013A20 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013ED8 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0014B84 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0014D70 (LogSenseTemperature.c)
 *     NVMeGetRichDeviceDescription @ 0x1C001658C (NVMeGetRichDeviceDescription.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016700 (NVMeGetSanitizeLogWorkItem.c)
 *     ScsiModeSenseRequest @ 0x1C001A004 (ScsiModeSenseRequest.c)
 *     ScsiUnmapRequest @ 0x1C001AE5C (ScsiUnmapRequest.c)
 *     SglToPrp @ 0x1C001B5C0 (SglToPrp.c)
 *     NVMeControllerIdentify @ 0x1C001C5D4 (NVMeControllerIdentify.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C700 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001D65C (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001D880 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001DBD0 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E0F4 (NVMeGetHealthInfoLog.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EFF0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeNameSpaceIdentify @ 0x1C00210FC (NVMeNameSpaceIdentify.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x1C0021500 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0021B28 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C0022134 (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C00226AC (NVMeReenumerateNameSpaceStart.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C00228A8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022DD4 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeSendControllerInternalData @ 0x1C0027B34 (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x1C0028230 (NVMeSendLunInternalData.c)
 *     memset$thunk$772440563353939046 @ 0x1C0035010 (memset$thunk$772440563353939046.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
