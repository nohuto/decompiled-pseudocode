/*
 * XREFs of ??_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z @ 0x180086F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180086FBC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventA_ea_180086FBC.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewEventArgsForSelectTargetView *__fastcall ViewEventArgsForSelectTargetView::`scalar deleting destructor'(
        ViewEventArgsForSelectTargetView *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>();
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
