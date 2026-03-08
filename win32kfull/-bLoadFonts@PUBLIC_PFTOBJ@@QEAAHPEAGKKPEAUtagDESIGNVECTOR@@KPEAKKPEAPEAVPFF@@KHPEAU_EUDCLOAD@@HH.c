/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20
 * Callers:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00BA638 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     GreAddFontResourceWInternal @ 0x1C00D0B00 (GreAddFontResourceWInternal.c)
 *     bAddFlEntry @ 0x1C0119070 (bAddFlEntry.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C011CCCC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D7F24 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00E33E4 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0114D68 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C0114FF4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C01154C8 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C01172D8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0117434 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     UmfdLoadFontFileView @ 0x1C011859C (UmfdLoadFontFileView.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0118E20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C011C834 (-vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C011CA84 (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
 *     EngUnmapFontFileFD @ 0x1C011CB40 (EngUnmapFontFileFD.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C011CC6C (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C011D0B8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011D160 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C011D180 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C011D1B0 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     memcmp @ 0x1C012BEF0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C026DDD4 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02D7E1C (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Buf1,
        size_t a6,
        unsigned int *a7,
        unsigned int a8,
        struct PFF **a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12,
        int a13,
        int a14)
{
  unsigned int *v14; // rdi
  __int64 v15; // r13
  __int64 result; // rax
  PUBLIC_PFTOBJ *v18; // rsi
  void *v19; // rbx
  WCHAR v20; // r8
  unsigned __int16 *v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rdi
  unsigned int v24; // ecx
  struct _EUDCLOAD *v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rbx
  int v28; // r12d
  struct tagDESIGNVECTOR *v29; // r14
  BOOL v30; // esi
  struct PFF **v31; // r13
  unsigned int v32; // eax
  unsigned int v33; // r14d
  Gre::Base *v34; // rcx
  Gre::Base *v35; // rcx
  _DWORD *v36; // rcx
  int v37; // eax
  int v38; // eax
  unsigned int *v39; // rcx
  unsigned int v40; // r12d
  unsigned int *v41; // rax
  struct PFF *v42; // rax
  WCHAR v43; // r8
  unsigned __int16 *v44; // rdx
  unsigned int v45; // ecx
  BOOL i; // esi
  __int64 v47; // rax
  __int64 v48; // rdi
  int v49; // r13d
  struct tagDESIGNVECTOR *v50; // r12
  unsigned int v51; // ebx
  __int64 v52; // r14
  struct PFF **v53; // r13
  char *v54; // rax
  char *v55; // r15
  unsigned int v56; // ebx
  __int64 v57; // rax
  Gre::Base *v58; // rcx
  struct _FONTFILEVIEW **v59; // rdi
  __int64 v60; // rsi
  const WCHAR *v61; // rbx
  Gre::Base *v62; // rsi
  Gre::Base **v63; // r12
  __int64 v64; // rdi
  char *v65; // r15
  HDEV v66; // r13
  bool v67; // al
  int v69; // esi
  struct Gre::Base::SESSION_GLOBALS *v70; // rax
  Gre::Base *v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rcx
  unsigned __int64 v74; // rbx
  unsigned int v75; // r12d
  ULONG_PTR *v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rbx
  bool v80; // zf
  struct _EUDCLOAD *v81; // rbx
  __int64 v82; // r14
  struct _FONTFILEVIEW **v83; // rbx
  __int64 v84; // rsi
  struct _FONTFILEVIEW **v85; // rbx
  struct _FONTFILEVIEW *v86; // rcx
  HDEV v87; // r15
  unsigned int v88; // esi
  unsigned int v89; // r9d
  const unsigned __int16 *v90; // r8
  unsigned int v91; // r15d
  __int64 v92; // rbx
  struct PFF *v93; // rax
  struct PFF **v94; // r15
  __int64 v95; // rcx
  struct PFF **v96; // rdx
  struct PFF *v97; // rcx
  _WORD *v98; // rcx
  struct _FONTFILEVIEW **v99; // rdx
  __int64 v100; // r8
  struct PFF *v102; // rax
  __int64 v103; // rbx
  unsigned int v104; // ebx
  unsigned int v105; // edi
  unsigned int v106; // esi
  __int64 v107; // rbx
  struct PFF *v108; // rax
  PUBLIC_PFTOBJ *v109; // r14
  __int64 v110; // rcx
  struct PFF **v111; // rdx
  struct PFF *v112; // rcx
  void *v113; // rbx
  unsigned int v114; // ecx
  __int64 v115; // rax
  unsigned int v116; // r9d
  unsigned int v117; // eax
  unsigned int v118; // eax
  struct PFF *v119; // rax
  size_t Size; // [rsp+38h] [rbp-E0h]
  HDEV v121; // [rsp+48h] [rbp-D0h]
  unsigned int v122; // [rsp+98h] [rbp-80h]
  char v123; // [rsp+9Ch] [rbp-7Ch]
  int v124; // [rsp+A0h] [rbp-78h] BYREF
  unsigned int v125[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v126[2]; // [rsp+B0h] [rbp-68h] BYREF
  char v127; // [rsp+C0h] [rbp-58h]
  void *v128; // [rsp+C8h] [rbp-50h] BYREF
  void *v129; // [rsp+D0h] [rbp-48h] BYREF
  struct PFF **v130; // [rsp+D8h] [rbp-40h] BYREF
  HDEV v131; // [rsp+E0h] [rbp-38h] BYREF
  char v132[8]; // [rsp+E8h] [rbp-30h]
  unsigned __int64 v133; // [rsp+F0h] [rbp-28h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v134; // [rsp+F8h] [rbp-20h]
  void *v135; // [rsp+100h] [rbp-18h]
  struct _FONTFILEVIEW **v136; // [rsp+110h] [rbp-8h]
  char *v137; // [rsp+118h] [rbp+0h]
  PCWSTR SourceString; // [rsp+180h] [rbp+68h] BYREF
  unsigned int v140; // [rsp+188h] [rbp+70h]
  unsigned int v141; // [rsp+190h] [rbp+78h]

  v141 = a4;
  v140 = a3;
  SourceString = a2;
  v14 = a7;
  v15 = a4;
  result = 0LL;
  v122 = 0;
  v124 = 0;
  v18 = this;
  v130 = 0LL;
  v123 = 1;
  if ( !a2 || a4 > 3 )
    return result;
  v134 = Gre::Base::Globals(this);
  v129 = (void *)*((_QWORD *)v134 + 6);
  v19 = v129;
  v128 = v129;
  GreAcquireSemaphore(v129);
  if ( a11 )
  {
    v33 = a10;
    v25 = a12;
    v125[0] = a10;
    goto LABEL_55;
  }
  v20 = *a2;
  v21 = a2;
  *v14 = 0;
  v22 = 0;
  if ( v20 )
  {
    do
    {
      ++v21;
      v22 = (unsigned __int8)v20 + 257 * v22;
      LOBYTE(v20) = *v21;
    }
    while ( *v21 );
  }
  v23 = *(_QWORD *)v18;
  if ( *(_DWORD *)(*(_QWORD *)v18 + 24LL) == 100 )
    v24 = v22 % 0x64;
  else
    v24 = v22 % *(_DWORD *)(v23 + 24);
  v25 = a12;
  v26 = *(_QWORD *)(v23 + 8LL * v24 + 40);
  if ( v26 )
  {
    v27 = v140;
    v28 = a6;
    v29 = Buf1;
    v30 = a12 != 0LL;
    do
    {
      if ( v30 == ((*(_DWORD *)(v26 + 52) >> 3) & 1)
        && (_DWORD)v27 == *(_DWORD *)(v26 + 32)
        && (_DWORD)v15 == *(_DWORD *)(v26 + 36)
        && !memcmp(*(const void **)(v26 + 24), a2, 2 * v27)
        && v28 == *(_DWORD *)(v26 + 48)
        && (!v28 || !memcmp(v29, *(const void **)(v26 + 40), *(unsigned int *)(v26 + 48))) )
      {
        break;
      }
      v26 = *(_QWORD *)(v26 + 8);
    }
    while ( v26 );
    v19 = v129;
    v25 = a12;
    v18 = this;
  }
  v31 = a9;
  *a9 = (struct PFF *)v26;
  if ( v26 )
  {
    v32 = 0;
    v33 = a10;
    v34 = (Gre::Base *)(*(_DWORD *)(v26 + 52) & 8);
    v126[0] = v26;
    v125[0] = a10;
    if ( v25 )
    {
      if ( !(_DWORD)v34 )
        goto LABEL_33;
    }
    else if ( (_DWORD)v34 )
    {
      goto LABEL_33;
    }
    if ( *(_QWORD *)v18 != *((_QWORD *)Gre::Base::Globals(v34) + 796) )
    {
LABEL_21:
      v122 = 1;
      v124 = 1;
      if ( v25 )
      {
        if ( !*((_QWORD *)v25 + 1) && *(_DWORD *)(v26 + 208) > 2u )
        {
LABEL_161:
          v41 = a7;
          v40 = 0;
          *a7 = 1;
          goto LABEL_35;
        }
        PFFOBJ::vGetEUDC((PFFOBJ *)v126, v25);
      }
      if ( *(_QWORD *)v18 != *((_QWORD *)Gre::Base::Globals(v35) + 796) )
      {
        if ( (v33 & 0x20) != 0 )
          v36 = (_DWORD *)(v26 + 60);
        else
          v36 = (_DWORD *)(v26 + 56);
        if ( *v36 == -1 )
          goto LABEL_161;
        if ( (v33 & 0x40) == 0 )
        {
          v37 = *(_DWORD *)(v26 + 52);
          if ( (v37 & 0x80u) != 0 )
            *(_DWORD *)(v26 + 52) = v37 & 0xFFFFFF7F;
          else
            ++*v36;
          v38 = *(_DWORD *)(v26 + 52);
          if ( (v38 & 1) != 0 )
          {
            v114 = 0;
            for ( *(_DWORD *)(v26 + 52) = v38 & 0xFFFFFFFE; v114 < *(_DWORD *)(v26 + 208); ++v114 )
            {
              v115 = *(_QWORD *)(v26 + 8LL * v114 + 216);
              if ( v115 )
                *(_DWORD *)(v115 + 12) &= ~2u;
            }
          }
        }
      }
      v32 = *(_DWORD *)(v26 + 208);
      goto LABEL_33;
    }
    if ( (unsigned int)PFFOBJ::bAddPvtData((PFFOBJ *)v126, v33) )
    {
      v26 = v126[0];
      goto LABEL_21;
    }
    v32 = -1;
    v122 = 0;
    v124 = 0;
LABEL_33:
    v39 = a7;
    *a7 = v32;
    if ( v32 )
    {
      v40 = v122;
      v41 = v39;
LABEL_35:
      if ( (v33 & 0x40) != 0 )
        *v41 = 0;
      v42 = *v31;
      if ( (v33 & 0x400) != 0 )
        *((_DWORD *)v42 + 13) |= 0x400u;
      if ( (v33 & 0x100) != 0 )
        *((_DWORD *)v42 + 13) |= 0x800u;
LABEL_41:
      SEMOBJ::vUnlock((SEMOBJ *)&v128);
      return v40;
    }
    goto LABEL_46;
  }
  v33 = a10;
  v125[0] = a10;
LABEL_46:
  v43 = *a2;
  v44 = a2;
  v45 = 0;
  for ( i = v25 == 0LL; *v44; LOBYTE(v43) = *v44 )
  {
    ++v44;
    v45 = (unsigned __int8)v43 + 257 * v45;
  }
  v47 = v45 % *(_DWORD *)(*(_QWORD *)this + 24LL) + 5LL;
  v48 = *(_QWORD *)(*(_QWORD *)this + 8 * v47);
  v130 = (struct PFF **)(*(_QWORD *)this + 8 * v47);
  if ( v48 )
  {
    v49 = a6;
    v50 = Buf1;
    v51 = v141;
    v52 = v140;
    do
    {
      if ( i == ((*(_DWORD *)(v48 + 52) >> 3) & 1)
        && (_DWORD)v52 == *(_DWORD *)(v48 + 32)
        && v51 == *(_DWORD *)(v48 + 36)
        && !memcmp(*(const void **)(v48 + 24), a2, 2 * v52)
        && v49 == *(_DWORD *)(v48 + 48)
        && (!v49 || !memcmp(v50, *(const void **)(v48 + 40), *(unsigned int *)(v48 + 48))) )
      {
        break;
      }
      v48 = *(_QWORD *)(v48 + 8);
    }
    while ( v48 );
    v19 = v129;
    v33 = v125[0];
    v25 = a12;
    v53 = a9;
    if ( v48 )
    {
      if ( !a14 && !*(_QWORD *)(v48 + 152) )
      {
        PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v126, (struct PFF *)v48, a8, v125[0], *(struct PFT **)this);
        v105 = *(_DWORD *)(v48 + 208);
        v106 = 0;
        v124 = 0;
        SEMOBJ::vUnlock((SEMOBJ *)&v128);
        v107 = v126[0];
        if ( !v126[0] )
        {
LABEL_145:
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v126);
          v113 = v128;
          if ( v128 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsem");
            GreReleaseSemaphoreInternal(v113);
          }
          return v106;
        }
        if ( !(unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v126, a2, v105, 0LL, v25) )
        {
          *a7 = 0;
          goto LABEL_145;
        }
        a12 = (struct _EUDCLOAD *)*((_QWORD *)v134 + 6);
        GreAcquireSemaphore(a12);
        v108 = PUBLIC_PFTOBJ::pPFFGet(this, SourceString, v140, v141, Buf1, a6, &v130, v25 != 0LL);
        *v53 = v108;
        if ( v108 )
        {
          v116 = v33;
          v109 = this;
          v117 = PFTOBJ::chpfeIncrPFF(this, v108, &v124, v116, v25);
          v106 = v124;
          v105 = v117;
          if ( v117 )
          {
            *a7 = v117;
LABEL_144:
            SEMOBJ::vUnlock((SEMOBJ *)&a12);
            goto LABEL_145;
          }
        }
        else
        {
          v109 = this;
        }
        *v53 = (struct PFF *)v107;
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v126, v25 != 0LL) )
        {
          v110 = *(_QWORD *)v109;
          if ( (*(_DWORD *)(v107 + 52) & 0x200) == 0 )
            ++*(_DWORD *)(v110 + 32);
          ++*(_DWORD *)(v110 + 28);
          v111 = v130;
          if ( *v130 )
            *((_QWORD *)*v130 + 2) = *v53;
          v112 = *v53;
          *((_QWORD *)v112 + 1) = *v111;
          *((_QWORD *)v112 + 2) = 0LL;
          *v111 = v112;
          PFFOBJ::vSetUniqueness((PFFOBJ *)v126);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v126);
          v106 = 1;
          *a7 = v105;
        }
        else
        {
          *a7 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v126);
        }
        goto LABEL_144;
      }
    }
  }
  v15 = v141;
LABEL_55:
  v133 = 0LL;
  if ( v19 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v19);
    v128 = 0LL;
  }
  if ( !(12 * (_DWORD)v15) )
  {
    v129 = 0LL;
    goto LABEL_194;
  }
  v54 = (char *)Win32AllocPoolZInit((unsigned int)(12 * v15), 1886221383LL);
  v135 = v54;
  v55 = v54;
  v129 = v54;
  if ( !v54 )
  {
LABEL_194:
    EngSetLastError(8u);
LABEL_195:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v129);
    SEMOBJ::vUnlock((SEMOBJ *)&v128);
    return 0LL;
  }
  v126[0] = v15;
  *(_QWORD *)v132 = &v54[8 * v15];
  v56 = 8 * v141;
  if ( !(v141 << 7) )
    goto LABEL_195;
  v57 = Win32AllocPoolZInit(v141 << 7, 1986422343LL);
  v136 = (struct _FONTFILEVIEW **)v57;
  v59 = (struct _FONTFILEVIEW **)v57;
  if ( !v57 )
    goto LABEL_195;
  v60 = v56;
  v61 = SourceString;
  v62 = (Gre::Base *)(v57 + v60);
  if ( v141 )
  {
    v63 = (Gre::Base **)v57;
    v131 = *(HDEV *)v132;
    v137 = v55;
    v64 = v15;
    v65 = &v55[-v57];
    v66 = *(HDEV *)v132;
    do
    {
      *v63 = v62;
      *((_QWORD *)v62 + 10) = v61;
      v67 = IsTrustedFontFilePath(v61);
      v58 = *v63;
      *((_DWORD *)*v63 + 10) = *((_DWORD *)*v63 + 10) & 0xFFFFFFF7 | (8 * v67);
      *(Gre::Base **)((char *)v63 + (_QWORD)v65) = 0LL;
      *(_DWORD *)v66 = 0;
      while ( *v61++ )
        ;
      v62 = (Gre::Base *)((char *)v62 + 120);
      ++v63;
      ++v66;
      --v64;
    }
    while ( v64 );
    v59 = v136;
    v33 = v125[0];
    v25 = a12;
    LOBYTE(v55) = (_BYTE)v137;
    v15 = v126[0];
  }
  v69 = 0;
  v131 = 0LL;
  LODWORD(a12) = 0;
  if ( a13
    || (v70 = Gre::Base::Globals(v58), v58 = this, *(_QWORD *)this == *((_QWORD *)v70 + 796))
    || (v33 & 0xFFFFFFFE) != 0
    || !v140
    || Buf1
    || (_DWORD)a6 )
  {
    v69 = 1;
  }
  UmfdHostLifeTimeManager::EnsureUmfdHost((__int64)v58);
  v72 = *((_QWORD *)Gre::Base::Globals(v71) + 8);
  GreAcquireSemaphore(v72);
  *(_QWORD *)v125 = 0LL;
  UmfdLoadFontFileView(
    (unsigned __int16 *)SourceString,
    v140,
    v59,
    v141,
    (char)v55,
    v132[0],
    Buf1,
    a6,
    (__int64 *)&v133,
    &v131,
    v125,
    v69,
    (int *)&a12);
  if ( v72 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v72);
  }
  v74 = v133;
  if ( !v133
    || (v87 = v131,
        v88 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))v131 + 384))(v133, 2LL, 0LL),
        v88 - 1 > 0xFFFFFFFD) )
  {
    v75 = v141;
LABEL_77:
    if ( v75 )
    {
      v76 = (ULONG_PTR *)v59;
      v77 = v15;
      do
      {
        EngUnmapFontFileFD(*v76++);
        --v77;
      }
      while ( v77 );
    }
LABEL_80:
    if ( !v123 )
    {
LABEL_95:
      if ( v135 )
        Win32FreePool(v135);
      v40 = v122;
      goto LABEL_41;
    }
    v79 = *(_QWORD *)(SGDGetSessionState(v73) + 32);
    v80 = v79 == -23464;
    v81 = (struct _EUDCLOAD *)(v79 + 23464);
    a12 = v81;
    if ( !v80 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v81, 0LL);
    }
    v82 = *(_QWORD *)(SGDGetSessionState(v78) + 32);
    if ( *(_QWORD *)(v82 + 23472) && v75 )
    {
      v83 = v59;
      v84 = v15;
      do
      {
        LODWORD(SourceString) = *((_DWORD *)*v83 + 16);
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(*(_QWORD *)(v82 + 23472), &SourceString);
        ++v83;
        --v84;
      }
      while ( v84 );
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
    }
    else
    {
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
      if ( !v75 )
      {
LABEL_94:
        Win32FreePool(v59);
        goto LABEL_95;
      }
    }
    v85 = v59;
    do
    {
      v86 = *v85;
      if ( (*((_DWORD *)*v85 + 10) & 8) == 0 && !*((_QWORD *)v86 + 2) && !*((_QWORD *)v86 + 1) )
        vUnreferenceFileviewSection(v86);
      ++v85;
      --v15;
    }
    while ( v15 );
    goto LABEL_94;
  }
  if ( v25 && !*((_QWORD *)v25 + 1) && v88 > 2 )
  {
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v129);
    SEMOBJ::vUnlock((SEMOBJ *)&v128);
    return v122;
  }
  v89 = v140;
  v90 = SourceString;
  *a7 = v88;
  v121 = v87;
  v91 = a6;
  LODWORD(Size) = a6;
  PFFMEMOBJ::PFFMEMOBJ(
    (PFFMEMOBJ *)v126,
    v88,
    v90,
    v89,
    v141,
    Buf1,
    Size,
    v74,
    v121,
    0LL,
    *(struct PFT **)this,
    a8,
    v33,
    (struct _FNTCHECKSUM *)v125,
    v59,
    0LL,
    (int)a12);
  v92 = v126[0];
  if ( !v126[0] )
  {
    v75 = v141;
LABEL_125:
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v126);
    if ( !v59 )
      goto LABEL_80;
    goto LABEL_77;
  }
  v123 = 0;
  if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v126, SourceString, v88, 0LL, v25) )
  {
    a12 = (struct _EUDCLOAD *)*((_QWORD *)v134 + 6);
    GreAcquireSemaphore(a12);
    v93 = PUBLIC_PFTOBJ::pPFFGet(this, SourceString, v140, v141, Buf1, v91, &v130, v25 != 0LL);
    v94 = a9;
    *a9 = v93;
    if ( v93 )
    {
      v118 = PFTOBJ::chpfeIncrPFF(this, v93, &v124, v33, v25);
      if ( v118 )
      {
        if ( (v33 & 0x40) != 0 )
          v118 = 0;
        *a7 = v118;
        v119 = *v94;
        if ( (v33 & 0x400) != 0 )
          *((_DWORD *)v119 + 13) |= 0x400u;
        v104 = v124;
        v75 = v141;
        v122 = v124;
        if ( (v33 & 0x100) != 0 )
          *((_DWORD *)v119 + 13) |= 0x800u;
        goto LABEL_123;
      }
      v122 = v124;
    }
    *v94 = (struct PFF *)v92;
    if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v126, v25 != 0LL) )
    {
      v95 = *(_QWORD *)this;
      if ( (*(_DWORD *)(v92 + 52) & 0x200) == 0 )
        ++*(_DWORD *)(v95 + 32);
      ++*(_DWORD *)(v95 + 28);
      v96 = v130;
      if ( *v130 )
        *((_QWORD *)*v130 + 2) = *v94;
      v97 = *v94;
      *((_QWORD *)v97 + 1) = *v96;
      *((_QWORD *)v97 + 2) = 0LL;
      *v96 = v97;
      PFFOBJ::vSetUniqueness((PFFOBJ *)v126);
      PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v126);
      v75 = v141;
      v98 = *(_WORD **)(v126[0] + 24LL);
      if ( v141 )
      {
        v99 = v59;
        v100 = v15;
        do
        {
          *((_QWORD *)*v99 + 10) = v98;
          while ( *v98++ )
            ;
          ++v99;
          --v100;
        }
        while ( v100 );
      }
      if ( (v33 & 0x40) != 0 )
        *((_DWORD *)*v94 + 13) |= 0x80u;
      v102 = *v94;
      if ( (v33 & 0x400) != 0 )
        *((_DWORD *)v102 + 13) |= 0x400u;
      if ( (v33 & 0x100) != 0 )
        *((_DWORD *)v102 + 13) |= 0x800u;
      if ( v75 )
      {
        v103 = v15;
        do
        {
          EngUnmapFontFileFD((ULONG_PTR)*v59++);
          --v103;
        }
        while ( v103 );
      }
      v104 = 1;
      v59 = 0LL;
      v122 = 1;
    }
    else
    {
      *a7 = 0;
      PFFOBJ::vRemoveHash((PFFOBJ *)v126);
      v75 = v141;
      v104 = v122;
    }
LABEL_123:
    SEMOBJ::vUnlock((SEMOBJ *)&a12);
    goto LABEL_124;
  }
  v75 = v141;
  v104 = v122;
  *a7 = 0;
LABEL_124:
  if ( (v127 & 2) != 0 )
    goto LABEL_125;
  if ( v75 )
  {
    do
    {
      EngUnmapFontFileFD((ULONG_PTR)*v59++);
      --v15;
    }
    while ( v15 );
  }
  PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v126);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v129);
  SEMOBJ::vUnlock((SEMOBJ *)&v128);
  return v104;
}
