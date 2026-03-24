/*
 * XREFs of ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00B4E5C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00B9020 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     bDynamicModeChange @ 0x1C00BAA30 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013DEC4 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vResetSurfacePalette(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // ecx
  struct PALETTE *v4; // rcx
  __int64 v5; // r9
  __int64 i; // r8
  void (__fastcall *v7)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r11
  int v8; // [rsp+40h] [rbp+8h]
  int v9; // [rsp+40h] [rbp+8h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 543) & 0x100) != 0 )
  {
    v2 = a1[226];
    v10 = v2;
    if ( *(_DWORD *)(v2 + 60) == 20 )
    {
      v3 = *(_DWORD *)(v2 + 24);
      if ( (v3 & 0x1000) == 0 && (v3 & 0x10000) == 0 )
      {
        v4 = ppalDefault;
        v5 = 32LL;
        while ( 1 )
        {
          v8 = *(_DWORD *)(v5 + *((_QWORD *)v4 + 14));
          HIBYTE(v8) = 48;
          *(_DWORD *)(v5 + *(_QWORD *)(v2 + 112)) = v8;
          v5 += 4LL;
          if ( v5 >= 40 )
            break;
          v2 = v10;
        }
        for ( i = 984LL; i < 992; i += 4LL )
        {
          v9 = *(_DWORD *)(*((_QWORD *)v4 + 14) + i - 944);
          HIBYTE(v9) = 48;
          *(_DWORD *)(i + *(_QWORD *)(v10 + 112)) = v9;
        }
        v2 = v10;
      }
    }
    if ( (a1[5] & 0x400) == 0 )
    {
      v7 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))a1[358];
      if ( v7 )
        v7(a1[225], &v10, 0LL, 0LL, *(_DWORD *)(v2 + 28));
    }
  }
}
