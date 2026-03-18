/*
 * XREFs of RtlSetSystemGlobalData @ 0x14025D830
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

__int64 __fastcall RtlSetSystemGlobalData(int a1, _DWORD *a2, int a3)
{
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 ThreadServerSilo; // rax
  _QWORD *v9; // rcx

  v4 = a1 - 1;
  if ( v4 )
  {
    v6 = v4 - 3;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return 3221225485LL;
        if ( a3 == 4 )
        {
          if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
          {
            ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
            v9 = &PspHostSiloGlobals;
            if ( ThreadServerSilo )
              v9 = *(_QWORD **)(ThreadServerSilo + 1464);
            *(_DWORD *)(v9[165] + 584LL) = *a2;
          }
          else
          {
            MEMORY[0xFFFFF78000000240] = *a2;
          }
          return 0LL;
        }
      }
      else if ( a3 == 2 )
      {
        MEMORY[0xFFFFF7800000002E] = *(_WORD *)a2;
        return 0LL;
      }
    }
    else if ( a3 == 2 )
    {
      MEMORY[0xFFFFF7800000002C] = *(_WORD *)a2;
      return 0LL;
    }
  }
  else if ( a3 == 8 )
  {
    MEMORY[0xFFFFF78000000250] = *(_QWORD *)a2;
    return 0LL;
  }
  return 3221225990LL;
}
