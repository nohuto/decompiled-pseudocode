__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(
        void *a1,
        char *a2)
{
  if ( (unsigned __int64)(a2 + 4096) > MmUserProbeAddress || a2 + 4096 < a2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(a1, a2, 0x1000uLL);
  return 0LL;
}
