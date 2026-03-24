/*
 * XREFs of HmgSafeNextObjt @ 0x1C000EF80
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C000EC20 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C000ED74 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C000EE10 (bDynamicProcessAllDriverRealizations.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001DCA0 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDynamicModeChange @ 0x1C00BAA30 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013DEC4 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0142A20 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0144AC0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0031220 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSafeNextObjt(unsigned int a1, char a2)
{
  unsigned int v3; // ebx
  GdiHandleManager *v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx

  v3 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | (a1 >> 8) & 0xFF0000) >> 16 )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)a1;
    }
  }
  v4 = gpHandleManager;
  v5 = *(_DWORD *)gpHandleManager;
  while ( ++v3 < v5 )
  {
    v6 = *((_QWORD *)v4 + 2);
    v7 = *(_DWORD *)(v6 + 2056);
    if ( v3 < v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    {
      v8 = ((v3 - v7) >> 16) + 1;
      if ( v3 < v7 )
        v8 = 0LL;
      v9 = *(_QWORD *)(v6 + 8 * v8 + 8);
      if ( (_DWORD)v8 )
        v10 = v3 + ((1 - (_DWORD)v8) << 16) - v7;
      else
        v10 = v3;
      v11 = 0LL;
      if ( v10 < *(_DWORD *)(v9 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                     + 16LL * (unsigned __int8)v10
                     + 8) )
      {
        v11 = *(_QWORD *)v9 + 24LL * v10;
      }
      if ( v11 )
      {
        if ( !v3 )
          return 0LL;
        if ( *(_BYTE *)(v11 + 14) == a2 )
        {
          v12 = GdiHandleManager::DecodeIndex(gpHandleManager, v3);
          v13 = *((_QWORD *)v4 + 2);
          v14 = v12;
          v15 = *(_DWORD *)(v13 + 2056);
          if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
            return 0LL;
          v16 = ((v12 - v15) >> 16) + 1;
          if ( v12 < v15 )
            v16 = 0LL;
          v17 = *(_QWORD *)(v13 + 8 * v16 + 8);
          if ( (_DWORD)v16 )
            v14 = ((1 - (_DWORD)v16) << 16) - v15 + v12;
          if ( (unsigned int)v14 >= *(_DWORD *)(v17 + 20) )
            v18 = 0LL;
          else
            v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
          if ( !v18
            || (*(_BYTE *)(v11 + 15) & 0x40) == 0
            || *(_WORD *)(v18 + 12) && *(struct _KTHREAD **)(v18 + 16) == KeGetCurrentThread() )
          {
            return v18;
          }
        }
      }
    }
  }
  return 0LL;
}
