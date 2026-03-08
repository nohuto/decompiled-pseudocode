/*
 * XREFs of ?AcquireBufferSafe@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA?AVCAutoUnlockBuffer@1@XZ @ 0x1C0187E88
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C01892B0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetOPMInformation @ 0x1C0189770 (NtGdiGetOPMInformation.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::AcquireBufferSafe(
        PLOOKASIDE_LIST_EX *a1,
        PVOID *a2)
{
  PVOID *result; // rax

  *a2 = ExAllocateFromLookasideListEx(*a1);
  result = a2;
  a2[1] = a1;
  return result;
}
