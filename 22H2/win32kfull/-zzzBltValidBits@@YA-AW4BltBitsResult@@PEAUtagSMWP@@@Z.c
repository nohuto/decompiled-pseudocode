/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006DF90
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsThreadDesktopComposed @ 0x1C006A378 (IsThreadDesktopComposed.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C006A39C (GreRedrawSpriteOverlapPresent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006EBC4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006ECE8 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C00714C0 (GetStyleWindow.c)
 *     xxxInternalInvalidate @ 0x1C00724E0 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00726C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0072FE8 (PhysicalToLogicalInPlaceRgn.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00BEAA8 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C00BEBC0 (GetRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C00D50D0 (GreHintDCWnd.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00EF578 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C00EF5D4 (GetOldRedirectionBitmap.c)
 *     UnionRect @ 0x1C0104BAC (UnionRect.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0115A04 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C011648C (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     UpdateSpriteArea @ 0x1C015B014 (UpdateSpriteArea.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     FindSpb @ 0x1C0219CF4 (FindSpb.c)
 *     FreeSpb @ 0x1C0219D24 (FreeSpb.c)
 *     RestoreSpb @ 0x1C0219F30 (RestoreSpb.c)
 *     SpbCheck @ 0x1C021A16C (SpbCheck.c)
 *     SpbCheckRect @ 0x1C021A284 (SpbCheckRect.c)
 *     GreUnlockDisplayArea @ 0x1C028549C (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C0287224 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  __int64 v1; // r13
  HDC v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rdx
  _QWORD *v5; // rsi
  int v6; // r14d
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // r14d
  unsigned int v14; // r12d
  __int64 *v15; // rbx
  __int64 v16; // rcx
  int v17; // r13d
  int v18; // eax
  __int64 *v19; // rdi
  int v20; // ebx
  __int64 v21; // rdx
  int v23; // edi
  _QWORD *v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // edi
  __int64 v27; // rsi
  __int64 RedirectionBitmap; // rax
  __int64 v29; // rdx
  int v30; // ecx
  HRGN v31; // rdx
  int v32; // eax
  int v33; // esi
  unsigned int v34; // ebx
  int v35; // r9d
  int v36; // edx
  int v37; // r10d
  int v38; // r8d
  int v39; // eax
  __int64 v40; // r15
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r8
  _QWORD *v45; // r8
  __int64 StyleWindow; // rax
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // r10
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rbx
  int v59; // edi
  unsigned int v60; // r12d
  int v61; // edx
  int v62; // eax
  __m128i v63; // xmm0
  int v64; // ecx
  int v65; // edx
  __int64 OldRedirectionBitmap; // rax
  __int64 v67; // r10
  HDC v68; // r15
  int v69; // eax
  int v70; // eax
  __int64 Spb; // rax
  unsigned int v72[2]; // [rsp+28h] [rbp-99h]
  __int64 v73; // [rsp+30h] [rbp-91h]
  __int64 *v74; // [rsp+38h] [rbp-89h]
  int v75; // [rsp+40h] [rbp-81h]
  int v76; // [rsp+48h] [rbp-79h]
  int v77; // [rsp+50h] [rbp-71h]
  int v78; // [rsp+58h] [rbp-69h]
  int v79; // [rsp+68h] [rbp-59h]
  __int64 v80; // [rsp+70h] [rbp-51h] BYREF
  int v81; // [rsp+78h] [rbp-49h]
  int v82; // [rsp+7Ch] [rbp-45h]
  int valid; // [rsp+80h] [rbp-41h]
  int v84; // [rsp+84h] [rbp-3Dh]
  HDC v85[2]; // [rsp+88h] [rbp-39h] BYREF
  __m128i v86; // [rsp+98h] [rbp-29h] BYREF
  __int64 v87; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v89; // [rsp+B8h] [rbp-9h]
  HRGN v90; // [rsp+C0h] [rbp-1h]
  __m128i v91; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v92; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v87 = a1;
  v92 = 0LL;
  v2 = 0LL;
  v3 = 0;
  ++gdwDeferWinEvent;
  v85[0] = 0LL;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  valid = BltValidInit((struct tagSMWP *)v1);
  if ( !valid )
    goto LABEL_37;
  v5 = 0LL;
  v6 = *(_DWORD *)(v1 + 28) - 1;
  v7 = *(_QWORD **)(v1 + 40);
  if ( v6 < 0 )
    goto LABEL_37;
  do
  {
    LOBYTE(v4) = 1;
    v8 = HMValidateHandleNoSecure(*v7, v4);
    v9 = v8;
    if ( v8 && *(_QWORD *)(v8 + 104) && (unsigned int)IsStillWindowC((HWND)v7[1]) )
    {
      if ( v7[14] == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v9 + 104) != GetDesktopWindow(v9)) )
      {
        v7[14] = 0LL;
      }
      v10 = v7;
      if ( v5 )
        v10 = v5;
      v5 = v10;
    }
    else
    {
      *v7 = 0LL;
      *((_DWORD *)v7 + 8) = 6159;
    }
    v7 += 21;
    --v6;
  }
  while ( v6 >= 0 );
  if ( v5 )
  {
    v11 = *(_QWORD *)(_HMObjectFromHandle(*v5) + 104);
    v89 = v11;
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v11, (struct tagSMWP *)v1);
    v84 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v58 = *(_QWORD *)(v1 + 40);
      v59 = *(_DWORD *)(v1 + 28);
      while ( --v59 >= 0 )
      {
        if ( *(_QWORD *)v58 && (*(_DWORD *)(v58 + 32) & 8) == 0 )
        {
          _HMObjectFromHandle(*(_QWORD *)v58);
          v61 = *(_DWORD *)(v58 + 72);
          if ( v61 || *(_DWORD *)(v58 + 76) )
          {
            v64 = -*(_DWORD *)(v58 + 76);
            v65 = -v61;
            v86 = *(__m128i *)(v58 + 56);
            v63 = v86;
            v86.m128i_i32[2] += v65;
            v86.m128i_i32[3] += v64;
            v86.m128i_i32[1] += v64;
            v91 = v63;
            v86.m128i_i32[0] = v65 + _mm_cvtsi128_si32(v63);
            UnionRect(&v92, &v91, &v86);
            v12 = 1;
            v84 = 1;
          }
          else
          {
            v12 = v84;
          }
        }
        v58 += 168LL;
      }
    }
    LODWORD(v80) = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 488LL) >> 14) & 2;
    zzzLockDisplayAreaAndInvalidateDCCache(
      v11,
      (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 2) != 0 ? 28 : 26,
      (unsigned __int64)&v92 & -(__int64)(v12 != 0));
    v13 = 0;
    v14 = 96;
    v15 = *(__int64 **)(v1 + 40);
    v16 = (unsigned int)(*(_DWORD *)(v1 + 28) - 1);
    v79 = 96;
    v90 = (HRGN)ghrgnInvalidSum;
    v82 = 0;
    v81 = v16;
    if ( (int)v16 >= 0 )
    {
      v17 = v80;
      v18 = v16;
      while ( 1 )
      {
        --valid;
        v16 = *v15;
        if ( *v15 )
          break;
LABEL_20:
        v15 += 21;
        v81 = --v18;
        if ( v18 < 0 )
        {
          v11 = v89;
          LODWORD(v80) = v17;
          v1 = v87;
          goto LABEL_22;
        }
      }
      if ( (v15[4] & 8) != 0 )
      {
LABEL_19:
        v18 = v81;
        goto LABEL_20;
      }
      _HMObjectFromHandle(v16);
      v17 |= 1u;
      v25 = _HMObjectFromHandle(*v15);
      v26 = *((_DWORD *)v15 + 22);
      v27 = v25;
      if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v25);
        v29 = *(_QWORD *)(v27 + 40);
        if ( !RedirectionBitmap && (*(_BYTE *)(v29 + 27) & 0x20) == 0 )
          goto LABEL_78;
        v30 = *(_DWORD *)(v29 + 232);
        if ( (v30 & 0x20) == 0 && (*((_DWORD *)v15 + 39) & 7) == 0 )
          goto LABEL_78;
        *(_DWORD *)(v29 + 232) = v30 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v27, ghrgnVisNew) )
        v26 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckRect((struct tagWND *)v27, (struct tagRECT *)(*(_QWORD *)(v27 + 40) + 88LL), 1u);
      if ( (v26 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v27 + 40) + 136LL) != 1LL )
      {
        v35 = *((_DWORD *)v15 + 16);
        v36 = *((_DWORD *)v15 + 14);
        if ( v35 > v36 )
        {
          v37 = *((_DWORD *)v15 + 17);
          v38 = *((_DWORD *)v15 + 15);
          if ( v37 > v38 )
          {
            v39 = *((_DWORD *)v15 + 19);
            v72[0] = v37 - v39;
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v36 - *((_DWORD *)v15 + 18)),
              (unsigned int)(v38 - v39),
              (unsigned int)(v35 - *((_DWORD *)v15 + 18)),
              *(_QWORD *)v72,
              v73,
              v74,
              v75,
              v76,
              v77,
              v78);
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v15[12], 1LL) >= 2
              && ((v14 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( v15[9] )
                GreOffsetRgn(ghrgnValid, *((unsigned int *)v15 + 18), *((unsigned int *)v15 + 19));
              v40 = v27;
              v41 = 0LL;
              while ( 1 )
              {
                v42 = *(_QWORD *)(v40 + 40);
                v43 = *(_QWORD *)(v42 + 136);
                if ( v43 == 1 )
                  break;
                if ( v43 )
                {
                  v88 = *(_QWORD *)(v42 + 136);
                  if ( v41 )
                  {
                    v62 = PhysicalToLogicalInPlaceRgn(v41, &v88);
                    v43 = v88;
                    LODWORD(v80) = v62;
                  }
                  else
                  {
                    LODWORD(v80) = 0;
                  }
                  v60 = GreCombineRgn(ghrgnValid, ghrgnValid, v43, 4LL);
                  if ( (_DWORD)v80 )
                    GreDeleteObject(v43);
                  if ( v60 < 2 )
                    break;
                  v41 = v40;
                }
                v40 = *(_QWORD *)(v40 + 104);
                if ( !v40 || (*(_BYTE *)(*(_QWORD *)(v40 + 40) + 31LL) & 2) != 0 )
                {
                  v44 = v15[15];
                  if ( (!v44 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v44, 4LL) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  {
                    goto LABEL_54;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v26 |= 4u;
LABEL_54:
      if ( (v26 & 4) == 0 && (*((_DWORD *)v15 + 18) || *((_DWORD *)v15 + 19)) )
      {
        StyleWindow = GetStyleWindow(v27, 2568LL);
        v47 = StyleWindow;
        if ( StyleWindow && (v48 = GetRedirectionBitmap(StyleWindow)) != 0 )
        {
          if ( v27 != v47 )
          {
            v49 = *(_QWORD *)(v47 + 40);
            v78 = *(_DWORD *)(v49 + 92);
            v77 = *(_DWORD *)(v49 + 88);
            v76 = -*((_DWORD *)v15 + 19);
            v50 = v48;
            v75 = -*((_DWORD *)v15 + 18);
            v74 = v15 + 7;
            v73 = ghrgnValid;
            v72[1] = ghdcMem[1];
LABEL_103:
            UpdateSpriteArea(v47, v48, v50);
            goto LABEL_55;
          }
          if ( (*((_DWORD *)v15 + 39) & 1) != 0
            || *((_DWORD *)v15 + 18) != *((_DWORD *)v15 + 4) - *((_DWORD *)v15 + 20)
            || *((_DWORD *)v15 + 19) != *((_DWORD *)v15 + 5) - *((_DWORD *)v15 + 21) )
          {
            OldRedirectionBitmap = GetOldRedirectionBitmap(v47);
            v67 = v48;
            if ( OldRedirectionBitmap )
              v67 = OldRedirectionBitmap;
            v78 = *((_DWORD *)v15 + 21);
            v77 = *((_DWORD *)v15 + 20);
            v76 = -*((_DWORD *)v15 + 19);
            v50 = v67;
            v75 = -*((_DWORD *)v15 + 18);
            v74 = v15 + 7;
            v73 = ghrgnValid;
            v72[1] = ghdcMem2[1];
            goto LABEL_103;
          }
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v27 + 40) + 26LL) & 8) == 0 )
        {
          v68 = v85[0];
          if ( !v85[0] )
          {
            v68 = *(HDC *)(gpDispInfo + 56LL);
            v85[0] = v68;
          }
          GreHintDCWnd((_DWORD)v68, *(_QWORD *)v27, 0, 0, 0);
          GreSelectVisRgn(v68, ghrgnValid, 2LL);
          NtGdiBitBltInternal(
            v68,
            *((_DWORD *)v15 + 14),
            *((_DWORD *)v15 + 15),
            *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14),
            *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15),
            (__int64)v68,
            *((_DWORD *)v15 + 14) - *((_DWORD *)v15 + 18),
            *((_DWORD *)v15 + 15) - *((_DWORD *)v15 + 19),
            13369376,
            0,
            1);
          GreHintDCWnd((_DWORD)v68, 0, 0, 0, 0);
        }
      }
LABEL_55:
      if ( *(char *)(*(_QWORD *)(v27 + 40) + 16LL) >= 0
        || (v26 & 2) != 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v15[12], ghrgnVisNew, 4u, v26) )
      {
        v31 = (HRGN)v15[12];
        if ( v31 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v31, ghrgnVisNew, 2u, v26) )
          {
LABEL_77:
            v14 = v79;
            goto LABEL_78;
          }
        }
        else
        {
          v91 = *(__m128i *)(*(_QWORD *)(v89 + 40) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v91, &v91, v27, v89);
          SetRectRgnIndirect(ghrgnInvalid, &v91);
        }
LABEL_58:
        v14 = v79;
        if ( (v26 & 4) == 0 )
        {
          if ( (v79 & 0x20) != 0 )
          {
            v51 = 5LL;
            v52 = 0LL;
            v53 = ghrgnValidSum;
          }
          else
          {
            v51 = 2LL;
            v53 = ghrgnValidSum;
            v52 = ghrgnValidSum;
          }
          GreCombineRgn(v53, ghrgnValid, v52, v51);
          v14 = v79 & 0xFFFFFFDF;
          v79 &= ~0x20u;
        }
        if ( (v14 & 0x20) != 0 )
        {
          if ( (v26 & 4) != 0 )
          {
LABEL_61:
            if ( *(char *)(*(_QWORD *)(v27 + 40) + 16LL) < 0 )
            {
              v70 = *((_DWORD *)v15 + 8);
              if ( (v70 & 0x40) == 0 && (v70 & 0x87) != 7 )
              {
                Spb = FindSpb(v27);
                FreeSpb(Spb);
              }
            }
            v16 = v15[12];
            if ( v16 )
            {
              GreDeleteObject(v16);
              v15[12] = 0LL;
            }
            v13 = v82;
            if ( (*(_BYTE *)(*(_QWORD *)(v27 + 40) + 21LL) & 1) == 0 && (v15[4] & 0x40) != 0 )
              v13 = ++v82;
            if ( (v26 & 8) != 0 )
              goto LABEL_73;
            if ( (v26 & 5) == 4 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v86);
              xxxInternalInvalidate((struct tagWND *)v27, (HRGN)1, 0x485u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v86);
            }
            v80 = ghrgnInvalid;
            v32 = LogicalToPhysicalInPlaceRgnWorker(v27, &v80, 0LL);
            v33 = v32;
            if ( (v14 & 0x40) != 0 )
            {
              if ( !valid && !v32 )
              {
                v90 = (HRGN)ghrgnInvalid;
LABEL_72:
                v14 &= ~0x40u;
                v79 = v14;
LABEL_73:
                v2 = v85[0];
                goto LABEL_19;
              }
              v54 = 5LL;
              v56 = 0LL;
              v55 = ghrgnInvalidSum;
            }
            else
            {
              v54 = 2LL;
              v55 = ghrgnInvalidSum;
              v56 = ghrgnInvalidSum;
            }
            v57 = v80;
            GreCombineRgn(v55, v80, v56, v54);
            if ( v33 )
              GreDeleteObject(v57);
            goto LABEL_72;
          }
          v45 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v45 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v45, 4LL) > 1 )
          goto LABEL_61;
LABEL_78:
        *(_DWORD *)(*(_QWORD *)(v27 + 40) + 232LL) &= ~2u;
        LOBYTE(v26) = v26 | 8;
        goto LABEL_61;
      }
      v69 = RestoreSpb(v27, ghrgnInvalid, v85);
      if ( v69 )
      {
        if ( v69 == 2 && (v79 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v26 & 1) != 0 )
          goto LABEL_159;
      }
      else if ( (v26 & 1) != 0 )
      {
        goto LABEL_77;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_159:
      if ( (v26 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        LOBYTE(v26) = v26 | 0x20;
      goto LABEL_58;
    }
LABEL_22:
    if ( v84 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), &v92);
    v19 = *(__int64 **)(v1 + 40);
    v20 = *(_DWORD *)(v1 + 28);
    while ( --v20 >= 0 )
    {
      v16 = *v19;
      if ( *v19 )
      {
        v21 = _HMObjectFromHandle(v16);
        if ( (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap(v21);
      }
      v19 += 21;
    }
    if ( (v14 & 0x40) == 0 )
    {
      if ( v13 != *(_DWORD *)(v1 + 28) || (v34 = 69, v11 == GetDesktopWindow(v11)) )
        v34 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v87);
      xxxInternalInvalidate((struct tagWND *)v11, v90, v34);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v87);
    }
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
      GreClientRgnDone(v16);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 )
    {
      GreSelectVisRgn(v2, 0LL, 1LL);
      GreGetBounds(v2, 0LL, 0LL);
    }
    v3 = v80;
  }
  else
  {
LABEL_37:
    v23 = *(_DWORD *)(v1 + 28) - 1;
    if ( v23 >= 0 )
    {
      v24 = (_QWORD *)(*(_QWORD *)(v1 + 40) + 96LL);
      do
      {
        if ( *v24 )
        {
          GreDeleteObject(*v24);
          *v24 = 0LL;
        }
        v24 += 21;
        --v23;
      }
      while ( v23 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return v3;
}
