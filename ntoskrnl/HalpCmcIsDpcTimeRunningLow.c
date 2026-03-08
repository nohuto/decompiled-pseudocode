/*
 * XREFs of HalpCmcIsDpcTimeRunningLow @ 0x1405005FC
 * Callers:
 *     HalpCmcPollProcessor @ 0x14037CF58 (HalpCmcPollProcessor.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpCmcIsDpcTimeRunningLow(int *a1)
{
  int v1; // eax
  bool v2; // r8
  int v4; // ecx

  v1 = a1[2];
  v2 = 0;
  if ( v1 )
    v2 = a1[3] < 50 * v1 / 0x64u;
  v4 = *a1;
  if ( v4 && a1[1] < 50 * v4 / 0x64u )
    return 1;
  return v2;
}
