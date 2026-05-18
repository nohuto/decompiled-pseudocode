/*
 * XREFs of sub_1801251B4 @ 0x1801251B4
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A44 @ 0x180010A44 (sub_180010A44.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801251B4(__int64 a1, __int64 a2)
{
  _LocaleUpdate *v3; // rbx
  char **LocaleT; // rdi

  v3 = *(_LocaleUpdate **)(a2 + 40);
  LocaleT = (char **)_LocaleUpdate::GetLocaleT(v3);
  sub_180010AA8((__int64)v3, *(char **)(a2 + 48), *LocaleT, *(char **)(a2 + 168));
  sub_180010A44((__int64)v3, *(_QWORD *)(a2 + 48), (__int64)*LocaleT);
  *LocaleT = *(char **)(a2 + 64);
  throw;
}
