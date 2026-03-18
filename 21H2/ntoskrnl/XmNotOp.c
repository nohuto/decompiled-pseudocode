/*
 * XREFs of XmNotOp @ 0x1403D90D0
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403A2E60 (XmStoreResult.c)
 */

_WORD *__fastcall XmNotOp(__int64 a1)
{
  char v2; // cl

  v2 = 8 * *(_DWORD *)(a1 + 120) + 7;
  return XmStoreResult(a1, ~*(_DWORD *)(a1 + 104) & (((1 << v2) - 1) | (unsigned int)(1 << v2)));
}
