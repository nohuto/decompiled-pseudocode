/*
 * XREFs of ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x1C02BE330
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BF7D0 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::OpmReset(DXGADAPTER **this)
{
  DXGADAPTER **i; // rax
  _BYTE v3[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6817LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6817LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (struct DXGFASTMUTEX *const)(this + 46), 0);
  for ( i = (DXGADAPTER **)this[44]; i != this + 44; i = (DXGADAPTER **)*i )
    *((_BYTE *)i + 24) = 1;
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
