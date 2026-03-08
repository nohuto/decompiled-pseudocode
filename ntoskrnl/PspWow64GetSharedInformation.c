/*
 * XREFs of PspWow64GetSharedInformation @ 0x14084AC08
 * Callers:
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 *     PspInitializeSystemDlls @ 0x140B649D4 (PspInitializeSystemDlls.c)
 * Callees:
 *     <none>
 */

void *__fastcall PspWow64GetSharedInformation(int a1)
{
  if ( a1 == 1 )
    return &PsWowX86SharedInformation;
  else
    return 0LL;
}
