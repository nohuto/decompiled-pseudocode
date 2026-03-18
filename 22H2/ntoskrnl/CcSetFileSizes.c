/*
 * XREFs of CcSetFileSizes @ 0x1402F2580
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1402F0FA0 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
