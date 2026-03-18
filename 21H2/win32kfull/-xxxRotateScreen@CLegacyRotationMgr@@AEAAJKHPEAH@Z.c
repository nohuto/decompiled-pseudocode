/*
 * XREFs of ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01CDCF8
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00CD5E4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01CDA88 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01CDB80 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1C01CD39C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01CE29C (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxRotateScreen(CLegacyRotationMgr *this, int a2, int a3, int *a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // edi
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  int *v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  _DWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+64h] [rbp-9Ch]
  int v28; // [rsp+68h] [rbp-98h]
  _QWORD v29[10]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v30; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+110h] [rbp+10h]
  int v33; // [rsp+128h] [rbp+28h]
  unsigned int v34; // [rsp+13Ch] [rbp+3Ch]
  unsigned int v35; // [rsp+140h] [rbp+40h]

  memset(v29, 0, 0x48uLL);
  v7 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v29[1]);
  v29[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v29[3]) = 18;
  LOBYTE(v29[6]) = -1;
  v23 = 1;
  if ( a4 )
    *a4 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v23, &v30, 0LL) < 0 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    goto LABEL_11;
  v10 = a2 - 1;
  if ( !v10 )
  {
    v7 = 2;
    goto LABEL_12;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v7 = 4;
      goto LABEL_12;
    }
LABEL_11:
    v7 = 1;
  }
LABEL_12:
  if ( v32 != 0x80000000 && v32 != 11 && v32 != 13 )
  {
    if ( a3 )
    {
      v25 = 0LL;
      v26 = 0;
      v28 = 0;
      v24[0] = -6;
      v24[1] = 28;
      v27 = v7;
      DrvDisplayConfigSetDeviceInfo(v24, v29);
    }
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 0x200000000001LL) )
      return 0LL;
    v22 = v33;
    v19 = &v20;
    v15 = &v22;
    v20 = 1003;
LABEL_28:
    v21 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_1C02EDA11,
      v13,
      v14,
      (__int64)v15,
      (__int64)&v21,
      (__int64)v19);
    return 0LL;
  }
  LODWORD(v16) = v33;
  if ( v7 == v33 )
  {
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 0x200000000001LL) )
      return 0LL;
    v22 = 1001;
    v19 = &v22;
    v20 = v14;
    v15 = &v20;
    goto LABEL_28;
  }
  if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 0x200000000001LL) )
  {
    v22 = 1000;
    v21 = a3;
    v20 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_1C02EDA11,
      v17,
      v16,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v22);
    LODWORD(v16) = v33;
  }
  v18 = v30;
  if ( v7 != (_DWORD)v16 )
  {
    if ( (((unsigned __int8)v7 ^ (unsigned __int8)v16) & 1) != 0 && (v30 & 0x20000) != 0 )
    {
      v8 = v34;
      v34 = v35;
      v35 = v8;
    }
    v33 = v7;
    v18 = v30 | 0x200;
    v31 |= 0x200uLL;
  }
  v30 = v18 & 0x802CF19001030F8FuLL;
  return CLegacyRotationMgr::xxxSmoothRotateScreen(
           (CLegacyRotationMgr *)v8,
           (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)&v30,
           a3,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v29);
}
