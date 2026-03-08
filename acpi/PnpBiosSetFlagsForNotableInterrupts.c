/*
 * XREFs of PnpBiosSetFlagsForNotableInterrupts @ 0x1C003C200
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F000 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C000FC90 (ACPIBuildProcessDevicePhasePrs.c)
 * Callees:
 *     PnpBiosScanForWakeInterrupt @ 0x1C003C104 (PnpBiosScanForWakeInterrupt.c)
 */

char __fastcall PnpBiosSetFlagsForNotableInterrupts(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v4; // rsi
  char result; // al
  char v7; // cl
  char *i; // r8
  unsigned __int16 v9; // dx
  char *v10; // rdx

  v4 = a3;
  result = PnpBiosScanForWakeInterrupt((unsigned __int64)a2, a3);
  if ( result )
  {
    result = 0;
    _InterlockedOr64((volatile signed __int64 *)(a1 + 1008), 0x100000000uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x10000uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 1008), 0x100000uLL);
  }
  if ( (unsigned int)v4 >= 0x18 )
  {
    v7 = *a2;
    for ( i = a2; ; i = v10 )
    {
      if ( v7 < 0 )
      {
        v9 = *(_WORD *)(i + 1) + 3;
      }
      else
      {
        result = v7 & 7;
        v9 = (v7 & 7) + 1;
        v7 &= 0x78u;
      }
      if ( v7 == 120 )
        break;
      result = (_BYTE)a2 + v4;
      v10 = &i[v9];
      if ( v10 >= &a2[v4] )
        break;
      if ( v7 == -116 && !i[4] )
      {
        result = 0;
        _InterlockedOr64((volatile signed __int64 *)(a1 + 1008), 0x800000000uLL);
        return result;
      }
      v7 = *v10;
    }
  }
  return result;
}
