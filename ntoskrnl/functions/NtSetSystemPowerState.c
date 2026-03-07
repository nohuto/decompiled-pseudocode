__int64 __fastcall NtSetSystemPowerState(int a1, int a2, int a3)
{
  _DWORD v7[96]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(&v7[3], 0, 0x174uLL);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  return PopTransitionSystemPowerStateEx(v7);
}
