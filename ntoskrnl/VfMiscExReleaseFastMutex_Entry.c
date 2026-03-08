/*
 * XREFs of VfMiscExReleaseFastMutex_Entry @ 0x140ADCC30
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140ADE574 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExReleaseFastMutex_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0x34uLL, *(_QWORD *)(a1 + 8));
}
