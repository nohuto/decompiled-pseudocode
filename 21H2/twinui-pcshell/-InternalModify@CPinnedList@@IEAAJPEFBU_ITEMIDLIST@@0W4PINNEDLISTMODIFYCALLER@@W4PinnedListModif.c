/*
 * XREFs of ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470
 * Callers:
 *     _lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator() @ 0x180136F68 (_lambda_d2b9f9141b354d7aab2c271df0a099ad_--operator().c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180153480 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180153860 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180153B40 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     ?MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180159E90 (-MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?Modify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180159EE0 (-Modify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180071D94 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F040 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013AD6C (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA?AV01@XZ @ 0x180152594 (--$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA-AV01@XZ.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x1801525C4 (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180152C04 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180152D74 (--1CPinList@@QEAA@XZ.c)
 *     ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ @ 0x180152ECC (--1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x18015326C (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x1801532F4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154294 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x180155840 (-GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@Y.c)
 *     GetPinSourceForPinnedItem @ 0x180156D54 (GetPinSourceForPinnedItem.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x18015726C (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x180157C30 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 *     ?IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z @ 0x180159510 (-IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z.c)
 *     ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x18015962C (-IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159B8C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015AA90 (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?PinnedListPlaceholderProcessed@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG_N@Z @ 0x18015AC9C (-PinnedListPlaceholderProcessed@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015AD90 (-PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000W4PINNEDLISTMODIFYCALLER.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18015B980 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     SetPinSourceForPinnedItem @ 0x18015BEBC (SetPinSourceForPinnedItem.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x18015BF8C (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C4E8 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015CF70 (-TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18015D328 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x18015D3BC (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x18015DC38 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18015DF88 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18015F008 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wi.c)
 *     ?get@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AXXZ@Z @ 0x18015F148 (-get@-$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AX.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18015F2BC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18015F320 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-ReleaseMutex@details@wil@@YAX0@ZU-$.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801A9984 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801AA5F4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1801AB9A4 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18020B134 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9D90 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1803BBE80 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804E01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_N.c)
 *     DSA_GetItemPtr @ 0x1804E7B50 (DSA_GetItemPtr.c)
 */

// Hidden C++ exception states: #wind=41
__int64 __fastcall CPinnedList::InternalModify(
        struct CPinnedList *a1,
        struct _ITEMIDLIST *a2,
        struct _ITEMIDLIST *a3,
        unsigned int a4,
        int a5)
{
  struct _ITEMIDLIST *v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  wil::details *v11; // rdi
  const WCHAR *v12; // rax
  HANDLE Mutex; // rax
  wil::details *v14; // rcx
  int LastErrorFailHr; // r14d
  wil::details *v16; // rbx
  void *v17; // rdx
  wil::details **v18; // r15
  int v19; // ebx
  int TimestampFromPidl; // eax
  __int64 v21; // rcx
  int BackupLnk; // r15d
  LPWSTR *v23; // r14
  __int64 v24; // r9
  wil::TraceLoggingProvider *v25; // rax
  const struct _ITEMIDLIST *v26; // rdx
  void (__fastcall *v27)(char *, LPITEMIDLIST, wchar_t **); // rbx
  char v28; // al
  __int64 v29; // rdx
  wchar_t *v30; // rdx
  char v31; // al
  char v32; // al
  __int64 v33; // rbx
  int ActivationFactory; // eax
  char v35; // al
  struct _FILETIME v36; // rbx
  __int64 (__fastcall *v37)(struct _FILETIME, GUID *, struct IApplicationResolver **); // rsi
  int v38; // eax
  unsigned __int16 **v39; // r9
  int AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier; // eax
  struct IApplicationResolver *v41; // rbx
  __int64 (__fastcall *v42)(struct IApplicationResolver *, _QWORD, __int64); // r14
  __int64 v43; // rsi
  __int64 v44; // rax
  unsigned int v45; // eax
  LPWSTR *v46; // r14
  __int64 v47; // r9
  __int64 v48; // r8
  ITEMIDLIST *v49; // rax
  int appended; // eax
  PINENTRY *ItemPtr; // rax
  void (__fastcall *v52)(char *, LPITEMIDLIST, struct _ITEMIDLIST **); // rbx
  __int64 v53; // rdx
  void *v54; // rdx
  bool v55; // [rsp+30h] [rbp-D0h]
  struct _ITEMIDLIST *v57; // [rsp+38h] [rbp-C8h]
  ITEMIDLIST *v58; // [rsp+40h] [rbp-C0h]
  ITEMIDLIST *v59; // [rsp+48h] [rbp-B8h]
  _BYTE v60[24]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h]
  _BYTE v62[24]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v63; // [rsp+90h] [rbp-70h]
  LPITEMIDLIST pidl; // [rsp+98h] [rbp-68h] BYREF
  struct IApplicationResolver *ppv; // [rsp+A0h] [rbp-60h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A8h] [rbp-58h] BYREF
  struct _ITEMIDLIST *v67[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-40h]
  wil::details *v69; // [rsp+C8h] [rbp-38h] BYREF
  LPWSTR *ppwsz; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t *Str[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v72; // [rsp+E8h] [rbp-18h]
  wil::details *v73; // [rsp+F0h] [rbp-10h] BYREF
  struct _ITEMIDLIST *v74; // [rsp+F8h] [rbp-8h] BYREF
  HDSA hdsa[2]; // [rsp+100h] [rbp+0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+110h] [rbp+10h] BYREF
  __int64 v77; // [rsp+128h] [rbp+28h]
  unsigned __int16 *v78[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v79; // [rsp+140h] [rbp+40h]
  unsigned __int16 *v80[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v81; // [rsp+158h] [rbp+58h]
  unsigned __int16 *v82[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v83; // [rsp+170h] [rbp+70h]
  _BYTE v84[320]; // [rsp+180h] [rbp+80h] BYREF
  WCHAR psz[264]; // [rsp+2C0h] [rbp+1C0h] BYREF
  WCHAR Filename[264]; // [rsp+4D0h] [rbp+3D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+738h] [rbp+638h]

  v6 = a2;
  v57 = a2;
  if ( (*(unsigned int (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 120LL))(a1) )
    return 2147942405LL;
  memset_0(v84, 0, 0x138uLL);
  TaskbarPinningTelemetry::PinningActivity::Start<>((TaskbarPinningTelemetry::PinningActivity *)v84);
  v58 = 0LL;
  v59 = 0LL;
  v74 = 0LL;
  if ( v6 )
  {
    v9 = SHLogILFromFSIL(v6);
    v58 = (ITEMIDLIST *)v9;
    if ( v9 )
      v6 = (struct _ITEMIDLIST *)v9;
    v57 = v6;
  }
  if ( (unsigned __int64)a3 >= 0x10000 )
  {
    v10 = SHLogILFromFSIL(a3);
    v59 = (ITEMIDLIST *)v10;
    if ( v10 )
      a3 = (struct _ITEMIDLIST *)v10;
  }
  v11 = 0LL;
  v73 = 0LL;
  v12 = (const WCHAR *)(*(__int64 (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 208LL))(a1);
  Mutex = CreateMutexExW(0LL, v12, 0, 0x1F0001u);
  if ( Mutex )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      &v73,
      Mutex);
    LastErrorFailHr = 0;
    v11 = v73;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v14);
  }
  v16 = 0LL;
  v69 = 0LL;
  if ( LastErrorFailHr >= 0 )
  {
    v18 = (wil::details **)_acquire___mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_PEAKKH_Z(
                             &v73,
                             &ppwsz);
    if ( &v69 != v18 )
    {
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v69,
        *v18);
      *v18 = 0LL;
      v16 = v69;
    }
    if ( ppwsz )
      wil::details::ReleaseMutex((wil::details *)ppwsz, v17);
    if ( !v16 )
      LastErrorFailHr = -2147019873;
  }
  *(_OWORD *)hdsa = 0LL;
  if ( LastErrorFailHr >= 0 && (int)CPinList::Load((CPinList *)hdsa, a1) >= 0 )
  {
    v55 = 0;
    pidl = 0LL;
    v19 = 1;
    if ( !v6 )
    {
      if ( a3 )
      {
        BackupLnk = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a1 + 104LL))(
                      a1,
                      psz,
                      260LL);
        if ( BackupLnk < 0 )
        {
LABEL_104:
          ILFree(pidl);
          goto LABEL_106;
        }
        v46 = (LPWSTR *)operator new(8uLL);
        *v46 = 0LL;
        BackupLnk = SHStrDupW(psz, v46);
        if ( BackupLnk >= 0 )
        {
          BackupLnk = CBackupLocationManager::CreateBackupLnk((CBackupLocationManager *)v46, a3, &pidl, v47);
          if ( BackupLnk >= 0 )
          {
            if ( (int)GetPinSourceForPinnedItem((__int64)a3, &ppv) < 0 || (v48 = (unsigned int)ppv, (_DWORD)ppv == 6) )
              v48 = 0LL;
            BackupLnk = SetPinSourceForPinnedItem(pidl, &pidl, v48);
            if ( BackupLnk >= 0 )
            {
              SystemTimeAsFileTime = 0LL;
              BackupLnk = SetPinTimeForPinnedItem(pidl, 0LL, (struct _ITEMIDLIST **)&SystemTimeAsFileTime);
              ILFree(pidl);
              v49 = (ITEMIDLIST *)SystemTimeAsFileTime;
              SystemTimeAsFileTime = 0LL;
              pidl = v49;
              CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&SystemTimeAsFileTime);
              if ( BackupLnk >= 0 )
              {
                BackupLnk = CacheAppIDInIDList(pidl);
                if ( BackupLnk >= 0 )
                {
                  appended = CPinList::AppendPidl((CPinList *)hdsa, a1, pidl);
                  if ( appended < 0 )
                  {
                    BackupLnk = -2147024882;
                  }
                  else
                  {
                    ItemPtr = (PINENTRY *)DSA_GetItemPtr(hdsa[0], appended);
                    PINENTRY::UpdateShellLink(ItemPtr);
                  }
                  if ( BackupLnk >= 0 )
                  {
                    v67[0] = 0LL;
                    v67[1] = 0LL;
                    v68 = 0LL;
                    v52 = *(void (__fastcall **)(char *, LPITEMIDLIST, struct _ITEMIDLIST **))(*((_QWORD *)a1 + 2) + 88LL);
                    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v67);
                    v67[1] = (struct _ITEMIDLIST *)-1LL;
                    v68 = -1LL;
                    v52((char *)a1 + 16, pidl, v67);
                    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
                    {
                      ppwsz = 0LL;
                      TaskbarPinningTelemetry::PinningActivity::PinnedListAdded(v84, v67[0], Filename, a4);
                      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&ppwsz);
                    }
                    BackupLnk = CPinList::Save((CPinList *)hdsa, a1);
                    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v67);
                    v6 = v57;
                    v19 = 1;
                  }
                }
              }
            }
          }
        }
        CBackupLocationManager::`scalar deleting destructor'((LPVOID *)v46);
      }
      else
      {
        BackupLnk = -2147024809;
      }
LABEL_99:
      if ( BackupLnk >= 0 )
      {
        _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
          &v69,
          0LL);
        if ( !v6 || a3 )
          v19 = 0;
        CPinnedList::_DoNotifyPinListChange(a1, pidl, v19);
      }
      goto LABEL_104;
    }
    if ( !a3 )
      goto LABEL_40;
    if ( (unsigned __int64)a3 < 0x10000 || !ILIsEqual(v6, a3) )
    {
      v55 = 1;
      (*(void (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 168LL))(a1);
    }
    if ( (unsigned __int64)a3 >= 0x10000 )
    {
      SystemTimeAsFileTime = 0LL;
      TimestampFromPidl = GetTimestampFromPidl(v6, -1091633109, &SystemTimeAsFileTime);
      if ( TimestampFromPidl < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C,
          (__int64)"internal\\shell\\private\\inc\\PinningTimeHelpers.h",
          (const char *)(unsigned int)TimestampFromPidl);
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      }
      BackupLnk = SetPinTimeForPinnedItem(a3, &SystemTimeAsFileTime, &v74);
      if ( BackupLnk < 0 )
        goto LABEL_41;
      a3 = v74;
    }
    if ( (unsigned __int64)a3 >= 0x10000 )
    {
      BackupLnk = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a1 + 104LL))(
                    a1,
                    psz,
                    260LL);
      wil::make_unique_nothrow<CBackupLocationManager,>(&ppwsz);
      v23 = ppwsz;
      v21 = 0LL;
      if ( ppwsz )
      {
        BackupLnk = SHStrDupW(psz, ppwsz);
        v21 = 0LL;
        if ( BackupLnk >= 0 )
        {
          ppv = 0LL;
          v67[0] = (struct _ITEMIDLIST *)&ppv;
          v67[1] = 0LL;
          LOBYTE(v68) = 1;
          BackupLnk = CBackupLocationManager::CreateBackupLnk((CBackupLocationManager *)v23, a3, &v67[1], v24);
          wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v67);
          if ( BackupLnk >= 0 )
            BackupLnk = CPinList::ReplacePidl(hdsa, a1, v6, ppv, a5, &pidl);
          wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &ppv,
            0LL);
          v21 = 0LL;
        }
      }
      ppwsz = 0LL;
      if ( v23 )
        CBackupLocationManager::`scalar deleting destructor'((LPVOID *)v23);
    }
    else
    {
LABEL_40:
      BackupLnk = CPinList::ReplacePidl(hdsa, a1, v6, a3, a5, &pidl);
    }
LABEL_41:
    v25 = (wil::TraceLoggingProvider *)wil::details::static_lazy<TaskbarPinningTelemetry>::get(
                                         v21,
                                         _lambda_576b8a055e1eddaf8c0f48bcebe2427e_::_lambda_invoker_cdecl_);
    if ( wil::TraceLoggingProvider::IsEnabled_(v25, 0) )
    {
      Str[0] = 0LL;
      Str[1] = 0LL;
      v72 = 0LL;
      if ( pidl )
      {
        v27 = *(void (__fastcall **)(char *, LPITEMIDLIST, wchar_t **))(*((_QWORD *)a1 + 2) + 88LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str);
        Str[1] = (wchar_t *)-1LL;
        v72 = -1LL;
        v27((char *)a1 + 16, pidl, Str);
        v6 = v57;
        v19 = 1;
      }
      if ( !Str[0] || (v28 = 0, !*Str[0]) )
        v28 = 1;
      if ( v28 )
      {
        ppv = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
        if ( CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               1u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               (LPVOID *)&ppv) >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str);
          Str[1] = (wchar_t *)-1LL;
          v72 = -1LL;
          _GetAppIDFromIDList(ppv, v6, Str, 0LL);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      }
      if ( TaskbarPinHelper::IsPlaceholderPin((TaskbarPinHelper *)v6, v26) )
      {
        TaskbarPinningTelemetry::PinningActivity::PinnedListPlaceholderProcessed(
          (TaskbarPinningTelemetry::PinningActivity *)v84,
          Str[0],
          v55);
      }
      else if ( v55 )
      {
        TaskbarPinningTelemetry::PinningActivity::TaskListTileMoved(v84, Str[0], a4);
      }
      else
      {
        v67[0] = 0LL;
        v67[1] = 0LL;
        v68 = 0LL;
        v82[0] = 0LL;
        v82[1] = 0LL;
        v83 = 0LL;
        v80[0] = 0LL;
        v80[1] = 0LL;
        v81 = 0LL;
        LOBYTE(v29) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetImpl'::`2'::impl,
          v29);
        v30 = Str[0];
        if ( !Str[0] || (v31 = 0, !*Str[0]) )
          v31 = 1;
        if ( !v31 )
        {
          (*(void (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 192LL))(a1);
          v30 = Str[0];
        }
        if ( !v30 || (v32 = 0, !*v30) )
          v32 = 1;
        if ( !v32 )
        {
          if ( SecondaryTileIdentifierHelpers::IsFullyQualifiedTileIdentifier(v30, v30) )
          {
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v80);
            v80[1] = (unsigned __int16 *)-1LL;
            v81 = -1LL;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v82);
            v82[1] = (unsigned __int16 *)-1LL;
            v83 = -1LL;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v67);
            v67[1] = (struct _ITEMIDLIST *)-1LL;
            v68 = -1LL;
            TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(Str[0], (unsigned __int16 *)v67, v82, v80);
            SystemTimeAsFileTime = 0LL;
            v77 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.UI.StartScreen.SecondaryTile",
              0x25u,
              0x24u);
            v33 = v77;
            Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&SystemTimeAsFileTime);
            ActivationFactory = RoGetActivationFactory(
                                  v33,
                                  &GUID_57f52ca0_51bc_4abf_8ebf_627a0398b05a,
                                  &SystemTimeAsFileTime);
            if ( ActivationFactory >= 0 )
            {
              v35 = 1;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x576,
                (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)ActivationFactory);
              v35 = 0;
            }
            v77 = 0LL;
            if ( v35 )
            {
              ppv = 0LL;
              v36 = SystemTimeAsFileTime;
              v37 = ***(__int64 (__fastcall ****)(struct _FILETIME, GUID *, struct IApplicationResolver **))&SystemTimeAsFileTime;
              Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&ppv);
              v38 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v37)(
                      v36,
                      &GUID_5365d67e_eedb_4ecd_a099_a195558a9f80,
                      &ppv);
              if ( v38 >= 0 )
              {
                memset(&hstringHeader, 0, sizeof(hstringHeader));
                v78[0] = 0LL;
                v78[1] = 0LL;
                v79 = 0LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v78);
                v78[1] = (unsigned __int16 *)-1LL;
                v79 = -1LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
                *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
                *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
                AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(
                                                                               Str[0],
                                                                               (unsigned __int16 *)&hstringHeader,
                                                                               v78,
                                                                               v39);
                if ( AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier >= 0 )
                {
                  v41 = ppv;
                  v42 = *(__int64 (__fastcall **)(struct IApplicationResolver *, _QWORD, __int64))(*(_QWORD *)ppv + 72LL);
                  v43 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v62, v78) + 24);
                  v44 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v60, &hstringHeader);
                  v45 = v42(v41, *(_QWORD *)(v44 + 24), v43);
                  wil::details::in1diag3::Log_IfFailedWithExpected(
                    retaddr,
                    (void *)0x57F,
                    (unsigned int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                    (const char *)v45,
                    1,
                    0x80070490);
                  v61 = 0LL;
                  v63 = 0LL;
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x57D,
                    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                    (const char *)(unsigned int)AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier);
                }
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v78);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x579,
                  (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v38);
              }
              Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&ppv);
              v6 = v57;
            }
            Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&SystemTimeAsFileTime);
            v19 = 1;
          }
          v30 = Str[0];
        }
        TaskbarPinningTelemetry::PinningActivity::PinnedListRemoved(v84, v30, v67[0], v82[0], v80[0], a4);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v80);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v82);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v67);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str);
    }
    goto LABEL_99;
  }
  BackupLnk = -2147024882;
LABEL_106:
  ILFree(v58);
  ILFree(v59);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    &v69,
    0LL);
  v53 = (unsigned int)BackupLnk;
  if ( v6 && !a3 && BackupLnk == -2147023728 )
    v53 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v84, v53);
  CPinList::~CPinList((CPinList *)hdsa);
  if ( v69 )
    wil::details::ReleaseMutex(v69, v54);
  if ( v11 )
    wil::details::CloseHandle(v11, v54);
  CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v74);
  TaskbarPinningTelemetry::PinningActivity::~PinningActivity((TaskbarPinningTelemetry::PinningActivity *)v84);
  return (unsigned int)BackupLnk;
}
