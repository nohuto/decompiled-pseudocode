/*
 * XREFs of ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIImageSource@Media@Xaml@UI@6@@Z @ 0x1803ABB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x180228270 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1803A9104 (--$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppViewIconFactory::CreateImageSource(__int64 a1, __int64 a2, _QWORD *a3)
{
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-70h] BYREF
  int v15[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+58h] [rbp-50h] BYREF
  HSTRING_HEADER v19; // [rsp+60h] [rbp-48h] BYREF
  __int64 v20; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a3 = 0LL;
  v13 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v19,
    L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap",
    0x2Eu,
    0x2Du);
  try
  {
    v13 = 0LL;
    ActivationFactory = RoGetActivationFactory(v20, &GUID_5563ebb1_3ef2_42c5_9c6d_1cf5dcc041ff, &v13);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        91LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)(unsigned int)ActivationFactory);
    v7 = MulDiv((int)*(float *)a2, *(_DWORD *)(a2 + 24), 96);
    v8 = (unsigned int)MulDiv((int)*(float *)(a2 + 4), *(_DWORD *)(a2 + 24), 96);
    v14 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v13 + 48LL))(
           v13,
           v7,
           v8,
           &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        96LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewIconFactory.h",
        (const char *)(unsigned int)v9);
    *(_QWORD *)v15 = *(_QWORD *)(a1 + 40);
    v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
    v17 = *(_QWORD *)(a1 + 32);
    wil::MakeAndInitializeOrThrow<AppViewIconLoader,Windows::Internal::ComposableShell::Multitasking::IconProperties &,IApplicationView *,Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *,IApplicationViewIconLoader *>(
      &v18,
      (__int128 *)a2,
      &v17,
      &v16,
      v15);
    v10 = (**v14)(v14, &GUID_737ef309_ea41_4d96_a71c_98e98efcab07, a3);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x66,
                           (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewIconFactory.h",
                           v11);
  }
  return result;
}
