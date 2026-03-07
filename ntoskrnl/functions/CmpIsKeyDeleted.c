char __fastcall CmpIsKeyDeleted(__int64 a1)
{
  bool IsKeyStackDeleted; // bl
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    return 1;
  v3 = 0LL;
  WORD1(v3) = -1;
  *(_OWORD *)Privileges = 0LL;
  CmpStartKcbStackForTopLayerKcb(&v3, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted((__int64)&v3);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return IsKeyStackDeleted;
}
