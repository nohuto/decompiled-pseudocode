/*
 * XREFs of LogDiagCDS @ 0x1C001A244
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00198CC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C0019E30 (DrvChangeDisplaySettings.c)
 * Callees:
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C001A460 (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3ED0 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall LogDiagCDS(
        __int64 a1,
        struct _devicemodeW *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        int a12,
        __int16 a13,
        struct _devicemodeW *a14)
{
  char *v18; // rax
  char *v19; // rbx
  unsigned int v20; // r11d
  int v21; // r11d
  __int64 v23; // rax

  v18 = (char *)PALLOCMEM2(0xA0uLL);
  v19 = v18;
  if ( v18 )
  {
    memset(v18, 0, 0xA0uLL);
    *((_DWORD *)v19 + 1) = 160;
    *(_DWORD *)v19 = 5;
    *((_QWORD *)v19 + 8) = a9;
    *((_DWORD *)v19 + 14) = a10;
    *((_DWORD *)v19 + 13) = a11;
    *((_DWORD *)v19 + 15) = a12;
    v20 = ((unsigned __int16)(a13 << 13) ^ (*((_WORD *)v19 + 24) | (a6 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x20 : 0) | (a5 != 0 ? 8 : 0) | (a8 != 0 ? 0x40 : 0) | (a4 == 0 ? 4 : 0) | (a2 != 0LL) | (a1 != 0 ? 2 : 0) | (a14 != 0LL ? 0x1000 : 0))) & 0xE000 ^ ((a8 != 0 ? 0x40 : 0) | (a7 != 0 ? 0x20 : 0) | (a6 != 0 ? 0x10 : 0) | (a5 != 0 ? 8 : 0) | (a4 == 0 ? 4 : 0) | (a1 != 0 ? 2 : 0) | (a14 != 0LL ? 0x1000 : 0) | *((_DWORD *)v19 + 12) & 0xFFFFEF80 | (a2 != 0LL));
    *((_DWORD *)v19 + 12) = v20;
    if ( a3 )
    {
      v21 = v20 | 0x800;
      *((_DWORD *)v19 + 12) = v21;
      *((_DWORD *)v19 + 12) = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 256) << 7)) & 0x780;
    }
    FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v19 + 72));
    FillSimpleDevModeField(a14, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v19 + 116));
    ((void (__fastcall *)(char *))qword_1C02509C0)(v19);
    return Win32FreePool(v19);
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v23 + 24) = 160LL;
    WdLogEvent5_WdLowResource(v23);
    return DrvDxgkLogCodePointPacket(5LL, a10, a11);
  }
}
