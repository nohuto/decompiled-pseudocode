/*
 * XREFs of ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083AF8
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18000D3F0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180083968 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x1801B77FC (_lambda_20045b0b3bc9a0c8c612018082f6611c_--operator().c)
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x1801B7C24 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 *     ?Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1801B8F1C (-Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1801BFF70 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1801D90D4 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1801E08D0 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1801E286C (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v4(v2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a2);
}
