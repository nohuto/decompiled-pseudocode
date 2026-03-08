/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C020C750
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01B6C74 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // edi
  __int64 result; // rax
  const wchar_t *v5; // r9

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 171), this, 1);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, this);
    v5 = L"Adapter 0x%I64x: Failed to create KMD process handle for system process";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v3;
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 848LL))(*((_QWORD *)this + 96));
  v3 = result;
  if ( (int)result < 0 )
  {
    WdLogSingleEntry1(2LL, this);
    v5 = L"Adapter 0x%I64x: Failed to initialize paging process";
    goto LABEL_8;
  }
  return result;
}
