/*
 * XREFs of PiPnpRtlFreePanelRemoveInfo @ 0x1409573B4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140957458 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x1409578EC (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreePanelRemoveInfo(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
