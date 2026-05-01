/*
 * XREFs of ??B?$ComPtr@VTabTipAdapter@KeyboardHosting@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800B15AC
 * Callers:
 *     ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180073450 (-Hide@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18008C5C0 (-TakeKeyboardFocus@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803BEA80 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapter>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
