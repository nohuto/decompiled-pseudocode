/*
 * XREFs of ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C02BE6D0
 * Callers:
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C02BE3E0 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C02BE564 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::OpmValidateAdapterHandle(DXGADAPTER **this, ADAPTER_DISPLAY *a2)
{
  ADAPTER_DISPLAY *i; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6782LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6782LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6783LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = this[44]; ; i = *(ADAPTER_DISPLAY **)i )
  {
    if ( i == (ADAPTER_DISPLAY *)(this + 44) )
      return 0;
    if ( i == a2 )
      break;
  }
  return 1;
}
