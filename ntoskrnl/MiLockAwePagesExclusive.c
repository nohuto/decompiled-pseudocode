/*
 * XREFs of MiLockAwePagesExclusive @ 0x140648A44
 * Callers:
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x140A3F4A0 (MiResizeAweBitMap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14023A860 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
}
