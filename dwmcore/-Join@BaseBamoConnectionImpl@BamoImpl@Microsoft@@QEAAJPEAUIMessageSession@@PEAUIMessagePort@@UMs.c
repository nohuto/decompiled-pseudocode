/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800AC670
 * Callers:
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x1800ACCEC (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800AAC4C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800AC24C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ACBA0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180103C70 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801B59C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        const char *a4,
        unsigned __int16 *a5)
{
  int v9; // eax
  unsigned __int64 v10; // r14
  int v11; // eax
  __int64 (__fastcall *v12)(__int64 *, wil::details *, unsigned __int16 *, __int64); // r14
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int ConversationHost; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64 *, __int64); // r15
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r14
  void *v25; // rdx
  int v27; // [rsp+20h] [rbp-69h]
  wil::details *v28; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-19h] BYREF
  int v30; // [rsp+78h] [rbp-11h]
  unsigned __int16 v31[8]; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  if ( *(_QWORD *)(a1 + 64) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x174,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  if ( *(_BYTE *)(a1 + 218) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17C,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  *(_QWORD *)v31 = *(_QWORD *)L"_BAMO";
  *(_DWORD *)&v31[4] = *(_DWORD *)L"O";
  v9 = StringCchLengthW(a5, 0x7FFFFFFFLL, &v29);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v9,
      v27);
  v10 = v29;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v28,
    a5,
    v29 + 6);
  if ( v28 )
  {
    v11 = StringCchCatW((unsigned __int16 *)v28, v10 + 6, v31);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x196,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v11,
        v27);
    Microsoft::BamoImpl::InternalLock::InternalLock(
      (Microsoft::BamoImpl::InternalLock *)&v29,
      *(struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 96));
    v12 = *(__int64 (__fastcall **)(__int64 *, wil::details *, unsigned __int16 *, __int64))(*a2 + 296);
    *(_OWORD *)v31 = *(_OWORD *)a4;
    v13 = v12(a2, v28, a5, a3);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v13,
        (int)v31);
      Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v29);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v28);
      return v14;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v16 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 72, a1 + 80);
      if ( ConversationHost < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1DC,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)ConversationHost,
          (int)v31);
      v18 = *a2;
      v19 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = 0LL;
      v20 = *(__int64 (__fastcall **)(__int64 *, __int64))(v18 + 40);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v21 = v20(a2, a1 + 56);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E3,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v21,
          (int)v31);
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56), a1 + 24);
      if ( v22 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E5,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v22,
          (int)v31);
      *(_DWORD *)(a1 + 28) = v30;
      v23 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v24 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = a2;
      (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v29);
      wil::details::FreeProcessHeap(v28, v25);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x8007000ELL,
      v27);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v28);
    return 2147942414LL;
  }
}
