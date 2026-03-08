/*
 * XREFs of ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C0327E34
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C03274D8 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C03276B0 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OUTPUTDUPL_MGR::IsDiagRegKeyEnabled(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  unsigned int *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+70h] [rbp+27h]
  __int128 v11; // [rsp+78h] [rbp+2Fh]
  __int128 v12; // [rsp+88h] [rbp+3Fh]
  __int64 v13; // [rsp+98h] [rbp+4Fh]
  unsigned int v14; // [rsp+B0h] [rbp+67h] BYREF
  int v15; // [rsp+B4h] [rbp+6Bh]
  int v16; // [rsp+B8h] [rbp+6Fh] BYREF

  v15 = HIDWORD(this);
  v16 = 1;
  v14 = 0;
  v2 = 0LL;
  v4 = L"DxgEnableDesktopDuplicationDiagnostics";
  v9 = 0LL;
  v5 = &v14;
  v10 = 0;
  v7 = &v16;
  v3 = 288;
  v6 = 67108868;
  v8 = 4;
  v13 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v2, 0LL, 0LL);
  return v14;
}
