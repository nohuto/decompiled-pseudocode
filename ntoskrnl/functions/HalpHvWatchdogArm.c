__int64 __fastcall HalpHvWatchdogArm(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __writemsr(0x40000111u, a3);
  return 0LL;
}
