__int64 __fastcall HvlSetPlatformIdleState(int a1)
{
  unsigned int Number; // ecx
  __int64 v3; // rdx
  _DWORD v5[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v5, 0, 0x194uLL);
  Number = KeGetPcr()->Prcb.Number;
  v5[0] = 3;
  v5[2] = HvlGetLpIndexFromProcessorIndex(Number);
  v5[4] = a1;
  return HvlpSetPowerProperty(v5, v3);
}
