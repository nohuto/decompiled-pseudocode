/*
 * XREFs of ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800884D8
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x180052370 (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(__int64 a1, int a2)
{
  unsigned int v2; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  *(_DWORD *)(a1 + 48) = 0;
  v2 = 0;
  if ( a2 == 1 )
  {
    v2 = 2;
    *(_DWORD *)(a1 + 48) = 2;
  }
  v4 = CVisual::SetSamplingMode(*(_QWORD *)(a1 + 16), v2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 64LL))(*(_QWORD *)(a1 + 16));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x16Bu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x166u);
  }
  return v5;
}
