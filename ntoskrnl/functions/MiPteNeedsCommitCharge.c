__int64 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0;
  v6 = 0LL;
  if ( (v2 & 0x70) == 0x20 && (v2 & 0xF80) != 0x80 )
  {
    MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 4LL, &v6);
    if ( v6 )
      return (*(_BYTE *)(v6 + 32) & 0xA) != 10;
  }
  LOBYTE(v3) = (*(_DWORD *)(a1 + 48) & 0x280) != 640;
  return v3;
}
