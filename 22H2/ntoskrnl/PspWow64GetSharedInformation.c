/*
 * XREFs of PspWow64GetSharedInformation @ 0x140612094
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x140611E28 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x140679DC0 (PspWow64InitThread.c)
 *     PsThawProcess @ 0x1406857E4 (PsThawProcess.c)
 *     PspInitializeSystemDlls @ 0x140A4B284 (PspInitializeSystemDlls.c)
 * Callees:
 *     <none>
 */

void *__fastcall PspWow64GetSharedInformation(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &PsWowX86SharedInformation;
  if ( v1 == 1 )
    return &PsWowArm32SharedInformation;
  return 0LL;
}
