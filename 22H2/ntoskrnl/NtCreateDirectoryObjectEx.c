/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1407F1B50
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1407F1B90 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
