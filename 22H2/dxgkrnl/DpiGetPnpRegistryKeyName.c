/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x1C0174C10
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0173350 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01890E0 (DpiOpenPnpRegistryKey.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C019138C (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C0221F78 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0263AC0 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = (int)a2;
  switch ( (_DWORD)a2 )
  {
    case 1:
      v5 = v3 + 512;
      goto LABEL_4;
    case 2:
      v5 = v3 + 528;
LABEL_4:
      *a3 = v5;
      return 0LL;
    case 3:
      v5 = *(_QWORD *)(v3 + 40) + 40LL;
      goto LABEL_4;
  }
  v7 = WdLogNewEntry5_WdError((unsigned int)(a2 - 2), a2);
  *(_QWORD *)(v7 + 24) = v4;
  WdLogEvent5_WdError(v7);
  return 3221225485LL;
}
