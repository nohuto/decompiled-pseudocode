/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x14070E660
 * Callers:
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     PsReferenceEffectiveToken @ 0x1406D5B10 (PsReferenceEffectiveToken.c)
 *     SeTokenIsAdmin @ 0x14070E6D0 (SeTokenIsAdmin.c)
 */

__int64 __fastcall MiIsUserQueryVmCallerTrusted(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DMA_ADAPTER *v2; // rdi
  bool v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  v4 = 0;
  v2 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(a1, &v6, &v4, &v5, 0LL);
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, 1) )
    v1 = 1;
  HalPutDmaAdapter(v2);
  return v1;
}
