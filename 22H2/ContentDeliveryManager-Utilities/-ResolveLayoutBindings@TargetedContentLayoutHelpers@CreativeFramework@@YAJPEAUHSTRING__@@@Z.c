/*
 * XREFs of ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800A5D10
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::Run @ 0x18003D700 (Windows--Internal--COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows--Inte.c)
 * Callees:
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800A47C8 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x1800A48E4 (-StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A65A4 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A86D4 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@.c)
 *     ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800A880C (--0-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_T.c)
 *     ??1?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800A8A48 (--1-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@TargetedCon.c)
 *     ??1?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAA@XZ @ 0x1800A8CF4 (--1-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$allocat.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CFEF1 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        HSTRING a2)
{
  const wchar_t *StringRawBuffer; // rbx
  wil *v4; // rcx
  unsigned int v5; // r8d
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-328h] BYREF
  unsigned int v8; // [rsp+20h] [rbp-308h]
  HSTRING string[2]; // [rsp+30h] [rbp-2F8h] BYREF
  _OWORD v10[3]; // [rsp+40h] [rbp-2E8h] BYREF
  __int128 v11; // [rsp+70h] [rbp-2B8h] BYREF
  __int64 v12; // [rsp+80h] [rbp-2A8h]
  __int64 v13; // [rsp+90h] [rbp-298h]
  _QWORD v14[39]; // [rsp+98h] [rbp-290h] BYREF
  _QWORD v15[4]; // [rsp+1D0h] [rbp-158h] BYREF
  int v16; // [rsp+1F0h] [rbp-138h]
  int *v17; // [rsp+1F8h] [rbp-130h]
  int *v18; // [rsp+200h] [rbp-128h]
  int v19; // [rsp+208h] [rbp-120h] BYREF
  char v20; // [rsp+20Ch] [rbp-11Ch]
  int v21; // [rsp+230h] [rbp-F8h] BYREF
  const char *v22; // [rsp+238h] [rbp-F0h]
  __int64 v23; // [rsp+240h] [rbp-E8h]
  char v24; // [rsp+248h] [rbp-E0h]
  __int64 v25; // [rsp+250h] [rbp-D8h]
  _BYTE v26[144]; // [rsp+258h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+2E8h] [rbp-40h]
  __int128 v28; // [rsp+2F0h] [rbp-38h]
  __int64 v29; // [rsp+300h] [rbp-28h]

  v13 = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, 0LL);
  v15[1] = 0LL;
  v15[2] = v15;
  v15[3] = 0LL;
  v16 = 0;
  v17 = &v21;
  v18 = &v19;
  v19 = 0;
  v20 = 0;
  v24 = 0;
  v21 = 0;
  v22 = "LayoutResolver";
  v23 = 0LL;
  v25 = 1LL;
  v27 = 0LL;
  memset_0(v26, 0, sizeof(v26));
  v28 = 0LL;
  v29 = 0LL;
  v15[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
    (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v15,
    StringRawBuffer);
  *(_OWORD *)string = 0LL;
  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v12 = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v14,
    v15);
  try
  {
    v14[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings(string, this, v14);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v15);
    std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::~vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>(&v11);
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((char *)&v10[1] + 8);
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v10);
    WindowsDeleteString(string[1]);
    string[1] = 0LL;
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v15);
    result = 0LL;
  }
  catch ( ... )
  {
    v8 = wil::ResultFromCaughtException(v4, &v7, v5);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v15);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v15);
    return v8;
  }
  return result;
}
