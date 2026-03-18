/*
 * XREFs of MiIsProcessXfgEnabled @ 0x140A43CCC
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x1406425D0 (MiDisableXfgOnPatchedFunctions.c)
 *     MiValidateXfgUserCallTarget @ 0x140656730 (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1407A4C5C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A43CF8 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsProcessXfgEnabled(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) )
    return (*(_DWORD *)(a1 + 2516) >> 25) & 1;
  else
    return 0LL;
}
