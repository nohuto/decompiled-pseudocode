/*
 * XREFs of sprintf_s @ 0x1403D7D60
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x14036CB50 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x140390F40 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x14058C040 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x14058C0B0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x14058C170 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077CB9C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6AA0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407A802C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407ACD40 (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x1409EFE80 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1409F05F8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1409F0C18 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x1409F12AC (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140A5AB9C (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403D7D90 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
