/*
 * XREFs of sub_1800CA230 @ 0x1800CA230
 * Callers:
 *     sub_1800745E0 @ 0x1800745E0 (sub_1800745E0.c)
 *     sub_1800745F0 @ 0x1800745F0 (sub_1800745F0.c)
 *     sub_180074600 @ 0x180074600 (sub_180074600.c)
 *     sub_180074610 @ 0x180074610 (sub_180074610.c)
 *     sub_180074620 @ 0x180074620 (sub_180074620.c)
 * Callees:
 *     sub_180005230 @ 0x180005230 (sub_180005230.c)
 */

__int64 __fastcall sub_1800CA230(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rcx

  v3 = 0;
  if ( a3 )
  {
    v5 = 0x4496D6AD657804FALL - *a2;
    if ( *a2 == 0x4496D6AD657804FALL )
      v5 = 0x894FAF522735608AuLL - a2[1];
    if ( v5 )
    {
      return (unsigned int)sub_180005230(a1, a2, a3);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
      *a3 = (a1 + 984) & -(__int64)(a1 != 0);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
