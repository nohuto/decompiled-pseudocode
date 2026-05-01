/*
 * XREFs of _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x1801D6F58
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::_scalar_deleting_destructor_ @ 0x1801D7CD0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1801D7CD0.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801E2308 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$7 @ 0x1801E263D (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$7.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1801D74D0 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     _lambda_9532c6789f8817c10f052c0604d56f68_::operator() @ 0x1801D7AC8 (_lambda_9532c6789f8817c10f052c0604d56f68_--operator().c)
 */

__int64 __fastcall lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 664));
  if ( *(_BYTE *)(a1 + 656) )
  {
    *(_BYTE *)(a1 + 656) = 0;
    lambda_9532c6789f8817c10f052c0604d56f68_::operator()(a1 + 344);
  }
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)(a1 + 344));
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)(a1 + 32));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1);
}
