bool __fastcall IsDockTargetActive(__int64 a1, int a2)
{
  bool result; // al

  if ( (*(_DWORD *)(a1 + 200) & 0x80000) == 0 )
    return *((_BYTE *)&unk_1C035C1E0 + a2 + 24) != 0;
  result = 0;
  if ( *((_BYTE *)&unk_1C035C1E0 + a2) )
    return *((_BYTE *)&unk_1C035C1E0 + a2 + 4) != 0;
  return result;
}
