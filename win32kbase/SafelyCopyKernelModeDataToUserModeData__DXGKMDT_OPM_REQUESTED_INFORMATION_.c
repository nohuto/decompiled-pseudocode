/*
 * XREFs of SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C0187B54
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C01892B0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetOPMInformation @ 0x1C0189770 (NtGdiGetOPMInformation.c)
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(void *a1, void *Src)
{
  ProbeForWrite(a1, 0x1000uLL, 1u);
  memmove(a1, Src, 0x1000uLL);
  return 0LL;
}
