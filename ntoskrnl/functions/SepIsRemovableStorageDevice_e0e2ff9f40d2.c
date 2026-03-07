bool __fastcall SepIsRemovableStorageDevice(__int64 a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 72);
    if ( v1 == 2 || v1 == 31 || v1 == 45 || v1 == 51 || v1 == 64 || (*(_DWORD *)(a1 + 52) & 0x40001) != 0 )
      return 1;
  }
  return result;
}
