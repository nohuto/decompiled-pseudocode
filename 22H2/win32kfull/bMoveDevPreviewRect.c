/*
 * XREFs of bMoveDevPreviewRect @ 0x1C028407C
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     bSetDevPreviewRect @ 0x1C0284260 (bSetDevPreviewRect.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C007AC00 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreUpdateSprite @ 0x1C00D5F08 (GreUpdateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C026D7B8 (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027D618 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(Gre::Base *a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  Gre::Base *v10; // rsi
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v13; // rcx
  LONG v14; // r10d
  LONG v15; // r9d
  void *v16; // rax
  int v17; // edx
  unsigned int updated; // eax
  Gre::Base *v20; // [rsp+80h] [rbp-21h] BYREF
  struct tagSIZE v21; // [rsp+88h] [rbp-19h] BYREF
  char v22[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v23; // [rsp+98h] [rbp-9h] BYREF
  char v24[8]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v25; // [rsp+A8h] [rbp+7h] BYREF

  v20 = a1;
  v5 = a3 & 1;
  v25 = 0LL;
  v9 = Gre::Base::Globals(a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v24, *((HSEMAPHORE *)v9 + 10));
  v23 = *((_QWORD *)v9 + 15);
  GreAcquireSemaphore(v23);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v20);
  v10 = v20;
  v11 = 0;
  if ( *((_QWORD *)v20 + 155) )
  {
    v12 = *((_DWORD *)v20 + 315) - *((_DWORD *)v20 + 313);
    v13 = (unsigned int)(*((_DWORD *)v20 + 316) - *((_DWORD *)v20 + 314));
    v14 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
    v15 = *(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 4);
    v21.cx = v14;
    v21.cy = v15;
    if ( *((_DWORD *)v20 + 297) )
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
    else if ( v14 == v12 && v15 == (_DWORD)v13 )
    {
      v25 = *(_OWORD *)a2;
      updated = GreUpdateSprite(
                  (HDEV)a1,
                  0LL,
                  *((void **)v20 + 155),
                  0LL,
                  (struct tagPOINT *)&v25,
                  &v21,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  v5,
                  0,
                  0);
    }
    else
    {
      updated = bSetPreviewRectContent((Gre::Base *)((char *)v20 + 80), (const struct _RECTL *)a2);
    }
    if ( updated )
      *(_OWORD *)((char *)v10 + 1252) = *(_OWORD *)a2;
    v11 = updated;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v24);
  return v11;
}
