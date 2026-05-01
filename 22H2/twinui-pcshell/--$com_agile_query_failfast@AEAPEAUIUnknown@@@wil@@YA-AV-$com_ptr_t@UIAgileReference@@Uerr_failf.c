/*
 * XREFs of ??$com_agile_query_failfast@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x1804D0900
 * Callers:
 *     ?SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z @ 0x1804D4380 (-SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E78 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

_QWORD *__fastcall wil::com_agile_query_failfast<IUnknown * &>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  int AgileReference; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a2;
  *a1 = 0LL;
  AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, v2, a1);
  if ( AgileReference < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1670LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)AgileReference);
    __debugbreak();
  }
  return a1;
}
