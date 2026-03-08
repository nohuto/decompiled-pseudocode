/*
 * XREFs of HmgSafeNextObjt @ 0x1C006EFB0
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001BBAC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z @ 0x1C006EF08 (-vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C009D990 (bDynamicProcessAllDriverRealizations.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C009DC40 (vDynamicConvertNewSurfaceDCs.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C01828EC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C018EBEC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0199130 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSafeNextObjt(__int64 a1, char a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r13
  __int64 v7; // r11
  __int64 v8; // rbp
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rdx
  __int64 v18; // r14
  unsigned __int64 v19; // rbp

  v5 = a1;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      v7 = *(_QWORD *)(v6 + 8008);
      while ( 1 )
      {
        if ( ++v5 >= *(_DWORD *)v7 )
          goto LABEL_22;
        v8 = *(_QWORD *)(v7 + 16);
        v9 = *(_DWORD *)(v8 + 2056);
        v10 = v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16);
        if ( v5 < v10 )
        {
          if ( v5 >= v9 )
          {
            v11 = *(_QWORD *)(v8 + 8LL * (((v5 - v9) >> 16) + 1) + 8);
            v12 = v5 + -65536 * ((v5 - v9) >> 16) - v9;
          }
          else
          {
            v11 = *(_QWORD *)(v8 + 8);
            v12 = v5;
          }
          v13 = 0LL;
          if ( v12 < *(_DWORD *)(v11 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                         + 16LL * (unsigned __int8)v12
                         + 8) )
          {
            v13 = *(_QWORD *)v11 + 24LL * v12;
          }
          if ( v13 )
            break;
        }
      }
      if ( !v5 )
      {
LABEL_22:
        *a3 = 0LL;
        return 0LL;
      }
      if ( *(_BYTE *)(v13 + 14) == a2 )
      {
        v14 = GdiHandleManager::DecodeIndex(*(GdiHandleEntryDirectory ***)(v6 + 8008), v5);
        v15 = v14;
        if ( v14 >= v10
          || (v14 >= v9
            ? (v16 = *(_QWORD *)(v8 + 8LL * (((v14 - v9) >> 16) + 1) + 8), v15 = -65536 * ((v14 - v9) >> 16) - v9 + v14)
            : (v16 = *(_QWORD *)(v8 + 8)),
              (unsigned int)v15 >= *(_DWORD *)(v16 + 20)) )
        {
          v17 = 0LL;
        }
        else
        {
          v17 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
        }
        if ( (*(_BYTE *)(v13 + 15) & 0x40) == 0
          || *((_WORD *)v17 + 6) && (struct _KTHREAD *)v17[2] == KeGetCurrentThread() )
        {
          break;
        }
      }
    }
    v18 = *v17;
    v19 = (unsigned __int16)v5 | (unsigned __int64)(*(unsigned __int16 *)(v13 + 12) << 16);
    if ( (_DWORD)v19 == (unsigned int)*v17 )
      break;
    SGDGetSessionState((unsigned __int16)v5);
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 47LL, v13, v18, v19, 0LL, 0LL, 0);
  }
  if ( !v19 )
    goto LABEL_2;
  *a3 = v17;
  return v5;
}
