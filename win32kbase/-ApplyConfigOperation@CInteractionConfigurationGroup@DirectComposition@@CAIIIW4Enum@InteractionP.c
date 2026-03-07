__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
        int a1,
        unsigned int a2,
        int a3,
        _BYTE *a4)
{
  __int64 result; // rax

  if ( a3 == 1 || a3 == 8 )
  {
    a2 |= a1;
  }
  else if ( a3 != 3 )
  {
    a2 = a1 & ~a2;
  }
  result = a2;
  *a4 |= a2 != a1;
  return result;
}
