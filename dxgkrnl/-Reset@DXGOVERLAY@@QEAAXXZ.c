/*
 * XREFs of ?Reset@DXGOVERLAY@@QEAAXXZ @ 0x1C03308A0
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1C02E84BC (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGOVERLAY::Reset(DXGOVERLAY *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 226LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      226LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 7) = 2;
}
