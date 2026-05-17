/*
 * XREFs of LdrpResSetFilePointer @ 0x1800E4CE8
 * Callers:
 *     LdrpResReadFile @ 0x1800E4548 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E45FC (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x18009D9C0 (ZwSetInformationFile.c)
 */

__int64 __fastcall LdrpResSetFilePointer(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
