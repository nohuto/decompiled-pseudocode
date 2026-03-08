/*
 * XREFs of IvtFindDevice @ 0x14037C000
 * Callers:
 *     <none>
 * Callees:
 *     IvtpGetNextInternalDeviceScope @ 0x14037C09C (IvtpGetNextInternalDeviceScope.c)
 *     HalpIvtCheckIdPathMatch @ 0x14037C118 (HalpIvtCheckIdPathMatch.c)
 */

char __fastcall IvtFindDevice(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 NextInternalDeviceScope; // rax
  __int64 v9; // rbp

  v6 = a1;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 252) != *(unsigned __int16 *)(a2 + 8) )
    return 0;
  if ( !a3 || !*(_BYTE *)(a1 + 268) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextInternalDeviceScope = IvtpGetNextInternalDeviceScope(a1, v7);
      v9 = NextInternalDeviceScope;
      if ( !NextInternalDeviceScope )
        break;
      if ( (unsigned __int8)HalpIvtCheckIdPathMatch(a2, NextInternalDeviceScope) )
      {
        if ( a4 )
          *a4 = *(unsigned __int16 *)(a2 + 12);
        return 1;
      }
      v7 = v9;
      a1 = v6;
    }
    return 0;
  }
  if ( a4 )
    *a4 = *(unsigned __int16 *)(a2 + 12);
  return 1;
}
