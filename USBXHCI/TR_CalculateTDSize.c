__int64 __fastcall TR_CalculateTDSize(__int64 a1, int a2, unsigned int a3, char a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 320LL) )
  {
    if ( !a4 )
    {
      v4 = a2 - a3 / (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu);
      if ( v4 > 0x1F )
        return 31;
    }
  }
  return v4;
}
