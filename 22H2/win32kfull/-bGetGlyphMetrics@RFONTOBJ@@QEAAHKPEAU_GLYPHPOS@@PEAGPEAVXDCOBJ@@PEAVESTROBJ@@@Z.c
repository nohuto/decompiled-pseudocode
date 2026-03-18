/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0080034
 * Callers:
 *     ?GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C007D848 (-GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C007DDB4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0083684 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0085224 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C010EC30 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0111C28 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C028D974 (-GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0021A34 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C007945C (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00804F4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0080918 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C010EFC0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C0140C0C (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C02B4CC4 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B5CA8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0307678 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  unsigned __int16 *v6; // r15
  struct _GLYPHPOS *v7; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  _DWORD *v11; // rcx
  struct GPRUN *v13; // r13
  _DWORD *v14; // r10
  unsigned int v15; // ebx
  __int64 v16; // r8
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r9
  __int128 *v19; // rcx
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r9
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rbx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 (__fastcall *v32)(__int64, __int64, _QWORD, _QWORD, __int128 *, _QWORD, _DWORD); // rbx
  unsigned int v33; // edx
  struct _FONTFILEVIEW **v34; // r10
  struct _FONTFILEVIEW **v35; // rcx
  int v36; // r8d
  int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-B0h]
  int v43[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 *v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  _DWORD *i; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v49; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v50; // [rsp+90h] [rbp-70h]
  struct ESTROBJ *v51; // [rsp+98h] [rbp-68h]
  struct XDCOBJ *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v55; // [rsp+B8h] [rbp-48h]
  __int128 v56; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h]
  unsigned int v58[2]; // [rsp+100h] [rbp+0h] BYREF
  int v59; // [rsp+108h] [rbp+8h]
  void *v60[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v61; // [rsp+120h] [rbp+20h]

  v6 = a4;
  v52 = a5;
  v7 = a3;
  v51 = a6;
  v9 = (unsigned int)a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL)
    || (unsigned int)RFONTOBJ::bAllocateCache(this, a2, (__int64)a3, (__int64)a4) )
  {
    v10 = *(_QWORD *)this;
    v50 = v6;
    v11 = *(_DWORD **)(v10 + 480);
    if ( !*v11 )
    {
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        v7->hg = *(_DWORD *)(*(_QWORD *)this + 460LL);
        v7->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++v7;
      }
      return 1LL;
    }
    v55 = &v6[v9];
    v13 = (struct GPRUN *)(v11 + 4);
    if ( v6 >= v55 )
      return 1LL;
    v14 = v11 + 5;
    for ( i = v11 + 5; ; v14 = i )
    {
      v15 = *v6;
      v42 = v15;
      v16 = v15 - *(_DWORD *)v13;
      if ( (unsigned int)v16 < *v14 )
      {
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v13 + 1) + 8 * v16);
      }
      else
      {
        Run = RFONTOBJ::gprunFindRun(this, v15);
        v13 = Run;
        v16 = v15 - *(_DWORD *)Run;
        i = (_DWORD *)((char *)Run + 4);
        if ( (unsigned int)v16 >= *((_DWORD *)Run + 1) )
        {
          v43[0] = 0;
          LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v52, v51, v6, v50, v9, v43, 0);
          if ( !LinkMetricsPlus )
            return 0LL;
          goto LABEL_55;
        }
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v16);
      }
      if ( LinkMetricsPlus )
        goto LABEL_55;
      *(_QWORD *)v43 = (unsigned int)v16;
      v46 = *((_QWORD *)v13 + 1);
      if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2, v16, 0LL) )
        return 0LL;
      v19 = *(__int128 **)(*(_QWORD *)this + 480LL);
      v20 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      v44 = v19;
      if ( (v20 & 2) != 0 )
      {
        v40 = 0;
        LOWORD(v41) = v15;
        RFONTOBJ::vXlatGlyphArray(this, (const unsigned __int16 *)&v41, 1u, &v40, 0, 0);
        v21 = v40;
        v19 = v44;
        v42 = v40;
      }
      else
      {
        v21 = v15;
      }
      v22 = *(_QWORD *)this;
      if ( v21 == *(_DWORD *)(*(_QWORD *)this + 460LL) )
      {
        v23 = *((_QWORD *)v19 + 1);
        if ( v23 )
        {
          v24 = *(_QWORD *)v43;
          *(_QWORD *)(v46 + 8LL * *(_QWORD *)v43) = v23;
LABEL_52:
          v26 = 1;
          goto LABEL_53;
        }
      }
      if ( *(_QWORD *)(v22 + 512) + (-(__int64)(*(_DWORD *)(v22 + 640) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64 > *(_QWORD *)(v22 + 520) )
      {
        v25 = (_QWORD *)Win32AllocPool(1824LL, 1667326791LL, v16, LinkMetricsPlus);
        if ( !v25 )
          goto LABEL_26;
        *v25 = *(_QWORD *)(v22 + 536);
        *(_QWORD *)(v22 + 520) = v25 + 228;
        *(_QWORD *)(v22 + 512) = v25 + 2;
        *(_QWORD *)(v22 + 536) = v25;
      }
      v27 = *(_QWORD *)this;
      v53 = v27;
      v41 = (*(_DWORD *)(v27 + 88) == 2) + 1;
      memset_0(&v56, 0, 0x40uLL);
      v28 = *(_DWORD *)(v27 + 640) == 0;
      v29 = *(_QWORD *)(v27 + 128);
      v45 = v29;
      if ( v28 )
        v44 = *(__int128 **)(v22 + 512);
      else
        v44 = &v56;
      v30 = *(_QWORD *)(v27 + 112);
      v48 = 0LL;
      v49 = 0;
      v54 = v30;
      v31 = *(_QWORD *)(v29 + 88);
      v32 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int128 *, _QWORD, _DWORD))(v31 + 2888);
      if ( (*(_DWORD *)(v31 + 40) & 0x2000) != 0 )
      {
        v40 = *(_DWORD *)(v29 + 36);
        if ( v40 <= 3 )
        {
          if ( (*(_DWORD *)(v29 + 52) & 0x1000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
            v29 = v45;
          }
          if ( (*(_DWORD *)(v29 + 52) & 0x2000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
            v29 = v45;
          }
          v33 = 0;
          if ( v40 )
          {
            v34 = *(struct _FONTFILEVIEW ***)(v29 + 200);
            v35 = v34;
            while ( 1 )
            {
              v36 = *((_DWORD *)*v35 + 10);
              if ( (v36 & 0x10) == 0 && (v36 & 8) != 0 && !*((_QWORD *)*v35 + 6) )
                break;
              ++v33;
              ++v35;
              if ( v33 >= v40 )
                goto LABEL_46;
            }
            v61 = 0LL;
            *(_QWORD *)v58 = 0LL;
            v59 = 0;
            *(_OWORD *)v60 = 0LL;
            if ( MapFontFiles(v40, v34, v60, v58) )
            {
              v48 = *(_QWORD *)(v45 + 200);
              v49 = v40;
            }
          }
        }
      }
LABEL_46:
      v37 = v32(v54, v53, v41, v42, v44, 0LL, 0);
      if ( !ValidateGlyphDataAndBitmap(v37, v41, 0LL) )
        v37 = -1;
      ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)&v48);
      if ( v37 != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
        {
          v38 = *(_QWORD *)(v22 + 512);
          *(_OWORD *)v38 = v56;
          *(_QWORD *)(v38 + 16) = v57;
        }
        v24 = *(_QWORD *)v43;
        v39 = v46;
        **(_QWORD **)(v22 + 512) = 0LL;
        *(_QWORD *)(v39 + 8 * v24) = *(_QWORD *)(v22 + 512);
        *(_QWORD *)(v22 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
        goto LABEL_52;
      }
LABEL_26:
      v24 = *(_QWORD *)v43;
      v26 = 0;
LABEL_53:
      if ( !v26 )
        return 0LL;
      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v13 + 1) + 8 * v24);
LABEL_55:
      ++v6;
      v7->hg = LinkMetricsPlus->hg;
      v7->pgdf = &LinkMetricsPlus->gdf;
      ++v7;
      if ( v6 >= v55 )
        return 1LL;
    }
  }
  return 0LL;
}
