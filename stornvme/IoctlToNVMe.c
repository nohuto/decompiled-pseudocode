/*
 * XREFs of IoctlToNVMe @ 0x1C0014800
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     DiagGeneric @ 0x1C00114BC (DiagGeneric.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0012DF0 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0013304 (IoctlDeleteReservedQueuePair.c)
 *     IoctlFirmwareProcess @ 0x1C00137A8 (IoctlFirmwareProcess.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00139B0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryProtocolInfoProcess @ 0x1C0013B68 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0013C14 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013E68 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x1C0013FD8 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0014060 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014194 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001434C (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0014708 (IoctlStorageStreamsReleaseId.c)
 *     SetPrpFromSrb @ 0x1C001B51C (SetPrpFromSrb.c)
 *     CompareId @ 0x1C0025AD8 (CompareId.c)
 */

__int64 __fastcall IoctlToNVMe(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  __int64 result; // rax
  int v6; // ebp
  int v7; // ebp
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  SrbDataBuffer = GetSrbDataBuffer(a2, &v8);
  if ( *(_DWORD *)(SrbDataBuffer + 16) == 1771392 )
  {
    result = IoctlFirmwareProcess(a1, a2);
  }
  else if ( *(_DWORD *)(SrbDataBuffer + 16) == 1771776 )
  {
    result = DiagGeneric(a1, a2);
  }
  else
  {
    switch ( *(_DWORD *)(SrbDataBuffer + 16) )
    {
      case 0x2D1400:
        v7 = SrbDataBuffer + 4;
        if ( (unsigned __int8)CompareId((unsigned int)"PROTOCOL", 8, (int)SrbDataBuffer + 4, 8, 0LL) )
        {
          result = IoctlQueryProtocolInfoProcess(a1, a2);
          goto LABEL_31;
        }
        if ( (unsigned __int8)CompareId((unsigned int)"TEMPERAT", 8, v7, 8, 0LL) )
        {
          result = IoctlQueryTemperatureInfoProcess(a1, a2);
          goto LABEL_31;
        }
        if ( (unsigned __int8)CompareId((unsigned int)"QUEUEINF", 8, v7, 8, 0LL) )
        {
          result = IoctlQueryReservedQueueEntries(a1, a2);
          goto LABEL_31;
        }
        if ( (unsigned __int8)CompareId((unsigned int)"ENDURINF", 8, v7, 8, 0LL) )
        {
          result = IoctlQueryEnduranceInformation(a1, a2);
          goto LABEL_31;
        }
        break;
      case 0x2D2828:
        result = IoctlStorageStreamsGetParameters(a1, a2);
        goto LABEL_31;
      case 0x2D282C:
        result = IoctlStorageStreamsGetOpenStreams(a1, a2);
        goto LABEL_31;
      case 0x2D2830:
        result = IoctlStorageStreamsReleaseId(a1, a2);
        goto LABEL_31;
      case 0x2D93FC:
        v6 = SrbDataBuffer + 4;
        if ( (unsigned __int8)CompareId((unsigned int)"SETPROTO", 8, (int)SrbDataBuffer + 4, 8, 0LL) )
        {
          result = IoctlSetProtocolInfoProcess(a1, a2);
          goto LABEL_31;
        }
        if ( (unsigned __int8)CompareId((unsigned int)"CREATEQU", 8, v6, 8, 0LL) )
        {
          result = IoctlCreateReservedQueuePair(a1, a2);
          goto LABEL_31;
        }
        if ( (unsigned __int8)CompareId((unsigned int)"DELETEQU", 8, v6, 8, 0LL) )
        {
          result = IoctlDeleteReservedQueuePair(a1, a2);
          goto LABEL_31;
        }
        break;
      default:
        if ( *(_DWORD *)(SrbDataBuffer + 16) == 3002880
          && (unsigned __int8)CompareId((unsigned int)"SETTEMPT", 8, (int)SrbDataBuffer + 4, 8, 0LL) )
        {
          result = IoctlSetTemperatureThresholdProcess(a1, a2);
          goto LABEL_31;
        }
        break;
    }
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002694LL;
  }
LABEL_31:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    result = SetPrpFromSrb(a1, a2);
    if ( (_DWORD)result )
      *(_BYTE *)(a2 + 3) = 4;
  }
  return result;
}
