/*
 * XREFs of IoGetFileMemoryPartitionInformation @ 0x1402D6F4C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406545A0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1402D6F90 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileMemoryPartitionInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return IopGetFileObjectExtension(a1, 8LL, 0LL, a4);
}
