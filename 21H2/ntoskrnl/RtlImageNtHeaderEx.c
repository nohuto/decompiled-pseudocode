/*
 * XREFs of RtlImageNtHeaderEx @ 0x1403276D0
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140286178 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     MiProcessKernelCfgImage @ 0x140371914 (MiProcessKernelCfgImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403B718C (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrpResGetMappingSize @ 0x1405EC380 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1405ED184 (LdrpResGetResourceDirectory.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140609898 (EtwpLocateDbgIdForRegEntry.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x1406C219C (MiCaptureDynamicRelocationTableRva.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14075D000 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075D09C (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A5590 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiOpenHotPatchFile @ 0x1408CCC68 (MiOpenHotPatchFile.c)
 *     LdrRelocateImageWithBias @ 0x1409194C4 (LdrRelocateImageWithBias.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C97B8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS v4; // r10d
  char v5; // al
  ULONG64 v6; // rcx
  _IMAGE_NT_HEADERS64 *v7; // rax

  if ( !OutHeaders )
    return -1073741811;
  v4 = 0;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage == 23117 )
  {
    v6 = *((unsigned int *)BaseOfImage + 15);
    if ( !v5 || v6 < Size && (unsigned int)v6 < 0xFFFFFFE7 && v6 + 24 < Size )
    {
      v7 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v6);
      if ( (char *)BaseOfImage + v6 >= BaseOfImage
        && ((unsigned __int64)BaseOfImage >= 0x7FFFFFFEFFFFLL
         || (unsigned __int64)v7 < 0x7FFFFFFEFFFFLL && (unsigned __int64)&v7[1] < 0x7FFFFFFEFFFFLL)
        && v7->Signature == 17744 )
      {
        *OutHeaders = v7;
        return v4;
      }
    }
  }
  return -1073741701;
}
