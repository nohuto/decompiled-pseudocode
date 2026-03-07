bool __fastcall IsLegacyTouchPad(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !*(_BYTE *)(a1 + 48) )
    return *(_WORD *)(a1 + 880) == 1;
  return result;
}
