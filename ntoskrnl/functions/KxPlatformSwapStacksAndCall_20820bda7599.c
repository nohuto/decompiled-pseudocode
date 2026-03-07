void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, void (*a2)(void))
{
  a2();
  JUMPOUT(0x14041F81FLL);
}
