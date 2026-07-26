/*
 * XREFs of ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x1C011A390
 * Callers:
 *     ?NdisPDPIClearReceiveFilter@@YAXPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C011C120 (-NdisPDPIClearReceiveFilter@@YAXPEAUNDIS_PD_FILTER_HANDLE__@@@Z.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C011CB70 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NDIS_PD_FILTER::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[13];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0x6641444Eu);
  return P;
}
