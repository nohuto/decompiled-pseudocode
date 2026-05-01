/*
 * XREFs of ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028468
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800275EC (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180027850 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180016A30 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18002A6E4 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // rax
  __int128 v4; // xmm0
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int GamesListProperties; // eax
  __int64 v10; // rdx
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v11; // rdi
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v12; // rcx
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *v17; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v18 = v2;
  v3 = *((_QWORD *)this + 35);
  if ( !v3 || !*((_QWORD *)this + 36) )
  {
    if ( !*((_QWORD *)this + 34) )
    {
      v6 = -2147418113;
      v7 = 2147549183LL;
      v8 = 429LL;
      goto LABEL_21;
    }
    v17 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            &v17);
    v6 = GamesListProperties;
    if ( GamesListProperties >= 0 )
    {
      v11 = v17;
      WindowsDeleteString(*((HSTRING *)this + 19));
      *((_QWORD *)this + 19) = 0LL;
      GamesListProperties = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *, char *))(*(_QWORD *)v11 + 64LL))(
                              v11,
                              (char *)this + 152);
      v6 = GamesListProperties;
      if ( GamesListProperties >= 0 )
      {
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        goto LABEL_17;
      }
      v10 = 425LL;
    }
    else
    {
      v10 = 424LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_22;
  }
  if ( *(_QWORD *)(v3 + 88) )
    v4 = *(_OWORD *)(**(_QWORD **)(v3 + 80) + 32LL);
  else
    v4 = xmmword_180052CB8;
  v15 = v4;
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                        *((_QWORD *)this + 36),
                                        &v15,
                                        15LL,
                                        (HSTRING *)this + 19);
  v6 = StringPropertyFromGameConfigStore;
  if ( StringPropertyFromGameConfigStore < 0 )
  {
    v7 = (unsigned int)StringPropertyFromGameConfigStore;
    v8 = 419LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v7);
LABEL_22:
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
LABEL_17:
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
