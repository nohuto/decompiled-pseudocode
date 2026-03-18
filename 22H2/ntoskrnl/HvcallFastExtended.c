/*
 * XREFs of HvcallFastExtended @ 0x1403CBB50
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036EF4C (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushListTb @ 0x1403CB848 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403CB978 (HvlpFastFlushAddressSpaceTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403CB9F0 (KiFlushAddressSpaceTb.c)
 *     HvlpReadPerfRegister @ 0x140541438 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140542768 (HvlpWritePerfRegister.c)
 *     HvlAttachPasidSpace @ 0x1405429B0 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140542A60 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140542B10 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140542B70 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140542C30 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140542D20 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140542D80 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140542DD0 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140542E20 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140542EA0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140542F70 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140543030 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405430E0 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140543170 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405431D0 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1405434C0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543780 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140543990 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140543A50 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140543B80 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140543D60 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140543DB0 (HvlEnablePasid.c)
 *     HvlRestoreTime @ 0x1405454F0 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x1405458D0 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x140545970 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140545C70 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140545DC0 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140545FD0 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x140546110 (HvlUnregisterDeviceId.c)
 *     HvlpFastAcknowledgePageRequest @ 0x140546160 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1405461B8 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1405462A8 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x140546350 (HvlpFlushPasidAddressSpace.c)
 *     HvlParkedVirtualProcessors @ 0x140546A48 (HvlParkedVirtualProcessors.c)
 *     HvlpProcessIommuPrq @ 0x1405484B0 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x140549964 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x140549A20 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x140678A90 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140678C80 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941648 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A2E90 (EtwGetKernelTraceTimestampSilo.c)
 *     EtwTraceTimedEvent @ 0x140338BB0 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14042A990 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14042A9F0 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v9; // si
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-58h] BYREF
  char v13; // [rsp+34h] [rbp-54h]
  __int16 v14; // [rsp+35h] [rbp-53h]
  char v15; // [rsp+37h] [rbp-51h]
  _OWORD v16[2]; // [rsp+38h] [rbp-50h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( (BYTE4(xmmword_140D1EAD0) & 0x10) != 0 )
  {
    v9 = 1;
    EtwGetKernelTraceTimestampSilo((LARGE_INTEGER *)v16, 0xA0000010, 0LL);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
  {
    v10 = HvcallpExtendedFastHypercallWithOutput(a1, a2, (a3 + 15) >> 4, 0, a4, a5 >> 4);
    if ( !v9 )
      return v10;
LABEL_8:
    v15 = 0;
    v12 = (unsigned __int16)a1;
    v13 = BYTE2(a1) & 1;
    v14 = (int)a1 < 0;
    EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v12, 8, 0x401A02u, (__int64)v16);
    return v10;
  }
  v10 = HvcallpExtendedFastHypercall(a1, a2, a3);
  if ( v9 )
    goto LABEL_8;
  return v10;
}
