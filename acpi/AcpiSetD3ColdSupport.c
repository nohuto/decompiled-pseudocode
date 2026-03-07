__int64 __fastcall AcpiSetD3ColdSupport(__int64 a1, char a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1008);
  if ( (result & 0x800) != 0 )
  {
    if ( a2 )
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFF7FFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x800uLL);
  }
  return result;
}
