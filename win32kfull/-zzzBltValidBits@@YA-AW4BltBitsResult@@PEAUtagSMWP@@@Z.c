// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  int v2; // r14d
  int v3; // esi
  int v4; // r13d
  __int64 *v5; // rbx
  int v6; // r15d
  __int64 v7; // rdi
  int v8; // r12d
  __int64 v9; // rsi
  HRGN v10; // rax
  __int64 v11; // rdx
  HRGN v12; // rcx
  struct tagWND *v13; // rdi
  unsigned __int64 v14; // rcx
  struct tagSMWP *v15; // r13
  _QWORD *v16; // r12
  __int64 *v17; // rbx
  int v18; // edi
  __int64 v19; // r15
  __int64 v20; // rdi
  HRGN v21; // rcx
  __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rax
  struct tagWND *v25; // r15
  int v26; // r12d
  __int64 v27; // rax
  char v28; // dl
  __int128 *v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rdi
  int v32; // ebx
  int v33; // ebx
  __int64 *i; // rdi
  __int64 v35; // rdx
  __int64 v36; // rdi
  struct Gre::Base::SESSION_GLOBALS *v37; // rsi
  int v38; // eax
  __int64 v39; // rbx
  HDC v40; // rbx
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  char *v43; // rbx
  tagDomLock *v44; // rcx
  int v46; // ebx
  _QWORD *v47; // rdi
  __int64 v48; // rcx
  HRGN EmptyRgn; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // r15d
  __int64 v53; // r12
  HRGN v54; // rdx
  char v55; // cl
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  int v64; // r15d
  unsigned int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  HRGN v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 RedirectionBitmap; // rax
  __int64 v74; // rcx
  int v75; // r9d
  int v76; // edx
  int v77; // r8d
  int v78; // r10d
  __int64 v79; // rbx
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // r8
  _QWORD *v84; // r8
  __int64 StyleWindow; // rax
  __int64 v86; // r9
  __int64 v87; // r8
  __int64 v88; // rcx
  int v89; // edi
  __int64 v90; // rbx
  int v91; // edx
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r12
  unsigned int v96; // ecx
  int v97; // ebx
  __m128i v98; // xmm0
  int v99; // ecx
  int v100; // edx
  __int64 OldRedirectionBitmap; // r8
  int v102; // r10d
  int v103; // r11d
  __int64 v104; // r9
  HDC v105; // rax
  int v106; // eax
  int v107; // eax
  char *Spb; // rax
  unsigned int v109; // r15d
  __int64 v110; // rbx
  int v111; // eax
  int v112; // [rsp+60h] [rbp-A0h]
  int v113; // [rsp+60h] [rbp-A0h]
  int v114; // [rsp+64h] [rbp-9Ch]
  int v115; // [rsp+64h] [rbp-9Ch]
  int v116; // [rsp+64h] [rbp-9Ch]
  unsigned int v117; // [rsp+68h] [rbp-98h]
  int v118; // [rsp+68h] [rbp-98h]
  int v119; // [rsp+6Ch] [rbp-94h]
  __int64 v120; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v121; // [rsp+78h] [rbp-88h]
  int v122; // [rsp+7Ch] [rbp-84h]
  struct tagSMWP *v123; // [rsp+80h] [rbp-80h]
  HDC v124; // [rsp+88h] [rbp-78h] BYREF
  __int64 v125; // [rsp+90h] [rbp-70h] BYREF
  __m128i v126; // [rsp+A0h] [rbp-60h] BYREF
  HRGN v127[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v128; // [rsp+C0h] [rbp-40h] BYREF
  struct tagWND *v129; // [rsp+C8h] [rbp-38h]
  __int64 v130; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v131; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v132; // [rsp+E8h] [rbp-18h] BYREF
  tagDomLock *v133; // [rsp+F8h] [rbp-8h]
  char v134; // [rsp+100h] [rbp+0h] BYREF
  __int64 v135; // [rsp+108h] [rbp+8h]
  char v136; // [rsp+110h] [rbp+10h]
  __int64 v137; // [rsp+118h] [rbp+18h]
  char v138; // [rsp+120h] [rbp+20h]

  v123 = (struct tagSMWP *)a1;
  v132 = 0LL;
  v2 = 0;
  ++gdwDeferWinEvent;
  v124 = 0LL;
  v121 = 0;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 28) - 1;
  v5 = *(__int64 **)(a1 + 40);
  v112 = 0;
  v6 = 0;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *((_DWORD *)v5 + 8);
      v5[12] = 0LL;
      if ( v7 )
        break;
LABEL_17:
      v5 += 21;
      if ( --v4 < 0 )
        goto LABEL_18;
    }
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v7 >= *(_QWORD *)(gpsi + 8LL) )
    {
LABEL_192:
      *v5 = 0LL;
      *((_DWORD *)v5 + 8) = 6159;
      goto LABEL_17;
    }
    v9 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v7;
    v10 = (HRGN)HMPkheFromPhe(v9);
    v11 = 0x7FFFLL;
    LOWORD(v7) = WORD1(v7) & 0x7FFF;
    v127[0] = v10;
    v12 = v10;
    if ( (WORD1(v7) & 0x7FFF) != *(_WORD *)(v9 + 26) && (_WORD)v7 != 0x7FFF )
    {
      if ( (_WORD)v7 || !PsGetCurrentProcessWow64Process(v10) )
      {
LABEL_191:
        v3 = v112;
        goto LABEL_192;
      }
      v12 = v127[0];
    }
    if ( (*(_BYTE *)(v9 + 25) & 1) == 0 && *(_BYTE *)(v9 + 24) == 1 )
    {
      v13 = *(struct tagWND **)v12;
      if ( *(_QWORD *)v12 )
      {
        v14 = v5[1];
        if ( v14 <= 1 || v14 == -2LL || v14 == -1LL || (LOBYTE(v11) = 1, HMValidateHandleNoSecure(v14, v11)) )
        {
          if ( *(_QWORD *)(gpDispInfo + 32LL) && (v8 & 8) == 0 )
            SpbCheckRect(v13, (struct tagRECT *)(*((_QWORD *)v13 + 5) + 88LL), 1u);
          v3 = ++v112;
          if ( (v8 & 0x18E7) != 0x1807 )
            v6 = 1;
          if ( (v5[4] & 8) == 0 )
          {
            v48 = gpsi;
            if ( !*(_DWORD *)(gpsi + 2220LL) )
              PreventInterMonitorBlts((struct tagCVR *)v5);
            *((_DWORD *)v5 + 22) = 0;
            EmptyRgn = (HRGN)CreateEmptyRgn(v48, v11);
            v5[12] = (__int64)EmptyRgn;
            if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn(v13, EmptyRgn) )
              *((_DWORD *)v5 + 22) = 2;
          }
          goto LABEL_17;
        }
      }
    }
    goto LABEL_191;
  }
LABEL_18:
  v15 = v123;
  if ( !v6 )
    v3 = 0;
  if ( !v3 )
    goto LABEL_78;
  v16 = 0LL;
  v17 = (__int64 *)*((_QWORD *)v123 + 5);
  v18 = *((_DWORD *)v123 + 7) - 1;
  v114 = v18;
  if ( v18 < 0 )
    goto LABEL_78;
  do
  {
    v19 = *v17;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v19 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_199;
    v20 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v19;
    v21 = (HRGN)HMPkheFromPhe(v20);
    LOWORD(v19) = WORD1(v19) & 0x7FFF;
    v127[0] = v21;
    if ( (WORD1(v19) & 0x7FFF) != *(_WORD *)(v20 + 26) && (_WORD)v19 != 0x7FFF )
    {
      if ( (_WORD)v19 || !PsGetCurrentProcessWow64Process(v21) )
      {
LABEL_198:
        v18 = v114;
LABEL_199:
        *v17 = 0LL;
        *((_DWORD *)v17 + 8) = 6159;
        goto LABEL_36;
      }
      v21 = v127[0];
    }
    if ( (*(_BYTE *)(v20 + 25) & 1) != 0 )
      goto LABEL_198;
    if ( *(_BYTE *)(v20 + 24) != 1 )
      goto LABEL_198;
    v22 = *(_QWORD *)v21;
    if ( !*(_QWORD *)v21 )
      goto LABEL_198;
    if ( !*(_QWORD *)(v22 + 104) )
      goto LABEL_198;
    v23 = v17[1];
    if ( v23 >= 2 && v23 != -2LL && v23 != -1LL && !HMValidateHandleNoSecure(v23, 1LL) )
      goto LABEL_198;
    if ( v17[14] == 2
      && ((*(_BYTE *)(*(_QWORD *)(v22 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v22 + 104) != GetDesktopWindow(v22)) )
    {
      v17[14] = 0LL;
    }
    v18 = v114;
    v24 = v17;
    if ( v16 )
      v24 = v16;
    v16 = v24;
LABEL_36:
    v17 += 21;
    v114 = --v18;
  }
  while ( v18 >= 0 );
  v15 = v123;
  if ( !v16 )
  {
LABEL_78:
    v46 = *((_DWORD *)v15 + 7) - 1;
    if ( v46 >= 0 )
    {
      v47 = (_QWORD *)(*((_QWORD *)v15 + 5) + 96LL);
      do
      {
        if ( *v47 )
        {
          GreDeleteObject(*v47);
          *v47 = 0LL;
        }
        v47 += 21;
        --v46;
      }
      while ( v46 >= 0 );
    }
    goto LABEL_69;
  }
  v25 = *(struct tagWND **)(_HMObjectFromHandle(*v16) + 104);
  v129 = v25;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
    SpbCheck();
  zzzChangeStates(v25, v123);
  v26 = 0;
  v119 = 0;
  v27 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v27 || (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 64LL) & 1) == 0 )
  {
    v89 = *((_DWORD *)v123 + 7) - 1;
    v90 = *((_QWORD *)v123 + 5);
    if ( v89 >= 0 )
    {
      do
      {
        if ( *(_QWORD *)v90 )
        {
          if ( (*(_DWORD *)(v90 + 32) & 8) == 0 )
          {
            _HMObjectFromHandle(*(_QWORD *)v90);
            v91 = *(_DWORD *)(v90 + 72);
            if ( v91 || *(_DWORD *)(v90 + 76) )
            {
              v99 = -*(_DWORD *)(v90 + 76);
              v100 = -v91;
              v126 = *(__m128i *)(v90 + 56);
              v98 = v126;
              v126.m128i_i32[2] += v100;
              v126.m128i_i32[3] += v99;
              v126.m128i_i32[1] += v99;
              *(__m128i *)v127 = v98;
              v126.m128i_i32[0] = v100 + _mm_cvtsi128_si32(v98);
              UnionRect(&v132, v127, &v126);
              v26 = 1;
            }
          }
        }
        v90 += 168LL;
        --v89;
      }
      while ( v89 >= 0 );
      v15 = v123;
      v119 = v26;
    }
  }
  v28 = 28;
  if ( (*(_BYTE *)(*((_QWORD *)v25 + 5) + 31LL) & 2) == 0 )
    v28 = 26;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000) == 0 )
    v121 = 2;
  if ( v26 )
    v29 = &v132;
  else
    v29 = 0LL;
  zzzLockDisplayAreaAndInvalidateDCCache((__int64)v25, v28, (__int64)v29);
  v31 = (__int64 *)*((_QWORD *)v15 + 5);
  v32 = *((_DWORD *)v15 + 7) - 1;
  v113 = 96;
  v127[0] = (HRGN)ghrgnInvalidSum;
  v122 = 0;
  v115 = v32;
  if ( v32 >= 0 )
  {
    while ( 2 )
    {
      v30 = *v31;
      --v3;
      if ( !*v31 || (v31[4] & 8) != 0 )
        goto LABEL_51;
      _HMObjectFromHandle(v30);
      v50 = *v31;
      v121 |= 1u;
      v51 = _HMObjectFromHandle(v50);
      v52 = *((_DWORD *)v31 + 22);
      v53 = v51;
      if ( (*(_BYTE *)(*(_QWORD *)(v51 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v51);
        v74 = *(_QWORD *)(v53 + 40);
        if ( (RedirectionBitmap || (*(_BYTE *)(v74 + 27) & 0x20) != 0)
          && ((*(_DWORD *)(v74 + 232) & 2) != 0 || (*((_DWORD *)v31 + 39) & 7) != 0) )
        {
          *(_DWORD *)(v53 + 320) |= 0x4000u;
          goto LABEL_90;
        }
LABEL_142:
        *(_DWORD *)(v53 + 320) &= ~0x4000u;
        LOBYTE(v52) = v52 | 8;
      }
      else
      {
LABEL_90:
        if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v53, ghrgnVisNew) )
          v52 |= 1u;
        if ( *(_QWORD *)(gpDispInfo + 32LL) )
          SpbCheckRect((struct tagWND *)v53, (struct tagRECT *)(*(_QWORD *)(v53 + 40) + 88LL), 1u);
        if ( (v52 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v53 + 40) + 136LL) != 1LL )
        {
          v75 = *((_DWORD *)v31 + 16);
          v76 = *((_DWORD *)v31 + 14);
          if ( v75 > v76 )
          {
            v77 = *((_DWORD *)v31 + 17);
            v78 = *((_DWORD *)v31 + 15);
            if ( v77 > v78 )
            {
              GreSetRectRgn(
                ghrgnSWP1,
                (unsigned int)(v76 - *((_DWORD *)v31 + 18)),
                (unsigned int)(v78 - *((_DWORD *)v31 + 19)),
                (unsigned int)(v75 - *((_DWORD *)v31 + 18)),
                v77 - *((_DWORD *)v31 + 19));
              if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v31[12], 1LL) >= 2
                && ((v113 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
              {
                if ( v31[9] )
                  GreOffsetRgn(ghrgnValid, *((unsigned int *)v31 + 18), *((unsigned int *)v31 + 19));
                v79 = v53;
                v80 = 0LL;
                v120 = v53;
                do
                {
                  v81 = *(_QWORD *)(v79 + 40);
                  v82 = *(_QWORD *)(v81 + 136);
                  if ( v82 == 1 )
                    goto LABEL_178;
                  if ( v82 )
                  {
                    v125 = *(_QWORD *)(v81 + 136);
                    if ( v80 )
                    {
                      v97 = PhysicalToLogicalInPlaceRgn(v80, (__int64)&v125);
                      v117 = GreCombineRgn(ghrgnValid, ghrgnValid, v125, 4LL);
                      v96 = v117;
                      if ( v97 )
                      {
                        GreDeleteObject(v125);
                        v96 = v117;
                      }
                      v79 = v120;
                    }
                    else
                    {
                      v96 = GreCombineRgn(ghrgnValid, ghrgnValid, v82, 4LL);
                    }
                    if ( v96 < 2 )
                      goto LABEL_178;
                    v80 = v79;
                  }
                  v79 = *(_QWORD *)(v79 + 104);
                  v120 = v79;
                }
                while ( v79 && (*(_BYTE *)(*(_QWORD *)(v79 + 40) + 31LL) & 2) == 0 );
                v83 = v31[15];
                if ( v83 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v83, 4LL) < 2 )
                {
LABEL_178:
                  v32 = v115;
                  goto LABEL_96;
                }
                v32 = v115;
                if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  goto LABEL_97;
              }
            }
          }
        }
LABEL_96:
        v52 |= 4u;
LABEL_97:
        if ( (v52 & 4) == 0 && (*((_DWORD *)v31 + 18) || *((_DWORD *)v31 + 19)) )
        {
          StyleWindow = GetStyleWindow(v53, 2568);
          v125 = StyleWindow;
          if ( StyleWindow && (v120 = GetRedirectionBitmap(StyleWindow)) != 0 )
          {
            if ( v53 == v125 )
            {
              if ( (*((_DWORD *)v31 + 39) & 1) != 0
                || *((_DWORD *)v31 + 18) != *((_DWORD *)v31 + 4) - *((_DWORD *)v31 + 20)
                || *((_DWORD *)v31 + 19) != *((_DWORD *)v31 + 5) - *((_DWORD *)v31 + 21) )
              {
                OldRedirectionBitmap = GetOldRedirectionBitmap(v125);
                v102 = -*((_DWORD *)v31 + 19);
                v103 = -*((_DWORD *)v31 + 18);
                v118 = *((_DWORD *)v31 + 21);
                v116 = *((_DWORD *)v31 + 20);
                v126.m128i_i64[0] = ghrgnValid;
                if ( OldRedirectionBitmap )
                {
                  v104 = ghdcMem;
                }
                else
                {
                  v104 = ghdcMem2;
                  OldRedirectionBitmap = v120;
                }
                UpdateSpriteArea(
                  v125,
                  v120,
                  OldRedirectionBitmap,
                  v104,
                  ghdcMem2,
                  v126.m128i_i64[0],
                  v31 + 7,
                  v103,
                  v102,
                  v116,
                  v118);
              }
            }
            else
            {
              UpdateSpriteArea(
                v125,
                v120,
                v120,
                ghdcMem,
                ghdcMem,
                ghrgnValid,
                v31 + 7,
                -*((_DWORD *)v31 + 18),
                -*((_DWORD *)v31 + 19),
                *(_DWORD *)(*(_QWORD *)(v125 + 40) + 88LL),
                *(_DWORD *)(*(_QWORD *)(v125 + 40) + 92LL));
            }
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 26LL) & 8) == 0 )
          {
            LODWORD(v105) = (_DWORD)v124;
            if ( !v124 )
            {
              v105 = *(HDC *)(gpDispInfo + 56LL);
              v124 = v105;
            }
            GreHintDCWnd((_DWORD)v105, *(_QWORD *)v53, 0, 0, 0);
            GreSelectVisRgn(v124, ghrgnValid, 2LL);
            NtGdiBitBltInternal(
              v124,
              *((_DWORD *)v31 + 14),
              *((_DWORD *)v31 + 15),
              *((_DWORD *)v31 + 16) - *((_DWORD *)v31 + 14),
              *((_DWORD *)v31 + 17) - *((_DWORD *)v31 + 15),
              (__int64)v124,
              *((_DWORD *)v31 + 14) - *((_DWORD *)v31 + 18),
              *((_DWORD *)v31 + 15) - *((_DWORD *)v31 + 19),
              13369376,
              0,
              1);
            GreHintDCWnd((_DWORD)v124, 0, 0, 0, 0);
          }
        }
        if ( *(char *)(*(_QWORD *)(v53 + 40) + 16LL) >= 0
          || (v52 & 2) != 0
          || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v31[12], ghrgnVisNew, 4u, v52) )
        {
          v54 = (HRGN)v31[12];
          if ( v54 )
          {
            if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v54, ghrgnVisNew, 2u, v52) )
              goto LABEL_142;
          }
          else
          {
            v131 = *(_OWORD *)(*((_QWORD *)v129 + 5) + 88LL);
            TransformRectBetweenCoordinateSpaces(&v131, &v131, v53, v129);
            SetRectRgnIndirect(ghrgnInvalid, &v131);
          }
LABEL_101:
          v55 = v113;
        }
        else
        {
          v106 = RestoreSpb(v53, ghrgnInvalid, &v124);
          if ( v106 )
          {
            v55 = v113;
            if ( v106 == 2 && (v113 & 0x20) == 0 )
            {
              GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
              v55 = v113;
            }
            if ( (v52 & 1) == 0 )
              goto LABEL_223;
          }
          else
          {
            if ( (v52 & 1) != 0 )
              goto LABEL_142;
LABEL_223:
            GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
            v55 = v113;
          }
          if ( (v52 & 0x20) == 0 )
          {
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
              LOBYTE(v52) = v52 | 0x20;
            goto LABEL_101;
          }
        }
        v56 = v52 & 4;
        if ( (v52 & 4) == 0 )
        {
          if ( (v55 & 0x20) != 0 )
          {
            v86 = 5LL;
            v87 = 0LL;
            v88 = ghrgnValidSum;
          }
          else
          {
            v86 = 2LL;
            v88 = ghrgnValidSum;
            v87 = ghrgnValidSum;
          }
          GreCombineRgn(v88, ghrgnValid, v87, v86);
          v56 = v52 & 4;
          v55 = v113 & 0xDF;
          v113 &= ~0x20u;
        }
        if ( (v55 & 0x20) != 0 )
        {
          if ( v56 )
            goto LABEL_105;
          v84 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v84 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v84, 4LL) <= 1 )
          goto LABEL_142;
      }
LABEL_105:
      if ( *(char *)(*(_QWORD *)(v53 + 40) + 16LL) < 0 )
      {
        v107 = *((_DWORD *)v31 + 8);
        if ( (v107 & 0x40) == 0 && (v107 & 0x87) != 7 )
        {
          Spb = (char *)FindSpb(v53);
          FreeSpb(Spb);
        }
      }
      v30 = v31[12];
      if ( v30 )
      {
        GreDeleteObject(v30);
        v31[12] = 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 21LL) & 1) == 0 && (v31[4] & 0x40) != 0 )
        ++v122;
      if ( (v52 & 8) != 0 )
        goto LABEL_51;
      if ( (v52 & 5) == 4 )
      {
        if ( !*(_QWORD *)(SGDGetUserSessionState(v30) + 8)
          || (v58 = SGDGetUserSessionState(v57), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v58 + 8))) )
        {
          LODWORD(v123) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
          if ( (gdwExtraInstrumentations & 1) != 0 )
            goto LABEL_240;
          DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        }
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v59);
        ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
        xxxInternalInvalidate((struct tagWND *)v53, (HRGN)1, 0x485u);
        v62 = PsGetCurrentThreadWin32Thread(v61);
        --*(_DWORD *)(v62 + 48);
      }
      v120 = ghrgnInvalid;
      v63 = LogicalToPhysicalInPlaceRgnWorker(v53, &v120, 0LL);
      v64 = v63;
      if ( (v113 & 0x40) != 0 )
      {
        if ( !v3 && !v63 )
        {
          v127[0] = (HRGN)ghrgnInvalid;
          goto LABEL_118;
        }
        v92 = 5LL;
        v94 = 0LL;
        v93 = ghrgnInvalidSum;
      }
      else
      {
        v92 = 2LL;
        v93 = ghrgnInvalidSum;
        v94 = ghrgnInvalidSum;
      }
      v95 = v120;
      GreCombineRgn(v93, v120, v94, v92);
      if ( v64 )
        GreDeleteObject(v95);
LABEL_118:
      v113 &= ~0x40u;
LABEL_51:
      v31 += 21;
      v115 = --v32;
      if ( v32 < 0 )
      {
        v25 = v129;
        v26 = v119;
        break;
      }
      continue;
    }
  }
  if ( v26 )
    GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), &v132);
  v33 = *((_DWORD *)v15 + 7) - 1;
  for ( i = (__int64 *)*((_QWORD *)v15 + 5); v33 >= 0; --v33 )
  {
    v30 = *i;
    if ( *i )
    {
      v35 = _HMObjectFromHandle(v30);
      if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 26LL) & 8) != 0 )
        DeleteOldRedirectionBitmap(v35);
    }
    i += 21;
  }
  if ( (v113 & 0x40) == 0 )
  {
    if ( v122 != *((_DWORD *)v15 + 7) || (v65 = 69, v25 == (struct tagWND *)GetDesktopWindow((__int64)v25)) )
      v65 = 133;
    if ( !*(_QWORD *)(SGDGetUserSessionState(v30) + 8)
      || (v67 = SGDGetUserSessionState(v66), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v67 + 8))) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
      if ( (gdwExtraInstrumentations & 1) != 0 )
LABEL_240:
        KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v69 = PsGetCurrentThreadWin32Thread(v68);
    v70 = v127[0];
    ++*(_DWORD *)(v69 + 48);
    xxxInternalInvalidate(v25, v70, v65);
    v72 = PsGetCurrentThreadWin32Thread(v71);
    --*(_DWORD *)(v72 + 48);
  }
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    GreClientRgnDone();
  v36 = *(_QWORD *)(gpDispInfo + 40LL);
  v37 = Gre::Base::Globals(gpDispInfo);
  GreIncNonRBLockCount(*((_QWORD *)v37 + 14));
  if ( *(_DWORD *)(v36 + 140) )
  {
    v109 = 0;
    do
    {
      v110 = 8LL * v109;
      v130 = *(_QWORD *)(v110 + *(_QWORD *)(v36 + 144));
      v111 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v130);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v128, *((HSEMAPHORE *)v37 + 14), v111);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(v110 + *(_QWORD *)(v36 + 144)));
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v128);
      ++v109;
    }
    while ( v109 < *(_DWORD *)(v36 + 140) );
  }
  else
  {
    v128 = *(_QWORD *)(v36 + 80);
    v38 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v128);
    v39 = *((_QWORD *)v37 + 14);
    if ( v38 == 1 )
    {
      GreAcquireSemaphoreSharedInternal(v39);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v39);
    }
    else
    {
      GreAcquireSemaphore(v39);
    }
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(v36 + 80));
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v39);
  }
  GreDecNonRBLockCount(*((_QWORD *)v37 + 14));
  v40 = v124;
  if ( v124 )
  {
    GreSelectVisRgn(v124, 0LL, 1LL);
    GreGetBounds(v40, 0LL, 0LL);
  }
LABEL_69:
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v134 = 1;
  v43 = &v134;
  v133 = DomainLockRef;
  v135 = gDomainDummyLock;
  v137 = 0LL;
  v138 = 0;
  v136 = 0;
  do
  {
    v44 = (tagDomLock *)*((_QWORD *)v43 - 1);
    if ( v44 )
    {
      if ( *v43 )
        tagDomLock::LockExclusive(v44);
      else
        tagDomLock::LockShared(v44);
    }
    ++v2;
    v43 += 16;
  }
  while ( !v2 );
  v138 = 1;
  --gdwDeferWinEvent;
  if ( v133 )
  {
    if ( v134 )
      tagDomLock::UnLockExclusive(v133);
    else
      tagDomLock::UnLockShared(v133);
  }
  return v121;
}
