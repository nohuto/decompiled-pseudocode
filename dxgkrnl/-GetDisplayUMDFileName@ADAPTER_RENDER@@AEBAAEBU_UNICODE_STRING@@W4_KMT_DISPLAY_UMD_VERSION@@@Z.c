/*
 * XREFs of ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C02BC5CC
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetDisplayUMDFileName(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rax

  v2 = a2;
  if ( a2 )
  {
    WdLogSingleEntry1(1LL, 3492LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(UINT)umdVersion < (UINT)NUM_KMT_DISPLAY_UMDVERSIONS",
      3492LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent(a1) )
  {
    WdLogSingleEntry1(1LL, 3493LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGPROCESS::GetCurrent() != NULL",
      3493LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = (*((_DWORD *)DXGPROCESS::GetCurrent(v4) + 106) & 8) == 0;
  v6 = a1 + 528;
  if ( v5 )
    v6 = a1 + 512;
  return v6 + 16 * v2;
}
