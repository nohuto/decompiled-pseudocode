/*
 * XREFs of CfgAddressToBitState @ 0x14034FF04
 * Callers:
 *     MiValidateUserCallTarget @ 0x1406FA2A4 (MiValidateUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1406FAA44 (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
