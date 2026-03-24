/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C0090090
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008D720 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C008E548 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF240 (GreSetDIBitsToDeviceInternal.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00B395C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C0083440 (GreSelectRedirectionBitmap.c)
 *     GreHintSpriteShape @ 0x1C00BD828 (GreHintSpriteShape.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026EDB8 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027E108 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v2; // ecx
  int v3; // r14d
  __int64 v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  struct _KTHREAD *v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  int v18; // r9d
  int v19; // edi
  int v20; // r12d
  int v21; // eax
  int v22; // edi
  SURFOBJ *v23; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v28; // rax
  int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // r10d
  HBITMAP v33; // r8
  HWND v34; // rdx
  HDEV v35; // rcx
  int v36; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= ~1u;
  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 62);
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
    {
      EngLockSurface(*(HSURF *)(v4 + 32));
      v2 = *((_DWORD *)this + 9);
      v4 = *((_QWORD *)this + 62);
    }
    if ( (v2 & 0x40000) != 0 )
    {
      v23 = (SURFOBJ *)(v4 + 24);
      if ( !v4 )
        v23 = 0LL;
      EngUnlockSurface(v23);
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 266));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 266) = 0LL;
    }
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
    {
      GreAcquireSemaphore(ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v4 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v4 + 272));
      if ( (*(_DWORD *)(v4 + 324))-- != 1 )
        goto LABEL_22;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v5)
        || (CurrentProcess = PsGetCurrentProcess(v9, v8, v10),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      v12 = KeGetCurrentThread();
      v13 = 0LL;
      if ( (!(unsigned __int8)KeIsAttachedProcess(v11)
         || (v28 = PsGetCurrentProcess(v15, v14, v16),
             v29 = PsGetProcessSessionIdEx(v28),
             v31 = PsGetCurrentThreadProcess(v30),
             v29 == (unsigned int)PsGetProcessSessionIdEx(v31)))
        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v12)) != 0LL
        && (v13 = *ThreadWin32Thread) != 0 )
      {
        v19 = *(_DWORD *)(v13 + 104);
        v20 = *(_DWORD *)(v13 + 108);
        *(_QWORD *)(v13 + 104) = 0LL;
      }
      else
      {
        v19 = v36;
        v20 = v36;
      }
      if ( (*(_DWORD *)(v4 + 112) & 0x2000000) != 0 )
      {
        v32 = *(_DWORD *)(v4 + 492);
        v33 = *(HBITMAP *)(v4 + 344);
        v34 = *(HWND *)(v4 + 336);
        v35 = *(HDEV *)(v4 + 328);
        if ( (*(_DWORD *)(v4 + 116) & 2) == 0 || v32 && g_pDwmState )
          GreHintSpriteShape(v35, v34, v33, *(_DWORD *)(v4 + 488), v32, 0);
        else
          GdiHintSpriteShapeDelayDelete(v35, v34, v33, v18);
        *(_DWORD *)(v4 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v21 = *(_DWORD *)(v4 + 116);
      if ( (v21 & 2) != 0 )
      {
        *(_DWORD *)(v4 + 116) = v21 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v4 + 496), *(HWND *)(v4 + 504), *(HSPRITE *)(v4 + 512));
        v3 = 1;
      }
      if ( v13 )
      {
        *(_DWORD *)(v13 + 104) = v19;
        *(_DWORD *)(v13 + 108) = v20;
      }
      if ( !v3 )
      {
LABEL_22:
        if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
        {
          v22 = *(_DWORD *)(v4 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
          if ( v22 == 1 )
            bDeleteSurface(*(_QWORD *)v4);
        }
      }
      if ( ghsemSprite )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 266));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 266) = 0LL;
  }
}
