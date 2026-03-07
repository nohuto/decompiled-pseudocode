__int64 PopDirectedDripsQueryPs4Support()
{
  unsigned int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( !PopDirectedDripsOverride )
    return 2;
  PopDirectedDripsQueryEmPS4DisableSetting(&v2);
  if ( v2 )
  {
    return 2;
  }
  else if ( (unsigned int)(PopDirectedDripsOverride - 1) <= 0xFFFFFFFD )
  {
    return 1;
  }
  else if ( BYTE6(PopCapabilities) )
  {
    if ( PopPlatformAoAc )
    {
      PopDirectedDripsQueryEmSettings(&v2);
      if ( v2 )
      {
        return 4;
      }
      else if ( PopDripsCallbackInterval )
      {
        if ( PopDirectedDripsTimeout < (unsigned int)PopDripsCallbackInterval
          || PopDirectedDripsTimeout > (unsigned int)PopDripsWatchdogTimeout )
        {
          return 8;
        }
      }
      else
      {
        return 5;
      }
    }
    else
    {
      return 6;
    }
  }
  else
  {
    return 3;
  }
  return v0;
}
