/*
 * XREFs of bSetDevPreviewRect @ 0x1C028615C
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0211504 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00173F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C002964C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreCreateSprite @ 0x1C00387EC (GreCreateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C00EF428 (GreDeleteSprite.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0131C00 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0275510 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevPreviewRect @ 0x1C0285F7C (bMoveDevPreviewRect.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, struct _RECTL *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // edi
  bool v9; // r15
  __int64 v10; // rcx
  int v11; // esi
  HWND v12; // rdx
  void *Sprite; // rax
  void *v14; // rax
  void *v15; // r8
  int v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+40h] [rbp-C0h]
  int v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  HDEV v22; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[144]; // [rsp+90h] [rbp-70h] BYREF

  v22 = a1;
  v8 = 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  v24 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v22);
  v9 = *((_DWORD *)a1 + 298) && *((_DWORD *)a1 + 299);
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 22));
  v11 = a3 & 1;
  if ( a2 )
  {
    *((_DWORD *)a1 + 299) = v11;
    memset(v26, 0, 0x88uLL);
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v26, 0LL);
    Sprite = GreCreateSprite(
               a1,
               v12,
               0LL,
               (struct tagMINIWINDOWINFO *)v26,
               0x9900u,
               a3 & 1,
               1,
               (unsigned int)v12 & v17,
               (unsigned int)v12 & v18,
               (unsigned int)v12 & v19,
               (unsigned __int16 *)((unsigned __int64)v12 & v20));
    *((_QWORD *)a1 + 156) = Sprite;
    if ( Sprite )
    {
      *((_DWORD *)a1 + 298) = 1;
      *((_DWORD *)a1 + 299) = v11;
      if ( (a3 & 4) == 0 )
        bMoveDevPreviewRect(a1, a2, 1, a4, a5);
    }
    else
    {
      v8 = 0;
    }
  }
  else if ( v9 )
  {
    v14 = (void *)UserReferenceDwmApiPort(v10);
    DwmAsyncSendWindowArrangingData(v14, 2, a4, 0LL, a5);
  }
  if ( !*((_DWORD *)a1 + 298) )
  {
    v15 = (void *)*((_QWORD *)a1 + 156);
    if ( v15 )
    {
      GreDeleteSprite(a1, 0LL, v15, *((_DWORD *)a1 + 299));
      *((_QWORD *)a1 + 156) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return v8;
}
