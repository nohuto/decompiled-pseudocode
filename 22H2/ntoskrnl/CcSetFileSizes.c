/*
 * XREFs of CcSetFileSizes @ 0x14032C7E0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x14022DA90 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
