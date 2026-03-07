char __fastcall CManipulation::_UpdateInertiaEnabled(__int64 a1, int a2, char a3)
{
  char result; // al

  result = 1;
  if ( (*(_BYTE *)(a1 + 8LL * a2 + 460) & 1) == a3 )
    return 0;
  *(_BYTE *)(a1 + 8LL * a2 + 460) = a3 | *(_BYTE *)(a1 + 8LL * a2 + 460) & 0xFE;
  return result;
}
