/*
 * XREFs of NtCreateDirectoryObject @ 0x1406868C0
 * Callers:
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 *     IopCreateRootDirectories @ 0x140A5B394 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140A5D080 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140A6E368 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A6F6AC (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406868E0 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
