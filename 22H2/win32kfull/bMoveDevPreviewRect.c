/*
 * XREFs of bMoveDevPreviewRect @ 0x1C028594C
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0210F44 (xxxDrawDragRectEx.c)
 *     bSetDevPreviewRect @ 0x1C0285B2C (bSetDevPreviewRect.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00173F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C00BE800 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0274F30 (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027FAF8 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(HDEV a1, struct _RECTL *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // ebx
  int v9; // r15d
  HDEV v10; // rsi
  int v11; // edx
  __int64 v12; // rcx
  LONG v13; // r10d
  LONG v14; // r9d
  void *v15; // rax
  int v16; // edx
  unsigned int updated; // eax
  struct tagSIZE v19; // [rsp+80h] [rbp-21h] BYREF
  HDEV v20; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v21[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v22; // [rsp+98h] [rbp-9h] BYREF
  _BYTE v23[8]; // [rsp+A0h] [rbp-1h] BYREF
  struct tagPOINT v24[2]; // [rsp+A8h] [rbp+7h] BYREF

  v20 = a1;
  v7 = 0;
  v19 = 0LL;
  v9 = a3 & 1;
  *(_OWORD *)&v24[0].x = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v23, ghsemDynamicModeChange);
  v22 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v21, (struct PDEVOBJ *)&v20);
  v10 = v20;
  if ( *((_QWORD *)v20 + 156) )
  {
    v11 = *((_DWORD *)v20 + 317) - *((_DWORD *)v20 + 315);
    v12 = (unsigned int)(*((_DWORD *)v20 + 318) - *((_DWORD *)v20 + 316));
    v13 = a2->right - a2->left;
    v14 = a2->bottom - a2->top;
    v19.cx = v13;
    v19.cy = v14;
    if ( *((_DWORD *)v20 + 299) )
    {
      if ( v11 || (_DWORD)v12 )
      {
        v15 = (void *)UserReferenceDwmApiPort(v12);
        v16 = 1;
      }
      else
      {
        v15 = (void *)UserReferenceDwmApiPort(v12);
        v16 = 0;
      }
      updated = (int)DwmAsyncSendWindowArrangingData(v15, v16, a4, (__int128 *)&a2->left, a5) >= 0;
    }
    else if ( v13 == v11 && v14 == (_DWORD)v12 )
    {
      *(struct _RECTL *)&v24[0].x = *a2;
      updated = GreUpdateSprite(a1, 0LL, *((void **)v20 + 156), 0LL, v24, &v19, 0LL, 0LL, 0, 0LL, 0, 0LL, 0LL, v9, 0);
    }
    else
    {
      updated = bSetPreviewRectContent((void **)v20 + 11, a2);
    }
    if ( updated )
      *(struct _RECTL *)(v10 + 315) = *a2;
    v7 = updated;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v21);
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v23);
  return v7;
}
