/*
 * XREFs of RtlImageNtHeaderEx @ 0x1402FD9C0
 * Callers:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1402D6CE8 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiProcessKernelCfgImage @ 0x1402D99BC (MiProcessKernelCfgImage.c)
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403C38EC (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrpResGetMappingSize @ 0x1406734EC (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x14067368C (LdrpResGetResourceDirectory.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140706200 (LdrCaptureDynamicRelocationTableHeader.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140758C68 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075AEA4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14075C190 (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14082CB7C (MiCaptureBootDriverRetpolineInfo.c)
 *     MiOpenHotPatchFile @ 0x14097638C (MiOpenHotPatchFile.c)
 *     LdrRelocateImageWithBias @ 0x1409BE864 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x1409C0580 (RtlFindHotPatchInformation.c)
 *     VfDriverEnableVerifierForAll @ 0x140A89C30 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  char v5; // al
  unsigned __int64 v6; // rcx
  _DWORD *v7; // rax

  if ( !a4 )
    return (unsigned int)-1073741811;
  v4 = 0;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFE) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( (a1 & 1) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 == 23117 )
  {
    v6 = *(unsigned int *)(a2 + 60);
    if ( !v5 || v6 < a3 && (unsigned int)v6 < 0xFFFFFFE7 && v6 + 24 < a3 )
    {
      v7 = (_DWORD *)(a2 + v6);
      if ( a2 + v6 >= a2
        && (a2 >= 0x7FFFFFFEFFFFLL
         || (unsigned __int64)v7 < 0x7FFFFFFEFFFFLL && (unsigned __int64)(v7 + 66) < 0x7FFFFFFEFFFFLL)
        && *v7 == 17744 )
      {
        *a4 = v7;
        return v4;
      }
    }
  }
  return 3221225595LL;
}
