/*
 * XREFs of CfgAddressToBitState @ 0x1406540A4
 * Callers:
 *     MiValidateXfgUserCallTarget @ 0x1406540E8 (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A41024 (MiValidateUserCallTarget.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A41294 (MiCheckVerifierFunctionsCfgState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
