__int64 __fastcall IPostQuitMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  EtwTraceWakePump(a1, 0LL, 18LL, a4);
  *(_DWORD *)(a1 + 488) |= 0x40000000u;
  *(_DWORD *)(a1 + 584) = a2;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}
