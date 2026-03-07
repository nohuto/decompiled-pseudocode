__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  __int64 v9; // r12
  __int64 v10; // rax
  _DWORD *v11; // rcx
  struct GPRUN *v13; // r13
  _DWORD *v14; // r10
  unsigned int v15; // ebx
  __int64 v16; // r8
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r9
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r9
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rbx
  struct _FONTFILEVIEW **v28; // rcx
  struct _FONTFILEVIEW *v29; // rax
  __int64 (__fastcall *v30)(__int64, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, _QWORD, _DWORD); // rbx
  unsigned int v31; // edx
  struct _FONTFILEVIEW **v32; // r10
  int v33; // r8d
  int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int16 v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-B4h]
  struct _GLYPHDATA *v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  struct _FONTFILEVIEW **v43; // [rsp+68h] [rbp-98h]
  struct _FONTOBJ *v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  _DWORD *i; // [rsp+80h] [rbp-80h]
  struct _FONTFILEVIEW *v47; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v49; // [rsp+98h] [rbp-68h]
  struct ESTROBJ *v50; // [rsp+A0h] [rbp-60h]
  struct XDCOBJ *v51; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-30h]
  unsigned int v55[2]; // [rsp+100h] [rbp+0h] BYREF
  int v56; // [rsp+108h] [rbp+8h]
  void *v57[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v58; // [rsp+120h] [rbp+20h]

  v51 = a5;
  v50 = a6;
  v9 = (unsigned int)a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL) || (unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
  {
    v10 = *(_QWORD *)this;
    v49 = a4;
    v11 = *(_DWORD **)(v10 + 480);
    if ( !*v11 )
    {
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)this + 460LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++a3;
      }
      return 1LL;
    }
    v52 = &a4[v9];
    v13 = (struct GPRUN *)(v11 + 4);
    if ( a4 >= v52 )
      return 1LL;
    v14 = v11 + 5;
    for ( i = v11 + 5; ; v14 = i )
    {
      v15 = *a4;
      v39 = v15;
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
          LODWORD(v40) = 0;
          LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v51, v50, a4, v49, v9, (int *)&v40, 0);
          if ( !LinkMetricsPlus )
            return 0LL;
          goto LABEL_57;
        }
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v16);
      }
      if ( LinkMetricsPlus )
        goto LABEL_57;
      v41 = (unsigned int)v16;
      v45 = *((_QWORD *)v13 + 1);
      if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
        return 0LL;
      v19 = *(_QWORD *)(*(_QWORD *)this + 480LL);
      v20 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      v42 = v19;
      if ( (v20 & 2) != 0 )
      {
        v38 = 0;
        v37[0] = v15;
        RFONTOBJ::vXlatGlyphArray(this, v37, 1u, &v38, 0, 0);
        v21 = v38;
        v19 = v42;
        v39 = v38;
      }
      else
      {
        v21 = v15;
      }
      v22 = *(_QWORD *)this;
      if ( v21 == *(_DWORD *)(*(_QWORD *)this + 460LL) )
      {
        v23 = *(_QWORD *)(v19 + 8);
        if ( v23 )
        {
          v24 = v41;
          *(_QWORD *)(v45 + 8 * v41) = v23;
LABEL_54:
          v26 = 1;
          goto LABEL_55;
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
      v44 = (struct _FONTOBJ *)v27;
      *(_DWORD *)v37 = (*(_DWORD *)(v27 + 88) == 2) + 1;
      memset_0(&v53, 0, 0x40uLL);
      v28 = *(struct _FONTFILEVIEW ***)(v27 + 128);
      v43 = v28;
      if ( *(_DWORD *)(v27 + 640) )
        v40 = (struct _GLYPHDATA *)&v53;
      else
        v40 = *(struct _GLYPHDATA **)(v22 + 512);
      v42 = *(_QWORD *)(v27 + 112);
      v29 = v28[11];
      v47 = 0LL;
      v48 = 0;
      v30 = (__int64 (__fastcall *)(__int64, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, _QWORD, _DWORD))*((_QWORD *)v29 + 361);
      if ( (*((_DWORD *)v29 + 10) & 0x2000) != 0 )
      {
        v38 = *((_DWORD *)v28 + 9);
        if ( v38 <= 3 )
        {
          if ( (*((_DWORD *)v28 + 13) & 0x1000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
            v28 = v43;
          }
          if ( (*((_DWORD *)v28 + 13) & 0x2000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
            v28 = v43;
          }
          v31 = 0;
          if ( v38 )
          {
            v32 = (struct _FONTFILEVIEW **)v28[25];
            v28 = v32;
            while ( 1 )
            {
              v33 = *((_DWORD *)*v28 + 10);
              if ( (v33 & 0x10) == 0 && (v33 & 8) != 0 && !*((_QWORD *)*v28 + 6) )
                break;
              ++v31;
              ++v28;
              if ( v31 >= v38 )
                goto LABEL_46;
            }
            v58 = 0LL;
            *(_QWORD *)v55 = 0LL;
            v56 = 0;
            *(_OWORD *)v57 = 0LL;
            if ( MapFontFiles(v38, v32, v57, v55) )
            {
              v47 = v43[25];
              v48 = v38;
            }
          }
        }
      }
LABEL_46:
      if ( (unsigned int)Feature_2942477631__private_IsEnabledDeviceUsage(v28) )
      {
        v34 = v30(v42, v44, *(unsigned int *)v37, v39, v40, 0LL, 0);
        if ( !ValidateGlyphDataAndBitmap(v34, v44, *(unsigned int *)v37, v40, 0LL) )
          v34 = -1;
      }
      else
      {
        v34 = v30(v42, v44, *(unsigned int *)v37, v39, v40, 0LL, 0);
      }
      ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)&v47);
      if ( v34 != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
        {
          v35 = *(_QWORD *)(v22 + 512);
          *(_OWORD *)v35 = v53;
          *(_QWORD *)(v35 + 16) = v54;
        }
        v36 = v45;
        v24 = v41;
        **(_QWORD **)(v22 + 512) = 0LL;
        *(_QWORD *)(v36 + 8 * v24) = *(_QWORD *)(v22 + 512);
        *(_QWORD *)(v22 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
        goto LABEL_54;
      }
LABEL_26:
      v24 = v41;
      v26 = 0;
LABEL_55:
      if ( !v26 )
        return 0LL;
      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v13 + 1) + 8 * v24);
LABEL_57:
      ++a4;
      a3->hg = LinkMetricsPlus->hg;
      a3->pgdf = &LinkMetricsPlus->gdf;
      ++a3;
      if ( a4 >= v52 )
        return 1LL;
    }
  }
  return 0LL;
}
