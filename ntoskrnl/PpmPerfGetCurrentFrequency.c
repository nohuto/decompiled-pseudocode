/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x140342660
 * Callers:
 *     PpmCheckComputeEnergy @ 0x140233D90 (PpmCheckComputeEnergy.c)
 *     PpmPerfGetCurrentState @ 0x1402F75F0 (PpmPerfGetCurrentState.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 result; // rax
  unsigned int v7; // ecx

  v2 = *(_QWORD *)(a1 + 33968);
  v4 = *(_QWORD *)(a1 + 33976);
  if ( !v2 || !v4 )
    return 100LL;
  if ( *(_BYTE *)(v4 + 100) )
  {
    result = *(unsigned int *)(v4 + 116);
    v5 = result;
    if ( !a2 )
      return result;
  }
  else
  {
    v5 = *(_DWORD *)(v4 + 72);
    result = v5;
  }
  v7 = *(_DWORD *)(v2 + 516);
  if ( v5 >= v7 )
    return v7;
  return result;
}
