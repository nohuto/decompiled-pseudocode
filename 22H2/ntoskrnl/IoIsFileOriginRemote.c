/*
 * XREFs of IoIsFileOriginRemote @ 0x140368F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsFileOriginRemote(PFILE_OBJECT FileObject)
{
  return HIBYTE(FileObject->Flags) & 1;
}
