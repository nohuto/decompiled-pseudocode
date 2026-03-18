/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x140354BA0
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x1407C3DFC (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
