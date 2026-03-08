/*
 * XREFs of ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C001E050
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C001F074 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = *(_QWORD *)(a1 + 2552);
  if ( (*(_DWORD *)(v2 + 160) & 0x800000) != 0
    && (int)GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)(v2 + 136), 0x232043u, 0LL, 0, &v8, 8u, &v7, 1u, 1) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 2568) + 184LL) = v8;
    v3 = *(_QWORD *)(a1 + 2568);
    v4 = *(_DWORD *)(v3 + 180);
    if ( BYTE4(v8) )
      v5 = v4 & 0xFFFFFFFD;
    else
      v5 = v4 | 2;
    *(_DWORD *)(v3 + 180) = v5;
    v6 = *(_QWORD *)(a1 + 2568);
    if ( *(_DWORD *)(v6 + 180) )
      *(_DWORD *)(v6 + 72) |= 0x200000u;
  }
}
