/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0265774
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C007B35C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreWindowLayoutComplete @ 0x1C00C5DFC (GreWindowLayoutComplete.c)
 *     GreHintSpriteShape @ 0x1C00D41D4 (GreHintSpriteShape.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C02672A0 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026737C (GreCancelSynchronizedWindowResize.c)
 *     GreWindowResizeComplete @ 0x1C0268454 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C02686B0 (GreWindowResizeStarted.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00B0400 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C00D5BA0 (DwmAsyncUpdateSprite.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C026D404 (DwmAsyncProcessSurfaceComplete.c)
 *     DwmCheckForDeferredUpdateSpriteCommands @ 0x1C026DE4C (DwmCheckForDeferredUpdateSpriteCommands.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3)
{
  int v5; // eax
  _QWORD *v6; // r12
  __int64 v7; // rcx
  SFMLOGICALSURFACE *v8; // rdi
  int v9; // edx
  int v10; // eax
  __int64 v11; // r14
  int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // ebx
  void *v17; // rax
  void *v18; // rax
  void *v19; // rcx
  unsigned int v20; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+18h] BYREF
  int v22; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v6 = (_QWORD *)*((_QWORD *)a1 + 18);
    if ( v6 )
    {
      if ( a2 || !(unsigned int)DwmCheckForDeferredUpdateSpriteCommands(*v6) )
      {
        v8 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 18);
        v22 = 0;
        v21 = 0;
        v20 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(v8, (enum _HLSURF_REDIRECTIONSTYLE *)&v22, &v21, &v20, 0LL, 0LL);
        v9 = *((_DWORD *)v8 + 63);
        v10 = *((_DWORD *)a1 + 35);
        v11 = *((_QWORD *)a1 + 13);
        v12 = *((_DWORD *)a1 + 29);
        *((_QWORD *)a1 + 13) = 0LL;
        v13 = *(_QWORD *)v8;
        v14 = *(_QWORD *)a1;
        v15 = v9 & 1;
        v16 = v10 & 1 | v9 & 0xC | (2 * (v15 | v10 & 0x40 | (4 * (v10 & 0xE | 0x20))));
        v17 = (void *)UserReferenceDwmApiPort(v15);
        DwmAsyncUpdateSprite(v17, v14, v13, v16, (__int64)a1 + 72, 0LL, v22, v21, v20, v12 >= 1, v11);
      }
      v18 = (void *)UserReferenceDwmApiPort(v7);
      DwmAsyncProcessSurfaceComplete(v18);
    }
    v19 = (void *)*((_QWORD *)a1 + 12);
    *((_DWORD *)a1 + 29) = 0;
    if ( v19 )
    {
      ObfDereferenceObject(v19);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v5 = 1;
  }
  if ( a3 )
    *a3 = v5;
}
