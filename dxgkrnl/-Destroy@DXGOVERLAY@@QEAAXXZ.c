/*
 * XREFs of ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C032FDE8
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0189CB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C7A20 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C032FDA4 (--1DXGOVERLAY@@QEAA@XZ.c)
 *     ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1C0330924 (-Stop@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C02BCAE8 (-ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C02C1E88 (-DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGOVERLAY::Destroy(DXGOVERLAY *this)
{
  __int64 (__fastcall **v2)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v3; // r8
  void *v4; // rdx
  unsigned int v5; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 188LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      188LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v2[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    WdLogSingleEntry1(1LL, 189LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 189LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 6) = 0LL;
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    ADAPTER_RENDER::DdiDestroyOverlay(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2928LL),
      v4,
      v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_DWORD *)this + 8);
  if ( v5 != -1 )
  {
    ADAPTER_RENDER::ReleaseOverlayId(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2928LL),
      v5);
    *((_DWORD *)this + 8) = -1;
  }
}
