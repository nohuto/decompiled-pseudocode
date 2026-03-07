__int64 __fastcall PopNotifyTelemetryOsState(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // r10d
  char v8; // r9
  int v9; // r11d
  int v10; // r10d
  int v11; // ecx

  v5 = 0;
  if ( dword_140C03928 && tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL) )
  {
    if ( (unsigned int)(v9 - 4) <= 2 )
    {
      v11 = 2;
      LOBYTE(v5) = v9 == 5;
      v10 = v5 + 1;
      return (unsigned int)PopTransitionTelemetryOsState(v11, v10);
    }
    if ( (unsigned int)(v9 - 2) <= 1 )
    {
      v10 = 4;
      v11 = 4 - (a5 != 0);
      if ( v9 == 3 || a3 == 5 )
      {
        if ( (v8 & 8) != 0 )
        {
          v10 = 3;
        }
        else
        {
          v10 = 5;
          if ( (unsigned int)(a2 - 2) <= 2 )
            v10 = 8;
        }
      }
      return (unsigned int)PopTransitionTelemetryOsState(v11, v10);
    }
  }
  return v5;
}
