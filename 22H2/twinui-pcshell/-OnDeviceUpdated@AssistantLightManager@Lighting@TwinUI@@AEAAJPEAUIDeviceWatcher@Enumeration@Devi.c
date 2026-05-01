/*
 * XREFs of ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x1804BE660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x1804BD9D8 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x1804BE344 (-IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumer.c)
 *     ?RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x1804BE8AC (-RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::OnDeviceUpdated(
        TwinUI::Lighting::AssistantLightManager *this,
        struct Windows::Devices::Enumeration::IDeviceWatcher *a2,
        struct Windows::Devices::Enumeration::IDeviceInformationUpdate *a3)
{
  int IsDeviceEnabled; // eax
  TwinUI::Lighting::AssistantLightManager *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v11; // [rsp+40h] [rbp+18h] BYREF
  HSTRING string; // [rsp+48h] [rbp+20h] BYREF

  WindowsDeleteString(0LL);
  string = 0LL;
  IsDeviceEnabled = (*(__int64 (__fastcall **)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
                      a3,
                      &string);
  v7 = IsDeviceEnabled;
  if ( IsDeviceEnabled >= 0 )
  {
    IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::IsDeviceEnabled(v6, a3, &v11);
    v7 = IsDeviceEnabled;
    if ( IsDeviceEnabled >= 0 )
    {
      if ( v11 )
      {
        IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::AddDevice(this, string);
        v7 = IsDeviceEnabled;
        if ( IsDeviceEnabled < 0 )
        {
          v8 = 274LL;
          goto LABEL_5;
        }
      }
      else
      {
        IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::RemoveDevice(this, string);
        v7 = IsDeviceEnabled;
        if ( IsDeviceEnabled < 0 )
        {
          v8 = 278LL;
          goto LABEL_5;
        }
      }
      v7 = 0;
      goto LABEL_12;
    }
    v8 = 271LL;
  }
  else
  {
    v8 = 269LL;
  }
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
    (const char *)(unsigned int)IsDeviceEnabled);
LABEL_12:
  WindowsDeleteString(string);
  return v7;
}
