/*
 * XREFs of ??0ViewMenuChordedKeyHandler@@IEAA@XZ @ 0x180124554
 * Callers:
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180124A84 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

ViewMenuChordedKeyHandler *__fastcall ViewMenuChordedKeyHandler::ViewMenuChordedKeyHandler(
        ViewMenuChordedKeyHandler *this)
{
  __int64 *v2; // rcx
  ViewMenuChordedKeyHandler *result; // rax

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &ViewMenuChordedKeyHandler::`vftable';
  v2 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *v2 = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  result = this;
  *(_WORD *)((char *)this + 73) = 0;
  *((_BYTE *)this + 72) = 0;
  return result;
}
