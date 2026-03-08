/*
 * XREFs of ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01029E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C00F8F6C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0102BF4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A85E8 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A8870 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 */

void __fastcall CLegacyRotationMgr::xxxRefreshDisplayOrientation(CLegacyRotationMgr *this)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+34h] [rbp-4Ch] BYREF
  int v12; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-40h] BYREF
  int *v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x200000000001LL) )
  {
    v16 = 0;
    v12 = dword_1C035D5DC;
    v15 = 4;
    v14 = &v12;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0357098, (unsigned __int8 *)dword_1C031B492, 0LL, 0LL, 3u, &v13);
  }
  v2 = *(_DWORD *)(gpsi + 2236LL) & 8;
  if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x200000000001LL) )
  {
    v11 = dword_1C035D5E4;
    v10 = v2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (int)&unk_1C031B4D9,
      v4,
      v5,
      (__int64)&v11,
      (__int64)&v10);
  }
  if ( dword_1C035D5E4 && !v2 && !dword_1C035D5E0 )
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
  dword_1C035D5E4 = v2 != 0;
  v6 = *(_DWORD *)(gpsi + 2236LL) & 0x10;
  if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x200000000001LL) )
  {
    v10 = dword_1C035D5E0;
    v11 = v6 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (int)&unk_1C031B532,
      v8,
      v9,
      (__int64)&v10,
      (__int64)&v11);
  }
  if ( dword_1C035D5E0 && !v6 && !dword_1C035D5E4 )
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
  dword_1C035D5E0 = v6 != 0;
  if ( dword_1C035D5E4 || v6 )
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  else
    CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
