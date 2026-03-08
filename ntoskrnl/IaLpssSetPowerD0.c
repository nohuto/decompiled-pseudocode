/*
 * XREFs of IaLpssSetPowerD0 @ 0x14067A430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IaLpssPciSetPower @ 0x14067A238 (IaLpssPciSetPower.c)
 *     Uart16550InitializePortCommon @ 0x14067A794 (Uart16550InitializePortCommon.c)
 */

__int64 __fastcall IaLpssSetPowerD0(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rdx
  int v6; // r9d
  int v7; // r8d
  int v8; // ecx

  if ( a1 && *(_QWORD *)a1 )
  {
    v2 = IaLpssPciSetPower(0);
    if ( !v2 )
    {
      if ( (((__int64 (__fastcall *)(__int64, _QWORD))off_140C06B20[0])(*(_QWORD *)a1 + 129LL, 0LL) & 7) != 0 )
      {
        return 2;
      }
      else
      {
        v3 = (unsigned int)IaLpssClockParams;
        if ( IaLpssClockParams )
        {
          LODWORD(v3) = IaLpssClockParams | 0x80000000;
          ((void (__fastcall *)(__int64, __int64))off_140C06B48[0])(*(_QWORD *)a1 + 128LL, v3);
          v4 = ((__int64 (__fastcall *)(__int64))off_140C06B40[0])(*(_QWORD *)a1 + 128LL);
          v5 = v4;
          LODWORD(v5) = v4 & 0x7FFFFFFF;
          ((void (__fastcall *)(__int64, __int64))off_140C06B48[0])(*(_QWORD *)a1 + 128LL, v5);
        }
        LOBYTE(v3) = 7;
        ((void (__fastcall *)(__int64, __int64))off_140C06B28[0])(*(_QWORD *)a1 + 129LL, v3);
        LOBYTE(v6) = 1;
        *(_WORD *)(a1 + 12) = 0;
        LOBYTE(v7) = 1;
        return (unsigned __int8)Uart16550InitializePortCommon(v8, a1, v7, v6, 8) != 1 ? 2 : 0;
      }
    }
  }
  else
  {
    return 3;
  }
  return v2;
}
