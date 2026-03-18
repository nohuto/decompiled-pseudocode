/*
 * XREFs of HmgSafeNextObjt @ 0x1C0061900
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0061570 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00617A0 (bDynamicProcessAllDriverRealizations.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0062FA0 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016F6D4 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0171840 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSafeNextObjt(unsigned int a1, char a2)
{
  unsigned int v3; // ebx
  GdiHandleManager *v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // r8
  __int64 v16; // rdx

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
      if ( v3 >= v7 )
      {
        v8 = *(_QWORD *)(v6 + 8LL * (((v3 - v7) >> 16) + 1) + 8);
        v9 = v3 + -65536 * ((v3 - v7) >> 16) - v7;
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        v9 = v3;
      }
      v10 = 0LL;
      if ( v9 < *(_DWORD *)(v8 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                     + 16LL * (unsigned __int8)v9
                     + 8) )
      {
        v10 = *(_QWORD *)v8 + 24LL * v9;
      }
      if ( v10 )
      {
        if ( !v3 )
          return 0LL;
        if ( *(_BYTE *)(v10 + 14) == a2 )
        {
          v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v3);
          v12 = *((_QWORD *)v4 + 2);
          v13 = v11;
          v14 = *(_DWORD *)(v12 + 2056);
          if ( v11 >= v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
            return 0LL;
          if ( v11 >= v14 )
          {
            v15 = *(_QWORD *)(v12 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
            v13 = -65536 * ((v11 - v14) >> 16) - v14 + v11;
          }
          else
          {
            v15 = *(_QWORD *)(v12 + 8);
          }
          if ( (unsigned int)v13 >= *(_DWORD *)(v15 + 20) )
            return 0LL;
          v16 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
          if ( !v16
            || (*(_BYTE *)(v10 + 15) & 0x40) == 0
            || *(_WORD *)(v16 + 12) && *(struct _KTHREAD **)(v16 + 16) == KeGetCurrentThread() )
          {
            return v16;
          }
        }
      }
    }
  }
  return 0LL;
}
