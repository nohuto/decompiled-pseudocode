/*
 * XREFs of PspWow64GetSharedInformation @ 0x140672A64
 * Callers:
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406727EC (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1406747FC (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x140B24D94 (PspInitializeSystemDlls.c)
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
