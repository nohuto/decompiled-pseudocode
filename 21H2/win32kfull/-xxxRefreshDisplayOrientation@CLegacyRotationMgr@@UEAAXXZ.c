/*
 * XREFs of ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C002EB60
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C002EC84 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01D0F54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D16B8 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D18E8 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall CLegacyRotationMgr::xxxRefreshDisplayOrientation(CLegacyRotationMgr *this, __int64 a2, int a3, int a4)
{
  __int64 v5; // rdx
  int v6; // edi
  int v7; // edi
  int v8; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+34h] [rbp-4Ch] BYREF
  int v10; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-40h] BYREF
  int *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  v5 = qword_1C032B3F0;
  if ( (unsigned int)dword_1C032B3D8 > 5
    && (qword_1C032B3E8 & 0x200000000001LL) != 0
    && (qword_1C032B3F0 & 0x200000000001LL) == qword_1C032B3F0 )
  {
    v14 = 0;
    v10 = dword_1C033660C;
    v13 = 4;
    v12 = &v10;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032B3D8, (int)&dword_1C02F1162, 0, 0, 3u, &v11);
    v5 = qword_1C032B3F0;
  }
  v6 = *(_DWORD *)(gpsi + 2236LL) & 8;
  if ( (unsigned int)dword_1C032B3D8 > 5 && (qword_1C032B3E8 & 0x200000000001LL) != 0 && (v5 & 0x200000000001LL) == v5 )
  {
    v9 = dword_1C0336614;
    v8 = v6 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      gpsi,
      (unsigned int)&unk_1C02F11A9,
      a3,
      a4,
      (__int64)&v9,
      (__int64)&v8);
    v5 = qword_1C032B3F0;
  }
  if ( dword_1C0336614 && !v6 && !dword_1C0336610 )
  {
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
    v5 = qword_1C032B3F0;
  }
  dword_1C0336614 = v6 != 0;
  v7 = *(_DWORD *)(gpsi + 2236LL) & 0x10;
  if ( (unsigned int)dword_1C032B3D8 > 5 && (qword_1C032B3E8 & 0x200000000001LL) != 0 && (v5 & 0x200000000001LL) == v5 )
  {
    v8 = dword_1C0336610;
    v9 = v7 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      gpsi,
      (unsigned int)&unk_1C02F1202,
      a3,
      a4,
      (__int64)&v8,
      (__int64)&v9);
  }
  if ( dword_1C0336610 && !v7 && !dword_1C0336614 )
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
  dword_1C0336610 = v7 != 0;
  if ( dword_1C0336614 || v7 )
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  else
    CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
