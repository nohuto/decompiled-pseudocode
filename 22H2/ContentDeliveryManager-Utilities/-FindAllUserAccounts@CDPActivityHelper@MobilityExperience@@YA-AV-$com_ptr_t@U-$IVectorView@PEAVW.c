/*
 * XREFs of ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004B9D4
 * Callers:
 *     ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004CE9C (--R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180050150 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180051200 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAVWebAccount@Credentials@Security.c)
 *     ??_9IIdentityManager@ContentManagement@@$BDI@AA @ 0x180051E00 (--_9IIdentityManager@ContentManagement@@$BDI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::FindAllUserAccounts(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v12[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(v12);
  v15 = 0LL;
  v2 = *(_QWORD *)v12[0];
  v15 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v2 + 104))(v12[0], &v15);
  v4 = retaddr;
  if ( v3 < 0 )
    goto LABEL_14;
  v14 = 0LL;
  v5 =  ContentManagement::IIdentityManager::`vcall'{56,{flat}}(v15, &v14);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x652,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18004BB1FLL);
  }
  v7 = v14;
  v16 = 0LL;
  v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *> *>(v14);
  if ( v8 >= 0 )
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, &v16);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x63A,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v8);
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x173,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v3);
    goto LABEL_15;
  }
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v16;
  v16 = 0LL;
  *a1 = v10;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return a1;
}
