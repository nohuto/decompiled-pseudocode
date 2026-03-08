/*
 * XREFs of CcSetFileSizes @ 0x14029F4C0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x14029F9B0 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
