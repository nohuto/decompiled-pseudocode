/*
 * XREFs of ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C018E234
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C006C130 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C000F37C (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C000F450 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C002C6A0 (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall DrvGetDevModeForLddmPath(struct tagGRAPHICS_DEVICE *a1, int a2, struct _devicemodeW *a3, bool *a4)
{
  unsigned int v8; // edx
  int v9; // ebx
  __int64 v10; // rcx
  bool v11; // bp
  _DWORD *v12; // rsi
  __int64 DxgkWin32kInterface; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-208h] BYREF
  _BYTE v16[432]; // [rsp+30h] [rbp-1F8h] BYREF
  unsigned int v17; // [rsp+1E0h] [rbp-48h]
  __int64 v18; // [rsp+1E8h] [rbp-40h]

  memset(v16, 0, sizeof(v16));
  v17 = 0;
  v18 = 0LL;
  if ( a2 == -1 )
  {
    v8 = 18;
  }
  else
  {
    if ( a2 != -2 )
    {
      v9 = -1073741811;
      goto LABEL_25;
    }
    v8 = 20;
  }
  v15[0] = 0;
  v9 = QDC_AUTO_BUFFERS::Fill((QDC_AUTO_BUFFERS *)v16, v8, (enum DISPLAYCONFIG_TOPOLOGY_ID *)v15);
  if ( v9 >= 0 )
  {
    v10 = 0LL;
    v9 = -1073741275;
    if ( v17 )
    {
      v11 = 1;
      while ( 1 )
      {
        v12 = (_DWORD *)(v18 + 216LL * (unsigned int)v10);
        if ( *((_DWORD *)a1 + 62) == v12[6] && *((_DWORD *)a1 + 60) == v12[4] && *((_DWORD *)a1 + 61) == v12[5] )
          break;
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v17 )
          goto LABEL_20;
      }
      v9 = 0;
      if ( !a3
        || (DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v10, v17),
            v9 = (*(__int64 (__fastcall **)(_DWORD *, struct _devicemodeW *))(DxgkWin32kInterface + 688))(v12, a3),
            v9 >= 0) )
      {
        if ( a4 )
        {
          if ( v12[49] != -2 || v12[50] != -2 )
            v11 = 0;
          *a4 = v11;
        }
      }
    }
  }
LABEL_20:
  if ( a2 == -2 && v9 == -1073741275 && a3 )
  {
    memset(a3, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&a3->dmSpecVersion = 67175425;
    a3->dmSize = 220;
    a3->dmFields = 410910848;
    DrvGetDisplayDriverDpiSetting(a3);
    v9 = 0;
  }
LABEL_25:
  QDC_AUTO_BUFFERS::Free((QDC_AUTO_BUFFERS *)v16);
  return (unsigned int)v9;
}
