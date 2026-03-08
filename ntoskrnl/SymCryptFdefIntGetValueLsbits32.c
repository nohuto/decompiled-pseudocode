/*
 * XREFs of SymCryptFdefIntGetValueLsbits32 @ 0x1403F2CE8
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x1403F3884 (SymCryptIntGetValueLsbits32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetValueLsbits32(__int64 a1)
{
  return *(unsigned int *)(a1 + 32);
}
