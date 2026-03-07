__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1)
{
  return HalpInterruptPowerChange(a1, 1);
}
