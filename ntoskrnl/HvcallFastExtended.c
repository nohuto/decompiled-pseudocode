/*
 * XREFs of HvcallFastExtended @ 0x1403C6CA0
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036D020 (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushListTb @ 0x1403C6998 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403C6AC8 (HvlpFastFlushAddressSpaceTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403C6B40 (KiFlushAddressSpaceTb.c)
 *     HvlpReadPerfRegister @ 0x14053EF94 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1405402C8 (HvlpWritePerfRegister.c)
 *     HvlAttachPasidSpace @ 0x140540510 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405405C0 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140540670 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x1405406D0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140540790 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140540880 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x1405408E0 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140540930 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140540980 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140540A00 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140540AD0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140540B90 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140540C40 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140540CD0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140540D30 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140541020 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405412E0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405414F0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1405415B0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1405416E0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x1405418C0 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140541910 (HvlEnablePasid.c)
 *     HvlRestoreTime @ 0x140543050 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x140543430 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x1405434D0 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x1405437D0 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140543920 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140543B30 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x140543C70 (HvlUnregisterDeviceId.c)
 *     HvlpFastAcknowledgePageRequest @ 0x140543CC0 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x140543D18 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140543E08 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x140543EB0 (HvlpFlushPasidAddressSpace.c)
 *     HvlParkedVirtualProcessors @ 0x1405445A8 (HvlParkedVirtualProcessors.c)
 *     HvlpProcessIommuPrq @ 0x140546010 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1405474C4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x140547580 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x140676440 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140676630 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14093E628 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x140250570 (EtwGetKernelTraceTimestampSilo.c)
 *     EtwTraceTimedEvent @ 0x1402CD670 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140422600 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140422660 (HvcallpExtendedFastHypercallWithOutput.c)
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
    EtwTraceTimedEvent(3954, 0xA0000010, (__int64)&v12, 8, 4200962, (__int64)v16);
    return v10;
  }
  v10 = HvcallpExtendedFastHypercall(a1, a2, a3);
  if ( v9 )
    goto LABEL_8;
  return v10;
}
