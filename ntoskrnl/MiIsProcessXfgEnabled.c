/*
 * XREFs of MiIsProcessXfgEnabled @ 0x140A40FF8
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x140640170 (MiDisableXfgOnPatchedFunctions.c)
 *     MiValidateXfgUserCallTarget @ 0x1406540E8 (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A41024 (MiValidateUserCallTarget.c)
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
