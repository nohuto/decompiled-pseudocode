/*
 * XREFs of ?InvokePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXW4SpatialGraphPropertyFlags@234@@Z @ 0x1801602A8
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162928 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180165130 (-StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UISpatialGraphPropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UISpatialGraphPropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014FDEC (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UISpatialGraphPropertiesUpdatedCallback@Holographic@Internal.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::InvokePropertiesUpdatedCallback(
        __int64 a1,
        unsigned int a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    v6 = 0LL;
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback>>>(
                (_QWORD *)(a1 + 192),
                &v6) >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 48LL))(
             v6,
             *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL),
             a2);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          857LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
  }
}
