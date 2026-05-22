/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014FD74
 * Callers:
 *     ?InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@234@@Z @ 0x1801600F8 (-InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAE.c)
 *     ?RemoveExpiredNodePropertiesUpdatedCallbacks@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAA?AV?$vector@USPATIAL_NODE_ID@@V?$allocator@USPATIAL_NODE_ID@@@std@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180163560 (-RemoveExpiredNodePropertiesUpdatedCallbacks@DynamicNodeSourceBase@Holographic@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014E400 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>>>(
        _QWORD *a1,
        __int64 *a2)
{
  int v3; // edi
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, (__int64 *)&v5);
  if ( v3 >= 0 )
  {
    if ( v5 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
      v3 = (**v5)(v5, &GUID_225528bc_156b_4b35_bf79_5fe36321f22f, a2);
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v5);
  return (unsigned int)v3;
}
