/*
 * XREFs of ?Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x180093FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086FF0 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180086FF0.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::NotificationManagerService::Revert(
        CreativeFramework::Actions::NotificationManagerService *this)
{
  __int64 v2; // rax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, PVOID); // rsi
  const WCHAR *v7; // rax
  PVOID Reserved1; // r14
  const WCHAR *v9; // rax
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+28h] [rbp-29h] BYREF
  const WCHAR *v13; // [rsp+30h] [rbp-21h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-19h] BYREF
  HSTRING_HEADER v15; // [rsp+48h] [rbp-9h] BYREF
  HSTRING_HEADER v16; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v14[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v14);
  v12 = 0LL;
  v2 = *(_QWORD *)v14[0];
  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v2 + 72))(v14[0], &v12);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x7C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800940EDLL);
  }
  v5 = v12;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID))(*(_QWORD *)v12 + 64LL);
  v7 = (const WCHAR *)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v7 = *(const WCHAR **)v7;
  v13 = v7;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, &v13)[1].Reserved.Reserved1;
  v9 = (const WCHAR *)((char *)this + 48);
  if ( *((_QWORD *)this + 9) >= 8uLL )
    v9 = *(const WCHAR **)v9;
  v13 = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, &v13);
  v11 = v6(v5, v10[1].Reserved.Reserved1, Reserved1);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_13;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
}
