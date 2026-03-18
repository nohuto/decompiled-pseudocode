/*
 * XREFs of ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C03490A4
 * Callers:
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C02C00A8 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0348778 (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0056E74 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?DestroyCoreState@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C03486E4 (-DestroyCoreState@DXGPROTECTEDSESSION@@QEAAJXZ.c)
 */

void __fastcall DXGPROTECTEDSESSION::Stop(DXGPROTECTEDSESSION *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1193LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      1193LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPROTECTEDSESSION::DestroyCoreState(this);
  *((_DWORD *)this + 6) = 3;
  DXGPROTECTEDSESSION::SetSessionStatus(this, DXGK_PROTECTED_SESSION_STATUS_INVALID);
}
