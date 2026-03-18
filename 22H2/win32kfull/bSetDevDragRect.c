/*
 * XREFs of bSetDevDragRect @ 0x1C006EAD0
 * Callers:
 *     xxxReleaseCapture @ 0x1C0011688 (xxxReleaseCapture.c)
 *     xxxDwmStopRedirection @ 0x1C0057060 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C00588D8 (zzzDwmStartRedirection.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F15CC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F19F0 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F2B00 (xxxCancelTrackingForThread.c)
 *     ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x1C023A1F8 (-ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C006EC20 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C007AC00 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreDeleteSprite @ 0x1C00C8F74 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C00CD35C (GreCreateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0135688 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C026D7B8 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C0283DA0 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(Gre::Base *a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rdi
  unsigned int v7; // r15d
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  char v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // ebx
  void **v13; // rbx
  __int64 *v15; // r14
  __int64 v16; // rdi
  HWND v17; // rdx
  __int64 Sprite; // rax
  unsigned int v19; // eax
  void *v20; // rax
  Gre::Base *v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  _BYTE v24[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v26[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v27; // [rsp+98h] [rbp-68h]
  _BYTE v28[144]; // [rsp+B0h] [rbp-50h] BYREF

  v23 = a3;
  v27 = 0LL;
  v4 = (HDEV)((char *)a1 + 80);
  v22 = a1;
  v7 = 1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v26, *((HSEMAPHORE *)v8 + 10));
  v25 = *((_QWORD *)v8 + 15);
  GreAcquireSemaphore(v25);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)&v22);
  if ( !*((_DWORD *)v4 + 276) || (v9 = 1, !*((_DWORD *)v4 + 277)) )
    v9 = 0;
  bCleanupSpriteStateRects((HDEV)a1, (struct _SPRITESTATE *)v4);
  v11 = 4LL;
  v12 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v12;
    v15 = (__int64 *)(v4 + 282);
    v16 = 4LL;
    do
    {
      memset_0(v28, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v28, 0LL);
      Sprite = GreCreateSprite((HDEV)a1, v17, 0LL, (struct tagMINIWINDOWINFO *)v28, 0x9900u, v12, 1, 0, 0, 0, 0LL);
      *v15++ = Sprite;
      v19 = Sprite != 0 ? v7 : 0;
      v7 = v19;
      --v16;
    }
    while ( v16 );
    v4 = (HDEV)((char *)a1 + 80);
    if ( v19 )
    {
      *((_DWORD *)a1 + 294) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v23, a4 & 1);
    }
  }
  else if ( v9 )
  {
    v20 = (void *)UserReferenceDwmApiPort(v10);
    DwmAsyncSendWindowArrangingData(v20, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v13 = (void **)(v4 + 282);
    do
    {
      if ( *v13 )
      {
        GreDeleteSprite((HDEV)a1, 0LL, *v13, *((_DWORD *)v4 + 275));
        *v13 = 0LL;
      }
      ++v13;
      --v11;
    }
    while ( v11 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v26);
  return v7;
}
