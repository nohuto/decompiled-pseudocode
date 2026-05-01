/*
 * XREFs of ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18029047C
 * Callers:
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18028FF18 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x1800616FC (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x180086B6C (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18028D174 (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18028FE28 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(
        RTL_SRWLOCK *this,
        struct Windows::Data::Json::IJsonObject *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Data::Json::IJsonObject *, PVOID, _QWORD); // rbx
  unsigned int v5; // r8d
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, HSTRING *); // rdi
  unsigned int v21; // r8d
  HSTRING_HEADER *v22; // rax
  int v23; // eax
  unsigned int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, PVOID, double *); // rdi
  HSTRING_HEADER *v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, PVOID, double *); // rdi
  HSTRING_HEADER *v32; // rax
  unsigned int v33; // r8d
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, PVOID, double *); // rdi
  HSTRING_HEADER *v36; // rax
  unsigned int v37; // r8d
  __int64 v38; // rbx
  __int64 (__fastcall *v39)(__int64, PVOID, _BYTE *); // rdi
  HSTRING_HEADER *v40; // rax
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v42; // r8
  const char *v43; // r9
  HSTRING string; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v46[8]; // [rsp+28h] [rbp-180h] BYREF
  __int64 v47; // [rsp+30h] [rbp-178h] BYREF
  __int64 v48; // [rsp+38h] [rbp-170h] BYREF
  __int64 v49[2]; // [rsp+40h] [rbp-168h] BYREF
  std::_Ref_count_base *v50[2]; // [rsp+50h] [rbp-158h] BYREF
  __int64 (__fastcall ***v51)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-148h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-140h] BYREF
  RTL_SRWLOCK *v53; // [rsp+70h] [rbp-138h] BYREF
  double v54; // [rsp+78h] [rbp-130h] BYREF
  double v55; // [rsp+80h] [rbp-128h] BYREF
  double v56; // [rsp+88h] [rbp-120h] BYREF
  __int128 v57; // [rsp+90h] [rbp-118h] BYREF
  _BYTE v58[16]; // [rsp+A8h] [rbp-100h] BYREF
  HSTRING_HEADER v59; // [rsp+B8h] [rbp-F0h] BYREF
  HSTRING_HEADER v60; // [rsp+D8h] [rbp-D0h] BYREF
  HSTRING_HEADER v61; // [rsp+F8h] [rbp-B0h] BYREF
  HSTRING_HEADER v62; // [rsp+118h] [rbp-90h] BYREF
  HSTRING_HEADER v63; // [rsp+138h] [rbp-70h] BYREF
  HSTRING_HEADER v64; // [rsp+158h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v51 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, PVOID, _QWORD))(*(_QWORD *)a2 + 72LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)off_180540E08, v5);
  v7 = v4(a2, v6[1].Reserved.Reserved1, &v51);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_38;
  }
  v48 = 0LL;
  v9 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v51,
         &v48);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 573LL;
    goto LABEL_5;
  }
  v11 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v48 + 56LL))(v48, &v52);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 577LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v9);
LABEL_6:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
    goto LABEL_38;
  }
  v12 = 0;
  while ( v12 < v52 )
  {
    v49[0] = 0LL;
    v13 = v48;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v48 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
    v15 = v14(v13, v12, v49);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_13;
    }
    v47 = 0LL;
    v16 = v49[0];
    v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49[0] + 96LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v18 = v17(v16, &v47);
    v8 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x248,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_16;
    }
    string = 0LL;
    v19 = v47;
    v20 = *(__int64 (__fastcall **)(__int64, PVOID, HSTRING *))(*(_QWORD *)v47 + 80LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v60, (const WCHAR **)off_180540E10, v21);
    v23 = v20(v19, v22[1].Reserved.Reserved1, &string);
    v8 = v23;
    if ( v23 < 0 )
    {
      v25 = 587LL;
      goto LABEL_19;
    }
    v26 = v47;
    v27 = *(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v47 + 88LL);
    v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v61, (const WCHAR **)off_180540E18, v24);
    v23 = v27(v26, v28[1].Reserved.Reserved1, &v54);
    v8 = v23;
    if ( v23 < 0 )
    {
      v25 = 590LL;
      goto LABEL_19;
    }
    v30 = v47;
    v31 = *(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v47 + 88LL);
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v62, (const WCHAR **)off_180540E20, v29);
    v23 = v31(v30, v32[1].Reserved.Reserved1, &v55);
    v8 = v23;
    if ( v23 < 0 )
    {
      v25 = 593LL;
      goto LABEL_19;
    }
    v34 = v47;
    v35 = *(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v47 + 88LL);
    v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, (const WCHAR **)off_180540E28, v33);
    v23 = v35(v34, v36[1].Reserved.Reserved1, &v56);
    v8 = v23;
    if ( v23 < 0 )
    {
      v25 = 596LL;
      goto LABEL_19;
    }
    v38 = v47;
    v39 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v47 + 96LL);
    v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v64, (const WCHAR **)off_180540E30, v37);
    v23 = v39(v38, v40[1].Reserved.Reserved1, v46);
    v8 = v23;
    if ( v23 < 0 )
    {
      v25 = 599LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v23);
      WindowsDeleteString(string);
      string = 0LL;
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
      goto LABEL_6;
    }
    try
    {
      std::make_shared<PenWorkspace::Discover::AppUsageData,>((__int64 *)v50);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v42 = -1LL;
      do
        ++v42;
      while ( StringRawBuffer[v42] );
      std::wstring::assign((char *)v50[0], StringRawBuffer, v42);
      *((_DWORD *)v50[0] + 8) = (int)v54;
      *((_DWORD *)v50[0] + 9) = (int)v55;
      *((_DWORD *)v50[0] + 10) = (int)v56;
      *((_BYTE *)v50[0] + 44) = v46[0] != 0;
      if ( v50[1] )
        _InterlockedIncrement((volatile signed __int32 *)v50[1] + 2);
      v57 = *(_OWORD *)v50;
      if ( PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem((__int64)this, (const WCHAR **)&v57) )
        ++v11;
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v53, this + 21);
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::wstring &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &>(
        (__int64)&this[2],
        (__int64)v58);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v53);
      if ( v50[1] )
        std::_Ref_count_base::_Decref(v50[1]);
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
      ++v12;
    }
    catch ( ... )
    {
      LODWORD(v53) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x26A,
                       (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                       v43);
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
      v8 = (unsigned int)v53;
      goto LABEL_38;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
  v8 = -2147467259;
  if ( v11 >= 6 )
    v8 = 0;
LABEL_38:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
  return v8;
}
