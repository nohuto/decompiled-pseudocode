/*
 * XREFs of _raise_excf @ 0x1403D68D0
 * Callers:
 *     _handle_errorf @ 0x1403D61EC (_handle_errorf.c)
 * Callees:
 *     _raise_exc_ex @ 0x1403D6640 (_raise_exc_ex.c)
 */

__int64 __fastcall raise_excf(
        unsigned int *a1,
        unsigned __int64 *a2,
        char a3,
        int a4,
        unsigned int *a5,
        unsigned int *a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 1);
}
