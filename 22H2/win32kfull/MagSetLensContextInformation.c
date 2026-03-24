/*
 * XREFs of MagSetLensContextInformation @ 0x1C01CCC94
 * Callers:
 *     MagSlicerControl @ 0x1C01CDA34 (MagSlicerControl.c)
 *     NtUserMagSetContextInformation @ 0x1C01FE910 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C007C4C8 (MagpFindThreadContext.c)
 *     MagpRevokeInputTransfrom @ 0x1C00EB300 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C0165600 (memcmp.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CC184 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01CC1C8 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ChangeComposableCursor @ 0x1C01D3CFC (ChangeComposableCursor.c)
 *     DwmAsyncMagnCreate @ 0x1C0273D74 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C0273E4C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0273EFC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C02740A8 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C0274168 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C0274318 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0274524 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0274624 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0274734 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, _DWORD *Buf1)
{
  __int64 *v6; // r12
  _QWORD *v7; // rbx
  int v8; // esi
  unsigned int v10; // edi
  _QWORD *ThreadContext; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 *v16; // rax
  __int64 *v17; // r12
  double v18; // xmm0_8
  __int64 v19; // rsi
  __int64 *v20; // rbx
  __int64 v21; // rdx
  int v22; // ebx
  void *v23; // rax
  int v24; // ebx
  void *v25; // rax
  int v26; // ebx
  void *v27; // rax
  double v28; // xmm1_8
  __int64 v29; // rax
  double v30; // xmm2_8
  int v31; // ecx
  __int128 v32; // xmm1
  __int64 *v33; // rax
  __int64 *v34; // rbx
  INT v35; // edx
  INT v36; // ecx
  int *v37; // rdi
  INT v38; // eax
  _DWORD *v39; // rcx
  int v40; // edx
  __int128 v41; // xmm0
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // rax
  int v46; // eax
  void *v47; // rax
  void *v48; // rcx
  void *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  void *v52; // rax
  __int64 v53; // rax
  void *v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  void *v57; // rax
  int v58; // eax
  unsigned int *v59; // rbx
  int v60; // ecx
  unsigned int v61; // eax
  __int64 v62; // r13
  __int64 **v63; // rax
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 *v66; // rsi
  __int64 v67; // r15
  __int64 *v68; // rbx
  __int64 v69; // rdx
  void *v70; // rax
  int v71; // eax
  void *v72; // rax
  void *v73; // rax
  unsigned int v74; // eax
  void *v75; // rax
  __int64 *v76; // rax
  __int64 v77; // rdx
  __int64 *v78; // rsi
  _QWORD *v79; // rcx
  void *v80; // rax
  unsigned int v81; // eax
  void *v82; // rax
  int v83; // ebx
  __int64 *v84; // rax
  __int64 *v85; // rsi
  unsigned int v86; // ebx
  __int64 *v87; // rsi
  __int64 v88; // r11
  __int64 v89; // rdx
  int v90; // ecx
  __int64 v91; // rcx
  void *v92; // rax
  void *v93; // rcx
  int v94; // eax
  unsigned int v95; // eax
  unsigned int v96; // ebx
  char *v97; // rdx
  __int64 *LensContext; // rsi
  __int64 v99; // rdi
  _QWORD *v100; // r15
  _QWORD *v101; // rcx
  void *v102; // rax
  void *v103; // rcx
  int v104; // eax
  unsigned int v105; // eax
  _QWORD *v107; // [rsp+30h] [rbp-30h]
  __int128 v108; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v109; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  *(_QWORD *)&v108 = 0LL;
  v7 = 0LL;
  v107 = 0LL;
  v8 = a4;
  v10 = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v14 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  if ( a5 > 5 )
  {
    switch ( a5 )
    {
      case 6:
        v96 = *Buf1 + Buf1[1];
        if ( v96 > 0x19 )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        LensContext = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !LensContext )
          return v10;
        v99 = v96;
        if ( v96 )
        {
          v100 = (_QWORD *)Win32AllocPool(8LL * v96, 1735226197LL);
          if ( !v100 )
            return (unsigned int)-1073741801;
        }
        else
        {
          v100 = (_QWORD *)v108;
        }
        *(_QWORD *)&v108 = *(_QWORD *)Buf1;
        *((_QWORD *)&v108 + 1) = v100;
        if ( v96 )
        {
          v101 = v100;
          v97 = (char *)((char *)Buf1 - (char *)v100);
          do
          {
            *v101 = *(_QWORD *)((char *)v101 + (_QWORD)v97 + 8);
            ++v101;
            --v99;
          }
          while ( v99 );
        }
        if ( (LensContext[2] & 0x20) == 0 )
        {
          v102 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL), v97);
          v10 = DwmAsyncMagnSetWindowFilterList(v102);
          if ( (v10 & 0x80000000) != 0 )
          {
LABEL_165:
            if ( !v100 )
              return v10;
            Win32FreePool(v100);
            goto LABEL_167;
          }
        }
        v103 = (void *)LensContext[29];
        if ( v103 )
        {
          Win32FreePool(v103);
          LensContext[29] = 0LL;
        }
        *((_DWORD *)LensContext + 56) = *Buf1;
        *((_DWORD *)LensContext + 57) = Buf1[1];
        v104 = *((_DWORD *)LensContext + 4);
        LensContext[29] = (__int64)v100;
        if ( v96 )
          v105 = v104 | 8;
        else
          v105 = v104 & 0xFFFFFFF7;
        *((_DWORD *)LensContext + 4) = v105;
        v10 = 0;
        break;
      case 7:
        if ( *Buf1 > 6u )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v87 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !v87 )
          return v10;
        if ( (_DWORD)v88 )
        {
          v107 = (_QWORD *)Win32AllocPool(24 * v88, 1735226197LL);
          v7 = v107;
          if ( !v107 )
            return (unsigned int)-1073741801;
        }
        v89 = 0LL;
        v90 = *Buf1;
        *(_QWORD *)((char *)&v108 + 4) = *(_QWORD *)(Buf1 + 1);
        HIDWORD(v108) = Buf1[3];
        LODWORD(v108) = v90;
        v109 = v7;
        if ( v90 )
        {
          do
          {
            v91 = 3 * v89;
            v89 = (unsigned int)(v89 + 1);
            *(_OWORD *)&v7[v91] = *(_OWORD *)&Buf1[2 * v91 + 4];
            v7[v91 + 2] = *(_QWORD *)&Buf1[2 * v91 + 8];
          }
          while ( (unsigned int)v89 < *Buf1 );
        }
        if ( (v87[2] & 0x20) != 0 )
        {
LABEL_139:
          v93 = (void *)v87[32];
          if ( v93 )
          {
            Win32FreePool(v93);
            v87[32] = 0LL;
          }
          *((_DWORD *)v87 + 60) = *Buf1;
          *((_DWORD *)v87 + 61) = Buf1[1];
          *((_DWORD *)v87 + 62) = Buf1[2];
          *((_DWORD *)v87 + 63) = Buf1[3];
          v94 = *((_DWORD *)v87 + 4);
          v87[32] = (__int64)v7;
          if ( *Buf1 )
            v95 = v94 | 0x10;
          else
            v95 = v94 & 0xFFFFFFEF;
          *((_DWORD *)v87 + 4) = v95;
          return 0;
        }
        v92 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL), v89);
        v10 = DwmAsyncMagnSetWindowSharedTextures(v92);
        if ( (v10 & 0x80000000) == 0 )
        {
          v7 = v107;
          goto LABEL_139;
        }
        break;
      case 9:
        v83 = *Buf1;
        if ( (*Buf1 & 0xFFFFFFFE) != 0 )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v84 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v85 = v84;
        if ( !v84 )
          return v10;
        v86 = v83 & 1;
        if ( ((*((_DWORD *)v84 + 4) >> 6) & 1) != v86 )
        {
          ChangeComposableCursor(v86);
          *((_DWORD *)v85 + 4) = v85[2] & 0xFFFFFFBF | (v86 << 6);
        }
        return 0;
      case 10:
        if ( !a3 )
          return v10;
        v76 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v78 = v76;
        if ( !v76 )
          return v10;
        if ( a3 == -1 )
        {
          v79 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL);
          v80 = (void *)ReferenceDwmApiPort(v79, *v79);
          v81 = DwmAsyncMagnSetDesktopSamplingMode(v80);
        }
        else
        {
          if ( (v76[2] & 0x20) != 0 )
          {
            v10 = 0;
            goto LABEL_122;
          }
          v82 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL), v77);
          v81 = DwmAsyncMagnSetSamplingMode(v82);
        }
        v10 = v81;
LABEL_122:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *((_DWORD *)v78 + 66) = *Buf1;
        return 0;
      default:
        return v10;
    }
    if ( !v107 )
      return v10;
    Win32FreePool(v107);
    v100 = 0LL;
    goto LABEL_165;
  }
  if ( a5 == 5 )
  {
    if ( !a3 )
      return v10;
    v64 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v66 = v64;
    if ( !v64 )
      return v10;
    if ( a3 == -1 )
    {
      v67 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL);
      v68 = *(__int64 **)(v67 + 232);
      if ( !memcmp(Buf1, &gMagEffectIdentity, (unsigned int)(v65 + 101)) )
      {
        if ( v68 )
        {
          if ( v68 != v66 )
            return v10;
          v70 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v67 + 8), v69);
          v10 = DwmAsyncMagnSetDesktopColorTransform(v70);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 232LL) = 0LL;
          goto LABEL_100;
        }
        goto LABEL_99;
      }
      if ( !v68 )
      {
        v72 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v67 + 8), v69);
        v10 = DwmAsyncMagnSetDesktopColorTransform(v72);
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 232LL) = v66;
        goto LABEL_100;
      }
      if ( v68 != v66 )
        return v10;
      v73 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v67 + 8), v69);
      v74 = DwmAsyncMagnSetDesktopColorTransform(v73);
    }
    else
    {
      if ( (v64[2] & 0x20) != 0 )
      {
LABEL_99:
        v10 = 0;
LABEL_100:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_OWORD *)(v66 + 15) = *(_OWORD *)Buf1;
        *(_OWORD *)(v66 + 17) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)(v66 + 19) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)(v66 + 21) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)(v66 + 23) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)(v66 + 25) = *((_OWORD *)Buf1 + 5);
        v71 = Buf1[24];
        *((_DWORD *)v66 + 4) |= 4u;
        *((_DWORD *)v66 + 54) = v71;
        return 0;
      }
      v75 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL), v65);
      v74 = DwmAsyncMagnSetWindowColorTransform(v75);
    }
    v10 = v74;
    goto LABEL_100;
  }
  if ( !a5 )
  {
    if ( !a3 || MagpFindLensContext((__int64)ThreadContext, a3, 2) )
      return v10;
    v6 = (__int64 *)Win32AllocPool(272LL, 1735226197LL);
    if ( v6 )
    {
      if ( a3 != -1 )
      {
        v57 = (void *)ReferenceDwmApiPort(*(unsigned int *)(*(_QWORD *)(a3 + 40) + 288LL), v56);
        v58 = DwmAsyncMagnCreate(v57);
        v10 = v58;
        if ( v58 != -1073741823 && v58 < 0 )
          goto LABEL_167;
        v8 = a4;
      }
      v59 = (unsigned int *)(v6 + 2);
      memset(v6 + 2, 0, 0x100uLL);
      v6[5] = *(_QWORD *)&gOneDouble;
      v6[6] = *(_QWORD *)&gOneDouble;
      if ( a3 == -1 )
      {
        v6[3] = -1LL;
      }
      else
      {
        *(_QWORD *)&v108 = v6 + 3;
        *((_QWORD *)&v108 + 1) = a3;
        HMAssignmentLock(&v108);
      }
      v60 = 0;
      if ( v8 == 1 )
        v60 = 128;
      v61 = *v59;
      *((_DWORD *)v6 + 66) = 0;
      v62 = v14 + 40;
      *v59 = v61 & 0xFFFFFF7F | v60;
      v63 = *(__int64 ***)(v62 + 8);
      if ( *v63 == (__int64 *)v62 )
      {
        *v6 = v62;
        v6[1] = (__int64)v63;
        *v63 = v6;
        *(_QWORD *)(v62 + 8) = v6;
        return 0;
      }
LABEL_88:
      __fastfail(3u);
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 != 1 )
  {
    if ( a5 != 2 )
    {
      if ( a5 != 3 )
      {
        if ( a5 == 4 )
        {
          if ( Buf1[8] == 3 )
            return (unsigned int)MagpRevokeInputTransfrom();
          else
            return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1, v12, v13);
        }
        return v10;
      }
      if ( !a3 )
        return v10;
      v16 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      v17 = v16;
      if ( !v16 )
        return v10;
      v18 = *(double *)Buf1;
      if ( a3 == -1 )
      {
        if ( v18 != *((double *)Buf1 + 1) )
          return v10;
        v19 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL);
        v20 = *(__int64 **)(v19 + 224);
        if ( memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) )
        {
          if ( v20 )
          {
            if ( v17 != v20 )
              return v10;
            v26 = (int)*((double *)Buf1 + 3);
            v27 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v19 + 8), v21);
            v10 = DwmAsyncMagnSetDesktopTransform(v27, v26);
          }
          else
          {
            v24 = (int)*((double *)Buf1 + 3);
            v25 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v19 + 8), v21);
            v10 = DwmAsyncMagnSetDesktopTransform(v25, v24);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 224LL) = v17;
          }
          goto LABEL_33;
        }
        if ( v20 )
        {
          if ( v17 != v20 )
            return v10;
          v22 = (int)*((double *)Buf1 + 3);
          v23 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v19 + 8), v21);
          v10 = DwmAsyncMagnSetDesktopTransform(v23, v22);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 224LL) = 0LL;
          goto LABEL_33;
        }
      }
      else
      {
        *((double *)v16 + 5) = v18;
        v16[6] = *((_QWORD *)Buf1 + 1);
        v28 = *((double *)Buf1 + 2);
        v29 = v16[3];
        *((double *)v17 + 7) = v28;
        v30 = *((double *)Buf1 + 3);
        *((double *)v17 + 8) = v30;
        if ( (*(_DWORD *)(*(_QWORD *)(v29 + 40) + 288LL) & 0xF) == 0 )
        {
          v31 = *(unsigned __int16 *)(gpsi + 6998LL);
          if ( (unsigned __int16)v31 > 0x60u )
          {
            *((double *)v17 + 7) = (double)v31 * v28 / 96.0;
            *((double *)v17 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v30 / 96.0;
            *((double *)v17 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
            *((double *)v17 + 6) = *((double *)Buf1 + 1) * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
          }
        }
      }
      v10 = 0;
LABEL_33:
      if ( (v10 & 0x80000000) != 0 )
        return v10;
      *(_OWORD *)(v17 + 11) = *(_OWORD *)Buf1;
      v32 = *((_OWORD *)Buf1 + 1);
      *((_DWORD *)v17 + 4) |= 2u;
      *(_OWORD *)(v17 + 13) = v32;
      return 0;
    }
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v10;
    v33 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v34 = v33;
    if ( !v33 )
      return v10;
    if ( (*(_DWORD *)(*(_QWORD *)(v33[3] + 40) + 288LL) & 0xF) != 0
      || (v35 = *(unsigned __int16 *)(gpsi + 6998LL), (unsigned __int16)v35 <= 0x60u) )
    {
      v40 = *Buf1;
      v37 = (int *)(v33 + 2);
      v39 = v33 + 2;
      if ( (v33[2] & 2) != 0 )
      {
        *((_DWORD *)v33 + 8) = -(int)((double)v40 * *((double *)v33 + 11));
        v38 = (int)((double)(int)Buf1[1] * *((double *)v33 + 12));
      }
      else
      {
        *((_DWORD *)v33 + 8) = -v40;
        v38 = Buf1[1];
      }
    }
    else
    {
      v36 = *Buf1;
      v37 = (int *)(v33 + 2);
      if ( (v33[2] & 2) != 0 )
      {
        *((_DWORD *)v33 + 8) = -(int)((double)v36 * *((double *)v33 + 11));
        v38 = (int)((double)(int)Buf1[1] * *((double *)v33 + 12));
      }
      else
      {
        *((_DWORD *)v33 + 8) = -EngMulDiv(v36, v35, 96);
        v38 = EngMulDiv(Buf1[1], *(unsigned __int16 *)(gpsi + 6998LL), 96);
      }
      v39 = v34 + 2;
    }
    *((_DWORD *)v34 + 9) = -v38;
    v41 = *(_OWORD *)Buf1;
    *v37 = *v39 | 1;
    *(_OWORD *)(v34 + 9) = v41;
    return 0;
  }
  MagpRevokeInputTransfrom();
  if ( !a3 )
    return v10;
  v42 = MagpFindLensContext(v14, a3, v8);
  v6 = v42;
  if ( !v42 )
    return v10;
  v44 = *v42;
  v45 = (__int64 *)v42[1];
  if ( *(__int64 **)(v44 + 8) != v6 || (__int64 *)*v45 != v6 )
    goto LABEL_88;
  *v45 = v44;
  *(_QWORD *)(v44 + 8) = v45;
  if ( a3 != -1 )
  {
    v46 = *((_DWORD *)v6 + 4);
    if ( (v46 & 0x40) != 0 )
    {
      ChangeComposableCursor(0LL);
      *((_DWORD *)v6 + 4) &= ~0x40u;
      v46 = *((_DWORD *)v6 + 4);
    }
    if ( (v46 & 0x20) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v47 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL), v43);
      v10 = DwmAsyncMagnDestroy(v47);
    }
    HMAssignmentUnlock(v6 + 3);
    v48 = (void *)v6[29];
    if ( v48 )
      Win32FreePool(v48);
    v49 = (void *)v6[32];
    if ( v49 )
      Win32FreePool(v49);
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_167;
    goto LABEL_72;
  }
  v50 = *(_QWORD *)(v14 + 16);
  v51 = *(_QWORD *)(v50 + 456);
  if ( *(__int64 **)(v51 + 232) == v6 )
  {
    v52 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v51 + 8), v43);
    v10 = DwmAsyncMagnSetDesktopColorTransform(v52);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 232LL) = 0LL;
    v50 = *(_QWORD *)(v14 + 16);
  }
  else
  {
    v10 = 0;
  }
  v53 = *(_QWORD *)(v50 + 456);
  if ( *(__int64 **)(v53 + 224) == v6 )
  {
    v54 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v53 + 8), v43);
    v55 = DwmAsyncMagnSetDesktopTransform(v54, 0);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 224LL) = 0LL;
  }
  else
  {
    v55 = 0;
  }
  if ( (v10 & 0x80000000) == 0 )
  {
    if ( v55 >= 0 )
    {
LABEL_72:
      v10 = 0;
      goto LABEL_167;
    }
    v10 = v55;
  }
LABEL_167:
  if ( v6 )
    Win32FreePool(v6);
  return v10;
}
