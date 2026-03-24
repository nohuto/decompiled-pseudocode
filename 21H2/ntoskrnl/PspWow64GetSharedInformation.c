/*
 * XREFs of PspWow64GetSharedInformation @ 0x140611C34
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x1406119C8 (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x14067D0F8 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406959A0 (PspWow64InitThread.c)
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
