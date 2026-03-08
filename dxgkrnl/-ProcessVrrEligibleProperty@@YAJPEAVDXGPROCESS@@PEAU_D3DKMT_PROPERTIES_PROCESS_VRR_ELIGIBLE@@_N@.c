/*
 * XREFs of ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1C030FB9C
 * Callers:
 *     NtDxgkGetProperties @ 0x1C01A8E80 (NtDxgkGetProperties.c)
 *     NtDxgkSetProperties @ 0x1C01D32D0 (NtDxgkSetProperties.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ProcessVrrEligibleProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *a2,
        char a3)
{
  __int64 v4; // rcx

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v4 = *((_QWORD *)a1 + 8);
  if ( a3 )
  {
    if ( *(_BYTE *)(v4 + 137) )
    {
      WdLogSingleEntry1(3LL, -1073740528LL);
      return 3221226768LL;
    }
    *(_BYTE *)(v4 + 137) = *(_BYTE *)a2 != 0;
  }
  else
  {
    *(_BYTE *)a2 = *(_BYTE *)(v4 + 137) != 0;
  }
  return 0LL;
}
