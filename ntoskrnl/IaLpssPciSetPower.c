/*
 * XREFs of IaLpssPciSetPower @ 0x14067A238
 * Callers:
 *     IaLpssSetPowerD0 @ 0x14067A430 (IaLpssSetPowerD0.c)
 *     IaLpssSetPowerD3 @ 0x14067A540 (IaLpssSetPowerD3.c)
 * Callees:
 *     IaLpssReadCmdStatus @ 0x14067A3AC (IaLpssReadCmdStatus.c)
 *     IaLpssReadPmcsr @ 0x14067A3EC (IaLpssReadPmcsr.c)
 *     IaLpssWriteCmdStatus @ 0x14067A608 (IaLpssWriteCmdStatus.c)
 *     IaLpssWritePmcsr @ 0x14067A644 (IaLpssWritePmcsr.c)
 */

__int64 __fastcall IaLpssPciSetPower(int a1)
{
  unsigned int v1; // ecx
  int v3; // [rsp+30h] [rbp+10h] BYREF
  __int64 v4; // [rsp+38h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 )
      return 2;
    v1 = IaLpssReadCmdStatus(&v3);
    if ( !v1 )
    {
      v3 &= 0xFFFFFFF9;
      v1 = IaLpssWriteCmdStatus(&v3);
      if ( !v1 )
      {
        v1 = IaLpssReadCmdStatus(&v3);
        if ( !v1 )
        {
          if ( (v3 & 4) != 0 )
            return 2;
          if ( (v3 & 2) != 0 )
            return 2;
          v1 = IaLpssReadPmcsr(&v4);
          if ( !v1 )
          {
            if ( (v4 & 3) == 3 )
              return 2;
            LODWORD(v4) = v4 & 0xFFFF7FFC | 3;
            v1 = IaLpssWritePmcsr(&v4);
            if ( !v1 )
            {
              v1 = IaLpssReadPmcsr(&v4);
              if ( !v1 && (v4 & 3) != 3 )
                return 2;
            }
          }
        }
      }
    }
  }
  else
  {
    v1 = IaLpssReadPmcsr(&v4);
    if ( !v1 )
    {
      if ( (v4 & 3) == 0 )
        return 2;
      LODWORD(v4) = v4 & 0xFFFF7FFC | 0x8000;
      v1 = IaLpssWritePmcsr(&v4);
      if ( !v1 )
      {
        v1 = IaLpssReadPmcsr(&v4);
        if ( !v1 )
        {
          if ( (v4 & 3) != 0 )
            return 2;
          v1 = IaLpssReadCmdStatus(&v3);
          if ( !v1 )
          {
            v3 |= 6u;
            v1 = IaLpssWriteCmdStatus(&v3);
            if ( !v1 )
            {
              v1 = IaLpssReadCmdStatus(&v3);
              if ( !v1 && ((v3 & 4) == 0 || (v3 & 2) == 0) )
                return 2;
            }
          }
        }
      }
    }
  }
  return v1;
}
