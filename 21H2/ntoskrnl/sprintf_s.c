/*
 * XREFs of sprintf_s @ 0x1403D7BF0
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x14036C9A0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x140390DF0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x14058BE10 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x14058BE80 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x14058BF40 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C9DC (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A68A0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407A7E2C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407ACB40 (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x1409EEE80 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1409EF5F8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1409EFC18 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x1409F02AC (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140A59B9C (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403D7C20 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
