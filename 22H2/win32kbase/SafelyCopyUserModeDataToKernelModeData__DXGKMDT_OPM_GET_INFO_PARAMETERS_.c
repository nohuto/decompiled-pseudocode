/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1C015AFD0
 * Callers:
 *     NtGdiGetOPMInformation @ 0x1C015CAD0 (NtGdiGetOPMInformation.c)
 * Callees:
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(void *a1, char *a2)
{
  if ( (unsigned __int64)(a2 + 4112) > MmUserProbeAddress || a2 + 4112 < a2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(a1, a2, 0x1010uLL);
  return 0LL;
}
