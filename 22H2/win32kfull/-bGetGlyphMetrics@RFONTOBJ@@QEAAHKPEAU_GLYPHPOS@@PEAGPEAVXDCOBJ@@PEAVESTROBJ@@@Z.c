/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0098A30
 * Callers:
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0064224 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00951E0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0095D10 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C0097F00 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0098F30 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     GreGetCharWidthW @ 0x1C00A2794 (GreGetCharWidthW.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C00E3714 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00FD238 (GreGetCharABCWidthsW.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0119460 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C001DFB8 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0098F04 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00993F0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0099730 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00A4D8C (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00E7118 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01527DC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C016D924 (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF0F0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  unsigned __int16 *v6; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // rcx
  struct GPRUN *v14; // r12
  _DWORD *v15; // r9
  unsigned int v16; // r14d
  __int64 v17; // rbx
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // rax
  __int64 (__fastcall *v32)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rbx
  int v33; // eax
  unsigned int v34; // r10d
  unsigned int v35; // r8d
  struct _FONTFILEVIEW **v36; // r11
  struct _FONTFILEVIEW **v37; // rdx
  int v38; // eax
  int v39; // ebx
  __int64 v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v44; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v46[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v47; // [rsp+60h] [rbp-A0h]
  _QWORD *v48; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v49; // [rsp+70h] [rbp-90h]
  _DWORD *i; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v53; // [rsp+90h] [rbp-70h]
  struct ESTROBJ *v54; // [rsp+98h] [rbp-68h]
  struct XDCOBJ *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v58; // [rsp+B8h] [rbp-48h]
  __int128 v59; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v60; // [rsp+D0h] [rbp-30h]
  __int128 v61; // [rsp+E0h] [rbp-20h]
  __int128 v62; // [rsp+F0h] [rbp-10h]
  unsigned int v63[2]; // [rsp+100h] [rbp+0h] BYREF
  int v64; // [rsp+108h] [rbp+8h]
  void *v65[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v66; // [rsp+120h] [rbp+20h]

  v6 = a4;
  v55 = a5;
  v54 = a6;
  v9 = *(_QWORD *)this;
  v10 = (unsigned int)a2;
  v49 = a4;
  v47 = (int)a2;
  if ( *(_QWORD *)(v9 + 480) || (unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
  {
    v11 = *(_QWORD *)this;
    v53 = v6;
    v12 = *(_DWORD **)(v11 + 480);
    if ( !*v12 )
    {
      for ( ; (_DWORD)v10; LODWORD(v10) = v10 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)this + 460LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++a3;
      }
      return 1LL;
    }
    v58 = &v6[v10];
    v14 = (struct GPRUN *)(v12 + 4);
    if ( v6 >= v58 )
      return 1LL;
    v15 = v12 + 5;
    for ( i = v12 + 5; ; v15 = i )
    {
      v16 = *v6;
      v43 = v16;
      v17 = v16 - *(_DWORD *)v14;
      if ( (unsigned int)v17 < *v15 )
      {
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v17);
      }
      else
      {
        Run = RFONTOBJ::gprunFindRun(this, v16);
        v14 = Run;
        v17 = v16 - *(_DWORD *)Run;
        i = (_DWORD *)((char *)Run + 4);
        if ( (unsigned int)v17 >= *((_DWORD *)Run + 1) )
        {
          v45 = 0;
          LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v55, v54, v6, v53, v10, (int *)&v45, 0);
          if ( !LinkMetricsPlus )
            return 0LL;
        }
        else
        {
          _mm_lfence();
          LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v17);
        }
      }
      if ( LinkMetricsPlus )
        goto LABEL_60;
      v20 = 8 * v17 + *((_QWORD *)v14 + 1);
      v57 = 8 * v17;
      v48 = (_QWORD *)v20;
      if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
        return 0LL;
      v21 = *(_QWORD *)this;
      v22 = *(_QWORD *)(*(_QWORD *)this + 480LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
      {
        v44 = v16;
        v46[0] = 0;
        RFONTOBJ::vXlatGlyphArray(this, &v44, 1u, v46, 0, 0);
        v23 = v46[0];
        v21 = *(_QWORD *)this;
        v43 = v46[0];
      }
      else
      {
        v23 = v16;
      }
      v24 = v21;
      if ( v23 == *(_DWORD *)(v21 + 460) )
      {
        v25 = *(_QWORD *)(v22 + 8);
        if ( v25 )
        {
          *v48 = v25;
LABEL_57:
          v30 = 1;
          goto LABEL_58;
        }
      }
      v26 = 24LL;
      if ( !*(_DWORD *)(v21 + 640) )
        v26 = 64LL;
      if ( (unsigned __int64)(*(_QWORD *)(v21 + 512) + v26) > *(_QWORD *)(v21 + 520) )
      {
        v27 = (_QWORD *)PALLOCMEM2(0x720uLL);
        if ( !v27 )
        {
          v30 = 0;
          goto LABEL_58;
        }
        *v27 = *(_QWORD *)(v21 + 536);
        *(_QWORD *)(v21 + 536) = v27;
        *(_QWORD *)(v21 + 512) = v27 + 2;
        *(_QWORD *)(v21 + 520) = v27 + 228;
        v24 = *(_QWORD *)this;
      }
      v28 = (*(_DWORD *)(v24 + 88) == 2) + 1;
      v59 = 0LL;
      v45 = v28;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v29 = *(_QWORD *)(v24 + 128);
      if ( *(_DWORD *)(v24 + 640) )
        *(_QWORD *)v46 = &v59;
      else
        *(_QWORD *)v46 = *(_QWORD *)(v21 + 512);
      v56 = *(_QWORD *)(v24 + 112);
      v31 = *(_QWORD *)(v29 + 88);
      v51 = 0LL;
      v52 = 0;
      v32 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v31 + 2912);
      if ( (*(_DWORD *)(v31 + 40) & 0x2000) != 0 && *(_DWORD *)(v29 + 36) <= 3u )
      {
        v33 = *(_DWORD *)(v29 + 52);
        if ( (v33 & 0x1000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v33 = *(_DWORD *)(v29 + 52);
        }
        if ( (v33 & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v34 = *(_DWORD *)(v29 + 36);
        v35 = 0;
        if ( v34 )
        {
          v36 = *(struct _FONTFILEVIEW ***)(v29 + 200);
          v37 = v36;
          while ( 1 )
          {
            v38 = *((_DWORD *)*v37 + 10);
            if ( (v38 & 0x10) == 0 && (v38 & 8) != 0 && !*((_QWORD *)*v37 + 6) )
              break;
            ++v35;
            ++v37;
            if ( v35 >= v34 )
              goto LABEL_48;
          }
          v66 = 0LL;
          *(_QWORD *)v63 = 0LL;
          v64 = 0;
          *(_OWORD *)v65 = 0LL;
          if ( MapFontFiles(v34, v36, v65, v63) )
          {
            v51 = *(_QWORD *)(v29 + 200);
            v52 = *(_DWORD *)(v29 + 36);
          }
        }
      }
LABEL_48:
      v39 = v32(v56, v24, v45, v43, *(_QWORD *)v46, 0LL, 0);
      if ( !ValidateGlyphDataAndBitmap(v39, v45, 0LL) )
        v39 = -1;
      ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)&v51);
      if ( v39 != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
        {
          v40 = *(_QWORD *)(v21 + 512);
          *(_OWORD *)v40 = v59;
          *(_QWORD *)(v40 + 16) = v60;
        }
        v41 = v48;
        **(_QWORD **)(v21 + 512) = 0LL;
        *v41 = *(_QWORD *)(v21 + 512);
        v42 = 24LL;
        if ( !*(_DWORD *)(*(_QWORD *)this + 640LL) )
          v42 = 64LL;
        *(_QWORD *)(v21 + 512) += v42;
        goto LABEL_57;
      }
      v30 = 0;
LABEL_58:
      if ( !v30 )
        return 0LL;
      v6 = v49;
      LODWORD(v10) = v47;
      LinkMetricsPlus = *(struct _GLYPHDATA **)(v57 + *((_QWORD *)v14 + 1));
LABEL_60:
      ++v6;
      a3->hg = LinkMetricsPlus->hg;
      a3->pgdf = &LinkMetricsPlus->gdf;
      ++a3;
      v49 = v6;
      if ( v6 >= v58 )
        return 1LL;
    }
  }
  return 0LL;
}
