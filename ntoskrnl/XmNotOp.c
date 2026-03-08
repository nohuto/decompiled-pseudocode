/*
 * XREFs of XmNotOp @ 0x14039D4A0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmNotOp(__int64 a1)
{
  char v2; // cl

  v2 = 8 * *(_DWORD *)(a1 + 120) + 7;
  return XmStoreResult(a1, ~*(_DWORD *)(a1 + 104) & (((1 << v2) - 1) | (unsigned int)(1 << v2)));
}
