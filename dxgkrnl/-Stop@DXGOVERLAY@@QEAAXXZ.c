/*
 * XREFs of ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1C0330924
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02E8704 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C032FDE8 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGOVERLAY::Stop(DXGOVERLAY *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 250LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      250LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGOVERLAY::Destroy(this);
  *((_DWORD *)this + 7) = 3;
}
