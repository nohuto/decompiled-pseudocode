/*
 * XREFs of ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D1928
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C002EC84 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D16B8 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D17B0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1C01D0FD8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D1F14 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxRotateScreen(CLegacyRotationMgr *this, int a2, int a3, int *a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // edi
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  int v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+64h] [rbp-9Ch] BYREF
  _DWORD v26[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+7Ch] [rbp-84h]
  int v30; // [rsp+80h] [rbp-80h]
  _QWORD v31[10]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v32; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+130h] [rbp+30h]
  unsigned int v35; // [rsp+148h] [rbp+48h]
  unsigned int v36; // [rsp+15Ch] [rbp+5Ch]
  unsigned int v37; // [rsp+160h] [rbp+60h]

  memset(v31, 0, 0x48uLL);
  v7 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v31[1]);
  v31[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v31[3]) = 18;
  LOBYTE(v31[6]) = -1;
  v16 = 1;
  if ( a4 )
    *a4 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v16, &v32, 0LL) < 0 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    goto LABEL_11;
  v12 = a2 - 1;
  if ( !v12 )
  {
    v7 = 2;
    goto LABEL_12;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v7 = 4;
      goto LABEL_12;
    }
LABEL_11:
    v7 = 1;
  }
LABEL_12:
  if ( v34 != 0x80000000 && v34 != 11 && v34 != 13 )
  {
    if ( a3 )
    {
      v27 = 0LL;
      v28 = 0;
      v30 = 0;
      v26[0] = -6;
      v26[1] = 28;
      v29 = v7;
      DrvDisplayConfigSetDeviceInfo(v26, v31);
    }
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)dword_1C032B3D8 > 5
      && (qword_1C032B3E8 & 0x200000000001LL) != 0
      && (qword_1C032B3F0 & 0x200000000001LL) == qword_1C032B3F0 )
    {
      v19 = v35;
      v17 = 1003;
      v18 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (int)&unk_1C02F0FE1,
        v9,
        v10,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17);
    }
    return 0LL;
  }
  v14 = v35;
  if ( v7 == v35 )
  {
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)dword_1C032B3D8 > 5
      && (qword_1C032B3E8 & 0x200000000001LL) != 0
      && (qword_1C032B3F0 & 0x200000000001LL) == qword_1C032B3F0 )
    {
      v20 = 1001;
      v21 = a3;
      v22 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (int)&unk_1C02F0FE1,
        v14,
        v10,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20);
    }
    return 0LL;
  }
  if ( (unsigned int)dword_1C032B3D8 > 5
    && (qword_1C032B3E8 & 0x200000000001LL) != 0
    && (qword_1C032B3F0 & 0x200000000001LL) == qword_1C032B3F0 )
  {
    v23 = 1000;
    v24 = a3;
    v25 = v35;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (int)&unk_1C02F0FE1,
      v35,
      v10,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
    LODWORD(v14) = v35;
  }
  v15 = v32;
  if ( v7 != (_DWORD)v14 )
  {
    if ( (((unsigned __int8)v7 ^ (unsigned __int8)v14) & 1) != 0 && (v32 & 0x20000) != 0 )
    {
      v8 = v36;
      v36 = v37;
      v37 = v8;
    }
    v35 = v7;
    v15 = v32 | 0x200;
    v33 |= 0x200uLL;
  }
  v32 = v15 & 0x802CF19000030F8FuLL;
  return CLegacyRotationMgr::xxxSmoothRotateScreen(
           (CLegacyRotationMgr *)v8,
           (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)&v32,
           a3,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v31);
}
