/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C004A690
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?GdiUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049A7C (-GdiUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C004BDA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     DwmAsyncShowSprite @ 0x1C0106BEC (DwmAsyncShowSprite.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteVisRgn(HDEV a1, unsigned int a2)
{
  HDEV v2; // rsi
  unsigned int v3; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  struct DwmState *v6; // rdx
  struct DwmState *v7; // rcx
  char *v8; // r15
  __int64 v9; // rdi
  HRGN *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD **v13; // r14
  _QWORD *v14; // r13
  __int128 *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // xmm1_8
  int v18; // esi
  tagObjLock **v19; // rdi
  __int64 Prop; // rdi
  __int128 *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // xmm1_8
  tagObjLock **v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  __int128 *v27; // rdi
  __int64 v28; // r14
  __int64 v29; // xmm1_8
  int v30; // esi
  tagObjLock **v31; // rdi
  char v32; // di
  int v33; // edi
  __int64 v34; // rdx
  char v35; // cl
  _QWORD *v36; // rdx
  unsigned int v37; // r12d
  __int64 v38; // rcx
  char v39; // al
  _QWORD *v40; // rdi
  __int64 v41; // rcx
  __int128 *v42; // rsi
  __int64 v43; // r15
  __int64 v44; // xmm1_8
  int v45; // r14d
  tagObjLock **v46; // rsi
  _QWORD *v47; // rdi
  _QWORD *v48; // rdi
  int v49; // ecx
  int v50; // eax
  __int128 *v51; // rsi
  __int64 v52; // r15
  __int64 v53; // xmm1_8
  int v54; // r14d
  tagObjLock **v55; // rsi
  _QWORD *v56; // rsi
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rax
  BOOL v60; // esi
  __int64 v61; // rcx
  void *v62; // rax
  int v63; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v64; // [rsp+2Ch] [rbp-DCh]
  HRGN *v65; // [rsp+30h] [rbp-D8h]
  char *v66; // [rsp+38h] [rbp-D0h]
  HDEV v67; // [rsp+40h] [rbp-C8h]
  __int64 v68; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v69[12]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v70; // [rsp+80h] [rbp-88h]
  __int64 v71; // [rsp+90h] [rbp-78h]
  __int128 v72; // [rsp+98h] [rbp-70h]
  __int64 v73; // [rsp+A8h] [rbp-60h]
  __int128 v74; // [rsp+B0h] [rbp-58h]
  __int64 v75; // [rsp+C0h] [rbp-48h]
  __int128 v76; // [rsp+C8h] [rbp-40h]
  __int64 v77; // [rsp+D8h] [rbp-30h]
  __int128 v78; // [rsp+E0h] [rbp-28h]
  __int64 v79; // [rsp+F0h] [rbp-18h]
  __int64 v80; // [rsp+F8h] [rbp-10h]
  char v81; // [rsp+100h] [rbp-8h]
  __int128 v82; // [rsp+108h] [rbp+0h] BYREF
  char v83; // [rsp+118h] [rbp+10h]
  char v84; // [rsp+120h] [rbp+18h]
  __int64 v85; // [rsp+128h] [rbp+20h]
  char v86; // [rsp+130h] [rbp+28h]
  __int128 v87; // [rsp+138h] [rbp+30h] BYREF
  char v88; // [rsp+148h] [rbp+40h]
  char v89; // [rsp+150h] [rbp+48h]
  __int64 v90; // [rsp+158h] [rbp+50h]
  char v91; // [rsp+160h] [rbp+58h]
  __int128 v92; // [rsp+168h] [rbp+60h] BYREF
  char v93; // [rsp+178h] [rbp+70h]
  char v94; // [rsp+180h] [rbp+78h]
  __int64 v95; // [rsp+188h] [rbp+80h]
  char v96; // [rsp+190h] [rbp+88h]
  __int128 v97; // [rsp+198h] [rbp+90h] BYREF
  char v98; // [rsp+1A8h] [rbp+A0h]
  char v99; // [rsp+1B0h] [rbp+A8h]
  __int64 v100; // [rsp+1B8h] [rbp+B0h]
  char v101; // [rsp+1C0h] [rbp+B8h]
  __int128 v102; // [rsp+1C8h] [rbp+C0h] BYREF
  char v103; // [rsp+1D8h] [rbp+D0h]
  char v104; // [rsp+1E0h] [rbp+D8h]

  v2 = a1;
  v67 = a1;
  v3 = a2;
  v64 = a2;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    v63 = 0;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v5 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v5 + 104) && !*(_DWORD *)(v5 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v63 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v6 = g_pDwmState;
    if ( g_pDwmState )
    {
      v7 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v7 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          v8 = (char *)v7 - 24;
          if ( !v7 )
            v8 = 0LL;
          v66 = v8;
          if ( !v8 )
          {
LABEL_152:
            v3 = v64;
            v2 = v67;
            goto LABEL_153;
          }
          v9 = *((_QWORD *)v8 + 5);
          if ( v9 )
            break;
LABEL_151:
          v6 = g_pDwmState;
          v7 = (struct DwmState *)*((_QWORD *)v8 + 3);
          if ( v7 == (struct DwmState *)((char *)g_pDwmState + 80) )
            goto LABEL_152;
        }
        v10 = (HRGN *)(*(_QWORD *)v6 + 184LL);
        v65 = v10;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v9 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_140;
        v11 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v9 * *((_DWORD *)&gSharedInfo + 4);
        v13 = (_QWORD **)HMPkheFromPhe(v11);
        LOWORD(v9) = WORD1(v9) & 0x7FFF;
        if ( (WORD1(v9) & 0x7FFF) != *(_WORD *)(v11 + 26)
          && (_WORD)v9 != 0x7FFF
          && ((_WORD)v9 || !PsGetCurrentProcessWow64Process(v12)) )
        {
          goto LABEL_140;
        }
        if ( (*(_BYTE *)(v11 + 25) & 1) != 0 )
          goto LABEL_140;
        if ( *(_BYTE *)(v11 + 24) != 1 )
          goto LABEL_140;
        v14 = *v13;
        if ( !*v13 )
          goto LABEL_140;
        if ( (*(_DWORD *)(v14[5] + 232LL) & 2) == 0 )
          goto LABEL_77;
        if ( **(_WORD **)(v14[17] + 8LL) == *(_WORD *)(gpsi + 900LL) )
          goto LABEL_60;
        v15 = (__int128 *)v14[18];
        v16 = *(unsigned __int16 *)(gpsi + 900LL);
        v80 = gDomainDummyLock;
        v81 = 0;
        v82 = 0LL;
        v83 = 0;
        v17 = *((_QWORD *)v15 + 2);
        v70 = *v15;
        v84 = 0;
        v71 = v17;
        if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
        {
          v18 = 0;
          v84 = 1;
          if ( v15 == (__int128 *)gObjDummyLock )
            v15 = 0LL;
          *(_QWORD *)&v82 = v15;
          if ( v83 )
          {
LABEL_34:
            Prop = RealGetProp(v14[18], v16, 1LL);
            if ( v84 && v83 )
            {
              if ( (_QWORD)v82 )
                tagObjLock::UnLockExclusive((tagObjLock *)v82);
              v83 = 0;
            }
            if ( Prop )
            {
              v25 = Prop == -1;
            }
            else
            {
              v21 = (__int128 *)v14[18];
              v86 = 0;
              v87 = 0LL;
              v85 = gDomainDummyLock;
              v88 = 0;
              v22 = *(unsigned __int16 *)(gpsi + 1378LL);
              v23 = *((_QWORD *)v21 + 2);
              v72 = *v21;
              v89 = 0;
              v73 = v23;
              if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
              {
                v89 = 1;
                if ( v21 == (__int128 *)gObjDummyLock )
                  v21 = 0LL;
                *(_QWORD *)&v87 = v21;
                if ( !v88 )
                {
                  v24 = (tagObjLock **)&v87;
                  do
                  {
                    if ( *v24 )
                      tagObjLock::LockExclusive(*v24);
                    ++v18;
                    ++v24;
                  }
                  while ( !v18 );
                  v88 = 1;
                }
              }
              Prop = RealGetProp(v14[18], v22, 1LL);
              if ( v89 && v88 )
              {
                if ( (_QWORD)v87 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v87);
                v88 = 0;
              }
              v25 = Prop == 0;
            }
            if ( v25 || (v26 = HMValidateHandleNoSecure(Prop, 1)) == 0 || (unsigned int)IsWindowBeingDestroyed(v26) )
            {
LABEL_60:
              v27 = (__int128 *)v14[18];
              v28 = (unsigned __int16)atomDispAffinity;
              v90 = gDomainDummyLock;
              v91 = 0;
              v92 = 0LL;
              v93 = 0;
              v29 = *((_QWORD *)v27 + 2);
              v74 = *v27;
              v94 = 0;
              v75 = v29;
              if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
              {
                v94 = 1;
                if ( v27 == (__int128 *)gObjDummyLock )
                  v27 = 0LL;
                *(_QWORD *)&v92 = v27;
                if ( !v93 )
                {
                  v30 = 0;
                  v31 = (tagObjLock **)&v92;
                  do
                  {
                    if ( *v31 )
                      tagObjLock::LockExclusive(*v31);
                    ++v30;
                    ++v31;
                  }
                  while ( !v30 );
                  v93 = 1;
                }
              }
              v32 = RealGetProp(v14[18], v28, 1LL);
              if ( v94 && v93 )
              {
                if ( (_QWORD)v92 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v92);
                v93 = 0;
              }
              if ( (v32 & 1) == 0 )
              {
                SetRectRgnIndirect(*v10, v14[5] + 88LL);
                v33 = 1;
LABEL_141:
                if ( v33 )
                {
                  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v68, *((HRGN *)g_pDwmState + 23), 0, 0);
                  v59 = v68;
                  if ( v68 )
                    v33 = *(_DWORD *)(v68 + 84) != 1;
                  if ( !v69[10] )
                  {
                    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v68);
                    v59 = v68;
                  }
                  if ( v59 )
                    _InterlockedDecrement((volatile signed __int32 *)(v59 + 12));
                  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v69);
                }
                v60 = v33 != 0;
                if ( v60 != (*((_DWORD *)v8 + 35) & 1) )
                {
                  v61 = v60 | *((_DWORD *)v8 + 35) & 0xFFFFFFFE;
                  *((_DWORD *)v8 + 35) = v61;
                  v62 = (void *)UserReferenceDwmApiPort(v61);
                  DwmAsyncShowSprite(v62);
                }
                goto LABEL_151;
              }
            }
LABEL_77:
            v34 = v14[5];
            v35 = *(_BYTE *)(v34 + 31);
            if ( (*(_BYTE *)(v34 + 26) & 0x20) == 0 )
            {
              v36 = v14;
              v37 = (4 * (v35 & 4)) | 0x4401;
              do
              {
                v38 = v36[5];
                v39 = *(_BYTE *)(v38 + 31);
                if ( (v39 & 0x10) == 0 || (v39 & 0x20) != 0 && v36 != v14 )
                {
LABEL_139:
                  SetOrCreateRectRgnIndirectPublic(v65, gZero);
                  v8 = v66;
                  v33 = 0;
                  goto LABEL_141;
                }
                if ( (*(_WORD *)(v38 + 42) & 0x2FFF) == 0x29D )
                  break;
                v36 = (_QWORD *)v36[13];
              }
              while ( v36 );
              v40 = v14;
              while ( 1 )
              {
                v41 = v40[5];
                if ( (*(_BYTE *)(v41 + 27) & 0x20) != 0 )
                  break;
                v40 = (_QWORD *)v40[13];
                if ( !v40 )
                  goto LABEL_109;
              }
              v41 = *(_WORD *)(v41 + 42) & 0x2FFF;
              if ( (_DWORD)v41 != 669 || v40 == v14 )
              {
                v42 = (__int128 *)v40[18];
                v43 = (unsigned __int16)atomLayer;
                v95 = gDomainDummyLock;
                v96 = 0;
                v97 = 0LL;
                v98 = 0;
                v44 = *((_QWORD *)v42 + 2);
                v76 = *v42;
                v99 = 0;
                v77 = v44;
                if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
                {
                  v99 = 1;
                  if ( v42 == (__int128 *)gObjDummyLock )
                    v42 = 0LL;
                  *(_QWORD *)&v97 = v42;
                  if ( !v98 )
                  {
                    v45 = 0;
                    v46 = (tagObjLock **)&v97;
                    do
                    {
                      if ( *v46 )
                        tagObjLock::LockExclusive(*v46);
                      ++v45;
                      ++v46;
                    }
                    while ( !v45 );
                    v98 = 1;
                  }
                }
                v47 = (_QWORD *)RealGetProp(v40[18], v43, 1LL);
                if ( v99 && v98 )
                {
                  v41 = v97;
                  if ( (_QWORD)v97 )
                    tagObjLock::UnLockExclusive((tagObjLock *)v97);
                  v98 = 0;
                }
                if ( !v47 || !*v47 )
                  goto LABEL_139;
              }
LABEL_109:
              UpdatesLockedForDwm(v41);
              v48 = v14;
              while ( 1 )
              {
                v49 = *(_DWORD *)(v48[5] + 24LL);
                if ( (v49 & 0x80000) != 0 || (v49 & 0x20000000) != 0 )
                  break;
                v48 = (_QWORD *)v48[13];
                if ( !v48 )
                  goto LABEL_138;
              }
              if ( v48 == v14 || (LOBYTE(v50) = IsDesktopWindow((__int64)v48), !v50) )
              {
                if ( v48 )
                {
                  v51 = (__int128 *)v48[18];
                  v52 = (unsigned __int16)atomLayer;
                  v100 = gDomainDummyLock;
                  v101 = 0;
                  v102 = 0LL;
                  v103 = 0;
                  v53 = *((_QWORD *)v51 + 2);
                  v78 = *v51;
                  v104 = 0;
                  v79 = v53;
                  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
                  {
                    v104 = 1;
                    if ( v51 == (__int128 *)gObjDummyLock )
                      v51 = 0LL;
                    *(_QWORD *)&v102 = v51;
                    if ( !v103 )
                    {
                      v54 = 0;
                      v55 = (tagObjLock **)&v102;
                      do
                      {
                        if ( *v55 )
                          tagObjLock::LockExclusive(*v55);
                        ++v54;
                        ++v55;
                      }
                      while ( !v54 );
                      v103 = 1;
                    }
                  }
                  v56 = (_QWORD *)RealGetProp(v48[18], v52, 1LL);
                  if ( v104 && v103 )
                  {
                    if ( (_QWORD)v102 )
                      tagObjLock::UnLockExclusive((tagObjLock *)v102);
                    v103 = 0;
                  }
                  if ( v56 )
                  {
                    if ( *v56 )
                    {
                      v57 = v48[5];
                      if ( (*(_DWORD *)(v57 + 24) & 0x20000000) != 0 )
                      {
                        v58 = *(_DWORD *)(v57 + 232);
                        if ( (v58 & 2) != 0 && (v58 & 1) == 0 )
                          v37 &= ~0x4000u;
                      }
                    }
                  }
                }
              }
LABEL_138:
              v8 = v66;
              v33 = CalcVisRgnWorker((const struct tagWND *const)v14, v65, v37);
              goto LABEL_141;
            }
            if ( (v35 & 0x10) != 0 )
            {
              SetRectRgnIndirect(*v10, v34 + 88);
              v33 = 1;
              goto LABEL_141;
            }
LABEL_140:
            v33 = 0;
            goto LABEL_141;
          }
          v19 = (tagObjLock **)&v82;
          do
          {
            if ( *v19 )
              tagObjLock::LockExclusive(*v19);
            ++v18;
            ++v19;
          }
          while ( !v18 );
          v83 = 1;
        }
        v18 = 0;
        goto LABEL_34;
      }
    }
LABEL_153:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v63);
  }
  GdiUpdateSpriteVisRgn(v2, v3);
  if ( ghsemGreLock )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
}
