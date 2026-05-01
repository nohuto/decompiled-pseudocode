/*
 * XREFs of ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002BEC0
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_a3795b8e063e319a63f5a3b15bc55068_::operator() @ 0x18002A1A8 (_lambda_a3795b8e063e319a63f5a3b15bc55068_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180016A30 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x18003A2A4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v9; // edi
  HSTRING v11; // rax
  int v12[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v6 = *((_QWORD *)this + 33);
  if ( v6 && *((_QWORD *)this + 34) )
  {
    LOBYTE(v5) = 1;
    *(_OWORD *)v12 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                                  v6,
                                  v5);
    WindowsDeleteString(0LL);
    v7 = *((_QWORD *)this + 34);
    string = 0LL;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(v7, (__int128 *)v12, 26LL, &string);
    v9 = StringPropertyFromGameConfigStore;
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BC,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)StringPropertyFromGameConfigStore);
      WindowsDeleteString(string);
      string = 0LL;
      if ( v2 )
        LeaveCriticalSection(v2);
      return v9;
    }
    v11 = string;
    string = 0LL;
    *a2 = v11;
    WindowsDeleteString(0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
