/*
 * XREFs of DrvSetVideoParameters @ 0x1C0147D10
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C001845C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001D00C (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     DrvGetDeviceFromName @ 0x1C0021400 (DrvGetDeviceFromName.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 */

__int64 __fastcall DrvSetVideoParameters(PCUNICODE_STRING String1, __int64 a2, _OWORD *a3, int a4, int a5)
{
  unsigned int v9; // esi
  wchar_t *DeviceFromName; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rbx
  __int64 v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  _OWORD *v27; // rax
  unsigned int v28; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v29; // [rsp+88h] [rbp+10h]

  v9 = -5;
  DeviceFromName = 0LL;
  v11 = WdLogNewEntry5_WdEvent(String1);
  *(_QWORD *)(v11 + 24) = String1;
  *(_QWORD *)(v11 + 32) = a2;
  WdLogEvent5_WdEvent(v11);
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    v14 = DeviceFromName == 0LL;
  }
  else
  {
    if ( a2 )
      DeviceFromName = *(wchar_t **)(a2 + 2576);
    v14 = DeviceFromName == 0LL;
  }
  if ( v14 || DeviceFromName == (wchar_t *)-4LL )
  {
    v15 = WdLogNewEntry5_WdTrace(v13, v12);
LABEL_33:
    WdLogEvent5_WdTrace(v15);
    return v9;
  }
  if ( !DeviceFromName )
  {
LABEL_32:
    v15 = WdLogNewEntry5_WdTrace(v13, v12);
    *(_QWORD *)(v15 + 24) = (int)v9;
    goto LABEL_33;
  }
  if ( a3 )
  {
    if ( a5 && (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
      return 0xFFFFFFFFLL;
    v19 = PALLOCMEM2(0x2C8uLL, 1936876615LL, 0);
    v29 = v19;
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdTrace(v18, v17);
      WdLogEvent5_WdTrace(v20);
      return 0xFFFFFFFFLL;
    }
    v21 = v19;
    v22 = a3;
    v23 = 2LL;
    v24 = 2LL;
    do
    {
      *v21 = *v22;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      v21[4] = v22[4];
      v21[5] = v22[5];
      v21[6] = v22[6];
      v21 += 8;
      *(v21 - 1) = v22[7];
      v22 += 8;
      --v24;
    }
    while ( v24 );
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    v21[5] = v22[5];
    *((_DWORD *)v21 + 24) = *((_DWORD *)v22 + 24);
    if ( a4 )
    {
      v25 = v19[5];
      if ( v25 != 1
        && (v25 != 2 || ((v19[6] & 0x100) == 0 || v19[21] != 2) && ((v19[6] & 0x100) == 0 || v19[21] != 4 || v19[24])) )
      {
        Win32FreePool((__int64)v19);
        return v9;
      }
    }
    v26 = GreDeviceIoControlImpl(
            *((PDEVICE_OBJECT *)DeviceFromName + 17),
            0x230020u,
            v19,
            0x164u,
            v19,
            0x164u,
            &v28,
            0,
            1);
    if ( v26 )
      v26 = -5;
    v9 = v26;
    v27 = v19;
    do
    {
      *a3 = *v27;
      a3[1] = v27[1];
      a3[2] = v27[2];
      a3[3] = v27[3];
      a3[4] = v27[4];
      a3[5] = v27[5];
      a3[6] = v27[6];
      a3 += 8;
      *(a3 - 1) = v27[7];
      v27 += 8;
      --v23;
    }
    while ( v23 );
    *a3 = *v27;
    a3[1] = v27[1];
    a3[2] = v27[2];
    a3[3] = v27[3];
    a3[4] = v27[4];
    a3[5] = v27[5];
    *((_DWORD *)a3 + 24) = *((_DWORD *)v27 + 24);
    Win32FreePool((__int64)v19);
    goto LABEL_32;
  }
  return v9;
}
