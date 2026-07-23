/*
 * XREFs of HvcallFastExtended @ 0x14038FC00
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x140284A0C (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushListTb @ 0x14038F944 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14038FB90 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlRestoreTime @ 0x1403F0390 (HvlRestoreTime.c)
 *     HvlSetRootFaultReportingReady @ 0x1403F0430 (HvlSetRootFaultReportingReady.c)
 *     HvlpReadPerfRegister @ 0x1404F3040 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1404F4038 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1404F40B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F4160 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1404F4270 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1404F4300 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F4470 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F4710 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1404F4920 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404F4A50 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F66F0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1404F67E0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F6840 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F68C0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1404F69A0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F69F0 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1404F6A70 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1404F6AD0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetDeviceEnabled @ 0x1404F6E90 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F6F40 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnregisterDeviceId @ 0x1404F7070 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F70D8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F7190 (HvlpDetachRootSvmDevice.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1404F7200 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1404F725C (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1404F731C (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1404F73C4 (HvlpFlushPasidAddressSpace.c)
 *     HvlpProcessIommuPrq @ 0x1404F9510 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404FAA14 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x1404FAAD0 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x1405C93DC (HvlpGetVtlCallVa.c)
 *     HvlpCondenseMicrocode @ 0x14088E988 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9FC (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030654C (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140409000 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x140409060 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int a5)
{
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rdi
  int v13; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+34h] [rbp-34h]
  __int16 v15; // [rsp+35h] [rbp-33h]
  char v16; // [rsp+37h] [rbp-31h]
  _OWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( (BYTE4(xmmword_140CFC490) & 0x10) != 0 )
  {
    v9 = 1;
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v17, 0xA0000010);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
    v10 = HvcallpExtendedFastHypercallWithOutput(a1, a2, (a3 + 15) >> 4, a4, a5 >> 4);
  else
    v10 = HvcallpExtendedFastHypercall(a1, a2, a3);
  v11 = v10;
  if ( v9 )
  {
    v16 = 0;
    v13 = (unsigned __int16)a1;
    v14 = BYTE2(a1) & 1;
    v15 = (int)a1 < 0;
    EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v13, 8, 0x401A02u, (__int64)v17);
  }
  return v11;
}
