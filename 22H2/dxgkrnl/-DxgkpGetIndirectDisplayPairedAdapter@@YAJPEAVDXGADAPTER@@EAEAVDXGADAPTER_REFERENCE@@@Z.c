/*
 * XREFs of ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C02221A0
 * Callers:
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C011EB60 (DxgkGetAdapterDeviceDesc.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0194BDC (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226DB8 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0037850 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C003912C (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01778F8 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 */

__int64 __fastcall DxgkpGetIndirectDisplayPairedAdapter(ADAPTER_DISPLAY **a1, char a2, DXGADAPTER **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const struct _GUID *v8; // rbx
  __int64 v9; // r8
  bool v10; // zf
  int DefaultRenderAdapterForSession; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  struct DXGADAPTER *v17; // rdx
  __int64 v18; // rax
  unsigned __int8 v19; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v20; // [rsp+58h] [rbp+20h] BYREF

  DXGADAPTER_REFERENCE::Assign(a3, 0LL);
  v8 = 0LL;
  if ( a1 && (*((_DWORD *)a1 + 87) & 0x100) != 0 )
  {
    ADAPTER_DISPLAY::GetPairedRenderAdapter(a1[337], a3, 0LL);
    if ( !*a3 )
      goto LABEL_9;
    if ( a2 && (*((_DWORD *)*a3 + 50) != 1 || *((_BYTE *)*a3 + 2609)) )
      DXGADAPTER_REFERENCE::Assign(a3, 0LL);
    if ( !*a3 )
    {
LABEL_9:
      v10 = a1[550] == 0LL;
      v20 = 0LL;
      LOBYTE(v9) = !v10;
      v19 = 0;
      DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(&v20, a3, v9, (bool *)&v19);
      v14 = DefaultRenderAdapterForSession;
      if ( DefaultRenderAdapterForSession < 0 )
      {
        v15 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v15 + 24) = a1;
        *(_QWORD *)(v15 + 32) = v14;
        WdLogEvent5_WdError(v15);
        return (unsigned int)v14;
      }
      v17 = *a3;
      if ( v19 )
        v8 = (const struct _GUID *)((char *)v17 + 300);
      ADAPTER_DISPLAY::SetPairedRenderAdapter(a1[337], v17, v8);
    }
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v18 + 24) = a1;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
}
