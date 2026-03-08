/*
 * XREFs of ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00F8410
 * Callers:
 *     <none>
 * Callees:
 *     ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C00F8248 (-IsNativeOrientationPortrait@@YAHXZ.c)
 *     ?QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z @ 0x1C00F8560 (-QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C00F8F6C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0102BF4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 */

void __fastcall CLegacyRotationMgr::xxxUserReinitializeAutoRotation(CLegacyRotationMgr *this)
{
  CLegacyRotationMgr *v2; // rcx
  int v3; // r8d
  int v4; // r9d
  CLegacyRotationMgr *v5; // rcx
  unsigned int AutoRotationRegistrySetting; // eax
  unsigned int v7; // eax
  CLegacyRotationMgr *v8; // rcx
  unsigned int v9; // eax
  int v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  dword_1C035D5D8 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      this,
                      L"Enable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000001LL) )
  {
    v10 = 1;
    v11 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v2,
      (unsigned int)&unk_1C031B3FD,
      v3,
      v4,
      (__int64)&v11,
      (__int64)&v10);
  }
  dword_1C035D608 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      v2,
                      L"SlateEnable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  AutoRotationRegistrySetting = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                                  v5,
                                  L"SensorPresent",
                                  0,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_1C035D5DC = AutoRotationRegistrySetting == 1;
  v7 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(AutoRotationRegistrySetting == 1),
         L"LastAutoRequest",
         0xFFFFFFFF,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  if ( v7 <= 3 )
  {
    gAutoRotationInfo = v7;
  }
  else
  {
    gAutoRotationInfo = 0;
    if ( v7 == -1 )
    {
      dword_1C035D5F8 = 0;
      goto LABEL_9;
    }
  }
  dword_1C035D5F8 = 1;
LABEL_9:
  v9 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         v8,
         L"LastOrientation",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( v9 > 3 )
    v9 = 0;
  dword_1C035D5D4 = v9;
  dword_1C035D5E8 = IsNativeOrientationPortrait();
  dword_1C035D5EC = 0;
  CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
