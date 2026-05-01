/*
 * XREFs of ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A700
 * Callers:
 *     ?PinShellLink@CPinnedList@@W7EAAJPEBGPEAUIShellLinkW@@@Z @ 0x180171FD0 (-PinShellLink@CPinnedList@@W7EAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA?AV01@XZ @ 0x180152594 (--$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA-AV01@XZ.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x1801525C4 (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180152C04 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180152D74 (--1CPinList@@QEAA@XZ.c)
 *     ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ @ 0x180152ECC (--1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x18015326C (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x1801532F4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x1801540AC (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159B8C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015AA90 (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015B504 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning@@@d.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18015B980 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     SetPinSourceForPinnedItem @ 0x18015BEBC (SetPinSourceForPinnedItem.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C4E8 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18015D328 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x18015D3BC (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x18015DC38 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     DSA_GetItemPtr @ 0x1804E7B50 (DSA_GetItemPtr.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinnedList::PinShellLink(CPinnedList *this, char *a2, struct IShellLinkW *a3)
{
  char *v4; // r14
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  int appended; // eax
  PINENTRY *ItemPtr; // rax
  __int64 (__fastcall *v18)(CPinnedList *, struct _ITEMIDLIST *, __int128 *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  struct _ITEMIDLIST *v22; // [rsp+20h] [rbp-E0h] BYREF
  LPWSTR *ppwsz; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  HDSA hdsa[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v27[320]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR psz[264]; // [rsp+1A0h] [rbp+A0h] BYREF
  WCHAR Filename[264]; // [rsp+3B0h] [rbp+2B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5F8h] [rbp+4F8h]

  v4 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning>::GetImpl'::`2'::impl,
    a2);
  memset_0(v27, 0, 0x138uLL);
  TaskbarPinningTelemetry::PinningActivity::Start<>((TaskbarPinningTelemetry::PinningActivity *)v27);
  v6 = (*(__int64 (__fastcall **)(char *, WCHAR *, __int64))(*((_QWORD *)this - 2) + 104LL))(
         (char *)this - 16,
         psz,
         260LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79C,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_33;
  }
  wil::make_unique_nothrow<CBackupLocationManager,>(&ppwsz);
  if ( !ppwsz )
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 1951LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)v8);
    goto LABEL_31;
  }
  v10 = SHStrDupW(psz, ppwsz);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v9 = 1952LL;
    goto LABEL_7;
  }
  v22 = 0LL;
  v11 = CBackupLocationManager::CreateBackupLnk((CBackupLocationManager *)ppwsz, v4, a3, &v22);
  v7 = v11;
  if ( v11 >= 0 )
  {
    v11 = SetPinSourceForPinnedItem(v22, &v22, 0LL);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 1956LL;
      goto LABEL_14;
    }
    v11 = CacheAppIDInIDList(v22);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 1957LL;
      goto LABEL_14;
    }
    *(_OWORD *)hdsa = 0LL;
    v13 = CPinList::Load(hdsa, (CPinnedList *)((char *)this - 16));
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 1960LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)v14);
LABEL_29:
      CPinList::~CPinList((CPinList *)hdsa);
      goto LABEL_30;
    }
    appended = CPinList::AppendPidl((CPinList *)hdsa, (CPinnedList *)((char *)this - 16), v22);
    if ( appended < 0 )
    {
      v7 = -2147024882;
      v14 = 2147942414LL;
      v15 = 1962LL;
      goto LABEL_19;
    }
    ItemPtr = (PINENTRY *)DSA_GetItemPtr(hdsa[0], appended);
    PINENTRY::UpdateShellLink(ItemPtr);
    v25 = 0LL;
    v24 = 0uLL;
    v18 = *(__int64 (__fastcall **)(CPinnedList *, struct _ITEMIDLIST *, __int128 *))(*(_QWORD *)this + 88LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    *((_QWORD *)&v24 + 1) = -1LL;
    v25 = -1LL;
    v19 = v18(this, v22, &v24);
    v7 = v19;
    if ( v19 >= 0 )
    {
      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
        TaskbarPinningTelemetry::PinningActivity::PinnedListAdded(v27, v24, Filename, 17LL);
      v19 = CPinList::Save((CPinList *)hdsa, (CPinnedList *)((char *)this - 16));
      v7 = v19;
      if ( v19 >= 0 )
      {
        CPinnedList::_DoNotifyPinListChange((CPinnedList *)((char *)this - 16), v22, 0);
        wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v27,
          0LL);
        v7 = 0;
        goto LABEL_28;
      }
      v20 = 1977LL;
    }
    else
    {
      v20 = 1970LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v19);
LABEL_28:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    goto LABEL_29;
  }
  v12 = 1955LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)(unsigned int)v11);
LABEL_30:
  CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v22);
LABEL_31:
  if ( ppwsz )
    CBackupLocationManager::`scalar deleting destructor'((LPVOID *)ppwsz);
LABEL_33:
  TaskbarPinningTelemetry::PinningActivity::~PinningActivity((TaskbarPinningTelemetry::PinningActivity *)v27);
  return v7;
}
