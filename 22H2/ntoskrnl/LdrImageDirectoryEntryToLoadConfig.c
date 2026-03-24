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

__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(unsigned __int64 a1)
{
  int v2; // edx
  _DWORD *v3; // r8
  __int64 v4; // r8
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v7);
  if ( !a1 )
    return 0LL;
  LOBYTE(v2) = 1;
  v3 = (_DWORD *)RtlImageDirectoryEntryToData(a1, v2, 10, (int)&v6);
  if ( a1 < 0x7FFFFFFEFFFFLL && ((unsigned __int64)(v3 + 1) > 0x7FFFFFFF0000LL || v3 + 1 < v3) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( v3 && v6 && v6 == *v3 && RtlWow64GetEquivalentMachineCHPE(*(_WORD *)(v7 + 4)) == -31132 )
    return v4;
  else
    return 0LL;
}
