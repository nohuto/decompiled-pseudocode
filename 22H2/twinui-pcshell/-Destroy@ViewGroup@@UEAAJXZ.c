/*
 * XREFs of ?Destroy@ViewGroup@@UEAAJXZ @ 0x1803065C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180051594 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewGroup::Destroy(ViewGroup *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (__int64 *)this + 17,
         *((struct IUnknown **)this + 20));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x265,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)(unsigned int)v2);
  AcquireSRWLockShared((PSRWLOCK)this + 21);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 28);
  try
  {
    v3 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 11);
    if ( this != (ViewGroup *)-168LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x26F,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                           v5);
  }
  return result;
}
