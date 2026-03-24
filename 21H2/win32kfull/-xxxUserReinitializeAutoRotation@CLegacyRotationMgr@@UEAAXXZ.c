/*
 * XREFs of ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0126AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C002EC84 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z @ 0x1C0126BE4 (-QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAKPEBGK0@Z.c)
 *     ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C0126EE0 (-IsNativeOrientationPortrait@@YAHXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01D0F54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CLegacyRotationMgr::xxxUserReinitializeAutoRotation(CLegacyRotationMgr *this)
{
  unsigned int AutoRotationRegistrySetting; // eax
  CLegacyRotationMgr *v3; // rcx
  int v4; // r9d
  CLegacyRotationMgr *v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  AutoRotationRegistrySetting = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                                  this,
                                  L"Enable",
                                  1u,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_1C0336608 = AutoRotationRegistrySetting;
  if ( (unsigned int)dword_1C032B3D8 > 5 && (qword_1C032B3E8 & 0x400000000001LL) != 0 )
  {
    v3 = (CLegacyRotationMgr *)(qword_1C032B3F0 & 0x400000000001LL);
    if ( (qword_1C032B3F0 & 0x400000000001LL) == qword_1C032B3F0 )
    {
      v11 = AutoRotationRegistrySetting;
      v10 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v3,
        (unsigned int)&unk_1C02F10CD,
        1,
        v4,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
  dword_1C0336638 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                      v3,
                      L"SlateEnable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  v6 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         v5,
         L"SensorPresent",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_1C033660C = v6 == 1;
  v7 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(v6 == 1),
         L"LastAutoRequest",
         0xFFFFFFFF,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  v8 = v7;
  if ( v7 > 3 )
    v8 = 0;
  gAutoRotationInfo = v8;
  dword_1C0336628 = v7 != -1;
  v9 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(v7 != -1),
         L"LastOrientation",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( v9 > 3 )
    v9 = 0;
  dword_1C0336604 = v9;
  dword_1C0336618 = IsNativeOrientationPortrait();
  dword_1C033661C = 0;
  CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
