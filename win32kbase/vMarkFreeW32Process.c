void __fastcall vMarkFreeW32Process(__int64 a1)
{
  *(_DWORD *)(a1 + 812) |= 0x1000u;
}
