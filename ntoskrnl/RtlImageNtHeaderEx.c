/*
 * XREFs of RtlImageNtHeaderEx @ 0x14035E850
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1402FCCC4 (MiProcessKernelCfgImage.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14035E748 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x1403712F4 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140371360 (RtlpCaptureDynamicRelocationTableRva.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140775328 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140784B40 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140784BDC (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpResGetMappingSize @ 0x1407EB0A8 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1407EB258 (LdrpResGetResourceDirectory.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1407F5778 (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x140828D60 (MiCaptureBootDriverRetpolineInfo.c)
 *     LdrRelocateImageWithBias @ 0x1409BF024 (LdrRelocateImageWithBias.c)
 *     MiOpenHotPatchFile @ 0x140A376D4 (MiOpenHotPatchFile.c)
 *     RtlFindHotPatchInformation @ 0x140A7383C (RtlFindHotPatchInformation.c)
 *     VfDriverEnableVerifierForAll @ 0x140AC7618 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v5; // r10d
  char v6; // al
  unsigned __int64 v7; // r8
  _DWORD *v8; // rax

  if ( !a4 )
    return (unsigned int)-1073741811;
  v5 = 0;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFE) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( (a1 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 == 23117 )
  {
    v7 = *(unsigned int *)(a2 + 60);
    if ( !v6 || v7 < a3 && (unsigned int)v7 < 0xFFFFFFE7 && v7 + 24 < a3 )
    {
      v8 = (_DWORD *)(v7 + a2);
      if ( v7 + a2 >= a2
        && (a2 > 0x7FFFFFFEFFFFLL || (_DWORD *)((char *)v8 + 263) >= v8
                                  && (unsigned __int64)v8 + 263 <= 0x7FFFFFFEFFFFLL)
        && *v8 == 17744 )
      {
        *a4 = v8;
        return v5;
      }
    }
  }
  return 3221225595LL;
}
