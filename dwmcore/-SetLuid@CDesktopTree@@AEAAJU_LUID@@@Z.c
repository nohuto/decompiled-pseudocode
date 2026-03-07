__int64 __fastcall CDesktopTree::SetLuid(struct _LUID *this, struct _LUID a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( this[591].LowPart == g_luidZero.LowPart && this[591].HighPart == g_luidZero.HighPart && a2 != g_luidZero )
  {
    this[591] = a2;
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x195u, 0LL);
  }
  return v2;
}
