/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014FE80
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180171CF0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_180171CF0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180171D00 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_180171D00.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180171D10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_180171D10.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180171D20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_180171D20.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180171D30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_180171D30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180171D40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_180171D40.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPinnedList@@UIStartMenuPinnedList@@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x180171D50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCPin_ea_180171D50.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180287110 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_180287110.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CPinnedList,IStartMenuPinnedList>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 124), a2);
}
