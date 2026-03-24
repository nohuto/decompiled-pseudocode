/*
 * XREFs of ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C0216BEC
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01309C0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetDisplayUMDFileName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax

  v4 = (unsigned int)a2;
  if ( (_DWORD)a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 3212LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGPROCESS::GetCurrent(a1, a2, a3, a4) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v11 + 24) = 3213LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = (*((_BYTE *)DXGPROCESS::GetCurrent(v8, v7, v9, v10) + 347) & 1) == 0;
  v13 = a1 + 456;
  if ( v12 )
    v13 = a1 + 440;
  return 16 * v4 + v13;
}
