/*
 * XREFs of ObpDereferenceNamedObject @ 0x1402EF5F8
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 */

LONG_PTR __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  return ObfDereferenceObject((PVOID)(a1 + 48));
}
