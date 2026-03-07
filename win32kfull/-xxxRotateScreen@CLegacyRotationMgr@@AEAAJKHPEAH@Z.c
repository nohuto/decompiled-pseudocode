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
  _BYTE v29[8]; // [rsp+70h] [rbp-90h] BYREF
  GUID ActivityId; // [rsp+78h] [rbp-88h] BYREF
  int v31; // [rsp+88h] [rbp-78h]
  char v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v34; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+110h] [rbp+10h]
  int v37; // [rsp+128h] [rbp+28h]
  unsigned int v38; // [rsp+13Ch] [rbp+3Ch]
  unsigned int v39; // [rsp+140h] [rbp+40h]

  memset_0(v29, 0, 0x48uLL);
  v7 = 3;
  EtwActivityIdControl(3u, &ActivityId);
  v33 = MEMORY[0xFFFFF78000000014];
  v31 = 18;
  v32 = -1;
  v23 = 1;
  if ( a4 )
    *a4 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v23, &v34, 0LL) < 0 )
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
  if ( v36 != 0x80000000 && v36 != 11 && v36 != 13 )
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
    if ( (unsigned int)dword_1C0357098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000001LL) )
      return 0LL;
    v22 = v37;
    v19 = &v20;
    v15 = &v22;
    v20 = 1003;
LABEL_28:
    v21 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_1C031B311,
      v13,
      v14,
      (__int64)v15,
      (__int64)&v21,
      (__int64)v19);
    return 0LL;
  }
  LODWORD(v16) = v37;
  if ( v7 == v37 )
  {
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)dword_1C0357098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000001LL) )
      return 0LL;
    v22 = 1001;
    v19 = &v22;
    v20 = v14;
    v15 = &v20;
    goto LABEL_28;
  }
  if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000001LL) )
  {
    v22 = 1000;
    v21 = a3;
    v20 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_1C031B311,
      v17,
      v16,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v22);
    LODWORD(v16) = v37;
  }
  v18 = v34;
  if ( v7 != (_DWORD)v16 )
  {
    if ( (((unsigned __int8)v7 ^ (unsigned __int8)v16) & 1) != 0 && (v34 & 0x20000) != 0 )
    {
      v8 = v38;
      v38 = v39;
      v39 = v8;
    }
    v37 = v7;
    v18 = v34 | 0x200;
    v35 |= 0x200uLL;
  }
  v34 = v18 & 0x802CF19001030F8FuLL;
  return CLegacyRotationMgr::xxxSmoothRotateScreen(
           (CLegacyRotationMgr *)v8,
           (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)&v34,
           a3,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v29);
}
