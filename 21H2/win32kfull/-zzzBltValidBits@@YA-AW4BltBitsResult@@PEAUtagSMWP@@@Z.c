/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00435F8 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0043740 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C004A600 (PhysicalToLogicalInPlaceRgn.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     IsThreadDesktopComposed @ 0x1C006DA68 (IsThreadDesktopComposed.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00741F8 (xxxFlushDeferredWindowEvents.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0085D2C (GreRedrawSpriteOverlapPresent.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00B4184 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C00B41E0 (GetOldRedirectionBitmap.c)
 *     UnionRect @ 0x1C00C1640 (UnionRect.c)
 *     SpbCheck @ 0x1C00DC1F8 (SpbCheck.c)
 *     GreHintDCWnd @ 0x1C00DC470 (GreHintDCWnd.c)
 *     SpbCheckRect @ 0x1C00DC7C0 (SpbCheckRect.c)
 *     FreeSpb @ 0x1C00DCA08 (FreeSpb.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00DF0C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0100464 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C0102694 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     UpdateSpriteArea @ 0x1C010C8C8 (UpdateSpriteArea.c)
 *     GreUnlockDisplayArea @ 0x1C01221CC (GreUnlockDisplayArea.c)
 *     RestoreSpb @ 0x1C0158DC0 (RestoreSpb.c)
 *     FindSpb @ 0x1C0158F38 (FindSpb.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreClientRgnDone @ 0x1C0284414 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  __int64 v1; // r15
  HDC v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  int v10; // r14d
  struct tagWND *v11; // rsi
  __int64 v12; // rdx
  int v13; // edi
  int v14; // r13d
  __int64 *v15; // rbx
  int v16; // ecx
  int v17; // eax
  _QWORD *v18; // rdi
  int v19; // ebx
  __int64 v20; // rdx
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  char *v23; // rbx
  int v24; // edi
  tagDomLock *v25; // rcx
  int v27; // edi
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // esi
  __int64 v32; // rdi
  HRGN v33; // rdx
  int v34; // edx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // esi
  unsigned int v38; // ebx
  __int64 RedirectionBitmap; // rax
  __int64 v40; // rcx
  int v41; // eax
  int v42; // r9d
  int v43; // edx
  int v44; // r10d
  int v45; // r8d
  int v46; // eax
  __int64 v47; // r15
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // r8
  _QWORD *v52; // r8
  __int64 StyleWindow; // rax
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // r10
  __int64 OldRedirectionBitmap; // r8
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdi
  __int64 v65; // rbx
  int v66; // edi
  int v67; // edx
  int v68; // r13d
  unsigned int v69; // r12d
  int v70; // eax
  __m128i v71; // xmm0
  int v72; // ecx
  int v73; // edx
  int v74; // ecx
  int v75; // r10d
  int v76; // edx
  int v77; // r11d
  __int64 v78; // rax
  HDC v79; // r12
  __int64 Spb; // rax
  unsigned int v81[2]; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+30h] [rbp-D8h]
  __int64 *v83; // [rsp+38h] [rbp-D0h]
  int v84; // [rsp+40h] [rbp-C8h]
  int v85; // [rsp+48h] [rbp-C0h]
  int v86; // [rsp+50h] [rbp-B8h]
  int v87; // [rsp+58h] [rbp-B0h]
  __int64 v88; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+70h] [rbp-98h] BYREF
  int v90; // [rsp+78h] [rbp-90h]
  int v91; // [rsp+7Ch] [rbp-8Ch]
  int valid; // [rsp+80h] [rbp-88h]
  int v93; // [rsp+84h] [rbp-84h]
  HDC v94[2]; // [rsp+88h] [rbp-80h] BYREF
  __m128i v95; // [rsp+98h] [rbp-70h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-60h] BYREF
  struct tagWND *v97; // [rsp+B0h] [rbp-58h]
  __int64 v98; // [rsp+B8h] [rbp-50h]
  __m128i v99; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v100; // [rsp+D8h] [rbp-30h] BYREF
  tagDomLock *v101; // [rsp+E8h] [rbp-20h]
  char v102; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v103; // [rsp+F8h] [rbp-10h]
  char v104; // [rsp+100h] [rbp-8h]
  __int64 v105; // [rsp+108h] [rbp+0h]
  char v106; // [rsp+110h] [rbp+8h]

  v1 = a1;
  v98 = a1;
  v94[0] = 0LL;
  v100 = 0LL;
  ++gdwDeferWinEvent;
  v2 = 0LL;
  v3 = 0;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  valid = BltValidInit((struct tagSMWP *)v1);
  if ( !valid )
    goto LABEL_45;
  v4 = *(_QWORD *)(v1 + 40);
  v5 = 0LL;
  v6 = *(_DWORD *)(v1 + 28) - 1;
  if ( v6 < 0 )
    goto LABEL_45;
  do
  {
    v7 = HMValidateHandleNoSecure(*(_QWORD *)v4, 1);
    v8 = v7;
    if ( v7 && *(_QWORD *)(v7 + 104) && IsStillWindowC(*(_QWORD *)(v4 + 8)) )
    {
      if ( *(_QWORD *)(v4 + 112) == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v8 + 104) != GetDesktopWindow(v8)) )
      {
        *(_QWORD *)(v4 + 112) = 0LL;
      }
      v9 = (_QWORD *)v4;
      if ( v5 )
        v9 = v5;
      v5 = v9;
    }
    else
    {
      *(_QWORD *)v4 = 0LL;
      *(_DWORD *)(v4 + 32) = 6159;
    }
    v4 += 168LL;
    --v6;
  }
  while ( v6 >= 0 );
  v10 = 0;
  if ( v5 )
  {
    v11 = *(struct tagWND **)(_HMObjectFromHandle(*v5) + 104);
    v97 = v11;
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheck();
    zzzChangeStates(v11, (struct tagSMWP *)v1);
    v93 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent, v12, 0LL) )
    {
      v65 = *(_QWORD *)(v1 + 40);
      v66 = *(_DWORD *)(v1 + 28);
      while ( --v66 >= 0 )
      {
        if ( *(_QWORD *)v65 )
        {
          if ( (*(_DWORD *)(v65 + 32) & 8) == 0 )
          {
            _HMObjectFromHandle(*(_QWORD *)v65);
            v67 = *(_DWORD *)(v65 + 72);
            if ( v67 || *(_DWORD *)(v65 + 76) )
            {
              v72 = -*(_DWORD *)(v65 + 76);
              v73 = -v67;
              v95 = *(__m128i *)(v65 + 56);
              v71 = v95;
              v95.m128i_i32[2] += v73;
              v95.m128i_i32[3] += v72;
              v95.m128i_i32[1] += v72;
              v99 = v71;
              v95.m128i_i32[0] = v73 + _mm_cvtsi128_si32(v71);
              UnionRect(&v100, &v99, &v95);
              v93 = 1;
            }
          }
        }
        v65 += 168LL;
      }
    }
    v13 = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 488LL) >> 14) & 2;
    HIDWORD(v88) = v13;
    zzzLockDisplayAreaAndInvalidateDCCache(v11, (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 2) != 0 ? 28 : 26);
    v14 = 96;
    v15 = *(__int64 **)(v1 + 40);
    v16 = *(_DWORD *)(v1 + 28) - 1;
    LODWORD(v89) = 96;
    v95.m128i_i64[0] = ghrgnInvalidSum;
    v91 = 0;
    v90 = v16;
    if ( v16 >= 0 )
    {
      HIDWORD(v88) = v13;
      v17 = v16;
      while ( 1 )
      {
        --valid;
        if ( *v15 )
          break;
LABEL_20:
        v15 += 21;
        v90 = --v17;
        if ( v17 < 0 )
        {
          v1 = v98;
          v11 = v97;
          goto LABEL_22;
        }
      }
      if ( (v15[4] & 8) != 0 )
      {
LABEL_19:
        v17 = v90;
        goto LABEL_20;
      }
      _HMObjectFromHandle(*v15);
      v29 = *v15;
      HIDWORD(v88) = v13 | 1;
      v30 = _HMObjectFromHandle(v29);
      v31 = *((_DWORD *)v15 + 22);
      v32 = v30;
      if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v30);
        v40 = *(_QWORD *)(v32 + 40);
        if ( !RedirectionBitmap && (*(_BYTE *)(v40 + 27) & 0x20) == 0
          || (*(_DWORD *)(v40 + 232) & 2) == 0 && (*((_DWORD *)v15 + 39) & 7) == 0 )
        {
          goto LABEL_90;
        }
        *(_DWORD *)(v32 + 320) |= 0x4000u;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v32, ghrgnVisNew) )
        v31 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckRect((struct tagWND *)v32, (struct tagRECT *)(*(_QWORD *)(v32 + 40) + 88LL), 1u);
      if ( (v31 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v32 + 40) + 136LL) != 1LL )
      {
        v42 = *((_DWORD *)v15 + 16);
        v43 = *((_DWORD *)v15 + 14);
        if ( v42 > v43 )
        {
          v44 = *((_DWORD *)v15 + 17);
          v45 = *((_DWORD *)v15 + 15);
          if ( v44 > v45 )
          {
            v46 = *((_DWORD *)v15 + 19);
            v81[0] = v44 - v46;
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v43 - *((_DWORD *)v15 + 18)),
              (unsigned int)(v45 - v46),
              (unsigned int)(v42 - *((_DWORD *)v15 + 18)),
              *(_QWORD *)v81,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87);
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v15[12], 1LL) >= 2
              && ((v14 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( v15[9] )
                GreOffsetRgn(ghrgnValid, *((unsigned int *)v15 + 18), *((unsigned int *)v15 + 19));
              v47 = v32;
              v48 = 0LL;
              while ( 1 )
              {
                v49 = *(_QWORD *)(v47 + 40);
                v50 = *(_QWORD *)(v49 + 136);
                if ( v50 == 1 )
                  break;
                if ( v50 )
                {
                  v96 = *(_QWORD *)(v49 + 136);
                  if ( v48 )
                  {
                    v70 = PhysicalToLogicalInPlaceRgn(v48, &v96);
                    v50 = v96;
                    v68 = v70;
                  }
                  else
                  {
                    v68 = 0;
                  }
                  v69 = GreCombineRgn(ghrgnValid, ghrgnValid, v50, 4LL);
                  if ( v68 )
                    GreDeleteObject(v50);
                  if ( v69 < 2 )
                    break;
                  v48 = v47;
                }
                v47 = *(_QWORD *)(v47 + 104);
                if ( !v47 || (*(_BYTE *)(*(_QWORD *)(v47 + 40) + 31LL) & 2) != 0 )
                {
                  v51 = v15[15];
                  if ( (!v51 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v51, 4LL) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  {
                    goto LABEL_59;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v31 |= 4u;
LABEL_59:
      if ( (v31 & 4) == 0 && (*((_DWORD *)v15 + 18) || *((_DWORD *)v15 + 19)) )
      {
        StyleWindow = GetStyleWindow(v32, 2568LL);
        v54 = StyleWindow;
        if ( StyleWindow && (v55 = GetRedirectionBitmap(StyleWindow)) != 0 )
        {
          if ( v32 != v54 )
          {
            v56 = *(_QWORD *)(v54 + 40);
            v87 = *(_DWORD *)(v56 + 92);
            v86 = *(_DWORD *)(v56 + 88);
            v85 = -*((_DWORD *)v15 + 19);
            OldRedirectionBitmap = v55;
            v84 = -*((_DWORD *)v15 + 18);
            v83 = v15 + 7;
            v82 = ghrgnValid;
            *(_QWORD *)v81 = ghdcMem;
LABEL_114:
            UpdateSpriteArea(v54, v55, OldRedirectionBitmap);
            goto LABEL_60;
          }
          if ( (*((_DWORD *)v15 + 39) & 1) != 0
            || *((_DWORD *)v15 + 18) != *((_DWORD *)v15 + 4) - *((_DWORD *)v15 + 20)
            || *((_DWORD *)v15 + 19) != *((_DWORD *)v15 + 5) - *((_DWORD *)v15 + 21) )
          {
            OldRedirectionBitmap = GetOldRedirectionBitmap(v54);
            v74 = -*((_DWORD *)v15 + 19);
            v75 = *((_DWORD *)v15 + 21);
            v76 = -*((_DWORD *)v15 + 18);
            v77 = *((_DWORD *)v15 + 20);
            v78 = ghdcMem2;
            v96 = ghdcMem2;
            if ( OldRedirectionBitmap )
              v78 = v96;
            else
              OldRedirectionBitmap = v55;
            v87 = v75;
            v86 = v77;
            v85 = v74;
            v84 = v76;
            v83 = v15 + 7;
            v82 = ghrgnValid;
            *(_QWORD *)v81 = v78;
            goto LABEL_114;
          }
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 26LL) & 8) == 0 )
        {
          v79 = v94[0];
          if ( !v94[0] )
          {
            v79 = *(HDC *)(gpDispInfo + 56LL);
            v94[0] = v79;
          }
          GreHintDCWnd((_DWORD)v79, *(_QWORD *)v32, 0, 0, 0);
          GreSelectVisRgn(v79, ghrgnValid, 2LL);
          NtGdiBitBltInternal(
            v79,
            *((_DWORD *)v15 + 14),
            *((_DWORD *)v15 + 15),
            *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14),
            *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15),
            v79,
            *((_DWORD *)v15 + 14) - *((_DWORD *)v15 + 18),
            *((_DWORD *)v15 + 15) - *((_DWORD *)v15 + 19),
            13369376,
            0,
            1);
          GreHintDCWnd((_DWORD)v79, 0, 0, 0, 0);
        }
      }
LABEL_60:
      if ( ((*(_BYTE *)(*(_QWORD *)(v32 + 40) + 16LL) >> 7) & ((v31 & 2) == 0)) == 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v15[12], ghrgnVisNew, 4u, v31) )
      {
        v33 = (HRGN)v15[12];
        if ( v33 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v33, ghrgnVisNew, 2u, v31) )
          {
LABEL_89:
            v14 = v89;
            goto LABEL_90;
          }
        }
        else
        {
          v99 = *(__m128i *)(*((_QWORD *)v97 + 5) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v99, &v99, v32, v97, *(_QWORD *)v81);
          SetRectRgnIndirect(ghrgnInvalid, &v99);
        }
LABEL_63:
        v14 = v89;
        if ( (v31 & 4) == 0 )
        {
          if ( (v89 & 0x20) != 0 )
          {
            v58 = 5LL;
            v59 = 0LL;
            v60 = ghrgnValidSum;
          }
          else
          {
            v58 = 2LL;
            v60 = ghrgnValidSum;
            v59 = ghrgnValidSum;
          }
          GreCombineRgn(v60, ghrgnValid, v59, v58);
          v14 &= ~0x20u;
          LODWORD(v89) = v14;
        }
        if ( (v14 & 0x20) != 0 )
        {
          if ( (v31 & 4) != 0 )
          {
LABEL_66:
            v34 = *((_DWORD *)v15 + 8);
            if ( ((*(_BYTE *)(*(_QWORD *)(v32 + 40) + 16LL) >> 7) & ((v34 & 0x40) == 0)) != 0 && (v34 & 0x87) != 7 )
            {
              Spb = FindSpb(v32);
              FreeSpb(Spb);
            }
            v35 = v15[12];
            if ( v35 )
            {
              GreDeleteObject(v35);
              v15[12] = 0LL;
            }
            v10 = v91;
            if ( (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 21LL) & 1) == 0 && (v15[4] & 0x40) != 0 )
              v10 = ++v91;
            if ( (v31 & 8) != 0 )
              goto LABEL_78;
            if ( (v31 & 5) == 4 )
            {
              AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v88);
              xxxInternalInvalidate((struct tagWND *)v32, (HRGN)1, 0x485u);
              AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v88);
            }
            v89 = ghrgnInvalid;
            v36 = LogicalToPhysicalInPlaceRgnWorker(v32, &v89, 0LL);
            v37 = v36;
            if ( (v14 & 0x40) != 0 )
            {
              if ( !valid && !v36 )
              {
                v95.m128i_i64[0] = ghrgnInvalid;
LABEL_77:
                v14 &= ~0x40u;
                LODWORD(v89) = v14;
LABEL_78:
                v13 = HIDWORD(v88);
                v2 = v94[0];
                goto LABEL_19;
              }
              v61 = 5LL;
              v63 = 0LL;
              v62 = ghrgnInvalidSum;
            }
            else
            {
              v61 = 2LL;
              v62 = ghrgnInvalidSum;
              v63 = ghrgnInvalidSum;
            }
            v64 = v89;
            GreCombineRgn(v62, v89, v63, v61);
            if ( v37 )
              GreDeleteObject(v64);
            goto LABEL_77;
          }
          v52 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v52 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v52, 4LL) > 1 )
          goto LABEL_66;
LABEL_90:
        *(_DWORD *)(v32 + 320) &= ~0x4000u;
        LOBYTE(v31) = v31 | 8;
        goto LABEL_66;
      }
      v41 = RestoreSpb(v32, ghrgnInvalid, v94);
      if ( v41 )
      {
        if ( v41 == 2 && (v89 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v31 & 1) != 0 )
          goto LABEL_169;
      }
      else if ( (v31 & 1) != 0 )
      {
        goto LABEL_89;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_169:
      if ( (v31 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        LOBYTE(v31) = v31 | 0x20;
      goto LABEL_63;
    }
LABEL_22:
    if ( v93 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), &v100);
    v18 = *(_QWORD **)(v1 + 40);
    v19 = *(_DWORD *)(v1 + 28);
    while ( --v19 >= 0 )
    {
      if ( *v18 )
      {
        v20 = _HMObjectFromHandle(*v18);
        if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap(v20);
      }
      v18 += 21;
    }
    if ( (v14 & 0x40) == 0 )
    {
      if ( v10 != *(_DWORD *)(v1 + 28) || (v38 = 69, v11 == (struct tagWND *)GetDesktopWindow(v11)) )
        v38 = 133;
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v88);
      xxxInternalInvalidate(v11, (HRGN)v95.m128i_i64[0], v38);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v88);
    }
    if ( *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) )
      GreClientRgnDone();
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 )
    {
      GreSelectVisRgn(v2, 0LL, 1LL);
      GreGetBounds(v2, 0LL, 0LL);
    }
    v3 = HIDWORD(v88);
  }
  else
  {
LABEL_45:
    v27 = *(_DWORD *)(v1 + 28) - 1;
    if ( v27 >= 0 )
    {
      v28 = (_QWORD *)(*(_QWORD *)(v1 + 40) + 96LL);
      do
      {
        if ( *v28 )
        {
          GreDeleteObject(*v28);
          *v28 = 0LL;
        }
        v28 += 21;
        --v27;
      }
      while ( v27 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v102 = 1;
  v23 = &v102;
  v101 = DomainLockRef;
  v24 = 0;
  v103 = gDomainDummyLock;
  v105 = 0LL;
  v104 = 0;
  v106 = 0;
  do
  {
    v25 = (tagDomLock *)*((_QWORD *)v23 - 1);
    if ( v25 )
    {
      if ( *v23 )
        tagDomLock::LockExclusive(v25);
      else
        tagDomLock::LockShared(v25);
    }
    ++v24;
    v23 += 16;
  }
  while ( !v24 );
  v106 = 1;
  --gdwDeferWinEvent;
  if ( v101 )
  {
    if ( v102 )
      tagDomLock::UnLockExclusive(v101);
    else
      tagDomLock::UnLockShared(v101);
  }
  return v3;
}
