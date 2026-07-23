/*
 * XREFs of _raise_exc @ 0x1403D6610
 * Callers:
 *     _handle_error @ 0x1403D60B0 (_handle_error.c)
 * Callees:
 *     _raise_exc_ex @ 0x1403D6640 (_raise_exc_ex.c)
 */

__int64 __fastcall raise_exc(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 0);
}
