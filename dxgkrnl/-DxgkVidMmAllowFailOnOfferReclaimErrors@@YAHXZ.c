/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1C02CA710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkVidMmAllowFailOnOfferReclaimErrors(__int64 a1)
{
  struct DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  return !Current || (*((_DWORD *)Current + 106) & 4) == 0;
}
