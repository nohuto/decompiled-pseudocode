/*
 * XREFs of ??0ViewHostItemEventArgsBase@@QEAA@XZ @ 0x1802AE930
 * Callers:
 *     ??0ViewHostItemEventArgs@@QEAA@XZ @ 0x1802AE8AC (--0ViewHostItemEventArgs@@QEAA@XZ.c)
 *     ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x1802AE978 (--0ViewHostItemPropertyChangedArgs@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180040044 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ViewHostItemEventArgsBase *__fastcall ViewHostItemEventArgsBase::ViewHostItemEventArgsBase(
        ViewHostItemEventArgsBase *this)
{
  Microsoft::WRL::FtmBase::FtmBase((ViewHostItemEventArgsBase *)((char *)this + 8));
  *(_QWORD *)this = &ViewHostItemEventArgsBase::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 1) = &CopyToViewValueSetBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
