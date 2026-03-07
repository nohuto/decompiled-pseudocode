void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
