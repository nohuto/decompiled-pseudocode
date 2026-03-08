/*
 * XREFs of ExDestroyPool @ 0x140604A80
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolDestroy @ 0x14060AB84 (ExpSecurePoolDestroy.c)
 */

__int64 __fastcall ExDestroyPool(ULONG_PTR a1)
{
  return ExpSecurePoolDestroy(a1);
}
