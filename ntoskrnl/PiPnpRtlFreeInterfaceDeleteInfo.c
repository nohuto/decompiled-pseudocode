/*
 * XREFs of PiPnpRtlFreeInterfaceDeleteInfo @ 0x1409573F8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095763C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInterfaceDeleteInfo(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx
  unsigned int *v4; // rcx
  unsigned int *v5; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    v4 = P[2];
    if ( v4 )
      PiDmObjectRelease(v4);
    v5 = P[3];
    if ( v5 )
      PiDmObjectRelease(v5);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
