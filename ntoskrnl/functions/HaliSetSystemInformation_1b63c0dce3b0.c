__int64 __fastcall HaliSetSystemInformation(int a1, __int64 a2, int *a3)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // ecx
  unsigned int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  v4 = a2;
  v5 = a1 - 11;
  if ( !v5 )
    return (unsigned int)-1073741637;
  v6 = v5 - 2;
  if ( v6 )
  {
    v10 = v6 - 1;
    if ( !v10 )
      return (unsigned int)HalpChannelPowerRequest(a3, a2, 0LL);
    v11 = v10 - 2;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 != 5 )
          return (unsigned int)-1073741496;
        if ( !(unsigned __int8)HalpCheckTestSigningEnabled() )
          return (unsigned int)-1073741790;
        if ( v4 == 4 )
          return (unsigned int)HalpTimerSetClockTimerMinimumInterval(*a3);
      }
      else if ( (_DWORD)a2 == 4 )
      {
        v8 = 0;
        HalpHvciEnabled = *a3 != 0;
        return v8;
      }
    }
    else if ( (_DWORD)a2 == 4 )
    {
      v8 = 0;
      HalpResetParkDisposition = *a3 != 0;
      return v8;
    }
    return (unsigned int)-1073741820;
  }
  if ( (unsigned int)a2 < 0x58 )
    return (unsigned int)-1073741820;
  return (unsigned int)HalpRegisterSecondaryIcInterface();
}
