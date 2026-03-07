char __fastcall KiIsPrcbThread(__int64 a1)
{
  char result; // al

  result = 0;
  if ( a1 )
  {
    if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
      return 1;
  }
  return result;
}
