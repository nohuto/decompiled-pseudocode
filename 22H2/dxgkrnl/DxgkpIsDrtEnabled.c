/*
 * XREFs of DxgkpIsDrtEnabled @ 0x1C0261DB8
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C02327A4 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0267038 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkpIsDrtEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+38h] [rbp-11h]
  const wchar_t *v11; // [rsp+40h] [rbp-9h]
  int *v12; // [rsp+48h] [rbp-1h]
  int v13; // [rsp+50h] [rbp+7h]
  int *v14; // [rsp+58h] [rbp+Fh]
  int v15; // [rsp+60h] [rbp+17h]
  __int64 v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+70h] [rbp+27h]
  __int128 v18; // [rsp+78h] [rbp+2Fh]
  __int128 v19; // [rsp+88h] [rbp+3Fh]
  __int64 v20; // [rsp+98h] [rbp+4Fh]
  int v21; // [rsp+B0h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current && (*((_BYTE *)Current + 348) & 1) != 0 )
    return 1;
  v21 = 0;
  v9 = 0LL;
  v16 = 0LL;
  v11 = L"DRTTestEnable";
  v17 = 0;
  v20 = 0LL;
  v12 = &v21;
  v14 = &v21;
  v10 = 288;
  v13 = 67108868;
  v15 = 4;
  v18 = 0LL;
  v19 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v9, 0LL, 0LL);
  if ( v21 == 1484026436 )
    return 1;
  v8 = WdLogNewEntry5_WdEvent(v6, v5);
  *(_QWORD *)(v8 + 24) = 51LL;
  WdLogEvent5_WdEvent(v8);
  return 0;
}
