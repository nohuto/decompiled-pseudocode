/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026E1F4
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C02781D0 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     DwmAsyncDirtySprite @ 0x1C0017644 (DwmAsyncDirtySprite.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0091470 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BCFC4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00BDB2C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00EC380 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C011C574 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
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
  DYNAMICMODECHANGESHARELOCK *v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v20[32]; // [rsp+38h] [rbp-1h] BYREF
  struct DWMSPRITE *v21; // [rsp+58h] [rbp+1Fh]
  _QWORD v22[6]; // [rsp+60h] [rbp+27h] BYREF
  char v23; // [rsp+B0h] [rbp+77h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
    v19 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v20, 0LL, a2);
    if ( g_pDwmState )
    {
      v4 = v21;
      if ( v21 )
      {
        v5 = *((_QWORD *)v21 + 21);
        vSpDwmUpdateSpriteVisibility(v21, 1u);
        v24 = 0;
        vSpUpdateDirtyRgn(v4, (struct SFMLOGICALSURFACE *)v5, 0LL, (struct _RECTL *)((char *)v4 + 56), &v24, 0);
        if ( v24 )
        {
          ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(unsigned int *)(v5 + 252), v6, v7, v8);
          v10 = *(_QWORD *)(v5 + 184);
          if ( ShouldUseSfmTokenArray )
          {
            if ( v10 )
              v11 = *(_QWORD *)(v10 + 8);
            else
              v11 = 0LL;
            v12 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v5, v24, v11);
          }
          else
          {
            if ( v10 )
              v13 = *(_QWORD *)(v10 + 8);
            else
              v13 = 0LL;
            v14 = *(_QWORD *)v4;
            v15 = (void *)UserReferenceDwmApiPort(v10);
            v12 = DwmAsyncDirtySprite(v15, v14, v16, v24, v13);
          }
          v3 = v12;
        }
        else
        {
          v3 = 0;
        }
        if ( v21 )
          _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
        goto LABEL_22;
      }
    }
    else if ( v21 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
    }
    v3 = -1073741816;
LABEL_22:
    v21 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v20);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
    goto LABEL_23;
  }
  v3 = -1073741811;
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v3;
}
