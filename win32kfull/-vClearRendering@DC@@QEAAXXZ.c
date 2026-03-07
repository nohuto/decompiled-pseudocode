void __fastcall DC::vClearRendering(DC *this)
{
  int v1; // edi
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  _DWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v9; // rbp
  __int64 *ThreadWin32Thread; // rax
  int v11; // ecx
  int v12; // r13d
  int v13; // edi
  SURFOBJ *v14; // rcx
  int v15; // r11d
  HBITMAP v16; // r8
  HWND v17; // rdx
  Gre::Base *v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= ~1u;
  v1 = 0;
  v2 = *((_DWORD *)this + 9);
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 62);
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
      EngLockSurface(*(HSURF *)(v4 + 32));
    v5 = *((_QWORD *)this + 62);
    if ( (*((_DWORD *)this + 9) & 0x40000) != 0 )
    {
      v14 = (SURFOBJ *)(v5 + 24);
      if ( !v5 )
        v14 = 0LL;
      EngUnlockSurface(v14);
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 265));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 265) = 0LL;
    }
    if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      v6 = (_DWORD *)(v5 + 116);
      v7 = *((_QWORD *)Gre::Base::Globals((Gre::Base *)v4) + 14);
      GreAcquireSemaphore(v7);
      EngUnlockSurface((SURFOBJ *)(v5 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 272));
      if ( (*(_DWORD *)(v5 + 324))-- == 1 )
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v9 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v9 = *ThreadWin32Thread;
        if ( v9 )
        {
          v11 = *(_DWORD *)(v9 + 108);
          v12 = *(_DWORD *)(v9 + 104);
          v20 = v11;
          *(_QWORD *)(v9 + 104) = 0LL;
        }
        else
        {
          v11 = v20;
          v12 = v20;
        }
        v6 = (_DWORD *)(v5 + 116);
        if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
        {
          v15 = *(_DWORD *)(v5 + 488);
          v16 = *(HBITMAP *)(v5 + 344);
          v17 = *(HWND *)(v5 + 336);
          v18 = *(Gre::Base **)(v5 + 328);
          if ( (*v6 & 2) != 0 )
            GreHintSpriteShapeDelayDelete((HDEV)v18, v17, v16, v15, *(_DWORD *)(v5 + 492));
          else
            GreHintSpriteShape(v18, v17, v16, v5 + 352, v15, *(_DWORD *)(v5 + 492), 0);
          *(_DWORD *)(v5 + 112) &= ~0x2000000u;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v19) + 32) + 23656LL));
          v11 = v20;
        }
        if ( (*v6 & 2) != 0 )
        {
          *v6 &= ~2u;
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
          GreDeleteSpriteDelayDelete(*(HDEV *)(v5 + 496), *(HWND *)(v5 + 504), *(HSPRITE *)(v5 + 512));
          v11 = v20;
          v1 = 1;
        }
        if ( v9 )
        {
          *(_DWORD *)(v9 + 104) = v12;
          *(_DWORD *)(v9 + 108) = v11;
        }
      }
      if ( !v1 && (*(_QWORD *)(v5 + 248) || (*v6 & 1) != 0) )
      {
        v13 = *(_DWORD *)(v5 + 320);
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
        if ( v13 == 1 )
          bDeleteSurface(*(_QWORD *)v5);
      }
      if ( v7 )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem");
        GreReleaseSemaphoreInternal(v7);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 265));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 265) = 0LL;
  }
}
