/*
 * XREFs of PspWow64GetSharedInformation @ 0x1406A16E4
 * Callers:
 *     PspWow64InitThread @ 0x1405F4EF0 (PspWow64InitThread.c)
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406A1478 (PspPrepareSystemDllInitBlock.c)
 *     PspInitializeSystemDlls @ 0x140A4C284 (PspInitializeSystemDlls.c)
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
