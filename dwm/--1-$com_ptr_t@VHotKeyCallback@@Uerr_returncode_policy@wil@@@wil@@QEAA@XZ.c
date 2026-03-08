/*
 * XREFs of ??1?$com_ptr_t@VHotKeyCallback@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000519C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_spHotkeyCallback__ @ 0x140007340 (_dynamic_atexit_destructor_for__g_spHotkeyCallback__.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000AE00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHot_ea_14000AE00.c)
 */

__int64 __fastcall wil::com_ptr_t<HotKeyCallback,wil::err_returncode_policy>::~com_ptr_t<HotKeyCallback,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release();
  return result;
}
