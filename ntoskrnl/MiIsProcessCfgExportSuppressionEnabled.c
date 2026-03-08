/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x140A40FD0
 * Callers:
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A41024 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsProcessCfgExportSuppressionEnabled(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) )
    return (*(_DWORD *)(a1 + 2512) >> 1) & 1;
  else
    return 0LL;
}
