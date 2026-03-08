/*
 * XREFs of VfMiscExAcquireFastMutexUnsafe_Entry @ 0x140ADCA70
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140ADE574 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExAcquireFastMutexUnsafe_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0x39uLL, *(_QWORD *)(a1 + 8));
}
