/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026D7D4
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0015944 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreHintSpriteShape @ 0x1C00BDB88 (GreHintSpriteShape.c)
 *     GreWindowLayoutComplete @ 0x1C011C788 (GreWindowLayoutComplete.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026EEF0 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026F170 (GreCancelSynchronizedWindowResize.c)
 *     GreWindowResizeComplete @ 0x1C0270430 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0270690 (GreWindowResizeStarted.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0012A28 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C0012AC0 (DwmAsyncUpdateSprite.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C026E4C0 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C02750C4 (DwmAsyncProcessSurfaceComplete.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3)
{
  int v3; // edi
  int *v4; // rbx
  int v6; // eax
  SFMLOGICALSURFACE *v7; // r13
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // ebx
  void *v17; // rax
  void *v18; // rax
  void *v19; // rcx
  int v20[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+B8h] [rbp+10h] BYREF
  int *v22; // [rsp+C0h] [rbp+18h]
  unsigned int v23; // [rsp+C8h] [rbp+20h] BYREF

  v22 = a3;
  v3 = 0;
  v4 = a3;
  v6 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v7 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 21);
    if ( v7 )
    {
      if ( a2 || (v8 = 0LL, !g_cDelayedUpdateSpriteNotifications) )
      {
LABEL_10:
        v20[0] = 0;
        v23 = 0;
        v21 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(v7, (enum _HLSURF_REDIRECTIONSTYLE *)v20, &v23, &v21, 0LL, 0LL);
        v10 = *((_DWORD *)a1 + 41);
        v11 = *((_DWORD *)v7 + 63);
        v12 = *((_QWORD *)a1 + 13);
        v13 = *(_QWORD *)a1;
        *((_QWORD *)a1 + 13) = 0LL;
        v14 = *(_QWORD *)v7;
        v15 = v11 & 1;
        v16 = v11 & 0xC | v10 & 1 | (2 * (v15 | v10 & 0x40 | (4 * (v10 & 0xE | 0x20))));
        LOBYTE(v3) = *((_DWORD *)a1 + 29) >= 1;
        v17 = (void *)UserReferenceDwmApiPort(v15);
        DwmAsyncUpdateSprite(v17, v13, v14, v16, (__int64)a1 + 72, 0LL, v20[0], v23, v21, v3, v12);
      }
      else
      {
        v9 = &unk_1C033EB48;
        while ( *v9 != *(_QWORD *)v7 )
        {
          v8 = (unsigned int)(v8 + 1);
          v9 = (_QWORD *)((char *)v9 + 196);
          if ( (unsigned int)v8 >= g_cDelayedUpdateSpriteNotifications )
            goto LABEL_10;
        }
      }
      v18 = (void *)UserReferenceDwmApiPort(v8);
      DwmAsyncProcessSurfaceComplete(v18);
      v4 = v22;
    }
    *((_DWORD *)a1 + 29) = 0;
    UpdateWindowResizeTelemetry(a1, 0);
    v19 = (void *)*((_QWORD *)a1 + 12);
    if ( v19 )
    {
      ObfDereferenceObject(v19);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v6 = 1;
  }
  if ( v4 )
    *v4 = v6;
}
