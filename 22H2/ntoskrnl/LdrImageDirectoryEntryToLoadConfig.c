/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x14075C6CC
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x140340314 (RtlGuardCheckExceptionHandler.c)
 *     RtlIsImageFullyRetpolined @ 0x140372608 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B6910 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403B69BC (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1403F7F28 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058F388 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14075C630 (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A57C0 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x14029D010 (RtlImageNtHeaderEx.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x140344600 (RtlWow64GetEquivalentMachineCHPE.c)
 */

__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(PVOID BaseOfImage)
{
  _DWORD *v2; // r8
  __int64 v3; // r8
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  Size = 0;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  if ( !BaseOfImage )
    return 0LL;
  v2 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( (unsigned __int64)BaseOfImage < 0x7FFFFFFEFFFFLL
    && ((unsigned __int64)(v2 + 1) > 0x7FFFFFFF0000LL || v2 + 1 < v2) )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( v2 && Size && Size == *v2 && RtlWow64GetEquivalentMachineCHPE(OutHeaders->FileHeader.Machine) == -31132 )
    return v3;
  else
    return 0LL;
}
