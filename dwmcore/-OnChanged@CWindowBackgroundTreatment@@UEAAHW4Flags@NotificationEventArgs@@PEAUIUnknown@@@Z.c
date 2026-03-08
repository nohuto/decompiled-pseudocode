/*
 * XREFs of ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180216E80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800A4C98 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800A4D24 (-InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::OnChanged(CBrush **a1)
{
  __int64 v2; // rdx

  CWindowBackgroundTreatment::InvalidateBitmapRealization((__int64)a1);
  CWindowBackgroundTreatment::UpdateBackdropFlags(a1, v2);
  return 1LL;
}
