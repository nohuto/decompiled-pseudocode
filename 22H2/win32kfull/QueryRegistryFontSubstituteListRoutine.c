/*
 * XREFs of QueryRegistryFontSubstituteListRoutine @ 0x1C0393610
 * Callers:
 *     <none>
 * Callees:
 *     vProcessEntry @ 0x1C0119058 (vProcessEntry.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C01191CC (--$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall QueryRegistryFontSubstituteListRoutine(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  _OWORD v10[13]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v10, 0, 0xC4uLL);
  if ( (int)vProcessEntry(a3, (WCHAR *)&v10[8] + 1, 0LL) >= 0
    && (int)vProcessEntry(a1, (WCHAR *)&v10[4], v10) >= 0
    && BYTE1(v10[8]) == BYTE3(v10[12])
    && BYTE1(v10[8]) != 2 )
  {
    result = AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(v8, v7, a5, v10);
    if ( (int)result < 0 )
      return result;
    if ( !BYTE1(v10[8]) )
      ++gcfsCharSetTable;
    if ( !gbShellFontCompatible
      && !_wcsicmp((const wchar_t *)&v10[4], L"MS Shell Dlg")
      && !_wcsicmp((const wchar_t *)&v10[8] + 1, L"Microsoft Sans Serif") )
    {
      gbShellFontCompatible = 1;
    }
  }
  return 0LL;
}
