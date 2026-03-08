/*
 * XREFs of LdrpAccessResourceData @ 0x1407E987C
 * Callers:
 *     RtlFindMessage @ 0x1407E97C0 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x140810240 (LdrAccessResource.c)
 *     RtlLoadString @ 0x1409B7450 (RtlLoadString.c)
 * Callees:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14035C910 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetImageSize @ 0x14035D8E8 (LdrpGetImageSize.c)
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1407EA480 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( !a1 || !a2 )
    return 3221225485LL;
  LOBYTE(a2) = 1;
  if ( PnPBootDriversInitialized == 1 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = RtlImageDirectoryEntryToData(a1, a2, 2, (int)&v15);
    if ( !v9 )
      return 3221225609LL;
    if ( v6 < v9 )
      goto LABEL_10;
    result = LdrpGetImageSize(v7, &v13);
    if ( (_DWORD)result == -1073741701 )
      return result;
    if ( v13 && (v6 < v8 || v6 >= v8 + v13) )
    {
LABEL_10:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(v7, v10, v6, v14);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        v7 = AlternateResourceModuleHandle;
    }
  }
  return LdrpAccessResourceDataNoMultipleLanguage(v7, v6, a3, a4);
}
