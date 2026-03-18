/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BF68
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0275950 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00208A4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00217D8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0038B90 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C0084FB8 (DwmAsyncDirtySprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0108254 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C01547A4 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  unsigned int v3; // ebx
  struct DWMSPRITE *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char ShouldUseSfmTokenArray; // al
  __int64 v10; // rcx
  UINT_PTR v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // r8
  _BYTE v18[32]; // [rsp+30h] [rbp-9h] BYREF
  struct DWMSPRITE *v19; // [rsp+50h] [rbp+17h]
  _QWORD v20[7]; // [rsp+58h] [rbp+1Fh] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( v20[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v21);
    v22 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v18, 0LL, a2);
    if ( g_pDwmState )
    {
      v4 = v19;
      if ( v19 )
      {
        v5 = *((_QWORD *)v19 + 18);
        vSpDwmUpdateSpriteVisibility(v19, 1u);
        v21 = 0;
        vSpUpdateDirtyRgn(v4, (struct SFMLOGICALSURFACE *)v5, 0LL, (struct _RECTL *)((char *)v4 + 56), &v21, 0);
        if ( v21 )
        {
          ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(unsigned int *)(v5 + 252), v6, v7, v8);
          v10 = *(_QWORD *)(v5 + 184);
          if ( ShouldUseSfmTokenArray )
          {
            if ( v10 )
              v11 = *(_QWORD *)(v10 + 8);
            else
              v11 = 0LL;
            v12 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v5, v21, v11);
          }
          else
          {
            if ( v10 )
              v13 = *(_QWORD *)(v10 + 8);
            else
              v13 = 0LL;
            v14 = *(_QWORD *)v4;
            v15 = (void *)UserReferenceDwmApiPort(v10);
            v12 = DwmAsyncDirtySprite(v15, v14, v16, v21, v13);
          }
          v3 = v12;
        }
        else
        {
          v3 = 0;
        }
        if ( v19 )
          _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
        goto LABEL_22;
      }
    }
    else if ( v19 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
    }
    v3 = -1073741816;
LABEL_22:
    v19 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v18);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    SEMOBJ::vUnlock((SEMOBJ *)&v22);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v21);
    goto LABEL_23;
  }
  v3 = -1073741811;
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v3;
}
