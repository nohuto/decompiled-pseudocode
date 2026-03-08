/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x1408A0310
 * Callers:
 *     <none>
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x140294D78 (IopSetFileObjectExtensionFlag.c)
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  return IopSetFileObjectExtensionFlag((__int64)FileObject, 1, 1);
}
