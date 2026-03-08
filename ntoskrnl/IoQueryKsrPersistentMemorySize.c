/*
 * XREFs of IoQueryKsrPersistentMemorySize @ 0x14094F7D0
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryKsrPersistentMemorySizeEx @ 0x14094F800 (IoQueryKsrPersistentMemorySizeEx.c)
 */

__int64 __fastcall IoQueryKsrPersistentMemorySize(__int64 a1, __int64 a2, __int64 a3)
{
  return IoQueryKsrPersistentMemorySizeEx(a1, a2, 0LL, 0LL, 0LL, a3);
}
