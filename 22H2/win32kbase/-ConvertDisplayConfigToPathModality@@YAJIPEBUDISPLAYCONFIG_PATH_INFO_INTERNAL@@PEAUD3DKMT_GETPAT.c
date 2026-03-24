/*
 * XREFs of ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01435BC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001A4C0 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0147784 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0143060 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 */

__int64 __fastcall ConvertDisplayConfigToPathModality(
        __int64 a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        bool *a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v8; // rbx
  unsigned int i; // r14d
  __int64 result; // rax
  __int64 v11; // rax

  v4 = 0;
  v5 = 0;
  v8 = a2;
  for ( i = a1; v5 < i; v8 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v8 + 200) )
  {
    if ( *(__int64 *)v8 < 0 )
    {
      if ( v4 >= *((unsigned __int16 *)a3 + 11) )
      {
        v11 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v11 + 24) = *((unsigned __int16 *)a3 + 11);
        WdLogEvent5_WdError(v11);
        return 3221225507LL;
      }
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(v8, v4, v5, 1, 0, a3, a4);
      if ( (int)result < 0 )
        return result;
      ++v4;
    }
    ++v5;
  }
  return 0LL;
}
