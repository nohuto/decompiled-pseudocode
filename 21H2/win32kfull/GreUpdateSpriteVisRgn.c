/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C00731F0
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0072764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzDecomposeDesktop @ 0x1C00EAD8C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1FE4 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00388DC (IsWindowBeingDestroyed.c)
 *     IsDesktopWindow @ 0x1C004C5F0 (IsDesktopWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0073BB0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0074D3C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     DwmAsyncShowSprite @ 0x1C011AF98 (DwmAsyncShowSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // esi
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  struct DwmState *v18; // rdx
  struct DwmState *v19; // rcx
  char *v20; // r13
  unsigned __int64 v21; // rbp
  __int64 v22; // r12
  struct _KTHREAD *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rbp
  __int64 v33; // rcx
  _QWORD *v34; // r14
  _QWORD *v35; // rbp
  __int64 v36; // rdx
  __int64 Prop; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // esi
  _QWORD *v42; // rcx
  unsigned int v43; // r14d
  __int64 v44; // rdx
  char v45; // al
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rsi
  int v50; // ecx
  int v51; // eax
  _QWORD *v52; // rax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  BOOL v56; // ebp
  void *v57; // rax
  __int64 v58; // [rsp+20h] [rbp-88h] BYREF
  char v59[8]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v60; // [rsp+30h] [rbp-78h] BYREF
  char v61[40]; // [rsp+38h] [rbp-70h] BYREF
  int v62; // [rsp+60h] [rbp-48h]

  v2 = a2;
  v3 = a1;
  v4 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v6 = 0;
  if ( g_pDwmState )
  {
    v7 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int8)KeIsAttachedProcess(v5)
      && (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
          ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess))
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v17 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v17 + 104) && !*(_DWORD *)(v17 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v7 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v18 = g_pDwmState;
    if ( g_pDwmState )
    {
      v19 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v19 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          v20 = (char *)v19 - 24;
          if ( !v19 )
            v20 = 0LL;
          if ( !v20 )
          {
LABEL_82:
            v4 = ghsemGreLock;
            v3 = a1;
            goto LABEL_83;
          }
          v21 = *((_QWORD *)v20 + 5);
          if ( v21 )
            break;
LABEL_81:
          v18 = g_pDwmState;
          v19 = (struct DwmState *)*((_QWORD *)v20 + 3);
          if ( v19 == (struct DwmState *)((char *)g_pDwmState + 80) )
            goto LABEL_82;
        }
        v22 = *(_QWORD *)v18;
        v23 = KeGetCurrentThread();
        if ( !(unsigned __int8)KeIsAttachedProcess(v19)
          || (v27 = PsGetCurrentProcess(v25, v24, v26),
              v28 = PsGetProcessSessionIdEx(v27),
              v30 = PsGetCurrentThreadProcess(v29),
              v28 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
        {
          PsGetThreadWin32Thread(v23);
        }
        if ( (unsigned __int64)(unsigned __int16)v21 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_70;
        v31 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v21 * LODWORD(gSharedInfo[2]);
        v32 = v21 >> 16;
        v34 = (_QWORD *)HMPkheFromPhe(v31);
        if ( (_WORD)v32 != *(_WORD *)(v31 + 26)
          && (_WORD)v32 != 0xFFFF
          && ((_WORD)v32 || !PsGetCurrentProcessWow64Process(v33)) )
        {
          goto LABEL_70;
        }
        if ( (*(_BYTE *)(v31 + 25) & 1) != 0 )
          goto LABEL_70;
        if ( *(_BYTE *)(v31 + 24) != 1 )
          goto LABEL_70;
        v35 = (_QWORD *)*v34;
        if ( !*v34 )
          goto LABEL_70;
        if ( (*(_DWORD *)(v35[5] + 232LL) & 0x20) != 0 )
        {
          v36 = *(unsigned __int16 *)(gpsi + 900LL);
          if ( **(_WORD **)(v35[17] + 8LL) == (_WORD)v36 )
            goto LABEL_34;
          Prop = RealGetProp(v35[18], v36, 1LL);
          if ( Prop )
          {
            if ( Prop == -1 )
              goto LABEL_34;
          }
          else
          {
            Prop = RealGetProp(v35[18], *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
          }
          if ( !Prop
            || (LOBYTE(v38) = 1, (v39 = HMValidateHandleNoSecure(Prop, v38)) == 0)
            || (unsigned int)IsWindowBeingDestroyed(v39) )
          {
LABEL_34:
            if ( (RealGetProp(v35[18], (unsigned __int16)atomDispAffinity, 1LL) & 1) == 0 )
            {
              v40 = v35[5];
LABEL_36:
              SetRectRgnIndirect(*(_QWORD *)(v22 + 184), v40 + 88);
              v41 = 1;
LABEL_71:
              if ( v41 )
              {
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v60, *((HRGN *)g_pDwmState + 23), 0, 0);
                v55 = v60;
                if ( v60 )
                  v41 = *(_DWORD *)(v60 + 84) != 1;
                if ( !v62 )
                {
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v60);
                  v55 = v60;
                }
                if ( v55 )
                  _InterlockedDecrement((volatile signed __int32 *)(v55 + 12));
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v61);
              }
              v56 = v41 != 0;
              if ( v56 != (*((_DWORD *)v20 + 41) & 1) )
              {
                *((_DWORD *)v20 + 41) = v56 | *((_DWORD *)v20 + 41) & 0xFFFFFFFE;
                v57 = (void *)UserReferenceDwmApiPort();
                DwmAsyncShowSprite(v57);
              }
              goto LABEL_81;
            }
          }
        }
        v40 = v35[5];
        if ( (*(_BYTE *)(v40 + 26) & 0x20) == 0 )
        {
          v42 = v35;
          v43 = (4 * (*(_BYTE *)(v40 + 31) & 4)) | 0x4401;
          do
          {
            v44 = v42[5];
            v45 = *(_BYTE *)(v44 + 31);
            if ( (v45 & 0x10) == 0 || (v45 & 0x20) != 0 && v42 != v35 )
            {
LABEL_69:
              SetOrCreateRectRgnIndirectPublic(v22 + 184, gZero);
              goto LABEL_70;
            }
            if ( (*(_WORD *)(v44 + 42) & 0x2FFF) == 0x29D )
              break;
            v42 = (_QWORD *)v42[13];
          }
          while ( v42 );
          v46 = v35;
          while ( 1 )
          {
            v47 = v46[5];
            if ( (*(_BYTE *)(v47 + 27) & 0x20) != 0 )
              break;
            v46 = (_QWORD *)v46[13];
            if ( !v46 )
              goto LABEL_54;
          }
          if ( (*(_WORD *)(v47 + 42) & 0x2FFF) != 0x29D || v46 == v35 )
          {
            v48 = (_QWORD *)RealGetProp(v46[18], (unsigned __int16)atomLayer, 1LL);
            if ( !v48 || !*v48 )
              goto LABEL_69;
          }
LABEL_54:
          UpdatesLockedForDwm();
          v49 = v35;
          while ( 1 )
          {
            v50 = *(_DWORD *)(v49[5] + 24LL);
            if ( (v50 & 0x80000) != 0 || (v50 & 0x20000000) != 0 )
              break;
            v49 = (_QWORD *)v49[13];
            if ( !v49 )
              goto LABEL_68;
          }
          if ( v49 == v35 || (LOBYTE(v51) = IsDesktopWindow((__int64)v49), !v51) )
          {
            if ( v49 )
            {
              v52 = (_QWORD *)RealGetProp(v49[18], (unsigned __int16)atomLayer, 1LL);
              if ( v52 )
              {
                if ( *v52 )
                {
                  v53 = v49[5];
                  if ( (*(_DWORD *)(v53 + 24) & 0x20000000) != 0 )
                  {
                    v54 = *(_DWORD *)(v53 + 232);
                    if ( (v54 & 0x20) != 0 && (v54 & 4) == 0 )
                      v43 &= ~0x4000u;
                  }
                }
              }
            }
          }
LABEL_68:
          v41 = CalcVisRgnWorker((struct tagWND *const)v35, (HRGN *)(v22 + 184), v43);
          goto LABEL_71;
        }
        if ( (*(_BYTE *)(v40 + 31) & 0x10) != 0 )
          goto LABEL_36;
LABEL_70:
        v41 = 0;
        goto LABEL_71;
      }
    }
LABEL_83:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v7 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v2 = a2;
  }
  v58 = v3;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v59, (struct PDEVOBJ *)&v58);
  if ( *(_DWORD *)(v3 + 148) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v3 + 152) + 8LL * v6++), v2);
    while ( v6 < *(_DWORD *)(v3 + 148) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v3 + 88), v2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v59);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
