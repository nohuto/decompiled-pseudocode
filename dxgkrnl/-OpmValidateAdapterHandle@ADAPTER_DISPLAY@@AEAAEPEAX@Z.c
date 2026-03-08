/*
 * XREFs of ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C02B97B0
 * Callers:
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C02B94C0 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C02B9644 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::OpmValidateAdapterHandle(DXGADAPTER **this, ADAPTER_DISPLAY *a2)
{
  ADAPTER_DISPLAY *i; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6775LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6775LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6776LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6776LL, 0LL, 0LL, 0LL, 0LL);
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
