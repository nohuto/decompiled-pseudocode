/*
 * XREFs of RtlImageNtHeaderEx @ 0x14031C980
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140253308 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     MiProcessKernelCfgImage @ 0x140371DC4 (MiProcessKernelCfgImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403B701C (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrpResGetMappingSize @ 0x14068C510 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x14068D314 (LdrpResGetResourceDirectory.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406AB1A8 (EtwpLocateDbgIdForRegEntry.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x140713B4C (MiCaptureDynamicRelocationTableRva.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14075CE40 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075CEDC (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A5390 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiOpenHotPatchFile @ 0x1408CCB08 (MiOpenHotPatchFile.c)
 *     LdrRelocateImageWithBias @ 0x140919364 (LdrRelocateImageWithBias.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C87B8 (VfDriverEnableVerifierForAll.c)
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
