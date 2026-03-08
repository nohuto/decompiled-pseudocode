/*
 * XREFs of DxgDetermineBootImageMode @ 0x1C0213318
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01E7D80 (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C02134F0 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C0213AC0 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 */

char __fastcall DxgDetermineBootImageMode(__int64 a1, _QWORD *a2, char a3, _BYTE *a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rbx
  struct DXGGLOBAL *Global; // rax
  unsigned int v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v23; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING v24; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v25[2]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v26; // [rsp+A8h] [rbp-58h]
  _OWORD v27[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v28; // [rsp+D0h] [rbp-30h]
  _OWORD v29[8]; // [rsp+E0h] [rbp-20h] BYREF
  int v30; // [rsp+160h] [rbp+60h]
  WCHAR v31; // [rsp+164h] [rbp+64h]

  *(_QWORD *)&v22.Length = 8781956LL;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v29[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v29[1] = v4;
  v21 = -1;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  *(_QWORD *)&v23.Length = 2228256LL;
  v29[2] = v8;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v29[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v29[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v29[5] = v12;
  v29[6] = v13;
  v14 = *(_OWORD *)L"icsDrivers";
  v25[1] = *(_OWORD *)L"mageMode";
  v29[7] = v14;
  v30 = *(_DWORD *)L"rs";
  v31 = aRegistryMachin_9[66];
  v22.Buffer = (wchar_t *)v29;
  v26 = aCddbootimagemo[16];
  v23.Buffer = (wchar_t *)v25;
  v25[0] = *(_OWORD *)L"CddBootImageMode";
  v15 = ReadRegistryDwordKeyValue(&v22, &v23, &v21);
  if ( v15 >= 0 )
  {
    v16 = v21;
  }
  else
  {
    v28 = *(_DWORD *)L"e";
    v24.Buffer = (wchar_t *)v27;
    *(_QWORD *)&v24.Length = 2359330LL;
    v27[0] = *(_OWORD *)L"CddBootScreenMode";
    v27[1] = *(_OWORD *)L"creenMode";
    v15 = ReadRegistryDwordKeyValue(&v22, &v24, &v21);
    v16 = v21;
    if ( v15 < 0 )
      v16 = -1;
  }
  switch ( v16 )
  {
    case 0u:
      return v15;
    case 0xFFFFFFFF:
    case 1u:
LABEL_6:
      if ( a3 )
      {
        *((_DWORD *)DXGGLOBAL::GetGlobal() + 376) = 1;
        LOBYTE(v15) = DxgkSetBootAnimationRelayState(3LL);
        if ( (_BYTE)v15 )
          goto LABEL_8;
        v18 = 5251LL;
        WdLogSingleEntry1(1LL, 5251LL);
      }
      else
      {
        if ( !a2 )
          return v15;
        if ( ((*(_DWORD *)(a1 + 12) - 20) & 0xFFFFFFFD) != 0 )
        {
          v17 = *(int *)(a1 + 12);
          goto LABEL_21;
        }
        Global = DXGGLOBAL::GetGlobal();
        *((_OWORD *)Global + 95) = *(_OWORD *)a1;
        *((_OWORD *)Global + 96) = *(_OWORD *)(a1 + 16);
        *((_QWORD *)DXGGLOBAL::GetGlobal() + 189) = *a2;
        *((_QWORD *)DXGGLOBAL::GetGlobal() + 203) = a2[2];
        *((_DWORD *)DXGGLOBAL::GetGlobal() + 376) = 1;
        LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL);
        if ( (_BYTE)v15 )
        {
LABEL_8:
          *a4 = 1;
          return v15;
        }
        v18 = 5284LL;
        WdLogSingleEntry1(1LL, 5284LL);
      }
      LOBYTE(v15) = DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bRet", v18, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_8;
    case 2u:
      LOBYTE(v15) = WdLogSingleEntry1(3LL, 5235LL);
      goto LABEL_6;
  }
  if ( v16 != 3 )
  {
    v17 = v16;
LABEL_21:
    LOBYTE(v15) = WdLogSingleEntry1(3LL, v17);
    return v15;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 376) = 3;
  LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL);
  return v15;
}
