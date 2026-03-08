/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0
 * Callers:
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzResetSharedDesktops @ 0x1C0096870 (zzzResetSharedDesktops.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0100930 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C02278C0 (xxxMinimizeHungWindow.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000B2CC (SpbCheckRect.c)
 *     DwmAsyncShowSprite @ 0x1C00248D0 (DwmAsyncShowSprite.c)
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0039020 (GetStyleWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0053AA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GreClientRgnUpdated @ 0x1C005464C (GreClientRgnUpdated.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00546FC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C0097150 (GreSelectRedirectionBitmap.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01BEE24 (InvalidateGDIWindows.c)
 *     GreLockDisplayArea @ 0x1C02862E0 (GreLockDisplayArea.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // r13d
  __int64 *i; // rbx
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // esi
  unsigned int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // r14
  struct Gre::Base::SESSION_GLOBALS *v15; // rsi
  __int64 v16; // rbx
  Gre::Base *v17; // rcx
  Gre::Base *v18; // rcx
  int v19; // edi
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v21; // rcx
  __int64 v22; // rax
  struct Gre::Base::SESSION_GLOBALS *v23; // rdi
  Gre::Base *v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // r15
  _QWORD *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rcx
  const struct tagWND **v33; // r13
  const struct tagWND *v34; // rsi
  _QWORD *v35; // r14
  __int64 v36; // rax
  __int128 *v37; // rcx
  __int64 v38; // xmm1_8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 Prop; // r13
  __int128 *v43; // rcx
  __int64 v44; // xmm1_8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int128 *v47; // rcx
  __int64 v48; // xmm1_8
  __int64 v49; // rax
  __int64 v50; // rcx
  char v51; // r13
  int v52; // esi
  __int64 v53; // rax
  BOOL v54; // r14d
  struct Gre::Base::SESSION_GLOBALS *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  char v60; // cl
  unsigned int v61; // r14d
  const struct tagWND *v62; // rdx
  __int64 v63; // rcx
  char v64; // al
  const struct tagWND *v65; // r13
  __int64 v66; // rcx
  __int128 *v67; // rcx
  __int64 v68; // xmm1_8
  __int64 v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rsi
  __int64 v72; // rsi
  int v73; // ecx
  __int128 *v74; // rcx
  __int64 v75; // xmm1_8
  __int64 v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rax
  int v79; // eax
  __int64 v80; // r8
  __int64 v81; // r9
  bool v82; // zf
  __int64 v83; // r8
  __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rsi
  void *v90; // rax
  __int64 v91; // r10
  unsigned __int8 v92; // cl
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // edx
  LONG bottom; // r12d
  int v97; // ecx
  LONG left; // r14d
  LONG right; // r15d
  LONG top; // r13d
  __int64 StyleWindow; // rax
  __int64 v102; // rax
  int v103; // edx
  int v104; // ecx
  struct tagWND *v105; // r14
  __int128 *v106; // rax
  int v107; // ecx
  tagObjLock **v108; // rax
  __int128 *v109; // rax
  int v110; // edx
  tagObjLock **v111; // rcx
  __int64 v112; // rax
  __int128 *v113; // rax
  int v114; // edx
  tagObjLock **v115; // rcx
  __int128 *v116; // rax
  int v117; // edx
  tagObjLock **v118; // rcx
  int v119; // eax
  __int128 *v120; // rax
  int v121; // edx
  tagObjLock **v122; // rcx
  int v123; // [rsp+28h] [rbp-E0h]
  int v124; // [rsp+28h] [rbp-E0h]
  int v125; // [rsp+28h] [rbp-E0h]
  int v126; // [rsp+28h] [rbp-E0h]
  int v127; // [rsp+28h] [rbp-E0h]
  __int128 *v128; // [rsp+30h] [rbp-D8h]
  tagObjLock **v129; // [rsp+30h] [rbp-D8h]
  tagObjLock **v130; // [rsp+30h] [rbp-D8h]
  tagObjLock **v131; // [rsp+30h] [rbp-D8h]
  tagObjLock **v132; // [rsp+30h] [rbp-D8h]
  tagObjLock **v133; // [rsp+30h] [rbp-D8h]
  unsigned int v134; // [rsp+38h] [rbp-D0h]
  unsigned int v135; // [rsp+38h] [rbp-D0h]
  __int64 v136; // [rsp+40h] [rbp-C8h]
  __int64 v137; // [rsp+40h] [rbp-C8h]
  __int64 v138; // [rsp+40h] [rbp-C8h]
  __int64 v139; // [rsp+40h] [rbp-C8h]
  __int128 *v140; // [rsp+48h] [rbp-C0h]
  __int128 *v141; // [rsp+48h] [rbp-C0h]
  __int64 v142; // [rsp+50h] [rbp-B8h]
  __int128 *v143; // [rsp+50h] [rbp-B8h]
  __int128 *v144; // [rsp+50h] [rbp-B8h]
  _QWORD *v145; // [rsp+50h] [rbp-B8h]
  HRGN *v146; // [rsp+58h] [rbp-B0h]
  __int64 v147; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v148; // [rsp+68h] [rbp-A0h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v149; // [rsp+70h] [rbp-98h]
  __int64 v150; // [rsp+78h] [rbp-90h]
  _QWORD v151[2]; // [rsp+80h] [rbp-88h] BYREF
  int v152; // [rsp+90h] [rbp-78h]
  _QWORD v153[3]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v154; // [rsp+B0h] [rbp-58h]
  __int64 v155; // [rsp+C0h] [rbp-48h]
  __int128 v156; // [rsp+C8h] [rbp-40h]
  __int64 v157; // [rsp+D8h] [rbp-30h]
  __int128 v158; // [rsp+E0h] [rbp-28h]
  __int64 v159; // [rsp+F0h] [rbp-18h]
  __int128 v160; // [rsp+F8h] [rbp-10h]
  __int64 v161; // [rsp+108h] [rbp+0h]
  __int128 v162; // [rsp+110h] [rbp+8h]
  __int64 v163; // [rsp+120h] [rbp+18h]
  struct tagRECT v164; // [rsp+128h] [rbp+20h] BYREF
  __int64 v165; // [rsp+138h] [rbp+30h]
  char v166; // [rsp+140h] [rbp+38h]
  __int128 v167; // [rsp+148h] [rbp+40h] BYREF
  char v168; // [rsp+158h] [rbp+50h]
  char v169; // [rsp+160h] [rbp+58h]
  __int64 v170; // [rsp+168h] [rbp+60h]
  char v171; // [rsp+170h] [rbp+68h]
  __int128 v172; // [rsp+178h] [rbp+70h] BYREF
  char v173; // [rsp+188h] [rbp+80h]
  char v174; // [rsp+190h] [rbp+88h]
  __int64 v175; // [rsp+198h] [rbp+90h]
  char v176; // [rsp+1A0h] [rbp+98h]
  __int128 v177; // [rsp+1A8h] [rbp+A0h] BYREF
  char v178; // [rsp+1B8h] [rbp+B0h]
  char v179; // [rsp+1C0h] [rbp+B8h]
  __int64 v180; // [rsp+1C8h] [rbp+C0h]
  char v181; // [rsp+1D0h] [rbp+C8h]
  __int128 v182; // [rsp+1D8h] [rbp+D0h] BYREF
  char v183; // [rsp+1E8h] [rbp+E0h]
  char v184; // [rsp+1F0h] [rbp+E8h]
  __int64 v185; // [rsp+1F8h] [rbp+F0h]
  char v186; // [rsp+200h] [rbp+F8h]
  __int128 v187; // [rsp+208h] [rbp+100h] BYREF
  char v188; // [rsp+218h] [rbp+110h]
  char v189; // [rsp+220h] [rbp+118h]

  v4 = a1;
  v5 = 0;
  v153[2] = 0LL;
  v153[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v153;
  v153[1] = a1;
  HMLockObject(a1);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
    GenerateMouseMove(0LL);
  if ( (a2 & 1) != 0 )
  {
    a2 = 0;
    if ( *(_QWORD *)(v4 + 104) )
    {
      if ( v4 != GetDesktopWindow(v4) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v87 + 40) + 31LL) & 2) != 0 )
        {
          a2 = 4;
LABEL_120:
          v4 = v87;
          goto LABEL_4;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 4) != 0 )
        {
          a2 = 2;
          goto LABEL_120;
        }
      }
    }
  }
LABEL_4:
  if ( a3 )
    GreLockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), a3);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v8 = *((_DWORD *)i + 16);
    if ( (v8 & 0x400800) == 0 )
    {
      if ( (v8 & 3) == 0 )
      {
        v83 = i[2];
        if ( (*(_BYTE *)(*(_QWORD *)(v83 + 40) + 31LL) & 2) != 0 )
        {
          v8 |= 8u;
          *((_DWORD *)i + 16) = v8;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v83 + 40) + 31LL) & 0x20) != 0 )
          *((_DWORD *)i + 16) = v8 & 0xFFFFFFF7;
      }
      v9 = i[2];
      v10 = v9;
      if ( v9 )
      {
        while ( v10 != v4 )
        {
          v10 = *(_QWORD *)(v10 + 104);
          if ( !v10 )
            goto LABEL_12;
        }
        if ( v4 != v9 || (a2 & 2) == 0 && ((i[8] & 1) == 0 || (a2 & 4) == 0) )
        {
          v80 = *((unsigned int *)i + 16);
          if ( (v80 & 0x1000) != 0 )
          {
            v81 = i[3];
            if ( (int)v80 >= 0 )
            {
              v80 = (unsigned int)v80 & 0xFFFFFFE7;
              *((_DWORD *)i + 16) = v80;
              if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v9 + 136) + 8LL) + 8LL) >= 0
                || (v91 = *(_QWORD *)(v9 + 40), (*(_BYTE *)(v91 + 21) & 1) == 0)
                && (*(_BYTE *)(*(_QWORD *)(v81 + 40) + 31LL) & 2) != 0
                || (v92 = *(_BYTE *)(*(_QWORD *)(v81 + 40) + 31LL), ((*(_BYTE *)(v91 + 31) ^ v92) & 0x10) != 0) )
              {
                v81 = (unsigned int)v80;
                if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 0x22) == 2 )
                {
                  v81 = (unsigned int)v80 | 8;
                  *((_DWORD *)i + 16) = v81;
                }
                v80 = (unsigned int)v81;
                v82 = (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 4) == 0;
              }
              else
              {
                v82 = (v92 & 4) == 0;
              }
              if ( !v82 )
                v80 = (unsigned int)v80 | 0x10;
            }
            LODWORD(v80) = v80 | 0x2000;
            *((_DWORD *)i + 16) = v80;
            UserSetDCVisRgn(i, v9, v80, v81);
          }
          else
          {
            v84 = i[1];
            v164 = 0LL;
            if ( (unsigned int)GreGetBounds(v84, &v164, 0LL) )
            {
              v93 = i[11];
              if ( !v93 || (i[8] & 0x80004000) != 0 )
              {
                bottom = v164.bottom;
                right = v164.right;
                top = v164.top;
                left = v164.left;
              }
              else
              {
                v94 = *(_QWORD *)(v93 + 40);
                v95 = *(_DWORD *)(v94 + 32);
                bottom = v95 + v164.bottom;
                v97 = *(_DWORD *)(v94 + 28);
                left = v97 + v164.left;
                right = v97 + v164.right;
                top = v95 + v164.top;
                v164.left += v97;
                v164.top += v95;
                v164.right += v97;
                v164.bottom += v95;
              }
              v135 = *((_DWORD *)i + 16);
              if ( (v135 & 0x4000) != 0 )
              {
                StyleWindow = GetStyleWindow(i[2], 2848);
                if ( StyleWindow )
                {
                  v102 = *(_QWORD *)(StyleWindow + 40);
                  v103 = *(_DWORD *)(v102 + 92);
                  v104 = *(_DWORD *)(v102 + 88);
                  v164.left = v104 + left;
                  v164.right = v104 + right;
                  v164.top = v103 + top;
                  v164.bottom = v103 + bottom;
                }
              }
              v105 = (struct tagWND *)i[2];
              if ( (unsigned int)IntersectRect(&v164, &v164, *((_QWORD *)v105 + 5) + 88LL) )
                SpbCheckRect(v105, &v164, v135);
              v5 = 0;
            }
            v85 = i[8] & 0x4002 | 0x800;
            *((_DWORD *)i + 16) = v85;
            if ( (v85 & 0x4000) != 0 )
            {
              GreSelectRedirectionBitmap(i[1], 0LL);
              *((_DWORD *)i + 16) &= ~0x4000u;
              i[4] = 0LL;
            }
            v86 = i[1];
            i[2] = 0LL;
            i[3] = 0LL;
            i[5] = 0LL;
            i[6] = 0LL;
            GreSelectVisRgn(v86, 0LL, 1LL);
          }
        }
      }
    }
LABEL_12:
    ;
  }
  GreUnlockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  v11 = a2 & 8;
  v12 = v11 != 0 ? 2 : 0;
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
    InvalidateGDIWindows(v4);
    v12 |= 1u;
  }
  GreClientRgnUpdated(v12);
  v13 = v11 != 0 ? 4 : 0;
  v134 = v13;
  v14 = *(_QWORD *)(gpDispInfo + 40LL);
  v148 = v14;
  v15 = Gre::Base::Globals(gpDispInfo);
  v149 = v15;
  v16 = *((_QWORD *)v15 + 15);
  v147 = v16;
  GreAcquireSemaphore(v16);
  if ( *((_QWORD *)Gre::Base::Globals(v17) + 38) )
  {
    v19 = 0;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v22 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v22 + 104) && !*(_DWORD *)(v22 + 108) )
    {
      v23 = Gre::Base::Globals(v21);
      GreAcquireSemaphore(*((_QWORD *)v23 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v23 + 14), 5LL);
      v19 = 1;
    }
    GreAcquireSemaphore(*((_QWORD *)v15 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v15 + 9), 7LL);
    if ( *((_QWORD *)Gre::Base::Globals(v24) + 38) )
    {
      v25 = *((_QWORD *)v15 + 38);
      v26 = *(_QWORD **)(v25 + 80);
      if ( v26 != (_QWORD *)(v25 + 80) )
      {
        while ( 1 )
        {
          if ( !v26 || (v27 = v26 - 3, v26 == (_QWORD *)24) )
          {
LABEL_54:
            v16 = v147;
            v14 = v148;
            goto LABEL_55;
          }
          v28 = v27[5];
          if ( v28 )
            break;
LABEL_53:
          v15 = v149;
          v26 = (_QWORD *)*v26;
          v25 = *((_QWORD *)v149 + 38);
          if ( v26 == (_QWORD *)(v25 + 80) )
            goto LABEL_54;
        }
        v146 = (HRGN *)(v25 + 184);
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v30 = (unsigned __int16)v28;
        if ( (unsigned __int64)(unsigned __int16)v28 < *(_QWORD *)(gpsi + 8LL) )
        {
          v31 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v28;
          v33 = (const struct tagWND **)HMPkheFromPhe(v31);
          LOWORD(v28) = WORD1(v28) & 0x7FFF;
          if ( ((WORD1(v28) & 0x7FFF) == *(_WORD *)(v31 + 26)
             || (_WORD)v28 == 0x7FFF
             || !(_WORD)v28 && PsGetCurrentProcessWow64Process(v32))
            && (*(_BYTE *)(v31 + 25) & 1) == 0
            && *(_BYTE *)(v31 + 24) == 1 )
          {
            v34 = *v33;
            if ( *v33 )
            {
              v35 = (_QWORD *)((char *)v34 + 40);
              if ( (*(_DWORD *)(*((_QWORD *)v34 + 5) + 232LL) & 2) == 0 )
                goto LABEL_63;
              v36 = *(unsigned __int16 *)(gpsi + 900LL);
              if ( **(_WORD **)(*((_QWORD *)v34 + 17) + 8LL) == (_WORD)v36 )
                goto LABEL_39;
              v166 = 0;
              v167 = 0LL;
              v168 = 0;
              v37 = (__int128 *)*((_QWORD *)v34 + 18);
              v136 = v36;
              v165 = gDomainDummyLock;
              v38 = *((_QWORD *)v37 + 2);
              v154 = *v37;
              v128 = v37;
              v155 = v38;
              v169 = 0;
              v39 = SGDGetUserSessionState(v37);
              if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v39 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v40) )
              {
                v106 = v128;
                v107 = 0;
                v169 = 1;
                if ( v128 == (__int128 *)gObjDummyLock )
                  v106 = 0LL;
                *(_QWORD *)&v167 = v106;
                if ( !v168 )
                {
                  v108 = (tagObjLock **)&v167;
                  v123 = 0;
                  v129 = (tagObjLock **)&v167;
                  do
                  {
                    if ( *v108 )
                    {
                      tagObjLock::LockExclusive(*v108);
                      v108 = v129;
                      v107 = v123;
                    }
                    ++v107;
                    ++v108;
                    v123 = v107;
                    v129 = v108;
                  }
                  while ( !v107 );
                  v168 = 1;
                }
              }
              Prop = RealGetProp(*((_QWORD *)v34 + 18), v136, 1LL);
              if ( v169 && v168 )
              {
                if ( (_QWORD)v167 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v167);
                v168 = 0;
              }
              if ( Prop )
              {
                if ( Prop == -1 )
                  goto LABEL_39;
              }
              else
              {
                v171 = 0;
                v172 = 0LL;
                v173 = 0;
                v43 = (__int128 *)*((_QWORD *)v34 + 18);
                v137 = *(unsigned __int16 *)(gpsi + 1378LL);
                v170 = gDomainDummyLock;
                v140 = v43;
                v44 = *((_QWORD *)v43 + 2);
                v156 = *v43;
                v174 = 0;
                v157 = v44;
                v45 = SGDGetUserSessionState(v43);
                if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v45 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v46) )
                {
                  v109 = v140;
                  v174 = 1;
                  if ( v140 == (__int128 *)gObjDummyLock )
                    v109 = 0LL;
                  *(_QWORD *)&v172 = v109;
                  if ( !v173 )
                  {
                    v110 = 0;
                    v124 = 0;
                    v111 = (tagObjLock **)&v172;
                    v130 = (tagObjLock **)&v172;
                    do
                    {
                      if ( *v111 )
                      {
                        tagObjLock::LockExclusive(*v111);
                        v111 = v130;
                        v110 = v124;
                      }
                      ++v110;
                      ++v111;
                      v124 = v110;
                      v130 = v111;
                    }
                    while ( !v110 );
                    v173 = 1;
                  }
                }
                Prop = RealGetProp(*((_QWORD *)v34 + 18), v137, 1LL);
                if ( v174 && v173 )
                {
                  if ( (_QWORD)v172 )
                    tagObjLock::UnLockExclusive((tagObjLock *)v172);
                  v173 = 0;
                }
                if ( !Prop )
                {
LABEL_39:
                  v47 = (__int128 *)*((_QWORD *)v34 + 18);
                  v176 = 0;
                  v177 = 0LL;
                  v178 = 0;
                  v142 = (unsigned __int16)atomDispAffinity;
                  v175 = gDomainDummyLock;
                  v141 = v47;
                  v48 = *((_QWORD *)v47 + 2);
                  v158 = *v47;
                  v179 = 0;
                  v159 = v48;
                  v49 = SGDGetUserSessionState(v47);
                  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v49 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v50) )
                  {
                    v113 = v141;
                    v179 = 1;
                    if ( v141 == (__int128 *)gObjDummyLock )
                      v113 = 0LL;
                    *(_QWORD *)&v177 = v113;
                    if ( !v178 )
                    {
                      v114 = 0;
                      v125 = 0;
                      v115 = (tagObjLock **)&v177;
                      v131 = (tagObjLock **)&v177;
                      do
                      {
                        if ( *v115 )
                        {
                          tagObjLock::LockExclusive(*v115);
                          v115 = v131;
                          v114 = v125;
                        }
                        ++v114;
                        ++v115;
                        v125 = v114;
                        v131 = v115;
                      }
                      while ( !v114 );
                      v178 = 1;
                    }
                  }
                  v51 = RealGetProp(*((_QWORD *)v34 + 18), v142, 1LL);
                  if ( v179 && v178 )
                  {
                    if ( (_QWORD)v177 )
                      tagObjLock::UnLockExclusive((tagObjLock *)v177);
                    v178 = 0;
                  }
                  if ( (v51 & 1) == 0 )
                  {
                    v30 = *v35;
LABEL_43:
                    SetRectRgnIndirect(*v146, v30 + 88);
                    v5 = 0;
                    v52 = 1;
LABEL_44:
                    if ( v52 )
                    {
                      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v151, *(HRGN *)(*((_QWORD *)v149 + 38) + 184LL), 0, 0);
                      v53 = v151[0];
                      if ( v151[0] )
                        v52 = *(_DWORD *)(v151[0] + 52LL) != 1;
                      if ( !v152 )
                      {
                        RGNOBJ::UpdateUserRgn((RGNOBJ *)v151);
                        v53 = v151[0];
                      }
                      if ( v53 )
                        _InterlockedDecrement((volatile signed __int32 *)(v53 + 12));
                    }
                    v54 = v52 != 0;
                    if ( v54 != (*((_DWORD *)v27 + 35) & 1) )
                    {
                      v88 = v54 | *((_DWORD *)v27 + 35) & 0xFFFFFFFE;
                      *((_DWORD *)v27 + 35) = v88;
                      v89 = *v27;
                      v90 = (void *)UserReferenceDwmApiPort(v88, v30, v29);
                      DwmAsyncShowSprite(v90, v89, v54);
                    }
                    goto LABEL_53;
                  }
LABEL_63:
                  v30 = *v35;
                  v60 = *(_BYTE *)(*v35 + 31LL);
                  if ( (*(_BYTE *)(*v35 + 26LL) & 0x20) == 0 )
                  {
                    v61 = 17409;
                    if ( (v60 & 4) != 0 )
                      v61 = 17425;
                    v62 = v34;
                    do
                    {
                      v63 = *((_QWORD *)v62 + 5);
                      v64 = *(_BYTE *)(v63 + 31);
                      if ( (v64 & 0x10) == 0 || (v64 & 0x20) != 0 && v62 != v34 )
                      {
LABEL_68:
                        SetOrCreateRectRgnIndirectPublic(v146, gZero);
                        goto LABEL_69;
                      }
                      if ( (*(_WORD *)(v63 + 42) & 0x2FFF) == 0x29D )
                        break;
                      v62 = (const struct tagWND *)*((_QWORD *)v62 + 13);
                    }
                    while ( v62 );
                    v65 = v34;
                    while ( 1 )
                    {
                      v66 = *((_QWORD *)v34 + 5);
                      if ( (*(_BYTE *)(v66 + 27) & 0x20) != 0 )
                        break;
                      v34 = (const struct tagWND *)*((_QWORD *)v34 + 13);
                      if ( !v34 )
                        goto LABEL_82;
                    }
                    if ( ((*(_WORD *)(v66 + 42) & 0x2FFF) != 0x29D || v34 == v65) && v34 )
                    {
                      v67 = (__int128 *)*((_QWORD *)v34 + 18);
                      v181 = 0;
                      v182 = 0LL;
                      v183 = 0;
                      v138 = (unsigned __int16)atomLayer;
                      v180 = gDomainDummyLock;
                      v143 = v67;
                      v68 = *((_QWORD *)v67 + 2);
                      v160 = *v67;
                      v184 = 0;
                      v161 = v68;
                      v69 = SGDGetUserSessionState(v67);
                      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v69 + 8)) != 1
                        && IS_USERCRIT_OWNED_AT_ALL(v70) )
                      {
                        v116 = v143;
                        v184 = 1;
                        if ( v143 == (__int128 *)gObjDummyLock )
                          v116 = 0LL;
                        *(_QWORD *)&v182 = v116;
                        if ( !v183 )
                        {
                          v117 = 0;
                          v126 = 0;
                          v118 = (tagObjLock **)&v182;
                          v132 = (tagObjLock **)&v182;
                          do
                          {
                            if ( *v118 )
                            {
                              tagObjLock::LockExclusive(*v118);
                              v118 = v132;
                              v117 = v126;
                            }
                            ++v117;
                            ++v118;
                            v126 = v117;
                            v132 = v118;
                          }
                          while ( !v117 );
                          v183 = 1;
                        }
                      }
                      v71 = (_QWORD *)RealGetProp(*((_QWORD *)v34 + 18), v138, 1LL);
                      if ( v184 && v183 )
                      {
                        if ( (_QWORD)v182 )
                          tagObjLock::UnLockExclusive((tagObjLock *)v182);
                        v183 = 0;
                      }
                      if ( !v71 || !*v71 )
                        goto LABEL_68;
                    }
LABEL_82:
                    UpdatesLockedForDwm();
                    v72 = (__int64)v65;
                    while ( 1 )
                    {
                      v73 = *(_DWORD *)(*(_QWORD *)(v72 + 40) + 24LL);
                      if ( (v73 & 0x80000) != 0 || (v73 & 0x20000000) != 0 )
                        break;
                      v72 = *(_QWORD *)(v72 + 104);
                      if ( !v72 )
                        goto LABEL_85;
                    }
                    if ( (const struct tagWND *)v72 != v65 )
                    {
                      LOBYTE(v119) = IsDesktopWindow(v72);
                      if ( v119 )
                        v72 = 0LL;
                    }
LABEL_85:
                    v74 = *(__int128 **)(v72 + 144);
                    v150 = *(_QWORD *)(v72 + 40);
                    v186 = 0;
                    v187 = 0LL;
                    v188 = 0;
                    v139 = (unsigned __int16)atomLayer;
                    v185 = gDomainDummyLock;
                    v144 = v74;
                    v75 = *((_QWORD *)v74 + 2);
                    v162 = *v74;
                    v189 = 0;
                    v163 = v75;
                    v76 = SGDGetUserSessionState(v74);
                    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v76 + 8)) != 1
                      && IS_USERCRIT_OWNED_AT_ALL(v77) )
                    {
                      v120 = v144;
                      v189 = 1;
                      if ( v144 == (__int128 *)gObjDummyLock )
                        v120 = 0LL;
                      *(_QWORD *)&v187 = v120;
                      if ( !v188 )
                      {
                        v121 = 0;
                        v127 = 0;
                        v122 = (tagObjLock **)&v187;
                        v133 = (tagObjLock **)&v187;
                        do
                        {
                          if ( *v122 )
                          {
                            tagObjLock::LockExclusive(*v122);
                            v122 = v133;
                            v121 = v127;
                          }
                          ++v121;
                          ++v122;
                          v127 = v121;
                          v133 = v122;
                        }
                        while ( !v121 );
                        v188 = 1;
                      }
                    }
                    v78 = (_QWORD *)RealGetProp(*(_QWORD *)(v72 + 144), v139, 1LL);
                    v145 = v78;
                    if ( v189 && v188 )
                    {
                      if ( (_QWORD)v187 )
                      {
                        tagObjLock::UnLockExclusive((tagObjLock *)v187);
                        v78 = v145;
                      }
                      v188 = 0;
                    }
                    if ( v78 )
                    {
                      if ( *v78 )
                      {
                        if ( (*(_DWORD *)(v150 + 24) & 0x20000000) != 0 )
                        {
                          v79 = *(_DWORD *)(v150 + 232);
                          if ( (v79 & 2) != 0 && (v79 & 1) == 0 && (*(_DWORD *)(v72 + 320) & 0x20000000) == 0 )
                            v61 &= ~0x4000u;
                        }
                      }
                    }
                    v52 = CalcVisRgnWorker(v65, v146, v61);
                    v5 = 0;
                    goto LABEL_44;
                  }
                  if ( (v60 & 0x10) == 0 )
                  {
                    v5 = 0;
                    v52 = 0;
                    goto LABEL_44;
                  }
                  goto LABEL_43;
                }
              }
              LOBYTE(v41) = 1;
              v112 = HMValidateHandleNoSecure(Prop, v41);
              if ( v112 && !(unsigned int)IsWindowBeingDestroyed(v112) )
                goto LABEL_63;
              goto LABEL_39;
            }
          }
LABEL_69:
          v5 = 0;
        }
        v52 = 0;
        goto LABEL_44;
      }
    }
LABEL_55:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v15 + 9));
    if ( v19 )
    {
      v55 = Gre::Base::Globals(v18);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
      GreReleaseSemaphoreInternal(*((_QWORD *)v55 + 14));
    }
    v13 = v134;
  }
  v148 = v14;
  Gre::Base::Globals(v18);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v147, (struct PDEVOBJ *)&v148);
  if ( *(_DWORD *)(v14 + 140) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v14 + 144) + 8LL * v5++), v13);
    while ( v5 < *(_DWORD *)(v14 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v14 + 80), v13);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v147);
  if ( v16 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v16);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  ThreadUnlock1(v57, v56, v58);
  return 1LL;
}
