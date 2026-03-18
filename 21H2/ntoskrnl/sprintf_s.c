/*
 * XREFs of sprintf_s @ 0x1403E7020
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x140376610 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14039E2C0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1405EB490 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1405EB500 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1405EB5C0 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14080B938 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpFindControlSet @ 0x14082F3C4 (CmpFindControlSet.c)
 *     CmpSetVersionData @ 0x140834684 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140837688 (CmpAddProcessorConfigurationEntry.c)
 *     HdlspDispatch @ 0x140AA8ED0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140AA9660 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140AA9C94 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140AAA374 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140B182A0 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403E7050 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
