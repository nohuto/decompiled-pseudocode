/*
 * XREFs of DpiHybridInternalPanelOverride @ 0x1C005E144
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

bool DpiHybridInternalPanelOverride()
{
  __int64 v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h]
  const wchar_t *v3; // [rsp+40h] [rbp-9h]
  int *v4; // [rsp+48h] [rbp-1h]
  int v5; // [rsp+50h] [rbp+7h]
  int *v6; // [rsp+58h] [rbp+Fh]
  int v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+70h] [rbp+27h]
  __int128 v10; // [rsp+78h] [rbp+2Fh]
  __int128 v11; // [rsp+88h] [rbp+3Fh]
  __int64 v12; // [rsp+98h] [rbp+4Fh]
  int v13; // [rsp+B0h] [rbp+67h] BYREF

  if ( !g_OSTestSigningEnabled )
    return 0;
  v13 = 0;
  v1 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v3 = L"HybridInternalPanelOverrideEnable";
  v2 = 288;
  v4 = &v13;
  v6 = &v13;
  v5 = 67108868;
  v7 = 4;
  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v1, 0LL, 0LL);
  return v13 != 0;
}
