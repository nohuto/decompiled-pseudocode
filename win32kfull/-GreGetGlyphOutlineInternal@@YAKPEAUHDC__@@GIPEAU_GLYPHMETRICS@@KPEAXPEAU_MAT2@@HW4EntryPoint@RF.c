__int64 __fastcall GreGetGlyphOutlineInternal(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct tagTTPOLYGONHEADER *a6,
        struct _MAT2 *a7,
        int a8)
{
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // edi
  __int64 v15; // rbx
  unsigned int v16; // eax
  Gre::Base **v17; // r13
  Gre::Base *v18; // rax
  Gre::Base *v19; // rsi
  SIZE sizLogResPpi; // rax
  struct DHPDEV__ *v21; // rdx
  unsigned int v22; // eax
  LONG top; // ecx
  int v24; // eax
  int v25; // eax
  Gre::Base *v27; // rsi
  __int64 v28; // rcx
  Gre::Base *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned int v32; // r12d
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rbx
  struct RFONTOBJ *v36; // r8
  __int64 v37; // rax
  struct _GLYPHDATA *EudcMetrics; // rax
  __int64 v39; // rbx
  unsigned int v40; // r13d
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rbx
  RFONTOBJ *v44; // rcx
  __int64 v45; // r9
  struct RFONTOBJ *v46; // r8
  struct _GLYPHDATA *v47; // rax
  __int64 v48; // rbx
  struct RFONTOBJ *v49; // r8
  unsigned int v50; // r12d
  struct _GLYPHDATA *v51; // rax
  unsigned int v52; // edi
  unsigned int v53; // edi
  unsigned int v54; // edi
  int v55; // eax
  int v56; // ecx
  ULONG v57; // ecx
  unsigned __int16 v58; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTOBJ *v60; // [rsp+50h] [rbp-B0h] BYREF
  Gre::Base *v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-A0h]
  unsigned int v63; // [rsp+64h] [rbp-9Ch]
  unsigned int v64[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-88h]
  int v67; // [rsp+7Ch] [rbp-84h]
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  Gre::Base **v70; // [rsp+90h] [rbp-70h]
  unsigned int v71; // [rsp+98h] [rbp-68h]
  int v72; // [rsp+9Ch] [rbp-64h]
  __int64 v73; // [rsp+A0h] [rbp-60h]
  _QWORD v74[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _MAT2 *v75[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct tagTTPOLYGONHEADER *v76; // [rsp+C8h] [rbp-38h]
  _QWORD v77[2]; // [rsp+D0h] [rbp-30h] BYREF
  _GLYPHDATA v78; // [rsp+E0h] [rbp-20h] BYREF

  v76 = a6;
  v10 = a2;
  v11 = 0;
  v73 = a4;
  v75[0] = a7;
  memset_0(&v78, 0, sizeof(v78));
  v63 = 0;
  v77[0] = 0LL;
  v12 = a3 & 0x80;
  v72 = a3 & 0x100;
  v13 = -1;
  v67 = -1;
  v14 = a3 & 0xFFFFFE7F;
  v71 = v12 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v74, a1);
  v15 = v73;
  if ( !v73 || !v75[0] )
  {
    v57 = 87;
    goto LABEL_90;
  }
  if ( !v74[0] )
  {
    v57 = 6;
LABEL_90:
    EngSetLastError(v57);
    goto LABEL_24;
  }
  v16 = *(unsigned __int16 *)(v74[0] + 12LL);
  v61 = 0LL;
  v64[1] = v16;
  v64[0] = 6;
  if ( (unsigned int)RFONTOBJ::bInit(&v61, (struct XDCOBJ *)v74, 0, 2u, (const struct RFONTOBJ::Tag *)v64) )
    GreAcquireSemaphore(*((_QWORD *)v61 + 63));
  v69 = 0LL;
  v17 = &v61;
  v68 = 0LL;
  v65 = 0LL;
  v18 = v61;
  v70 = &v61;
  if ( !v61 )
    goto LABEL_10;
  if ( v12 )
  {
    v11 = v10;
    v66 = v10;
  }
  else
  {
    v59 = 0;
    v58 = v10;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v61, &v58, 1, &v59, 0, 0);
    v11 = v59;
    v18 = v61;
    v66 = v59;
  }
  if ( v11 != *((_DWORD *)v18 + 115) )
    goto LABEL_10;
  if ( v12 )
    goto LABEL_10;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v61, v10) )
    goto LABEL_10;
  v27 = v61;
  v28 = *((_QWORD *)v61 + 106);
  if ( !v28 )
    goto LABEL_10;
  GreAcquireSemaphore(v28);
  v11 = -1;
  Gre::Base::Globals(v29);
  v31 = *(_QWORD *)(SGDGetSessionState(v30) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v31 + 13272));
  ++*(_DWORD *)(v31 + 13300);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v31 + 13272));
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v61, (struct XDCOBJ *)v74);
  RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v61, 0);
  *((_DWORD *)v27 + 178) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
  GreReleaseSemaphoreInternal(*((_QWORD *)v27 + 106));
  v32 = *((_DWORD *)v27 + 210);
  v62 = v32;
  if ( v32 )
  {
    v59 = 0;
    v33 = v32 - 1;
    LODWORD(v60) = v33;
    v34 = *((_QWORD *)v27 + 93);
    v58 = v10;
    v65 = *(_QWORD *)(v34 + 8 * v33);
    v35 = v65;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v58, 1, &v59, 0, 0);
    if ( v59 == *(_DWORD *)(v35 + 460) )
    {
      v32 = v62;
    }
    else
    {
      v37 = *(_QWORD *)(*((_QWORD *)v27 + 93) + 8 * v33);
      *(_QWORD *)v64 = v37;
      if ( v37 && (*(_DWORD *)(*(_QWORD *)(v37 + 128) + 52LL) & 0xA) == 8 )
      {
        v32 = (unsigned int)v60;
        v62 = (unsigned int)v60;
        EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v64, v10, v36);
        if ( EudcMetrics && EudcMetrics->fxD )
        {
          v11 = v59;
          v17 = (Gre::Base **)&v65;
          v70 = (Gre::Base **)&v65;
        }
      }
      else
      {
        v32 = v62;
      }
      *(_QWORD *)v64 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v64);
      if ( v11 != -1 )
        goto LABEL_65;
    }
  }
  v39 = *((_QWORD *)v27 + 91);
  if ( v39 )
  {
    v59 = 0;
    v69 = v39;
    v58 = v10;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v69, &v58, 1, &v59, 0, 0);
    if ( v59 != *(_DWORD *)(v39 + 460) )
    {
      v17 = (Gre::Base **)&v69;
      v11 = v59;
      v70 = (Gre::Base **)&v69;
      if ( v59 != -1 )
        goto LABEL_65;
    }
  }
  v40 = 0;
  if ( !v32 )
  {
LABEL_56:
    v17 = v70;
    goto LABEL_57;
  }
  v58 = v10;
  v41 = 0LL;
  while ( 1 )
  {
    v42 = *((_QWORD *)v27 + 93);
    v59 = 0;
    v65 = *(_QWORD *)(v41 + v42);
    v43 = v65;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v58, 1, &v59, 0, 0);
    if ( v59 != *(_DWORD *)(v43 + 460) )
      break;
LABEL_55:
    ++v40;
    v41 += 8LL;
    if ( v40 >= v62 )
      goto LABEL_56;
  }
  v45 = *(_QWORD *)(v41 + *((_QWORD *)v27 + 93));
  v60 = (struct _FONTOBJ *)v45;
  if ( !v45
    || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                       v44,
                       v10,
                       *((struct PFF **)v27 + 16),
                       *(struct PFF **)(v45 + 128))
    || (v47 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v60, v10, v46)) == 0LL
    || !v47->fxD )
  {
    v60 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
    goto LABEL_55;
  }
  v11 = v59;
  v17 = (Gre::Base **)&v65;
  v60 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
  if ( v11 != -1 )
    goto LABEL_65;
LABEL_57:
  v48 = *((_QWORD *)v27 + 92);
  if ( !v48 )
    goto LABEL_64;
  v59 = 0;
  v68 = v48;
  v58 = v10;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v68, &v58, 1, &v59, 0, 0);
  v50 = v59;
  if ( v59 == *(_DWORD *)(v48 + 460) )
    goto LABEL_64;
  *(_QWORD *)v64 = *((_QWORD *)v27 + 92);
  if ( *(_QWORD *)v64 )
  {
    v51 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v64, v10, v49);
    if ( v51 )
    {
      if ( v51->fxD )
      {
        v11 = v50;
        v17 = (Gre::Base **)&v68;
      }
    }
  }
  *(_QWORD *)v64 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v64);
  if ( v11 == -1 )
  {
LABEL_64:
    RFONTOBJ::dtorHelper((RFONTOBJ *)&v61);
    *((_DWORD *)v27 + 178) = 0;
    v11 = v66;
  }
LABEL_65:
  v13 = v67;
  v15 = v73;
LABEL_10:
  if ( *v17 )
  {
    v19 = *v17;
  }
  else
  {
    EngSetLastError(0x3EBu);
    v19 = (Gre::Base *)v77[0];
  }
  v65 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v65);
  v68 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v68);
  v69 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v69);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v61);
  if ( !v19 )
    goto LABEL_24;
  v60 = (struct _FONTOBJ *)v19;
  GreAcquireSemaphore(*((_QWORD *)v19 + 63));
  v77[0] = *((_QWORD *)v19 + 16);
  sizLogResPpi = v60[1].sizLogResPpi;
  if ( !*(_QWORD *)&sizLogResPpi || !*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3056LL) )
  {
    EngSetLastError(0x3EBu);
    goto LABEL_21;
  }
  RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)v75, (struct DCOBJ *)v74, (struct RFONTOBJ *)&v60, v75[0], a8, v71);
  if ( !LODWORD(v75[0]) )
  {
    EngSetLastError(0x3EBu);
    goto LABEL_20;
  }
  switch ( v14 )
  {
    case 0u:
      v22 = PFFOBJ::QueryFontData((PFFOBJ *)v77, 0LL, v60, 4u, v11, &v78, 0LL, 0);
      goto LABEL_18;
    case 1u:
LABEL_73:
      v52 = v14 - 1;
      if ( v52 )
      {
        v53 = v52 - 3;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( v54 )
          {
            if ( v54 == 1 )
              v63 = 9;
          }
          else
          {
            v63 = 8;
          }
        }
        else
        {
          v63 = 6;
        }
      }
      else
      {
        v63 = 5;
      }
      v22 = PFFOBJ::QueryFontData((PFFOBJ *)v77, 0LL, v60, v63, v11, &v78, v76, a5);
LABEL_18:
      v13 = v22;
      if ( v22 != -1 )
      {
        top = v78.rclInk.top;
        v24 = v78.rclInk.right - v78.rclInk.left;
        *(_DWORD *)(v15 + 8) = v78.rclInk.left;
        *(_DWORD *)v15 = v24;
        *(_DWORD *)(v15 + 4) = v78.rclInk.bottom - top;
        v25 = (v78.ptqD.x.HighPart >> 3) + 1;
        *(_DWORD *)(v15 + 12) = -top;
        *(_WORD *)(v15 + 16) = v25 >> 1;
        *(_WORD *)(v15 + 18) = ((v78.ptqD.y.HighPart >> 3) + 1) >> 1;
      }
      goto LABEL_20;
    case 2u:
    case 3u:
      v55 = 2;
      if ( v14 != 3 )
        v55 = 0;
      v56 = v55 | 4;
      if ( !v72 )
        v56 = v55;
      v22 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)v77, v21, v60, v11, v56, &v78, a5, v76);
      goto LABEL_18;
  }
  if ( v14 == 4 || v14 - 5 <= 1 )
    goto LABEL_73;
LABEL_20:
  RESETFCOBJ::~RESETFCOBJ((RESETFCOBJ *)v75);
LABEL_21:
  if ( v60 )
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v60);
  v60 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
LABEL_24:
  if ( v74[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v74);
  return v13;
}
