/*
 * XREFs of ?Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800984B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086FF0 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180086FF0.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::PublishSystemStateService::Invoke(
        CreativeFramework::Actions::PublishSystemStateService *this)
{
  __int64 v2; // rax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, _QWORD, __int64); // r14
  __int64 v7; // rsi
  unsigned int v8; // ebp
  const WCHAR *v9; // rax
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-60h] BYREF
  const WCHAR *v14[2]; // [rsp+40h] [rbp-58h] BYREF
  HSTRING_HEADER v15; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v14[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v13);
  v12 = 0LL;
  v2 = *v13;
  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 112))(v13, &v12);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishsystemstate.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800985F3LL);
  }
  v5 = v12;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, __int64))(*(_QWORD *)v12 + 48LL);
  v7 = *((_QWORD *)this + 5);
  v8 = *((_DWORD *)this + 12);
  v9 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v9 = *(const WCHAR **)v9;
  v14[0] = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, v14);
  v11 = v6(v5, v10[1].Reserved.Reserved1, v8, v7);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishsystemstate.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_11;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
}
