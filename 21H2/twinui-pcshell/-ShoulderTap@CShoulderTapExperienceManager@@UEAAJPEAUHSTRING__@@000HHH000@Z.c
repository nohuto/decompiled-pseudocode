/*
 * XREFs of ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x180240F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001503C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180053148 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShoulderTap@PEBGPEBGPEBGAEAHAEAHAEAH@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG00AEAH11@Z @ 0x18023F364 (--$ShoulderTap@PEBGPEBGPEBGAEAHAEAHAEAH@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG00AEA.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x180240864 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CShoulderTapExperienceManager::ShoulderTap(
        HSTRING *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        int a6,
        int a7,
        int a8,
        HSTRING a9,
        HSTRING a10,
        HSTRING string)
{
  int v13; // ebx
  __int64 v14; // rdx
  PCWSTR v16; // [rsp+30h] [rbp-10h] BYREF
  PCWSTR v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  PCWSTR StringRawBuffer; // [rsp+60h] [rbp+20h] BYREF
  HSTRING v20; // [rsp+68h] [rbp+28h] BYREF
  HSTRING v21; // [rsp+70h] [rbp+30h] BYREF
  HSTRING v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v16 = WindowsGetStringRawBuffer(a10, 0LL);
  v17 = WindowsGetStringRawBuffer(a3, 0LL);
  ShoulderTapExperienceManagerTelemetry::ShoulderTap<unsigned short const *,unsigned short const *,unsigned short const *,int &,int &,int &>(
    &v17,
    &v16,
    &StringRawBuffer,
    &a6,
    &a7,
    &a8);
  Microsoft::WRL::Wrappers::HString::Set(this + 33, &v20);
  Microsoft::WRL::Wrappers::HString::Set(this + 34, &v21);
  Microsoft::WRL::Wrappers::HString::Set(this + 35, &v22);
  Microsoft::WRL::Wrappers::HString::Set(this + 36, &a5);
  *((_DWORD *)this + 74) = a6;
  *((_DWORD *)this + 75) = a7;
  *((_DWORD *)this + 76) = a8;
  Microsoft::WRL::Wrappers::HString::Set(this + 39, &a9);
  Microsoft::WRL::Wrappers::HString::Set(this + 40, &a10);
  Microsoft::WRL::Wrappers::HString::Set(this + 41, &string);
  if ( *((_DWORD *)this + 20) )
  {
    v13 = CShoulderTapExperienceManager::Reactivate((CShoulderTapExperienceManager *)this, 0);
    if ( v13 < 0 )
    {
      v14 = 219LL;
      goto LABEL_4;
    }
  }
  else
  {
    v13 = CSingleViewShellExperience::Show(
            (__int64)(this + 5),
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
    if ( v13 < 0 )
    {
      v14 = 215LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  return 0LL;
}
