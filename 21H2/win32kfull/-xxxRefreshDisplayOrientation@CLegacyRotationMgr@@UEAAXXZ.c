/*
 * XREFs of ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00CD400
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00CD5E4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C0159258 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01CDA88 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01CDCB8 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 */

void __fastcall CLegacyRotationMgr::xxxRefreshDisplayOrientation(CLegacyRotationMgr *this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // edi
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+34h] [rbp-4Ch] BYREF
  int v12; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-40h] BYREF
  int *v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000001LL) )
  {
    v16 = 0;
    v12 = dword_1C033196C;
    v15 = 4;
    v14 = &v12;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C03263F8, (int)&dword_1C02EDB92, 0, 0, 3u, &v13);
  }
  v2 = *(_DWORD *)(gpsi + 2236LL) & 8;
  if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000001LL) )
  {
    v11 = dword_1C0331974;
    v10 = v2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (unsigned int)&unk_1C02EDBD9,
      v4,
      v5,
      (__int64)&v11,
      (__int64)&v10);
  }
  if ( dword_1C0331974 && !v2 && !dword_1C0331970 )
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
  dword_1C0331974 = v2 != 0;
  v6 = *(_DWORD *)(gpsi + 2236LL) & 0x10;
  if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000001LL) )
  {
    v10 = dword_1C0331970;
    v11 = v6 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (unsigned int)&unk_1C02EDC32,
      v8,
      v9,
      (__int64)&v10,
      (__int64)&v11);
  }
  if ( dword_1C0331970 && !v6 && !dword_1C0331974 )
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
  dword_1C0331970 = v6 != 0;
  if ( dword_1C0331974 || v6 )
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  else
    CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
