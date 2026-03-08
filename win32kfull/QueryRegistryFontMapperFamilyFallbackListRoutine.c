/*
 * XREFs of QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C03B8900
 * Callers:
 *     <none>
 * Callees:
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C02A9148 (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 */

__int64 __fastcall QueryRegistryFontMapperFamilyFallbackListRoutine(
        WCHAR *a1,
        __int64 a2,
        WCHAR *a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  WCHAR v10[32]; // [rsp+20h] [rbp-98h] BYREF
  WCHAR v11[32]; // [rsp+60h] [rbp-58h] BYREF

  memset_0(v10, 0, 0x80uLL);
  cCapString(v11, a3, 32);
  cCapString(v10, a1, 32);
  v8 = SGDGetSessionState(v7);
  return AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(
           (unsigned int *)(*(_QWORD *)(v8 + 32) + 19492LL),
           (void **)(*(_QWORD *)(v8 + 32) + 19480LL),
           a5,
           v10);
}
