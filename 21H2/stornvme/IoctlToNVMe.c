/*
 * XREFs of IoctlToNVMe @ 0x1C0002DE0
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0004360 (NVMeHwBuildIo.c)
 * Callees:
 *     CompareId @ 0x1C00012D8 (CompareId.c)
 *     IoctlQueryProtocolInfoProcess @ 0x1C0001414 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlFirmwareProcess @ 0x1C00029FC (IoctlFirmwareProcess.c)
 *     SetPrpFromSrb @ 0x1C0002DA8 (SetPrpFromSrb.c)
 *     DiagGeneric @ 0x1C001A624 (DiagGeneric.c)
 *     IoctlCreateReservedQueuePair @ 0x1C001AFEC (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C001B48C (IoctlDeleteReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x1C001B91C (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C001BAD4 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001BD14 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x1C001BE78 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C001BF00 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C001C02C (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001C1E4 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C001C598 (IoctlStorageStreamsReleaseId.c)
 */

__int64 __fastcall IoctlToNVMe(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  char *v6; // rbp
  char *v7; // rbp

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 64);
  else
    v4 = *(_QWORD *)(a2 + 24);
  switch ( *(_DWORD *)(v4 + 16) )
  {
    case 0x1B0780:
      result = IoctlFirmwareProcess(a1, a2);
      break;
    case 0x1B0900:
      result = DiagGeneric(a1, a2);
      break;
    case 0x2D1400:
      v6 = (char *)(v4 + 4);
      if ( CompareId((__int64)"PROTOCOL", 8u, (char *)(v4 + 4), 8u, 0LL) )
      {
        result = IoctlQueryProtocolInfoProcess(a1, a2);
        break;
      }
      if ( CompareId((__int64)"TEMPERAT", 8u, v6, 8u, 0LL) )
      {
        result = IoctlQueryTemperatureInfoProcess(a1, a2);
      }
      else if ( CompareId((__int64)"QUEUEINF", 8u, v6, 8u, 0LL) )
      {
        result = IoctlQueryReservedQueueEntries(a1, a2);
      }
      else
      {
        if ( !CompareId((__int64)"ENDURINF", 8u, v6, 8u, 0LL) )
        {
LABEL_16:
          *(_BYTE *)(a2 + 3) = 6;
          result = 3238002694LL;
          break;
        }
        result = IoctlQueryEnduranceInformation(a1, a2);
      }
      break;
    case 0x2D2828:
      result = IoctlStorageStreamsGetParameters(a1);
      break;
    case 0x2D282C:
      result = IoctlStorageStreamsGetOpenStreams(a1);
      break;
    case 0x2D2830:
      result = IoctlStorageStreamsReleaseId(a1, a2);
      break;
    case 0x2D93FC:
      v7 = (char *)(v4 + 4);
      if ( CompareId((__int64)"SETPROTO", 8u, (char *)(v4 + 4), 8u, 0LL) )
      {
        result = IoctlSetProtocolInfoProcess(a1, a2);
      }
      else if ( CompareId((__int64)"CREATEQU", 8u, v7, 8u, 0LL) )
      {
        result = IoctlCreateReservedQueuePair(a1);
      }
      else
      {
        if ( !CompareId((__int64)"DELETEQU", 8u, v7, 8u, 0LL) )
          goto LABEL_16;
        result = IoctlDeleteReservedQueuePair(a1);
      }
      break;
    default:
      if ( *(_DWORD *)(v4 + 16) != 3002880 || !CompareId((__int64)"SETTEMPT", 8u, (char *)(v4 + 4), 8u, 0LL) )
        goto LABEL_16;
      result = IoctlSetTemperatureThresholdProcess(a1, a2);
      break;
  }
  if ( !*(_BYTE *)(a2 + 3) )
  {
    result = SetPrpFromSrb(a1);
    if ( (_DWORD)result )
      *(_BYTE *)(a2 + 3) = 4;
  }
  return result;
}
