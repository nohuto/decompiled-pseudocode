/*
 * XREFs of RaidGetStorPoFxFState @ 0x1C0037E20
 * Callers:
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0037E98 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003F0F8 (RaidRegisterForRuntimePowerManagement.c)
 * Callees:
 *     <none>
 */

char *__fastcall RaidGetStorPoFxFState(_DWORD *a1, unsigned int a2)
{
  char *result; // rax
  __int64 v3; // rax

  result = 0LL;
  if ( *a1 == 1 )
  {
    if ( a2 >= a1[2] )
      return result;
    v3 = 32 * (a2 + 1LL);
    return (char *)a1 + v3;
  }
  if ( *a1 == 2 && a2 < a1[2] )
  {
    v3 = 32LL * a2 + 40;
    return (char *)a1 + v3;
  }
  return result;
}
