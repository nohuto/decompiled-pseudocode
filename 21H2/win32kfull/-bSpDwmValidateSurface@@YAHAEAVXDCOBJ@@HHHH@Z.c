/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00851E0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C00B42B0 (NtGdiPatBlt.c)
 *     GreStretchBltInternal @ 0x1C00B4D10 (GreStretchBltInternal.c)
 *     NtGdiGetPixel @ 0x1C01093E0 (NtGdiGetPixel.c)
 *     GreMaskBlt @ 0x1C010979C (GreMaskBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0147FC0 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0156210 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028DBB0 (GrePlgBlt.c)
 * Callees:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C002DD04 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B3134 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00B63B0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B79F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00B7A60 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE388 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C010FDE0 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A69C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, LONG a2, LONG a3, int a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r15
  __int64 v8; // rcx
  REGION *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct REGION *v13; // rax
  __int64 v14; // rax
  LONG x; // r15d
  __int64 v16; // r15
  __int64 v17; // rax
  LONG v18; // edx
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // r12
  __int64 v24; // rax
  LONG v25; // ecx
  LONG v26; // edx
  int v27; // r15d
  int v28; // r12d
  __int64 v30; // rsi
  __int64 v31; // rdx
  int v32; // r8d
  int v33; // ecx
  int v34; // ebx
  int v35; // r15d
  __int64 v36; // rax
  int v38; // [rsp+50h] [rbp-B0h]
  struct _POINTL v39; // [rsp+58h] [rbp-A8h] BYREF
  int v40[2]; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+6Ch] [rbp-94h]
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  REGION *v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+88h] [rbp-78h]
  unsigned __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v47[3]; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B4h] [rbp-4Ch]
  _QWORD v50[2]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v51[32]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-18h]
  _BYTE v53[32]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v54[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v55[32]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v56; // [rsp+140h] [rbp+40h]
  _BYTE v57[32]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v58[2]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v59[64]; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v60; // [rsp+1D0h] [rbp+D0h] BYREF
  HSURF v61; // [rsp+1E0h] [rbp+E0h]
  int v62; // [rsp+1E8h] [rbp+E8h]
  int v63; // [rsp+1ECh] [rbp+ECh]
  _DWORD v64[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v65; // [rsp+200h] [rbp+100h] BYREF

  v5 = 0;
  v6 = a4;
  v40[0] = a4;
  v8 = *(_QWORD *)a1;
  v9 = 0LL;
  v39.x = a3;
  v61 = 0LL;
  v46 = 0LL;
  if ( !v8
    || (*(_DWORD *)(v8 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v8 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v8 + 472)
    || !*(_QWORD *)(v8 + 496)
    || !*(_DWORD *)(v8 + 488) && !*(_DWORD *)(v8 + 492)
    || KeAreApcsDisabled() )
  {
    return v5;
  }
  v54[0] = 0LL;
  v54[1] = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v55);
  v56 = 256;
  v10 = 1;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v53, a1, 0);
  if ( (v53[24] & 1) == 0 )
    goto LABEL_59;
  v11 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
LABEL_60:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v53);
    if ( v54[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v54);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v55);
    return v10;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 24LL);
  if ( !*(_DWORD *)(v11 + 492) )
  {
    v13 = DC::prgnVisSnap((DC *)v11);
    if ( !v13 )
      goto LABEL_59;
    v64[0] = *((_DWORD *)v13 + 24);
    v64[1] = *((_DWORD *)v13 + 25);
    v64[2] = *((_DWORD *)v13 + 26);
    v64[3] = *((_DWORD *)v13 + 27);
    if ( (unsigned int)ERECTL::bWrapped((ERECTL *)v64) )
      goto LABEL_59;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_59;
  if ( !a5 )
    goto LABEL_59;
  v14 = v6 + a2;
  x = v39.x;
  if ( (unsigned __int64)(v14 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_59;
  if ( (unsigned __int64)(a5 + (__int64)v39.x + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_59;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v50, a1, 0x204u);
  if ( (*(_DWORD *)(v50[0] + 32LL) & 2) == 0 )
    goto LABEL_59;
  v39.x = a2;
  v39.y = x;
  EXFORMOBJ::bXform((EXFORMOBJ *)v50, &v39, 1uLL);
  v16 = *(_QWORD *)a1;
  v17 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1LL;
  v18 = *(_DWORD *)(*(_QWORD *)a1 + 8 * v17 + 1016) + v39.x;
  v60.top = *(_DWORD *)(*(_QWORD *)a1 + 8 * v17 + 1020) + v39.y;
  v60.right = v18 + v40[0];
  v39.y = v60.top;
  v60.bottom = v60.top + a5;
  v39.x = v18;
  v60.left = v18;
  ERECTL::vOrder((ERECTL *)&v60);
  v19 = *(_QWORD *)(v16 + 496);
  v47[2] = 0LL;
  v48 = *(_DWORD *)(v19 + 56);
  v49 = *(_DWORD *)(v19 + 60);
  ERECTL::operator*=(&v60);
  if ( (unsigned int)ERECTL::bWrapped((ERECTL *)&v60) )
    goto LABEL_59;
  if ( *(_DWORD *)(v16 + 492) )
  {
    v28 = HIDWORD(v61);
    v27 = (int)v61;
  }
  else
  {
    if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0 )
      SURFACE::bUnMap(*(SURFACE **)(v16 + 496), 0LL, (struct DC *)v16);
    v20 = 0;
    v38 = 0;
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( g_pDwmState )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v51, *(HWND *)(*(_QWORD *)a1 + 472LL));
      v21 = v52;
      if ( v52 )
      {
        v22 = *(_QWORD *)(v52 + 168);
        v23 = (_DWORD *)v52;
        *(_QWORD *)v40 = v22;
        if ( (*(_DWORD *)(v22 + 252) & 0x80u) != 0
          || *(_QWORD *)(v22 + 184) != ((*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) != 0LL)) )
        {
          goto LABEL_49;
        }
        if ( *(_QWORD *)(v22 + 80) )
        {
          v43 = *(_QWORD *)(v22 + 80);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v47);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v47);
          if ( v43 && v47[0] && !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v43, &v60) )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
            if ( v44 )
            {
              v65.right = v23[16] - v23[14];
              v65.bottom = v23[17] - v23[15];
              *(_QWORD *)&v65.left = 0LL;
              RGNOBJ::vSet((RGNOBJ *)v47, &v65);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v44, (struct RGNOBJ *)v47, (struct RGNOBJ *)&v43, 4) )
              {
                v9 = v44;
                v20 = 1;
                v38 = 1;
              }
              else if ( v44 )
              {
                REGION::vDeleteREGION(v44);
              }
            }
            if ( v45 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v47);
          v21 = v52;
          v22 = *(_QWORD *)v40;
        }
        else
        {
          v20 = 1;
          v38 = 1;
        }
        if ( v20 )
        {
          v24 = *(_QWORD *)(v22 + 184);
          v61 = 0LL;
          if ( v24 )
          {
            v25 = *(_DWORD *)(v24 + 32);
            v26 = *(_DWORD *)(v24 + 36);
          }
          else
          {
            v26 = HIDWORD(v61);
            v25 = (int)v61;
          }
          v27 = v23[14];
          v28 = v23[15];
          *(_QWORD *)&v60.left = 0LL;
          v60.right = v25;
          v60.bottom = v26;
          *(_DWORD *)(v22 + 252) |= 0x80u;
          if ( v9 )
          {
            v61 = (HSURF)*((_QWORD *)v9 + 12);
            v62 = *((_DWORD *)v9 + 26);
            v63 = *((_DWORD *)v9 + 27);
            ERECTL::operator*=(&v60);
            if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v60) )
            {
              REGION::vDeleteREGION(v9);
              v38 = 0;
              *(_DWORD *)(*(_QWORD *)v40 + 252LL) |= 0x80u;
            }
          }
          v21 = v52;
        }
        else
        {
LABEL_49:
          v28 = HIDWORD(v61);
          v27 = (int)v61;
        }
        if ( v21 )
          _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
      }
      else
      {
        v28 = HIDWORD(v61);
        v27 = (int)v61;
      }
      v52 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v51);
    }
    else
    {
      v28 = HIDWORD(v61);
      v27 = (int)v61;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
      && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 496LL), 0LL) == 2 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
      goto LABEL_69;
    }
    if ( !v38 )
    {
LABEL_59:
      v10 = 0;
      goto LABEL_60;
    }
  }
  v30 = *(_QWORD *)a1;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 492LL) )
  {
    v60.left += *(_DWORD *)(v12 + 2584);
    v60.right += *(_DWORD *)(v12 + 2584);
    v60.top += *(_DWORD *)(v12 + 2588);
    v60.bottom += *(_DWORD *)(v12 + 2588);
  }
  else
  {
    v60.left += v27;
    v60.right += v27;
    v60.top += v28;
    v60.bottom += v28;
  }
  v31 = *(_QWORD *)(v12 + 2552);
  v32 = *(_DWORD *)(v12 + 2588);
  v40[0] = *(_DWORD *)(v12 + 2584);
  v41 = *(_DWORD *)(v31 + 56) + v40[0];
  v33 = *(_DWORD *)(v31 + 60);
  v40[1] = v32;
  v42 = v32 + v33;
  ERECTL::operator*=(&v60);
  if ( (unsigned int)ERECTL::bWrapped((ERECTL *)&v60) )
  {
LABEL_69:
    if ( v9 )
      REGION::vDeleteREGION(v9);
    goto LABEL_59;
  }
  v39.x = v60.left;
  v40[0] = v60.top;
  if ( *(_DWORD *)(v30 + 492) )
  {
    v60.left -= *(_DWORD *)(v12 + 2584);
    v60.right -= *(_DWORD *)(v12 + 2584);
    v60.top -= *(_DWORD *)(v12 + 2588);
    v60.bottom -= *(_DWORD *)(v12 + 2588);
  }
  else
  {
    v60.right -= v27;
    v60.left -= v27;
    v60.bottom -= v28;
    v60.top -= v28;
  }
  v61 = *(HSURF *)(*(_QWORD *)(v30 + 496) + 32LL);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v53);
  if ( v54[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v54);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v55);
  v34 = 0;
  v35 = 8;
  do
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v58);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v57, a1, 0);
    v36 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( v36 )
    {
      if ( *(_QWORD *)(v36 + 3464) )
      {
        v34 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v36 + 3464))(*(_QWORD *)(v36 + 1800), &v46);
        if ( v34 == 258 )
        {
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          --v35;
        }
      }
    }
    else
    {
      v34 = -1073741823;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v57);
    if ( v58[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v58);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v59);
  }
  while ( v34 == 258 && v35 );
  if ( v34 < 0 || v34 == 258 && !v35 )
  {
    if ( v9 )
      REGION::vDeleteREGION(v9);
  }
  else
  {
    return bSpDwmUpdateSurface(0LL, v46, a1, v61, 1.0, v39.x, v40[0], (struct ERECTL *)&v60, v9);
  }
  return v5;
}
