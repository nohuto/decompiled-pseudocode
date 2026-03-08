/*
 * XREFs of sprintf_s @ 0x1403D9BA0
 * Callers:
 *     RtlIpv4AddressToStringA @ 0x1403C8C40 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1405AC2C0 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1405AC330 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1405AC3F0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1405AC680 (RtlIpv6AddressToStringExA.c)
 *     CmpFindControlSet @ 0x1407FEB10 (CmpFindControlSet.c)
 *     CmpSetVersionData @ 0x140815CD8 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140816B6C (CmpAddProcessorConfigurationEntry.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140864428 (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140AE7690 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140AE7CAC (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140AE83D0 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140B951E0 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403D9BD0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
