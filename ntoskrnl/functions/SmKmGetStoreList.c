__int64 __fastcall SmKmGetStoreList(__int64 a1)
{
  unsigned int i; // r9d
  __int64 v3; // rax
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11

  for ( i = 0; i < 0x20; i = v4 + 1 )
  {
    v3 = SmKmStoreRefFromStoreIndex(a1, i);
    if ( v3 && *(_QWORD *)v3 )
    {
      *(_DWORD *)(v6 + 4 * v5 + 16) = v4 | ((*(_WORD *)(v3 + 32) & 0x3F) << 10);
      LOBYTE(v5) = v5 + 1;
    }
  }
  *(_BYTE *)(v6 + 1) = v5;
  return 0LL;
}
