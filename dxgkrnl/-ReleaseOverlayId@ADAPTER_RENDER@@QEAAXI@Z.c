/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C02BCAE8
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C032FDE8 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 2260LL) )
  {
    WdLogSingleEntry1(1LL, 3264LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"OverlayId < GetAdapter()->m_DriverCaps.MaxOverlays",
      3264LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + v3 + 103) )
  {
    WdLogSingleEntry1(1LL, 3265LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OverlayOwner[OverlayId] != NULL",
      3265LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_QWORD *)this + v3 + 103) = 0LL;
}
