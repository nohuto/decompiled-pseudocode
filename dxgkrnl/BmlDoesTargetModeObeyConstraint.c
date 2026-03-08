/*
 * XREFs of BmlDoesTargetModeObeyConstraint @ 0x1C016E538
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C016E26C (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03B9BCC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C00021C8 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0002890 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C016E0C8 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C016E6D4 (BmlAreRawModesEnabled.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C016E808 (BmlIsSupportedByMonitorTargetMode.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01710A4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C01DD3C4 (BmlDoesTargetModeSupportWireFormat.c)
 */

bool __fastcall BmlDoesTargetModeObeyConstraint(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r9
  __int64 v10; // r10
  struct _D3DDDI_RATIONAL v11; // r10
  struct _D3DDDI_RATIONAL *v13; // r8
  struct _D3DDDI_RATIONAL v14; // rax
  int v15; // ecx
  int v16; // ecx
  struct _D3DDDI_RATIONAL v17; // rax
  int v18; // ecx
  const struct _D3DDDI_RATIONAL *v19; // rcx
  struct _D3DDDI_RATIONAL v20; // [rsp+20h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = 120LL * a2;
  v6 = *(__int64 **)(a1 + v4 + 16);
  if ( (!(unsigned __int8)BmlAreRawModesEnabled(a1, a2) || (*(_BYTE *)v6 & 0x87) == 0) && (*(_DWORD *)(v8 + 8) & 4) == 0 )
  {
    LOBYTE(v7) = v9;
    if ( !(unsigned __int8)BmlIsSupportedByMonitorTargetMode(a3, v7) )
      return 0;
  }
  v10 = *v6;
  if ( (*v6 & 0x4000000000LL) != 0 )
  {
    if ( (unsigned int)BmlCompareModeExtents(v4 + a1 + 52, a3 + 84) )
      return 0;
  }
  if ( (v10 & 0x1000000) != 0
    && (v6[1] & 0x1000000) != 0
    && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92))
    && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)v6 + 28)
    && !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a3, v19, *((_DWORD *)v6 + 60)) )
  {
    return 0;
  }
  v11 = (struct _D3DDDI_RATIONAL)*v6;
  if ( (*v6 & 0x8F) == 0 )
    return 1;
  if ( (v11.Numerator & 4) != 0 && ((*(_BYTE *)(a3 + 120) ^ *((_BYTE *)v6 + 80)) & 7) != 0
    || (v11.Numerator & 1) != 0 && (v6[1] & 1) != 0 && (unsigned int)BmlCompareModeExtents(a3 + 84, (char *)v6 + 44) )
  {
    return 0;
  }
  if ( (v11.Numerator & 2) != 0
    && (v6[1] & 2) != 0
    && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92)) )
  {
    v14 = *(struct _D3DDDI_RATIONAL *)((char *)v6 + 52);
    v15 = (*((_DWORD *)v6 + 20) >> 3) & 0x3F;
    if ( v15 )
    {
      v21.Numerator = *(__int64 *)((char *)v6 + 52);
      v21.Denominator = v15 * v14.Denominator;
      v14 = v21;
    }
    v16 = *(_DWORD *)(a3 + 120) >> 3;
    v20 = v14;
    v17 = *v13;
    v18 = v16 & 0x3F;
    if ( v18 )
    {
      v21.Numerator = (UINT)*v13;
      v21.Denominator = v18 * v17.Denominator;
      v17 = v21;
    }
    v21 = v17;
    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v21, &v20, 0) )
      return 0;
  }
  if ( (*(_BYTE *)v6 & 8) == 0 || (v6[1] & 8) == 0 )
    return 1;
  return (unsigned __int8)BmlDoesTargetModeSupportWireFormat(a3, *((unsigned int *)v6 + 51)) != 0;
}
