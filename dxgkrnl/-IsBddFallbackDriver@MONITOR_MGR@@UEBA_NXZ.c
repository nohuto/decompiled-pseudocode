/*
 * XREFs of ?IsBddFallbackDriver@MONITOR_MGR@@UEBA_NXZ @ 0x1C03C2B70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall MONITOR_MGR::IsBddFallbackDriver(MONITOR_MGR *this)
{
  return DXGADAPTER::IsBddFallbackDriver(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL));
}
