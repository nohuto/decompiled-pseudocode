char __fastcall BvgaResetDisplay(__int64 a1)
{
  if ( !BvgaBootDriverInstalled || BvgaDisplayState )
    return 0;
  LOBYTE(a1) = 1;
  VidResetDisplay(a1);
  return 1;
}
