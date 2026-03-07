__int64 __fastcall HalMatchAcpiFADTBootArch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  unsigned int v6; // ebx
  __int64 Table; // rax

  v6 = 0;
  if ( a6 == 1 )
  {
    if ( *a5 )
    {
      Table = HalpAcpiGetTable(0LL, 1346584902, 0, 0);
      if ( Table )
      {
        if ( (*a5 & *(unsigned __int16 *)(Table + 109)) == *a5 )
          return 2;
      }
    }
  }
  return v6;
}
