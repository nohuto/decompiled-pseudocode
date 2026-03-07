__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, struct tagWND *a3, __int64 a4, char *Buf1)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rsi
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  struct _MAG_THREAD_CONTEXT *v13; // r13
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // r9
  struct _MAG_LENS_CONTEXT *v19; // rax
  struct _MAG_LENS_CONTEXT *v20; // r12
  double v21; // xmm0_8
  bool v22; // zf
  __int64 v23; // rax
  struct _MAG_LENS_CONTEXT *v24; // rcx
  int v25; // edi
  void *v26; // rax
  int v27; // edi
  void *v28; // rax
  int v29; // edi
  void *v30; // rax
  double v31; // xmm1_8
  __int64 v32; // rax
  double v33; // xmm2_8
  int v34; // ecx
  __int128 v35; // xmm1
  struct _MAG_LENS_CONTEXT *v36; // rax
  struct _MAG_LENS_CONTEXT *v37; // rbx
  INT v38; // ecx
  unsigned int v39; // r9d
  _DWORD *v40; // rdi
  __m128i v41; // xmm0
  INT v42; // eax
  unsigned int v43; // ecx
  __int128 v44; // xmm0
  struct _MAG_LENS_CONTEXT *v45; // rax
  __int64 v46; // r14
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // eax
  void *v50; // rax
  void *v51; // rcx
  void *v52; // rcx
  __int64 v53; // rax
  void *v54; // rax
  __int64 v55; // rax
  void *v56; // rax
  int v57; // eax
  void *v58; // rax
  int v59; // eax
  void *v60; // rcx
  char *v61; // r13
  __int64 *v62; // rax
  struct _MAG_LENS_CONTEXT *v63; // rax
  struct _MAG_LENS_CONTEXT *v64; // rsi
  __int64 v65; // rax
  struct _MAG_LENS_CONTEXT *v66; // rcx
  void *v67; // rax
  void *v68; // rax
  void *v69; // rax
  _DWORD *v70; // r12
  void *v71; // rax
  int v72; // eax
  int v73; // r9d
  int v74; // r9d
  int v75; // r9d
  struct _MAG_LENS_CONTEXT *v76; // rax
  struct _MAG_LENS_CONTEXT *v77; // rsi
  void *v78; // rax
  int v79; // eax
  void *v80; // rax
  int v81; // ebx
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  struct _MAG_LENS_CONTEXT *v83; // rsi
  unsigned int v84; // ebx
  struct _MAG_LENS_CONTEXT *v85; // rbx
  __int64 v86; // r8
  __int64 v87; // rdx
  int v88; // ecx
  __int64 v89; // rcx
  void *v90; // rax
  void *v91; // rcx
  int v92; // edx
  unsigned int v93; // ecx
  int v94; // edx
  __int64 v95; // rsi
  struct _MAG_LENS_CONTEXT *v96; // rbx
  __int64 v97; // rdi
  _QWORD *v98; // rcx
  void *v99; // rax
  void *v100; // rcx
  int v101; // ecx
  unsigned int v102; // eax
  int v103; // ecx
  __int64 v104; // [rsp+30h] [rbp-20h] BYREF
  __int64 v105; // [rsp+38h] [rbp-18h]
  __int64 v106; // [rsp+40h] [rbp-10h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0LL;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext(a1, a2);
  v13 = ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  if ( v12 > 5 )
  {
    v73 = v12 - 6;
    if ( v73 )
    {
      v74 = v73 - 1;
      if ( v74 )
      {
        v75 = v74 - 2;
        if ( !v75 )
        {
          v81 = *(_DWORD *)Buf1;
          if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
            return v6;
          if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            return v6;
          LensContext = MagpFindLensContext(ThreadContext, a3);
          v83 = LensContext;
          if ( !LensContext )
            return v6;
          v84 = v81 & 1;
          if ( ((*((_DWORD *)LensContext + 4) >> 6) & 1) != v84 )
          {
            ChangeComposableCursor(v84);
            *((_DWORD *)v83 + 4) = (v84 << 6) | *((_DWORD *)v83 + 4) & 0xFFFFFFBF;
          }
          return 0;
        }
        if ( v75 != 1 )
          return v6;
        if ( !a3 )
          return v6;
        v76 = MagpFindLensContext(ThreadContext, a3);
        v77 = v76;
        if ( !v76 )
          return v6;
        if ( a3 == (struct tagWND *)-1LL )
        {
          v78 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
          v79 = DwmAsyncMagnSetDesktopSamplingMode(v78);
        }
        else
        {
          if ( (*((_DWORD *)v76 + 4) & 0x20) != 0 )
            goto LABEL_117;
          v80 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
          v79 = DwmAsyncMagnSetSamplingMode(v80);
        }
        v6 = v79;
        if ( v79 < 0 )
          return v6;
LABEL_117:
        *((_DWORD *)v77 + 66) = *(_DWORD *)Buf1;
        return 0;
      }
      if ( *(_DWORD *)Buf1 > 6u )
        return v6;
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v85 = MagpFindLensContext(ThreadContext, a3);
      if ( !v85 )
        return v6;
      if ( (_DWORD)v86 )
      {
        v8 = Win32AllocPoolZInit(24 * v86, 1735226197LL);
        if ( !v8 )
          return (unsigned int)-1073741801;
      }
      v87 = 0LL;
      v88 = *(_DWORD *)Buf1;
      HIDWORD(v104) = *((_DWORD *)Buf1 + 1);
      v105 = *((_QWORD *)Buf1 + 1);
      LODWORD(v104) = v88;
      v106 = v8;
      if ( v88 )
      {
        do
        {
          v89 = 3 * v87;
          v87 = (unsigned int)(v87 + 1);
          *(_OWORD *)(v8 + 8 * v89) = *(_OWORD *)&Buf1[8 * v89 + 16];
          *(_QWORD *)(v8 + 8 * v89 + 16) = *(_QWORD *)&Buf1[8 * v89 + 32];
        }
        while ( (unsigned int)v87 < *(_DWORD *)Buf1 );
      }
      if ( (*((_DWORD *)v85 + 4) & 0x20) != 0
        || (v90 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL)),
            v6 = DwmAsyncMagnSetWindowSharedTextures(v90),
            (v6 & 0x80000000) == 0) )
      {
        v91 = (void *)*((_QWORD *)v85 + 32);
        if ( v91 )
        {
          Win32FreePool(v91);
          *((_QWORD *)v85 + 32) = 0LL;
        }
        v92 = *((_DWORD *)v85 + 4);
        *((_DWORD *)v85 + 60) = *(_DWORD *)Buf1;
        v93 = v92 & 0xFFFFFFEF;
        v94 = v92 | 0x10;
        *((_DWORD *)v85 + 61) = *((_DWORD *)Buf1 + 1);
        *((_DWORD *)v85 + 62) = *((_DWORD *)Buf1 + 2);
        *((_DWORD *)v85 + 63) = *((_DWORD *)Buf1 + 3);
        *((_QWORD *)v85 + 32) = v8;
        if ( !*(_DWORD *)Buf1 )
          v94 = v93;
        *((_DWORD *)v85 + 4) = v94;
        return 0;
      }
      if ( !v8 )
        return v6;
      v60 = (void *)v8;
    }
    else
    {
      v95 = (unsigned int)(*(_DWORD *)Buf1 + *((_DWORD *)Buf1 + 1));
      if ( (unsigned int)v95 > 0x19 )
        return v6;
      if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v96 = MagpFindLensContext(ThreadContext, a3);
      if ( !v96 )
        return v6;
      v97 = (unsigned int)v95;
      if ( (_DWORD)v95 )
      {
        v7 = Win32AllocPoolZInit(8 * v95, 1735226197LL);
        if ( !v7 )
          return (unsigned int)-1073741801;
      }
      v104 = *(_QWORD *)Buf1;
      v105 = v7;
      if ( (_DWORD)v95 )
      {
        v98 = (_QWORD *)v7;
        do
        {
          *v98 = *(_QWORD *)&Buf1[(_QWORD)v98 - v7 + 8];
          ++v98;
          --v97;
        }
        while ( v97 );
      }
      if ( (*((_DWORD *)v96 + 4) & 0x20) != 0
        || (v99 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL)),
            v6 = DwmAsyncMagnSetWindowFilterList(v99),
            (v6 & 0x80000000) == 0) )
      {
        v100 = (void *)*((_QWORD *)v96 + 29);
        if ( v100 )
        {
          Win32FreePool(v100);
          *((_QWORD *)v96 + 29) = 0LL;
        }
        v101 = *((_DWORD *)v96 + 4);
        *((_DWORD *)v96 + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)v96 + 57) = *((_DWORD *)Buf1 + 1);
        v102 = v101 & 0xFFFFFFF7;
        *((_QWORD *)v96 + 29) = v7;
        v103 = v101 | 8;
        if ( !(_DWORD)v95 )
          v103 = v102;
        *((_DWORD *)v96 + 4) = v103;
        return 0;
      }
      if ( !v7 )
        return v6;
      v60 = (void *)v7;
    }
LABEL_151:
    Win32FreePool(v60);
    return v6;
  }
  if ( v12 == 5 )
  {
    if ( !a3 )
      return v6;
    v63 = MagpFindLensContext(ThreadContext, a3);
    v64 = v63;
    if ( !v63 )
      return v6;
    if ( a3 == (struct tagWND *)-1LL )
    {
      v22 = memcmp(Buf1, &gMagEffectIdentity, 0x64uLL) != 0;
      v65 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
      v66 = *(struct _MAG_LENS_CONTEXT **)(v65 + 232);
      if ( v22 )
      {
        if ( v66 )
        {
          if ( v66 != v64 )
            return v6;
          v69 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v65 + 8));
          v6 = DwmAsyncMagnSetDesktopColorTransform(v69);
        }
        else
        {
          v68 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v65 + 8));
          v6 = DwmAsyncMagnSetDesktopColorTransform(v68);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = v64;
        }
      }
      else if ( v66 )
      {
        if ( v66 != v64 )
          return v6;
        v67 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v65 + 8));
        v6 = DwmAsyncMagnSetDesktopColorTransform(v67);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = 0LL;
      }
      else
      {
        v6 = 0;
      }
      v70 = (_DWORD *)((char *)v64 + 16);
    }
    else
    {
      v70 = (_DWORD *)((char *)v63 + 16);
      if ( (*((_DWORD *)v63 + 4) & 0x20) != 0 )
        goto LABEL_105;
      v71 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
      v6 = DwmAsyncMagnSetWindowColorTransform(v71);
    }
    if ( (v6 & 0x80000000) != 0 )
      return v6;
LABEL_105:
    *(_OWORD *)((char *)v64 + 120) = *(_OWORD *)Buf1;
    *(_OWORD *)((char *)v64 + 136) = *((_OWORD *)Buf1 + 1);
    *(_OWORD *)((char *)v64 + 152) = *((_OWORD *)Buf1 + 2);
    *(_OWORD *)((char *)v64 + 168) = *((_OWORD *)Buf1 + 3);
    *(_OWORD *)((char *)v64 + 184) = *((_OWORD *)Buf1 + 4);
    *(_OWORD *)((char *)v64 + 200) = *((_OWORD *)Buf1 + 5);
    v72 = *((_DWORD *)Buf1 + 24);
    *v70 |= 4u;
    *((_DWORD *)v64 + 54) = v72;
    return 0;
  }
  if ( !v12 )
  {
    if ( !a3 || MagpFindLensContext(ThreadContext, a3) )
      return v6;
    v46 = Win32AllocPoolZInit(272LL, 1735226197LL);
    if ( v46 )
    {
      if ( a3 != (struct tagWND *)-1LL )
      {
        v58 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
        v59 = DwmAsyncMagnCreate(v58);
        v6 = v59;
        if ( v59 != -1073741823 && v59 < 0 )
          goto LABEL_80;
      }
      memset_0((void *)(v46 + 16), 0, 0x100uLL);
      *(double *)(v46 + 40) = gOneDouble;
      *(double *)(v46 + 48) = gOneDouble;
      if ( a3 == (struct tagWND *)-1LL )
      {
        *(_QWORD *)(v46 + 24) = -1LL;
      }
      else
      {
        v104 = v46 + 24;
        v105 = (__int64)a3;
        HMAssignmentLock(&v104, 0LL);
      }
      *(_DWORD *)(v46 + 264) = 0;
      v61 = (char *)v13 + 40;
      v62 = (__int64 *)*((_QWORD *)v61 + 1);
      if ( (char *)*v62 == v61 )
      {
        *(_QWORD *)v46 = v61;
        *(_QWORD *)(v46 + 8) = v62;
        *v62 = v46;
        *((_QWORD *)v61 + 1) = v46;
        return 0;
      }
      goto LABEL_85;
    }
    return (unsigned int)-1073741801;
  }
  v15 = v12 - 1;
  if ( !v15 )
  {
    MagpRevokeInputTransfrom();
    if ( !a3 )
      return v6;
    v45 = MagpFindLensContext(v13, a3);
    v46 = (__int64)v45;
    if ( !v45 )
      return v6;
    v47 = *(_QWORD *)v45;
    if ( *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)v45 + 8LL) == v45 )
    {
      v48 = (_QWORD *)*((_QWORD *)v45 + 1);
      if ( *v48 == v46 )
      {
        *v48 = v47;
        *(_QWORD *)(v47 + 8) = v48;
        if ( a3 == (struct tagWND *)-1LL )
        {
          v53 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
          if ( *(_QWORD *)(v53 + 232) == v46 )
          {
            v54 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v53 + 8));
            v6 = DwmAsyncMagnSetDesktopColorTransform(v54);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = 0LL;
          }
          else
          {
            v6 = 0;
          }
          v55 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
          if ( *(_QWORD *)(v55 + 224) == v46 )
          {
            v56 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v55 + 8));
            v57 = DwmAsyncMagnSetDesktopTransform(v56, 0);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 224LL) = 0LL;
          }
          else
          {
            v57 = 0;
          }
          if ( (v6 & 0x80000000) != 0 )
            goto LABEL_80;
          if ( v57 < 0 )
          {
            v6 = v57;
            goto LABEL_80;
          }
        }
        else
        {
          v49 = *(_DWORD *)(v46 + 16);
          if ( (v49 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *(_DWORD *)(v46 + 16) &= ~0x40u;
            v49 = *(_DWORD *)(v46 + 16);
          }
          if ( (v49 & 0x20) != 0 )
          {
            v6 = 0;
          }
          else
          {
            v50 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
            v6 = DwmAsyncMagnDestroy(v50);
          }
          HMAssignmentUnlock(v46 + 24);
          v51 = *(void **)(v46 + 232);
          if ( v51 )
            Win32FreePool(v51);
          v52 = *(void **)(v46 + 256);
          if ( v52 )
            Win32FreePool(v52);
          if ( (v6 & 0x80000000) != 0 )
            goto LABEL_80;
        }
        v6 = 0;
LABEL_80:
        v60 = (void *)v46;
        goto LABEL_151;
      }
    }
LABEL_85:
    __fastfail(3u);
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v6;
    v36 = MagpFindLensContext(ThreadContext, a3);
    v37 = v36;
    if ( !v36 )
      return v6;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 3) + 40LL) + 288LL) & 0xF) != 0
      || (v38 = *(unsigned __int16 *)(gpsi + 6998LL), (unsigned __int16)v38 <= 0x60u) )
    {
      v43 = *(_DWORD *)Buf1;
      v40 = (_DWORD *)((char *)v36 + 16);
      if ( (*((_DWORD *)v36 + 4) & 2) == 0 )
      {
        *((_DWORD *)v36 + 8) = -v43;
        v42 = *((_DWORD *)Buf1 + 1);
        goto LABEL_46;
      }
      v41 = _mm_cvtsi32_si128(v43);
    }
    else
    {
      v39 = *(_DWORD *)Buf1;
      v40 = (_DWORD *)((char *)v36 + 16);
      if ( (*((_DWORD *)v36 + 4) & 2) == 0 )
      {
        *((_DWORD *)v36 + 8) = -EngMulDiv(v39, v38, 96);
        v42 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), 96);
        goto LABEL_46;
      }
      v41 = _mm_cvtsi32_si128(v39);
    }
    *((_DWORD *)v36 + 8) = -(int)(_mm_cvtepi32_pd(v41).m128d_f64[0] * *((double *)v36 + 11));
    v42 = (int)((double)*((int *)Buf1 + 1) * *((double *)v36 + 12));
LABEL_46:
    *((_DWORD *)v37 + 9) = -v42;
    v44 = *(_OWORD *)Buf1;
    *v40 |= 1u;
    *(_OWORD *)((char *)v37 + 72) = v44;
    return 0;
  }
  v17 = (unsigned int)(v16 - 1);
  if ( (_DWORD)v17 )
  {
    if ( (_DWORD)v17 == 1 )
    {
      if ( *((_DWORD *)Buf1 + 8) == 3 )
        return (unsigned int)MagpRevokeInputTransfrom();
      else
        return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1, v10, v11, v17);
    }
    return v6;
  }
  if ( a3 )
  {
    v19 = MagpFindLensContext(ThreadContext, a3);
    v20 = v19;
    if ( v19 )
    {
      v21 = *(double *)Buf1;
      if ( a3 != (struct tagWND *)-1LL )
      {
        *((double *)v19 + 5) = v21;
        *((_QWORD *)v19 + 6) = *((_QWORD *)Buf1 + 1);
        v31 = *((double *)Buf1 + 2);
        v32 = *((_QWORD *)v19 + 3);
        *((double *)v20 + 7) = v31;
        v33 = *((double *)Buf1 + 3);
        *((double *)v20 + 8) = v33;
        if ( (*(_DWORD *)(*(_QWORD *)(v32 + 40) + 288LL) & 0xF) == 0 )
        {
          v34 = *(unsigned __int16 *)(gpsi + 6998LL);
          if ( (unsigned __int16)v34 > 0x60u )
          {
            *((double *)v20 + 7) = (double)v34 * v31 / 96.0;
            *((double *)v20 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v33 / 96.0;
            *((double *)v20 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
            *((double *)v20 + 6) = *((double *)Buf1 + 1) * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
          }
        }
        goto LABEL_34;
      }
      if ( v21 == *((double *)Buf1 + 1) )
      {
        v22 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) != 0;
        v23 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
        v24 = *(struct _MAG_LENS_CONTEXT **)(v23 + 224);
        if ( v22 )
        {
          if ( v24 )
          {
            if ( v20 != v24 )
              return v6;
            v29 = (int)*((double *)Buf1 + 3);
            v30 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v23 + 8));
            v6 = DwmAsyncMagnSetDesktopTransform(v30, v29);
          }
          else
          {
            v27 = (int)*((double *)Buf1 + 3);
            v28 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v23 + 8));
            v6 = DwmAsyncMagnSetDesktopTransform(v28, v27);
            if ( (v6 & 0x80000000) != 0 )
              return v6;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 224LL) = v20;
          }
        }
        else if ( v24 )
        {
          if ( v20 != v24 )
            return v6;
          v25 = (int)*((double *)Buf1 + 3);
          v26 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v23 + 8));
          v6 = DwmAsyncMagnSetDesktopTransform(v26, v25);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 224LL) = 0LL;
        }
        else
        {
          v6 = 0;
        }
        if ( (v6 & 0x80000000) == 0 )
        {
LABEL_34:
          *(_OWORD *)((char *)v20 + 88) = *(_OWORD *)Buf1;
          v35 = *((_OWORD *)Buf1 + 1);
          *((_DWORD *)v20 + 4) |= 2u;
          *(_OWORD *)((char *)v20 + 104) = v35;
          return 0;
        }
      }
    }
  }
  return v6;
}
