/*
 * XREFs of bSetDevDragRect @ 0x1C0029460
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     xxxReleaseCapture @ 0x1C00DAB00 (xxxReleaseCapture.c)
 *     zzzDwmStartRedirection @ 0x1C00E942C (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00E9620 (xxxDwmStopRedirection.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020E968 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021026C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02106D4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0210E30 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C0210F44 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00173F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00295AC (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreCreateSprite @ 0x1C003874C (GreCreateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C00EF0D8 (GreDeleteSprite.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0131850 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0274F30 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C0285678 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rbx
  unsigned int v7; // r15d
  char v8; // r14
  __int64 v9; // rsi
  int v10; // edi
  void **v11; // rdi
  __int64 *v13; // r14
  __int64 v14; // rbx
  HWND v15; // rdx
  __int64 Sprite; // rax
  unsigned int v17; // eax
  void *v18; // rax
  _QWORD v20[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v23[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v24; // [rsp+98h] [rbp-68h]
  _BYTE v25[144]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1 + 22;
  v20[0] = a1;
  v20[1] = a3;
  v7 = 1;
  v24 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v23, ghsemDynamicModeChange);
  v22 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v21, (struct PDEVOBJ *)v20);
  if ( !*((_DWORD *)v4 + 276) || (v8 = 1, !*((_DWORD *)v4 + 277)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v9 = 4LL;
  v10 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v10;
    v13 = (__int64 *)(v4 + 282);
    v14 = 4LL;
    do
    {
      memset(v25, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v25, 0LL);
      Sprite = GreCreateSprite(a1, v15, 0LL, (struct tagMINIWINDOWINFO *)v25, 0x9900u, v10, 1, 0, 0, 0, 0LL);
      *v13++ = Sprite;
      v17 = Sprite != 0 ? v7 : 0;
      v7 = v17;
      --v14;
    }
    while ( v14 );
    v4 = a1 + 22;
    if ( v17 )
    {
      *((_DWORD *)a1 + 296) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1);
    }
  }
  else if ( v8 )
  {
    v18 = (void *)UserReferenceDwmApiPort();
    DwmAsyncSendWindowArrangingData(v18, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v11 = (void **)(v4 + 282);
    do
    {
      if ( *v11 )
      {
        GreDeleteSprite(a1, 0LL, *v11, *((_DWORD *)v4 + 275));
        *v11 = 0LL;
      }
      ++v11;
      --v9;
    }
    while ( v9 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v21);
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v23);
  return v7;
}
