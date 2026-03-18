/*
 * XREFs of sprintf_s @ 0x1403DF0C0
 * Callers:
 *     RtlIpv4AddressToStringA @ 0x1403CD760 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1405AE770 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1405AE7E0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1405AE8A0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1405AEB30 (RtlIpv6AddressToStringExA.c)
 *     CmpSetVersionData @ 0x14080E008 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080EE9C (CmpAddProcessorConfigurationEntry.c)
 *     CmpFindControlSet @ 0x1408268A0 (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873814 (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140AEAEB0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140AEB690 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140AEBCAC (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140AEC3D0 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140B993F0 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403DF0F0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
