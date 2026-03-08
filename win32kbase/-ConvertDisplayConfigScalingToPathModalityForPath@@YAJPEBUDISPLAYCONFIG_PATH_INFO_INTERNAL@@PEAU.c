/*
 * XREFs of ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C018CF5C
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C018CA3C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0191DDC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConvertDisplayConfigScalingToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        bool *a3)
{
  _DWORD *v5; // rdi
  __int64 DxgkWin32kInterface; // rax

  if ( (*(_DWORD *)a1 & 0x10000) != 0 )
  {
    v5 = (_DWORD *)((char *)a2 + 140);
    if ( *((_DWORD *)a1 + 28) == 128 )
    {
      *v5 = 253;
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
      if ( (*(int (__fastcall **)(_QWORD, char *, _DWORD *))(DxgkWin32kInterface + 320))(
             *((unsigned int *)a1 + 28),
             (char *)a2 + 16,
             v5) < 0 )
        return 3221225485LL;
    }
    *((_DWORD *)a2 + 34) = *v5;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  return 0LL;
}
