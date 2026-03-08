/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0
 * Callers:
 *     GreExtSelectClipRgnInternal @ 0x1C004D240 (GreExtSelectClipRgnInternal.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00510A0 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00510F0 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0055118 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0055220 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C005DF10 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x1C0097150 (GreSelectRedirectionBitmap.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0269FC0 (GreDeleteSpriteDelayDelete.c)
 *     GreHintSpriteShapeDelayDelete @ 0x1C026A76C (GreHintSpriteShapeDelayDelete.c)
 */

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
