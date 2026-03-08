/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x14087FABC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408731D4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmRemoveCacheReferenceForObject @ 0x140680BEC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx
  unsigned int *v4; // rax

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
    {
      PiDmRemoveCacheReferenceForObject(v4[7], *((_QWORD *)v4 + 2));
      PiDmObjectRelease(P[2]);
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
