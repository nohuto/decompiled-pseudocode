/*
 * XREFs of RaidGetStorPoFxComponent @ 0x1C0013BE4
 * Callers:
 *     StorUpdateCrashDumpPowerReady @ 0x1C0013AB0 (StorUpdateCrashDumpPowerReady.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0037EB8 (RaidGetTotalStorPoFxDeviceSize.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003A86C (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D4B8 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003F118 (RaidRegisterForRuntimePowerManagement.c)
 *     StorPortUnitIdleState @ 0x1C0041B50 (StorPortUnitIdleState.c)
 * Callees:
 *     <none>
 */

char *__fastcall RaidGetStorPoFxComponent(int *a1, unsigned int a2)
{
  int v2; // r8d
  char *result; // rax
  unsigned __int64 v4; // rax

  v2 = *a1;
  result = 0LL;
  if ( *a1 == 1 )
  {
    if ( a2 < a1[2] )
    {
      v4 = ((unsigned __int64)a2 << 6) + 16;
      return (char *)a1 + v4;
    }
  }
  else if ( (v2 == 3 || v2 == 2) && a2 < a1[2] )
  {
    v4 = ((unsigned __int64)a2 << 6) + 24;
    return (char *)a1 + v4;
  }
  return result;
}
