/*
 * XREFs of NtCreateDirectoryObject @ 0x14073DEB0
 * Callers:
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x140B68930 (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x140B69B38 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140B69C28 (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x140B6B5C8 (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x14073DED0 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObject(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
