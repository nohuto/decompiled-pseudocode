_BOOL8 __fastcall DxgkVidMmAllowFailOnOfferReclaimErrors(__int64 a1)
{
  struct DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  return !Current || (*((_DWORD *)Current + 106) & 4) == 0;
}
