/*
 * XREFs of wil::details::functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__&_::Run @ 0x180280460
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180010250 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEAUHSTRING__@@@Z @ 0x180011244 (-GetMainViewMode@ViewModeHelpers@Cortana@@YA-AW4MainViewMode@12@PEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538____::Run(__int64 a1)
{
  HSTRING **v1; // rbx

  v1 = *(HSTRING ***)(a1 + 8);
  if ( IsSearchAndCortanaSplitEnabled() )
    *((_DWORD *)*v1 + 62) = Cortana::ViewModeHelpers::GetMainViewMode(*v1[1]);
  return 0LL;
}
