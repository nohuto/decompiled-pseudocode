/*
 * XREFs of ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C00017B8
 * Callers:
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C006A9FC (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01669D0 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::SupportHWVSync(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 365) )
    return *((_QWORD *)this + 86) != 0LL;
  return result;
}
