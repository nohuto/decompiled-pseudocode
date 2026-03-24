/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008BAB0
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00B8014 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FF2E8 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0272F04 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0272FAC (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C0083440 (GreSelectRedirectionBitmap.c)
 *     GreHintSpriteShape @ 0x1C00BD828 (GreHintSpriteShape.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026EDB8 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027E108 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v7; // eax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // r14d
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rcx
  struct _KTHREAD *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct _KTHREAD *v26; // r12
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rax
  int v32; // r9d
  int v33; // edi
  int v34; // r12d
  int v35; // eax
  int v36; // edi
  _QWORD *v37; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v40; // rcx
  __int64 CurrentThreadProcess; // rax
  SURFOBJ *v42; // rcx
  __int64 v43; // rax
  int v44; // edi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // edi
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r10d
  HBITMAP v52; // r8
  HWND v53; // rdx
  HDEV v54; // rcx
  int v55; // [rsp+78h] [rbp+10h]

  v4 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 22);
      if ( !v5
        || !*((_BYTE *)this + 225)
        || (v6 = (_QWORD *)*((_QWORD *)this + 15)) == 0LL
        || !*((_BYTE *)this + 169)
        || *v5 != *v6 )
      {
        v7 = *((_DWORD *)v4 + 9);
        if ( (v7 & 0x200) != 0 )
        {
          if ( (v7 & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess(v4)
              || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v40),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v13 = *ThreadWin32Thread;
                if ( v13 )
                  *(_DWORD *)(v13 + 328) &= ~1u;
              }
            }
          }
          v14 = (_QWORD *)*((_QWORD *)this + 15);
          if ( v14 && *((_BYTE *)this + 169) && **(_QWORD **)a2 == *v14 && !*((_QWORD *)this + 30)
            || (v37 = (_QWORD *)*((_QWORD *)this + 22)) != 0LL
            && *((_BYTE *)this + 225)
            && **(_QWORD **)a2 == *v37
            && !*((_QWORD *)this + 33) )
          {
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
            v15 = *(_QWORD **)a2;
            v16 = 0;
            *((_DWORD *)v15 + 10) &= ~1u;
            v17 = *((_DWORD *)v15 + 9);
            if ( (v17 & 0x4000) != 0 )
            {
              v18 = v15[62];
              if ( *(_QWORD *)(v18 + 248) || (*(_DWORD *)(v18 + 116) & 1) != 0 )
              {
                EngLockSurface(*(HSURF *)(v18 + 32));
                v17 = *((_DWORD *)v15 + 9);
                v18 = v15[62];
              }
              if ( (v17 & 0x40000) != 0 )
              {
                v42 = (SURFOBJ *)(v18 + 24);
                if ( !v18 )
                  v42 = 0LL;
                EngUnlockSurface(v42);
                GreSelectRedirectionBitmap(*v15, (HBITMAP)v15[266]);
                *((_DWORD *)v15 + 9) &= ~0x40000u;
                v15[266] = 0LL;
              }
              if ( *(_QWORD *)(v18 + 248) || (*(_DWORD *)(v18 + 116) & 1) != 0 )
              {
                GreAcquireSemaphore(ghsemSprite);
                EngUnlockSurface((SURFOBJ *)(v18 + 24));
                W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 272));
                if ( (*(_DWORD *)(v18 + 324))-- != 1 )
                  goto LABEL_70;
                v21 = KeGetCurrentThread();
                if ( !(unsigned __int8)KeIsAttachedProcess(v19)
                  || (v43 = PsGetCurrentProcess(v23, v22, v24),
                      v44 = PsGetProcessSessionIdEx(v43),
                      v46 = PsGetCurrentThreadProcess(v45),
                      v44 == (unsigned int)PsGetProcessSessionIdEx(v46)) )
                {
                  PsGetThreadWin32Thread(v21);
                }
                v26 = KeGetCurrentThread();
                v27 = 0LL;
                if ( (!(unsigned __int8)KeIsAttachedProcess(v25)
                   || (v47 = PsGetCurrentProcess(v29, v28, v30),
                       v48 = PsGetProcessSessionIdEx(v47),
                       v50 = PsGetCurrentThreadProcess(v49),
                       v48 == (unsigned int)PsGetProcessSessionIdEx(v50)))
                  && (v31 = (__int64 *)PsGetThreadWin32Thread(v26)) != 0LL
                  && (v27 = *v31) != 0 )
                {
                  v33 = *(_DWORD *)(v27 + 104);
                  v34 = *(_DWORD *)(v27 + 108);
                  *(_QWORD *)(v27 + 104) = 0LL;
                }
                else
                {
                  v33 = v55;
                  v34 = v55;
                }
                if ( (*(_DWORD *)(v18 + 112) & 0x2000000) != 0 )
                {
                  v51 = *(_DWORD *)(v18 + 492);
                  v52 = *(HBITMAP *)(v18 + 344);
                  v53 = *(HWND *)(v18 + 336);
                  v54 = *(HDEV *)(v18 + 328);
                  if ( (*(_DWORD *)(v18 + 116) & 2) == 0 || v51 && g_pDwmState )
                    GreHintSpriteShape(v54, v53, v52, *(_DWORD *)(v18 + 488), v51, 0);
                  else
                    GdiHintSpriteShapeDelayDelete(v54, v53, v52, v32);
                  *(_DWORD *)(v18 + 112) &= ~0x2000000u;
                  _InterlockedDecrement(&glDelayedHintShape);
                }
                v35 = *(_DWORD *)(v18 + 116);
                if ( (v35 & 2) != 0 )
                {
                  *(_DWORD *)(v18 + 116) = v35 & 0xFFFFFFFD;
                  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 272));
                  GreDeleteSpriteDelayDelete(*(HDEV *)(v18 + 496), *(HWND *)(v18 + 504), *(HSPRITE *)(v18 + 512));
                  v16 = 1;
                }
                if ( v27 )
                {
                  *(_DWORD *)(v27 + 104) = v33;
                  *(_DWORD *)(v27 + 108) = v34;
                }
                if ( !v16 )
                {
LABEL_70:
                  if ( *(_QWORD *)(v18 + 248) || (*(_DWORD *)(v18 + 116) & 1) != 0 )
                  {
                    v36 = *(_DWORD *)(v18 + 320);
                    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 272));
                    if ( v36 == 1 )
                      bDeleteSurface(*(_QWORD *)v18);
                  }
                }
                if ( ghsemSprite )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
                  GreReleaseSemaphoreInternal(ghsemSprite);
                }
              }
            }
            else if ( (v17 & 0x40000) != 0 )
            {
              GreSelectRedirectionBitmap(*v15, (HBITMAP)v15[266]);
              *((_DWORD *)v15 + 9) &= ~0x40000u;
              v15[266] = 0LL;
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          }
        }
      }
    }
  }
}
