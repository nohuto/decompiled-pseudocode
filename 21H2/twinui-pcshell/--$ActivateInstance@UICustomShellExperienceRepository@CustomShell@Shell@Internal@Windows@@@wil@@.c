/*
 * XREFs of ??$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18020A400
 * Callers:
 *     ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18020AF00 (-TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180099950 (--$query@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@-$com_ptr_t@UIIn.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rdi
  int v5; // eax
  __int64 v7[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = L"Windows.Internal.Shell.CustomShell.CustomShellExperienceRepository";
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, &v8, a3);
  v7[0] = 0LL;
  v5 = RoActivateInstance(v4[1].Reserved.Reserved1, v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1642LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>(
    v7,
    a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v7);
  return a1;
}
