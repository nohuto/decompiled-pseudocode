/*
 * XREFs of _lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_ @ 0x1801D70E0
 * Callers:
 *     _CAppViewManager::PrepareToSwitch_::_1_::dtor$2 @ 0x1801DB9AC (_CAppViewManager--PrepareToSwitch_--_1_--dtor$2.c)
 *     _CAppViewManager::ShowView_::_1_::dtor$2 @ 0x1801DC159 (_CAppViewManager--ShowView_--_1_--dtor$2.c)
 *     _CAppViewManager::SwitchViews_::_1_::dtor$2 @ 0x1801DF51C (_CAppViewManager--SwitchViews_--_1_--dtor$2.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$5 @ 0x1801E2DA5 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
