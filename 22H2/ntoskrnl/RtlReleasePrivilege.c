/*
 * XREFs of RtlReleasePrivilege @ 0x1407DF4E0
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x140681468 (VhdiAutoAttachOneVhd.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041A840 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x14041AEC0 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall RtlReleasePrivilege(__int64 *P)
{
  void *v2; // rcx
  char *v3; // rcx

  if ( (P[4] & 3) != 1 )
    ZwAdjustPrivilegesToken(*P, 0LL);
  if ( (P[4] & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, P + 1, 8u);
    v2 = (void *)P[1];
    if ( v2 )
      ZwClose(v2);
  }
  v3 = (char *)P[2];
  if ( v3 != (char *)P + 36 )
    ExFreePoolWithTag(v3, 0);
  ZwClose((HANDLE)*P);
  ExFreePoolWithTag(P, 0);
}
