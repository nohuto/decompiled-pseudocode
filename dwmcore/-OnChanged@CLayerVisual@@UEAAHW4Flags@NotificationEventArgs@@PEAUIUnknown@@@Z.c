/*
 * XREFs of ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F4520
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F4560 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CLayerVisual::OnChanged(CLayerVisual *a1, int a2, __int64 a3)
{
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(a1);
  return CVisual::OnChanged(a1, a2, a3);
}
