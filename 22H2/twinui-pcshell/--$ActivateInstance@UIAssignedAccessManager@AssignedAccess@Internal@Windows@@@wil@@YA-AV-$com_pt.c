/*
 * XREFs of ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800D6070
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D668C (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<Windows::Internal::AssignedAccess::IAssignedAccessManager>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  __int64 v9[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v10; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v11; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v10 = L"Windows.Internal.AssignedAccess.AssignedAccessManager";
  v9[0] = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, &v10, a3);
  v5 = RoActivateInstance(v4[1].Reserved.Reserved1, v9);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_5:
    wil::details::in1diag3::Throw_Hr(
      v6,
      1642LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v9[0])(
         v9[0],
         &GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a,
         a1);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v7);
    goto LABEL_5;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
  return a1;
}
