/*
 * XREFs of FsRtlInitializeExtraCreateParameterList @ 0x140799550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInitializeExtraCreateParameterList(PECP_LIST EcpList)
{
  NTSTATUS result; // eax

  if ( !EcpList )
    return -1073741811;
  EcpList->Flags = 0;
  EcpList->EcpList.Blink = &EcpList->EcpList;
  EcpList->EcpList.Flink = &EcpList->EcpList;
  result = 0;
  EcpList->Signature = 1282433861;
  return result;
}
