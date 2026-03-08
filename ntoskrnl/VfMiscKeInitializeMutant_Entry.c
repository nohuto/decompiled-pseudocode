/*
 * XREFs of VfMiscKeInitializeMutant_Entry @ 0x140ADCE60
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140ADE700 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscKeInitializeMutant_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(_QWORD *)(a1 + 16));
}
