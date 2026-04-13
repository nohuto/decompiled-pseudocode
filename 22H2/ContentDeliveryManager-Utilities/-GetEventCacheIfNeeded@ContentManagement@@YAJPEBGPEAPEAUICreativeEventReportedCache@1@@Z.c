/*
 * XREFs of ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18002F3B8
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002F580 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18002FF00 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800072BC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014B70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x180031ECC (-GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICreativeEventReportedCache@ContentManagement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800334F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800334F0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CFA74 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::GetEventCacheIfNeeded(
        ContentManagement *this,
        const unsigned __int16 *a2,
        struct ContentManagement::ICreativeEventReportedCache **a3)
{
  __int64 v5; // rax
  char *v6; // rax
  char *v7; // rdi
  int Interface; // ebx
  _QWORD *v9; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  LPVOID *v11; // rsi
  int CreativeEventCacheRegPath; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 2LL;
  do
  {
    *(_QWORD *)a2 = 0LL;
    --v5;
  }
  while ( v5 );
  v6 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    Interface = -2147024882;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v9 = v6 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 8));
  v10 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IInspectable'};
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'};
  *((_QWORD *)v7 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v7 + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ICreativeEventReportedCache>'};
  *((_QWORD *)v7 + 8) = 1LL;
  if ( v10 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = (LPVOID *)(v7 + 96);
  *(_QWORD *)v7 = &ContentManagement::CreativeEventReportedCache::`vftable'{for `IInspectable'};
  *((_QWORD *)v7 + 9) = 0LL;
  *((_QWORD *)v7 + 12) = 0LL;
  *((_QWORD *)v7 + 13) = 0LL;
  *((_QWORD *)v7 + 14) = 0LL;
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'};
  *((_QWORD *)v7 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v7 + 6) = &ContentManagement::CreativeEventReportedCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ICreativeEventReportedCache>'};
  *((_QWORD *)v7 + 10) = -1LL;
  *((_QWORD *)v7 + 11) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                (const unsigned __int16 *)this,
                                (unsigned __int16 **)v7 + 9);
  Interface = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    v13 = 207LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventCacheRegPath);
    goto LABEL_15;
  }
  if ( *v11 )
  {
    CoTaskMemFree(*v11);
    *v11 = 0LL;
  }
  *((_QWORD *)v7 + 13) = -1LL;
  *((_QWORD *)v7 + 14) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                (const unsigned __int16 *)this,
                                (unsigned __int16 **)v7 + 12);
  Interface = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    v13 = 208LL;
    goto LABEL_9;
  }
  Interface = 0;
LABEL_15:
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::QueryInterface(
                  v7,
                  &GUID_d78a1df0_8b05_4341_bb0a_c4447a03a912,
                  a2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((volatile signed __int64 *)v7);
  if ( Interface < 0 )
    goto LABEL_18;
  return 0LL;
}
