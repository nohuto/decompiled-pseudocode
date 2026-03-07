_BOOL8 __fastcall IsHiddenByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x2000) != 0 || (v1 & 0x4000) != 0 || (v1 & 0x10000) != 0;
}
