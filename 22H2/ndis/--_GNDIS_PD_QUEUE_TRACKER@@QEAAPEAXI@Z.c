/*
 * XREFs of ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C011A44C
 * Callers:
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C011BEF0 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 *     ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C011C390 (-NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C011D694 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'(char *P)
{
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 280));
  if ( P )
    ExFreePoolWithTag(P, 0x7441444Eu);
  return P;
}
