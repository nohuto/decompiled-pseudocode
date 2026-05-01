/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180400F70
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016EFC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservable.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016EFD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18016EFD0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016EFE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18016EFE0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016EFF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18016EFF0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>>(
           a1,
           a2,
           a3);
}
