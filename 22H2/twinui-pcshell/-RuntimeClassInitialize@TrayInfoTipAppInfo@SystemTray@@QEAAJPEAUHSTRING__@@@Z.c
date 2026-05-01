/*
 * XREFs of ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1803EAC04
 * Callers:
 *     ??$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Z @ 0x1803E8D8C (--$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAU.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180053148 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ??$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayInfoTipDisplayInfo@SystemTray@@$$QEAPEAUHSTRING__@@@Z @ 0x1803EA7C0 (--$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microso.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfo::RuntimeClassInitialize(
        SystemTray::TrayInfoTipAppInfo *this,
        HSTRING a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  HSTRING v6; // rax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v9; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 8, &v10);
  if ( v3 < 0 )
  {
    v4 = 15LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfo.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = (HSTRING)*((_QWORD *)this + 8);
  v7 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  v9 = v6;
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v7);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipDisplayInfo,SystemTray::TrayInfoTipDisplayInfo,HSTRING__ *>(
         (volatile signed __int64 **)this + 9,
         &v9);
  if ( v3 >= 0 )
    return 0LL;
  result = 2147746132LL;
  if ( v3 != -2147221164 )
  {
    v4 = 16LL;
    goto LABEL_3;
  }
  return result;
}
