/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x14073DE90
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x14073DED0 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
