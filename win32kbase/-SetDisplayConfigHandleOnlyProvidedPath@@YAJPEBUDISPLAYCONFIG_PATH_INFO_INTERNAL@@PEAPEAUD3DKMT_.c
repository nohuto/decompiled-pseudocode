/*
 * XREFs of ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0191DDC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C0027994 (GetPathsModality.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C00A03C0 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C018CA3C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C018CF5C (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 */

__int64 __fastcall SetDisplayConfigHandleOnlyProvidedPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        bool *a3,
        enum _DXGK_DIAG_SDC_STAGE *a4)
{
  bool *v5; // r13
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned int i; // ebp
  char *v13; // rdi
  int v14; // r13d
  __int64 v15; // rcx
  int v16; // [rsp+44h] [rbp-34h]

  v5 = a3;
  result = GetPathsModality((__int64)a1, a2, 0x40u, 0);
  if ( (int)result < 0 )
  {
    *(_DWORD *)a4 = 32;
    return result;
  }
  v9 = *a2;
  LODWORD(v10) = 0;
  v11 = 0;
  v16 = 0;
  for ( i = *((unsigned __int16 *)*a2 + 10); v11 < *((unsigned __int16 *)*a2 + 10); ++v11 )
  {
    v13 = (char *)v9 + 296 * v11;
    if ( operator==((_DWORD *)v13 + 18, (_DWORD *)a1 + 4)
      && *((_DWORD *)v13 + 20) == *((_DWORD *)a1 + 6)
      && *((_DWORD *)v13 + 21) == *((_DWORD *)a1 + 7) )
    {
      if ( (*((_DWORD *)v13 + 14) & 0x800LL) == 0 )
        WdLogSingleEntry0(1LL);
      v10 = *((_QWORD *)v13 + 25);
      v16 = HIDWORD(v10);
      if ( !_bittest64((const signed __int64 *)v13 + 7, 0x32u) )
        WdLogSingleEntry0(1LL);
      v14 = *((_DWORD *)v13 + 60);
      i = v11;
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(a1, v11, 0xFFFFFFFF, 0, 0, *a2, a3);
      if ( (int)result < 0 )
      {
        *(_DWORD *)a4 = 34;
        return result;
      }
      *((_DWORD *)v13 + 60) = v14;
      *((_QWORD *)v13 + 7) |= 0x4000000000000uLL;
      v5 = a3;
    }
    else
    {
      result = ConvertDisplayConfigScalingToPathModalityForPath(
                 a1,
                 (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v13 + 56),
                 v5);
      if ( (int)result < 0 )
      {
        *(_DWORD *)a4 = 35;
        return result;
      }
    }
    v9 = *a2;
  }
  if ( i < *((unsigned __int16 *)v9 + 10) )
  {
    v15 = 296LL * i;
    if ( (_DWORD)v10 == *(_DWORD *)((char *)v9 + v15 + 200) && v16 == *(_DWORD *)((char *)v9 + v15 + 204) )
      return 0LL;
  }
  *(_DWORD *)a4 = 33;
  return 3221225485LL;
}
