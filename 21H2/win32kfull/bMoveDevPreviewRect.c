/*
 * XREFs of bMoveDevPreviewRect @ 0x1C02826A4
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     bSetDevPreviewRect @ 0x1C0282884 (bSetDevPreviewRect.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C0020E98 (GreUpdateSprite.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0086CD0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0272CE0 (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027DD98 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(HDEV a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // ebx
  int v9; // r15d
  __int64 v10; // r8
  HDEV v11; // rsi
  int v12; // edx
  __int64 v13; // rcx
  LONG v14; // r10d
  __int64 v15; // r9
  void *v16; // rax
  int v17; // edx
  unsigned int updated; // eax
  struct tagSIZE v20; // [rsp+80h] [rbp-21h] BYREF
  HDEV v21; // [rsp+88h] [rbp-19h] BYREF
  char v22[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v23; // [rsp+98h] [rbp-9h] BYREF
  char v24[8]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v25; // [rsp+A8h] [rbp+7h] BYREF

  v21 = a1;
  v7 = 0;
  v20 = 0LL;
  v9 = a3 & 1;
  v25 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v24, ghsemDynamicModeChange);
  v23 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v21);
  v11 = v21;
  if ( *((_QWORD *)v21 + 155) )
  {
    v12 = *((_DWORD *)v21 + 315) - *((_DWORD *)v21 + 313);
    v13 = (unsigned int)(*((_DWORD *)v21 + 316) - *((_DWORD *)v21 + 314));
    v14 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
    v15 = (unsigned int)(*(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 4));
    v20.cx = v14;
    v20.cy = v15;
    if ( *((_DWORD *)v21 + 297) )
    {
      if ( v12 || (_DWORD)v13 )
      {
        v16 = (void *)UserReferenceDwmApiPort(v13);
        v17 = 1;
      }
      else
      {
        v16 = (void *)UserReferenceDwmApiPort(v13);
        v17 = 0;
      }
      updated = (int)DwmAsyncSendWindowArrangingData(v16, v17, a4, (__int128 *)a2, a5) >= 0;
    }
    else if ( v14 == v12 && (_DWORD)v15 == (_DWORD)v13 )
    {
      v25 = *(_OWORD *)a2;
      updated = GreUpdateSprite(
                  a1,
                  0LL,
                  *((void **)v21 + 155),
                  0LL,
                  (struct tagPOINT *)&v25,
                  &v20,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  v9,
                  0);
    }
    else
    {
      updated = bSetPreviewRectContent((struct _SPRITESTATE *)(v21 + 20), (const struct _RECTL *)a2, v10, v15);
    }
    if ( updated )
      *(_OWORD *)(v11 + 313) = *(_OWORD *)a2;
    v7 = updated;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v24);
  return v7;
}
