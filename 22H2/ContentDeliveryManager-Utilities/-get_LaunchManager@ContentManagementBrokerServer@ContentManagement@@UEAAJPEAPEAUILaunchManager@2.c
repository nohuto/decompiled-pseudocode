/*
 * XREFs of ?get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2@@Z @ 0x180013F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800072BC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180059904 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CFA74 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_LaunchManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::ILaunchManager **a2,
        bool *a3)
{
  int v4; // eax
  int v5; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  int v9; // edi
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct ContentManagement::ILaunchManager **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct ContentManagement::ILaunchManager **); // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", &v16, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !(_BYTE)v16 )
    {
      v5 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x76,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80070005LL);
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v5 < 0 )
    goto LABEL_7;
  v17 = 0LL;
  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_13:
    v11 = (unsigned int)v9;
    v12 = 1118LL;
    goto LABEL_16;
  }
  v10 = v7 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 1));
  v8[8] = 1LL;
  *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::`vftable'{for `IInspectable'};
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ILaunchManager>'};
  v8[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::`vftable'{for `IWeakReferenceSource'};
  v8[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ILaunchManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v8 = &ContentManagement::LaunchManager::`vftable'{for `IInspectable'};
  *v10 = &ContentManagement::LaunchManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ILaunchManager>'};
  v8[5] = &ContentManagement::LaunchManager::`vftable'{for `IWeakReferenceSource'};
  v8[6] = &ContentManagement::LaunchManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ILaunchManager>'};
  v9 = ((__int64 (__fastcall *)(_QWORD *, GUID *, _QWORD))ContentManagement::LaunchManager::`vftable'{for `IInspectable'})(
         v8,
         &GUID_3cb33ed0_2338_4892_aa4c_c96803309c9a,
         &v17);
  (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v9 < 0 )
    goto LABEL_13;
  v13 = (**v17)(v17, &GUID_3cb33ed0_2338_4892_aa4c_c96803309c9a, a2);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v9 = 0;
    goto LABEL_18;
  }
  v11 = (unsigned int)v13;
  v12 = 1119LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v11);
LABEL_18:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::ILaunchManager **)))(*v14)[2])(v14);
  }
  return (unsigned int)v9;
}
