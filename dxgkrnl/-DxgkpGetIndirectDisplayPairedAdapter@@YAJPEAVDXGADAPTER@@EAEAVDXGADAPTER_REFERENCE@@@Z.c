/*
 * XREFs of ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0221406
 * Callers:
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B6D8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D0E78 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C003EF3C (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C003FB08 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1C01E4F40 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 */

__int64 __fastcall DxgkpGetIndirectDisplayPairedAdapter(ADAPTER_DISPLAY **this, char a2, DXGADAPTER **a3)
{
  const struct _GUID *v6; // rdi
  struct _LUID *v7; // rdx
  bool IsAdapterSessionized; // al
  unsigned int *v9; // r8
  int DefaultRenderAdapterForSession; // eax
  __int64 v11; // rbp
  struct _LUID v13; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int8 v14; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+20h] BYREF

  DXGADAPTER_REFERENCE::Assign(a3, 0LL);
  v6 = 0LL;
  if ( this && (*((_DWORD *)this + 109) & 0x100) != 0 )
  {
    ADAPTER_DISPLAY::GetPairedRenderAdapter(this[365], a3, 0LL);
    if ( *a3 && a2 && (*((_DWORD *)*a3 + 50) != 1 || *((_BYTE *)*a3 + 2833)) )
      DXGADAPTER_REFERENCE::Assign(a3, 0LL);
    if ( !*a3 )
    {
      v13 = 0LL;
      v14 = 0;
      v15 = 0;
      IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)this, v7, &v15, 0LL);
      v9 = &v15;
      if ( !IsAdapterSessionized )
        v9 = 0LL;
      DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(&v13, a3, v9, (bool *)&v14);
      v11 = DefaultRenderAdapterForSession;
      if ( DefaultRenderAdapterForSession < 0 )
      {
        WdLogSingleEntry2(2LL, this, DefaultRenderAdapterForSession);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find the render adapter for display only adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)this,
          v11,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v11;
      }
      if ( v14 )
        v6 = (const struct _GUID *)((char *)*a3 + 308);
      ADAPTER_DISPLAY::SetPairedRenderAdapter(this[365], *a3, v6);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x is not an Indirect Display Adapter, returning 0x%I64x.",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
