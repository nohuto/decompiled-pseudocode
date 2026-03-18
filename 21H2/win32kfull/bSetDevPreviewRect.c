/*
 * XREFs of bSetDevPreviewRect @ 0x1C0282884
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
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
 *     bMoveDevPreviewRect @ 0x1C02826A4 (bMoveDevPreviewRect.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // edi
  bool v10; // r14
  __int64 v11; // rcx
  int v12; // esi
  HWND v13; // rdx
  void *Sprite; // rax
  void *v15; // rax
  HSPRITE v16; // r8
  int v18; // [rsp+38h] [rbp-120h]
  int v19; // [rsp+40h] [rbp-118h]
  int v20; // [rsp+48h] [rbp-110h]
  __int64 v21; // [rsp+50h] [rbp-108h]
  HDEV v22; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v23[8]; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v25[8]; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v26[144]; // [rsp+80h] [rbp-D8h] BYREF

  v22 = a1;
  v9 = 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  v24 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v22);
  v10 = *((_DWORD *)a1 + 296) && *((_DWORD *)a1 + 297);
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 20));
  v12 = a3 & 1;
  if ( a2 )
  {
    *((_DWORD *)a1 + 297) = v12;
    memset(v26, 0, 0x88uLL);
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v26, 0LL);
    Sprite = GreCreateSprite(
               a1,
               v13,
               0LL,
               (struct tagMINIWINDOWINFO *)v26,
               0x9900u,
               a3 & 1,
               1,
               (unsigned int)v13 & v18,
               (unsigned int)v13 & v19,
               (unsigned int)v13 & v20,
               (unsigned __int16 *)((unsigned __int64)v13 & v21));
    *((_QWORD *)a1 + 155) = Sprite;
    if ( Sprite )
    {
      *((_DWORD *)a1 + 296) = 1;
      *((_DWORD *)a1 + 297) = v12;
      if ( (a3 & 4) == 0 )
        bMoveDevPreviewRect(a1, a2, 1, a4, a5);
    }
    else
    {
      v9 = 0;
    }
  }
  else if ( v10 )
  {
    v15 = (void *)UserReferenceDwmApiPort(v11);
    DwmAsyncSendWindowArrangingData(v15, 2, a4, 0LL, a5);
  }
  if ( !*((_DWORD *)a1 + 296) )
  {
    v16 = (HSPRITE)*((_QWORD *)a1 + 155);
    if ( v16 )
    {
      GreDeleteSprite(a1, 0LL, v16, *((_DWORD *)a1 + 297));
      *((_QWORD *)a1 + 155) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return v9;
}
