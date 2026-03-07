__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rsi
  __int64 v8; // rax
  SURFOBJ *v9; // rax
  SURFOBJ *v10; // rdx
  int v11; // eax
  HDEV hdev; // rsi
  __int64 *v13; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17[24]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v7 - 24)) )
  {
LABEL_3:
    v8 = *((_QWORD *)a1 + 16);
    if ( hsurf )
    {
      if ( v8 && (*(_DWORD *)a1 & 0x40) == 0 )
        vSpDeleteShape(a1);
      if ( !*((_QWORD *)a1 + 16) && (*(_DWORD *)a1 & 0x40) == 0 )
      {
        v9 = EngLockSurface(hsurf);
        v10 = v9;
        if ( v9 )
        {
          if ( v9->iType == 3 && (HIDWORD(v9[1].hsurf) & 1) != 0 )
          {
            EngUnlockSurface(v9);
          }
          else
          {
            v11 = *(_DWORD *)a1 | 0x40;
            *((_QWORD *)a1 + 16) = v10;
            *(_DWORD *)a1 = v11;
            if ( a3 )
              *(_DWORD *)a1 = v11 | 0x80;
            *((_QWORD *)a1 + 30) = hsurf;
            *((_QWORD *)a1 + 12) = 0LL;
            *((_DWORD *)a1 + 26) = v10->sizlBitmap.cx;
            *((_DWORD *)a1 + 27) = v10->sizlBitmap.cy;
            *((_QWORD *)a1 + 17) = 0LL;
            hdev = v10[1].hdev;
            if ( hdev )
              INC_SHARE_REF_CNT(v10[1].hdev);
            v13 = (__int64 *)*((_QWORD *)a1 + 2);
            *((_QWORD *)a1 + 18) = hdev;
            v18 = *v13;
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v18);
            bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v17);
          }
        }
      }
    }
    else if ( v8 )
    {
      vSpRemoveShapeHint(a1, a3);
    }
    return 1;
  }
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v7 + 248));
  if ( !*(_DWORD *)(v7 + 300) )
  {
    if ( _bittest((const signed __int32 *)a1, 9u) )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v7 + 248));
    goto LABEL_3;
  }
  *(_QWORD *)(v7 + 304) = UserGetHDEV(v15);
  *(_QWORD *)(v7 + 312) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v7 + 320) = hsurf;
  memset_0((void *)(v7 + 328), 0, 0x88uLL);
  v16 = *(_DWORD *)(v7 + 88);
  *(_QWORD *)(v7 + 464) = 0LL;
  if ( (v16 & 0x2000000) == 0 )
    *(_DWORD *)(v7 + 88) = v16 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v7 + 248));
  return 1LL;
}
