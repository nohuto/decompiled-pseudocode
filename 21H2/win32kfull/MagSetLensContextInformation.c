/*
 * XREFs of MagSetLensContextInformation @ 0x1C01CA01C
 * Callers:
 *     NtUserMagSetContextInformation @ 0x1C01F9900 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C0060DF0 (MagpFindThreadContext.c)
 *     MagpRevokeInputTransfrom @ 0x1C0098330 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C0159400 (memcmp.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1C01C95C8 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01C95EC (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ChangeComposableCursor @ 0x1C01CFAF0 (ChangeComposableCursor.c)
 *     DwmAsyncMagnCreate @ 0x1C0271E20 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C0271EF8 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0271FA8 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C0272154 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C0272214 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C02723C4 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0272488 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0272588 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C027269C (DwmAsyncMagnSetWindowSharedTextures.c)
 */

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
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  struct _MAG_LENS_CONTEXT *v18; // rax
  struct _MAG_LENS_CONTEXT *v19; // r12
  double v20; // xmm0_8
  bool v21; // cl
  __int64 v22; // rdx
  struct _MAG_LENS_CONTEXT *v23; // rax
  int v24; // edi
  void *v25; // rax
  int v26; // edi
  void *v27; // rax
  int v28; // edi
  void *v29; // rax
  double v30; // xmm1_8
  __int64 v31; // rax
  double v32; // xmm2_8
  int v33; // ecx
  __int128 v34; // xmm1
  struct _MAG_LENS_CONTEXT *v35; // rax
  struct _MAG_LENS_CONTEXT *v36; // rbx
  INT v37; // edx
  INT v38; // ecx
  INT v39; // eax
  __int128 v40; // xmm0
  struct _MAG_LENS_CONTEXT *v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  _QWORD *v44; // rcx
  int v45; // eax
  void *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  void *v51; // rax
  __int64 v52; // rax
  void *v53; // rax
  int v54; // edx
  void *v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  char *v58; // r13
  __int64 *v59; // rax
  struct _MAG_LENS_CONTEXT *v60; // rax
  struct _MAG_LENS_CONTEXT *v61; // rsi
  bool v62; // cl
  __int64 v63; // rdx
  struct _MAG_LENS_CONTEXT *v64; // rax
  void *v65; // rax
  void *v66; // rax
  void *v67; // rax
  int v68; // eax
  void *v69; // rax
  int v70; // eax
  int v71; // r9d
  int v72; // r9d
  int v73; // r9d
  struct _MAG_LENS_CONTEXT *v74; // rax
  struct _MAG_LENS_CONTEXT *v75; // rsi
  void *v76; // rax
  int v77; // eax
  void *v78; // rax
  int v79; // ebx
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  struct _MAG_LENS_CONTEXT *v81; // rsi
  unsigned int v82; // ebx
  struct _MAG_LENS_CONTEXT *v83; // rbx
  __int64 v84; // r8
  __int64 v85; // rdx
  int v86; // ecx
  __int64 v87; // rcx
  void *v88; // rax
  __int64 v89; // rcx
  int v90; // edx
  unsigned int v91; // ecx
  int v92; // edx
  __int64 v93; // rsi
  struct _MAG_LENS_CONTEXT *v94; // rbx
  __int64 v95; // rdi
  _QWORD *v96; // rcx
  void *v97; // rax
  __int64 v98; // rcx
  int v99; // ecx
  unsigned int v100; // eax
  int v101; // ecx
  __int64 v103; // [rsp+30h] [rbp-20h] BYREF
  __int64 v104; // [rsp+38h] [rbp-18h]
  __int64 v105; // [rsp+40h] [rbp-10h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0LL;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext(a1, a2);
  v13 = ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  if ( v12 > 5 )
  {
    v71 = v12 - 6;
    if ( v71 )
    {
      v72 = v71 - 1;
      if ( v72 )
      {
        v73 = v72 - 2;
        if ( !v73 )
        {
          v79 = *(_DWORD *)Buf1;
          if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
            return v6;
          if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            return v6;
          LensContext = MagpFindLensContext(ThreadContext, a3);
          v81 = LensContext;
          if ( !LensContext )
            return v6;
          v82 = v79 & 1;
          if ( ((*((_DWORD *)LensContext + 4) >> 6) & 1) != v82 )
          {
            ChangeComposableCursor(v82);
            *((_DWORD *)v81 + 4) = *((_DWORD *)v81 + 4) & 0xFFFFFFBF | (v82 << 6);
          }
          return 0;
        }
        if ( v73 != 1 )
          return v6;
        if ( !a3 )
          return v6;
        v74 = MagpFindLensContext(ThreadContext, a3);
        v75 = v74;
        if ( !v74 )
          return v6;
        if ( a3 == (struct tagWND *)-1LL )
        {
          v76 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
          v77 = DwmAsyncMagnSetDesktopSamplingMode(v76);
        }
        else
        {
          if ( (*((_DWORD *)v74 + 4) & 0x20) != 0 )
          {
LABEL_113:
            *((_DWORD *)v75 + 66) = *(_DWORD *)Buf1;
            return 0;
          }
          v78 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
          v77 = DwmAsyncMagnSetSamplingMode(v78);
        }
        v6 = v77;
        if ( v77 < 0 )
          return v6;
        goto LABEL_113;
      }
      if ( *(_DWORD *)Buf1 > 6u )
        return v6;
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v83 = MagpFindLensContext(ThreadContext, a3);
      if ( !v83 )
        return v6;
      if ( (_DWORD)v84 )
      {
        v8 = Win32AllocPoolZInit(24 * v84, 1735226197LL);
        if ( !v8 )
          return (unsigned int)-1073741801;
      }
      v85 = 0LL;
      v86 = *(_DWORD *)Buf1;
      HIDWORD(v103) = *((_DWORD *)Buf1 + 1);
      v104 = *((_QWORD *)Buf1 + 1);
      LODWORD(v103) = v86;
      v105 = v8;
      if ( v86 )
      {
        do
        {
          v87 = 3 * v85;
          v85 = (unsigned int)(v85 + 1);
          *(_OWORD *)(v8 + 8 * v87) = *(_OWORD *)&Buf1[8 * v87 + 16];
          *(_QWORD *)(v8 + 8 * v87 + 16) = *(_QWORD *)&Buf1[8 * v87 + 32];
        }
        while ( (unsigned int)v85 < *(_DWORD *)Buf1 );
      }
      if ( (*((_DWORD *)v83 + 4) & 0x20) != 0
        || (v88 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL)),
            v6 = DwmAsyncMagnSetWindowSharedTextures(v88),
            (v6 & 0x80000000) == 0) )
      {
        v89 = *((_QWORD *)v83 + 32);
        if ( v89 )
        {
          Win32FreePool(v89);
          *((_QWORD *)v83 + 32) = 0LL;
        }
        v90 = *((_DWORD *)v83 + 4);
        *((_DWORD *)v83 + 60) = *(_DWORD *)Buf1;
        v91 = v90 & 0xFFFFFFEF;
        v92 = v90 | 0x10;
        *((_DWORD *)v83 + 61) = *((_DWORD *)Buf1 + 1);
        *((_DWORD *)v83 + 62) = *((_DWORD *)Buf1 + 2);
        *((_DWORD *)v83 + 63) = *((_DWORD *)Buf1 + 3);
        *((_QWORD *)v83 + 32) = v8;
        if ( !*(_DWORD *)Buf1 )
          v92 = v91;
        *((_DWORD *)v83 + 4) = v92;
        return 0;
      }
      if ( !v8 )
        return v6;
      v57 = v8;
    }
    else
    {
      v93 = (unsigned int)(*(_DWORD *)Buf1 + *((_DWORD *)Buf1 + 1));
      if ( (unsigned int)v93 > 0x19 )
        return v6;
      if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v94 = MagpFindLensContext(ThreadContext, a3);
      if ( !v94 )
        return v6;
      v95 = (unsigned int)v93;
      if ( (_DWORD)v93 )
      {
        v7 = Win32AllocPoolZInit(8 * v93, 1735226197LL);
        if ( !v7 )
          return (unsigned int)-1073741801;
      }
      v103 = *(_QWORD *)Buf1;
      v104 = v7;
      if ( (_DWORD)v93 )
      {
        v96 = (_QWORD *)v7;
        do
        {
          *v96 = *(_QWORD *)&Buf1[(_QWORD)v96 - v7 + 8];
          ++v96;
          --v95;
        }
        while ( v95 );
      }
      if ( (*((_DWORD *)v94 + 4) & 0x20) != 0
        || (v97 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL)),
            v6 = DwmAsyncMagnSetWindowFilterList(v97),
            (v6 & 0x80000000) == 0) )
      {
        v98 = *((_QWORD *)v94 + 29);
        if ( v98 )
        {
          Win32FreePool(v98);
          *((_QWORD *)v94 + 29) = 0LL;
        }
        v99 = *((_DWORD *)v94 + 4);
        *((_DWORD *)v94 + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)v94 + 57) = *((_DWORD *)Buf1 + 1);
        v100 = v99 & 0xFFFFFFF7;
        *((_QWORD *)v94 + 29) = v7;
        v101 = v99 | 8;
        if ( !(_DWORD)v93 )
          v101 = v100;
        *((_DWORD *)v94 + 4) = v101;
        return 0;
      }
      if ( !v7 )
        return v6;
      v57 = v7;
    }
LABEL_147:
    Win32FreePool(v57);
    return v6;
  }
  if ( v12 == 5 )
  {
    if ( !a3 )
      return v6;
    v60 = MagpFindLensContext(ThreadContext, a3);
    v61 = v60;
    if ( !v60 )
      return v6;
    if ( a3 == (struct tagWND *)-1LL )
    {
      v62 = memcmp(Buf1, &gMagEffectIdentity, 0x64uLL) == 0;
      v63 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
      v64 = *(struct _MAG_LENS_CONTEXT **)(v63 + 232);
      if ( v62 )
      {
        if ( v64 )
        {
          if ( v64 != v61 )
            return v6;
          v65 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v63 + 8));
          v6 = DwmAsyncMagnSetDesktopColorTransform(v65);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = 0LL;
        }
        goto LABEL_101;
      }
      if ( !v64 )
      {
        v66 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v63 + 8));
        v6 = DwmAsyncMagnSetDesktopColorTransform(v66);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = v61;
        goto LABEL_101;
      }
      if ( v64 != v61 )
        return v6;
      v67 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v63 + 8));
      v68 = DwmAsyncMagnSetDesktopColorTransform(v67);
    }
    else
    {
      if ( (*((_DWORD *)v60 + 4) & 0x20) != 0 )
      {
LABEL_101:
        *(_OWORD *)((char *)v61 + 120) = *(_OWORD *)Buf1;
        *(_OWORD *)((char *)v61 + 136) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)((char *)v61 + 152) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)((char *)v61 + 168) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)((char *)v61 + 184) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)((char *)v61 + 200) = *((_OWORD *)Buf1 + 5);
        v70 = *((_DWORD *)Buf1 + 24);
        *((_DWORD *)v61 + 4) |= 4u;
        *((_DWORD *)v61 + 54) = v70;
        return 0;
      }
      v69 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
      v68 = DwmAsyncMagnSetWindowColorTransform(v69);
    }
    v6 = v68;
    if ( v68 < 0 )
      return v6;
    goto LABEL_101;
  }
  if ( !v12 )
  {
    if ( !a3 || MagpFindLensContext(ThreadContext, a3) )
      return v6;
    v42 = Win32AllocPoolZInit(272LL, 1735226197LL);
    if ( v42 )
    {
      if ( a3 != (struct tagWND *)-1LL )
      {
        v55 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
        v56 = DwmAsyncMagnCreate(v55);
        v6 = v56;
        if ( v56 != -1073741823 && v56 < 0 )
          goto LABEL_78;
      }
      memset((void *)(v42 + 16), 0, 0x100uLL);
      *(double *)(v42 + 40) = gOneDouble;
      *(double *)(v42 + 48) = gOneDouble;
      if ( a3 == (struct tagWND *)-1LL )
      {
        *(_QWORD *)(v42 + 24) = -1LL;
      }
      else
      {
        v103 = v42 + 24;
        v104 = (__int64)a3;
        HMAssignmentLock(&v103, 0LL);
      }
      *(_DWORD *)(v42 + 264) = 0;
      v58 = (char *)v13 + 40;
      v59 = (__int64 *)*((_QWORD *)v58 + 1);
      if ( (char *)*v59 == v58 )
      {
        *(_QWORD *)v42 = v58;
        *(_QWORD *)(v42 + 8) = v59;
        *v59 = v42;
        *((_QWORD *)v58 + 1) = v42;
        return 0;
      }
      goto LABEL_83;
    }
    return (unsigned int)-1073741801;
  }
  v14 = v12 - 1;
  if ( !v14 )
  {
    MagpRevokeInputTransfrom();
    if ( !a3 )
      return v6;
    v41 = MagpFindLensContext(v13, a3);
    v42 = (__int64)v41;
    if ( !v41 )
      return v6;
    v43 = *(_QWORD *)v41;
    if ( *(_QWORD *)(v43 + 8) == v42 )
    {
      v44 = *(_QWORD **)(v42 + 8);
      if ( *v44 == v42 )
      {
        *v44 = v43;
        *(_QWORD *)(v43 + 8) = v44;
        if ( a3 == (struct tagWND *)-1LL )
        {
          v49 = *((_QWORD *)v13 + 2);
          v50 = *(_QWORD *)(v49 + 456);
          if ( *(_QWORD *)(v50 + 232) == v42 )
          {
            v51 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v50 + 8));
            v6 = DwmAsyncMagnSetDesktopColorTransform(v51);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = 0LL;
            v49 = *((_QWORD *)v13 + 2);
          }
          else
          {
            v6 = 0;
          }
          v52 = *(_QWORD *)(v49 + 456);
          if ( *(_QWORD *)(v52 + 224) == v42 )
          {
            v53 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v52 + 8));
            v54 = DwmAsyncMagnSetDesktopTransform(v53, 0);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 224LL) = 0LL;
          }
          else
          {
            v54 = 0;
          }
          if ( (v6 & 0x80000000) != 0 )
            goto LABEL_78;
          if ( v54 < 0 )
          {
            v6 = v54;
            goto LABEL_78;
          }
        }
        else
        {
          v45 = *(_DWORD *)(v42 + 16);
          if ( (v45 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *(_DWORD *)(v42 + 16) &= ~0x40u;
            v45 = *(_DWORD *)(v42 + 16);
          }
          if ( (v45 & 0x20) != 0 )
          {
            v6 = 0;
          }
          else
          {
            v46 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL));
            v6 = DwmAsyncMagnDestroy(v46);
          }
          HMAssignmentUnlock(v42 + 24);
          v47 = *(_QWORD *)(v42 + 232);
          if ( v47 )
            Win32FreePool(v47);
          v48 = *(_QWORD *)(v42 + 256);
          if ( v48 )
            Win32FreePool(v48);
          if ( (v6 & 0x80000000) != 0 )
            goto LABEL_78;
        }
        v6 = 0;
LABEL_78:
        v57 = v42;
        goto LABEL_147;
      }
    }
LABEL_83:
    __fastfail(3u);
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v6;
    v35 = MagpFindLensContext(ThreadContext, a3);
    v36 = v35;
    if ( !v35 )
      return v6;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 3) + 40LL) + 288LL) & 0xF) != 0
      || (v37 = *(unsigned __int16 *)(gpsi + 6998LL), (unsigned __int16)v37 <= 0x60u) )
    {
      v38 = *(_DWORD *)Buf1;
      if ( (*((_DWORD *)v35 + 4) & 2) == 0 )
      {
        *((_DWORD *)v35 + 8) = -v38;
        v39 = *((_DWORD *)Buf1 + 1);
        goto LABEL_44;
      }
    }
    else
    {
      v38 = *(_DWORD *)Buf1;
      if ( (*((_DWORD *)v35 + 4) & 2) == 0 )
      {
        *((_DWORD *)v35 + 8) = -EngMulDiv(v38, v37, 96);
        v39 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), 96);
        goto LABEL_44;
      }
    }
    *((_DWORD *)v35 + 8) = -(int)((double)v38 * *((double *)v35 + 11));
    v39 = (int)((double)*((int *)Buf1 + 1) * *((double *)v35 + 12));
LABEL_44:
    *((_DWORD *)v36 + 9) = -v39;
    v40 = *(_OWORD *)Buf1;
    *((_DWORD *)v36 + 4) |= 1u;
    *(_OWORD *)((char *)v36 + 72) = v40;
    return 0;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( !a3 )
      return v6;
    v18 = MagpFindLensContext(ThreadContext, a3);
    v19 = v18;
    if ( !v18 )
      return v6;
    v20 = *(double *)Buf1;
    if ( a3 == (struct tagWND *)-1LL )
    {
      if ( v20 != *((double *)Buf1 + 1) )
        return v6;
      v21 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) == 0;
      v22 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
      v23 = *(struct _MAG_LENS_CONTEXT **)(v22 + 224);
      if ( v21 )
      {
        if ( v23 )
        {
          if ( v19 != v23 )
            return v6;
          v24 = (int)*((double *)Buf1 + 3);
          v25 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v22 + 8));
          v6 = DwmAsyncMagnSetDesktopTransform(v25, v24);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 224LL) = 0LL;
        }
        else
        {
          v6 = 0;
        }
      }
      else if ( v23 )
      {
        if ( v19 != v23 )
          return v6;
        v28 = (int)*((double *)Buf1 + 3);
        v29 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v22 + 8));
        v6 = DwmAsyncMagnSetDesktopTransform(v29, v28);
      }
      else
      {
        v26 = (int)*((double *)Buf1 + 3);
        v27 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v22 + 8));
        v6 = DwmAsyncMagnSetDesktopTransform(v27, v26);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 224LL) = v19;
      }
      if ( (v6 & 0x80000000) != 0 )
        return v6;
    }
    else
    {
      *((double *)v18 + 5) = v20;
      *((_QWORD *)v18 + 6) = *((_QWORD *)Buf1 + 1);
      v30 = *((double *)Buf1 + 2);
      v31 = *((_QWORD *)v18 + 3);
      *((double *)v19 + 7) = v30;
      v32 = *((double *)Buf1 + 3);
      *((double *)v19 + 8) = v32;
      if ( (*(_DWORD *)(*(_QWORD *)(v31 + 40) + 288LL) & 0xF) == 0 )
      {
        v33 = *(unsigned __int16 *)(gpsi + 6998LL);
        if ( (unsigned __int16)v33 > 0x60u )
        {
          *((double *)v19 + 7) = (double)v33 * v30 / 96.0;
          *((double *)v19 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v32 / 96.0;
          *((double *)v19 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
          *((double *)v19 + 6) = *((double *)Buf1 + 1) * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
        }
      }
    }
    *(_OWORD *)((char *)v19 + 88) = *(_OWORD *)Buf1;
    v34 = *((_OWORD *)Buf1 + 1);
    *((_DWORD *)v19 + 4) |= 2u;
    *(_OWORD *)((char *)v19 + 104) = v34;
    return 0;
  }
  if ( v16 == 1 )
  {
    if ( *((_DWORD *)Buf1 + 8) == 3 )
      return (unsigned int)MagpRevokeInputTransfrom();
    else
      return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1, v10);
  }
  return v6;
}
