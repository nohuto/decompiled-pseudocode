/*
 * XREFs of ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x1804BE6D4
 * Callers:
 *     ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x1804BE9F0 (-OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devi.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x18006F4B4 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006F55C (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x18006F594 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Lighting::AssistantLightManager::IsDeviceEnabled(
        TwinUI::Lighting::AssistantLightManager *this,
        struct Windows::Devices::Enumeration::IDeviceInformationUpdate *a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rbx
  int v9; // edi
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int Boolean; // eax
  __int64 v14; // rcx
  unsigned __int8 v15[8]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v16; // [rsp+28h] [rbp-21h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-19h] BYREF
  int v18; // [rsp+38h] [rbp-11h]
  _QWORD *v19; // [rsp+40h] [rbp-9h] BYREF
  struct IInspectable *v20; // [rsp+48h] [rbp-1h] BYREF
  __int64 v21; // [rsp+50h] [rbp+7h] BYREF
  int v22; // [rsp+58h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+17h] BYREF
  __int64 v24; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v16 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, __int64 *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_3:
    v6 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v5;
  }
  v17 = 0LL;
  v18 = 0;
  v8 = v16;
  v19 = &v17;
  v20 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"System.Devices.InterfaceEnabled",
    0x20u,
    0x1Fu);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v8 + 48LL))(v8, v24, &v20);
  v24 = 0LL;
  v10 = v19;
  RoVariant::RoVariant((RoVariant *)&v21, v20);
  v11 = *v10;
  *v10 = v21;
  v21 = v11;
  LODWORD(v11) = *((_DWORD *)v10 + 2);
  *((_DWORD *)v10 + 2) = v22;
  v22 = v11;
  RoVariant::~RoVariant((RoVariant *)&v21);
  if ( v9 >= 0 )
  {
    v19 = v17;
    LODWORD(v20) = v18;
    Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v19, v15);
    v5 = Boolean;
    if ( Boolean < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)Boolean);
      RoVariant::~RoVariant((RoVariant *)&v17);
      goto LABEL_3;
    }
    *a3 = v15[0] != 0;
    RoVariant::~RoVariant((RoVariant *)&v17);
    v14 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v9);
    RoVariant::~RoVariant((RoVariant *)&v17);
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return (unsigned int)v9;
  }
}
