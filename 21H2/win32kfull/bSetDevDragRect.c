/*
 * XREFs of bSetDevDragRect @ 0x1C010FE70
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0098410 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C0098F14 (zzzDwmStartRedirection.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020FDCC (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C02104C0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreCreateSprite @ 0x1C00833D0 (GreCreateSprite.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0086CD0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreDeleteSprite @ 0x1C00B3D48 (GreDeleteSprite.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C010FFBC (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0154F24 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0272CE0 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C02823D0 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rbx
  unsigned int v7; // r15d
  char v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edi
  HSPRITE *v12; // rdi
  _QWORD *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  HWND v18; // rdx
  void *Sprite; // rax
  unsigned int v20; // eax
  void *v21; // rax
  HDEV v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h]
  _BYTE v25[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v28; // [rsp+98h] [rbp-68h]
  _BYTE v29[144]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1 + 20;
  v23 = a1;
  v24 = a3;
  v7 = 1;
  v28 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v27, ghsemDynamicModeChange);
  v26 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v25, (struct PDEVOBJ *)&v23);
  if ( !*((_DWORD *)v4 + 276) || (v8 = 1, !*((_DWORD *)v4 + 277)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v10 = 4LL;
  v11 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v11;
    v14 = v4 + 282;
    v15 = 4LL;
    do
    {
      memset(v29, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v29, 0LL, v16, v17);
      Sprite = GreCreateSprite(a1, v18, 0LL, (struct tagMINIWINDOWINFO *)v29, 0x9900u, v11, 1, 0, 0, 0, 0LL);
      *v14++ = Sprite;
      v20 = Sprite != 0LL ? v7 : 0;
      v7 = v20;
      --v15;
    }
    while ( v15 );
    v4 = a1 + 20;
    if ( v20 )
    {
      *((_DWORD *)a1 + 294) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v24, a4 & 1);
    }
  }
  else if ( v8 )
  {
    v21 = (void *)UserReferenceDwmApiPort(v9);
    DwmAsyncSendWindowArrangingData(v21, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v12 = (HSPRITE *)(v4 + 282);
    do
    {
      if ( *v12 )
      {
        GreDeleteSprite(a1, 0LL, *v12, *((_DWORD *)v4 + 275));
        *v12 = 0LL;
      }
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v25);
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v27);
  return v7;
}
