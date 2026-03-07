unsigned __int8 __fastcall CManipulation::NotifyRailsConfigurationChanged(__int64 a1, char a2, int a3)
{
  unsigned __int8 result; // al
  char v4; // r9
  char v5; // al

  result = *(_BYTE *)(a1 + 372);
  v4 = result;
  if ( a3 )
    v4 = result >> 1;
  if ( (v4 & 1) != a2 )
  {
    if ( a3 )
    {
      v5 = result & 0xFD;
      a2 *= 2;
    }
    else
    {
      v5 = result & 0xFE;
    }
    *(_BYTE *)(a1 + 372) = a2 | v5;
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 72) + 72LL))(a1 - 72, 12LL, a1 - 72);
  }
  return result;
}
