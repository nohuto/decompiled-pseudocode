/*
 * XREFs of QueryRegistryFontSubstituteListRoutine @ 0x1C03B8180
 * Callers:
 *     <none>
 * Callees:
 *     ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C010F4A0 (--$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z.c)
 *     vProcessEntry @ 0x1C010F5B8 (vProcessEntry.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall QueryRegistryFontSubstituteListRoutine(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 result; // rax
  _OWORD v10[4]; // [rsp+20h] [rbp-E8h] BYREF
  wchar_t Str1[32]; // [rsp+60h] [rbp-A8h] BYREF
  char v12; // [rsp+A1h] [rbp-67h]
  wchar_t v13[32]; // [rsp+A2h] [rbp-66h] BYREF
  char v14; // [rsp+E3h] [rbp-25h]

  memset_0(v10, 0, 0xC4uLL);
  if ( (int)vProcessEntry(a3, (__int64)v13, 0LL) >= 0
    && (int)vProcessEntry(a1, (__int64)Str1, v10) >= 0
    && v12 == v14
    && v12 != 2 )
  {
    v8 = *(_QWORD *)(SGDGetSessionState(v7) + 32);
    result = AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(
               (unsigned int *)(v8 + 19488),
               (void **)(v8 + 19472),
               a5,
               v10);
    if ( (int)result < 0 )
      return result;
    if ( !v12 )
      ++*(_DWORD *)(v8 + 19496);
    if ( !*(_DWORD *)(v8 + 19500) && !_wcsicmp(Str1, L"MS Shell Dlg") && !_wcsicmp(v13, L"Microsoft Sans Serif") )
      *(_DWORD *)(v8 + 19500) = 1;
  }
  return 0LL;
}
