__int64 __fastcall RFONTOBJ::bRealizeFont(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        struct PFE *a5,
        struct _FD_XFORM *a6,
        struct _POINTL *const a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        unsigned int a12)
{
  struct RFONT *v12; // r15
  __int64 v17; // rsi
  struct _FD_GLYPHSET *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // eax
  char v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // r15
  bool v41; // zf
  _DWORD *v42; // rdx
  __int64 v43; // rbx
  int v44; // ecx
  int inited; // eax
  Gre::Base *v46; // rcx
  int v47; // ecx
  int v48; // ecx
  __int64 v49; // r14
  int v50; // ecx
  unsigned int v51; // ecx
  int v52; // ecx
  __int64 v53; // rcx
  char v54; // dl
  __int64 v55; // rcx
  __int64 v56; // rcx
  _BYTE *v58; // rdx
  float v59; // xmm0_4
  const wchar_t *v60; // rbx
  __int64 v61; // rdx
  unsigned int (__fastcall *v62)(__int64, _BYTE *); // rax
  unsigned int v63; // ecx
  unsigned __int8 *v64; // r8
  unsigned int v65[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct RFONT *v66; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v67; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v68[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v69; // [rsp+4Ch] [rbp-B4h]
  __int64 v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int128 v72; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v73; // [rsp+70h] [rbp-90h]
  _FD_DEVICEMETRICS v74; // [rsp+80h] [rbp-80h] BYREF

  v12 = a5;
  v66 = a5;
  v17 = 0LL;
  v18 = PFEOBJ::pfdg((PFEOBJ *)&v66);
  if ( !v18 )
    goto LABEL_74;
  v19 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v19;
  if ( !v19 )
  {
    PFEOBJ::vFreepfdg((__int64 **)&v66);
    goto LABEL_74;
  }
  v70 = *(_QWORD *)a5;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = PDEVOBJ::ulLogPixelsX(a3);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = PDEVOBJ::ulLogPixelsY(a3);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v66);
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v70 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v20 = *((unsigned int *)a5 + 20);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v20;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 136LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 360LL) = *a6;
  *(struct _POINTL *)(*(_QWORD *)this + 648LL) = *a7;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = *(_QWORD *)this + 240LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)(*(_QWORD *)this + 224LL));
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *(_QWORD *)a5;
  *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 832LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 712LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 836LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 844LL) = *((_DWORD *)a5 + 3) & 0x100;
  v21 = *(_QWORD *)this;
  if ( a3 )
  {
    *(_QWORD *)(v21 + 104) = *(_QWORD *)a3;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)a3 + 1768LL);
  }
  else
  {
    *(_QWORD *)(v21 + 104) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  v22 = *(_QWORD *)this;
  v65[0] = 0;
  *(_DWORD *)(v22 + 168) = 1;
  *(_DWORD *)(*(_QWORD *)this + 716LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)(*(_QWORD *)this + 472LL) = v18;
  v71 = *((_QWORD *)a5 + 4);
  v67 = *(_WORD *)(v71 + 116);
  RFONTOBJ::vXlatGlyphArray(this, &v67, 1, v65, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 460LL) = v65[0];
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  memset_0(&v74, 0, sizeof(v74));
  *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(v70 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS(this, &v74) )
    goto LABEL_72;
  if ( !a2 )
    goto LABEL_17;
  *(POINTE *)(*(_QWORD *)this + 396LL) = v74.pteBase;
  *(POINTE *)(*(_QWORD *)this + 416LL) = v74.pteSide;
  v23 = *(_DWORD *)(*(_QWORD *)a2 + 352LL);
  v24 = *(_OWORD *)(*(_QWORD *)a2 + 336LL);
  v25 = *(_QWORD *)this;
  *(_OWORD *)(v25 + 172) = *(_OWORD *)(*(_QWORD *)a2 + 320LL);
  *(_OWORD *)(v25 + 188) = v24;
  *(_DWORD *)(v25 + 204) = v23;
  if ( !(unsigned int)RFONTOBJ::bCalcLayoutUnits(this, a2)
    || !(unsigned int)bGetNtoWScales(
                        (struct EPOINTFL *)(*(_QWORD *)this + 212LL),
                        a2,
                        (struct _FD_XFORM *)(*(_QWORD *)this + 360LL),
                        (struct PFEOBJ *)&v66,
                        (int *)(*(_QWORD *)this + 220LL)) )
  {
LABEL_72:
    v61 = *(_QWORD *)this;
LABEL_73:
    v72 = 0LL;
    v73 = 0LL;
    PushThreadGuardedObject(&v72, v61, Win32FreePool);
    RFONTOBJ::vDestroyFont(this, 1);
    PopThreadGuardedObject(&v72);
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(_QWORD *)this);
LABEL_74:
    *(_QWORD *)this = 0LL;
    return 0LL;
  }
  v26 = *(_QWORD *)this;
  v65[0] = 0;
  bFToL((float)*(int *)(v26 + 316) * *(float *)(v26 + 416), (int *)v65, 0);
  *(_DWORD *)(v26 + 328) = v65[0];
  v27 = *(_QWORD *)this;
  v65[0] = 0;
  bFToL((float)*(int *)(v27 + 316) * *(float *)(v27 + 420), (int *)v65, 0);
  *(_DWORD *)(v27 + 332) = v65[0];
  v28 = *(_QWORD *)this;
  v65[0] = 0;
  bFToL((float)*(int *)(v28 + 320) * *(float *)(v28 + 416), (int *)v65, 0);
  *(_DWORD *)(v28 + 336) = v65[0];
  v29 = *(_QWORD *)this;
  v65[0] = 0;
  bFToL((float)*(int *)(v29 + 320) * *(float *)(v29 + 420), (int *)v65, 0);
  *(_DWORD *)(v29 + 340) = v65[0];
  *(_DWORD *)(*(_QWORD *)this + 432LL) = -1;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
  {
    v30 = *(_DWORD *)(v71 + 48);
    if ( (v30 & 4) == 0 )
    {
      if ( (v30 & 0x10) == 0 )
      {
        v32 = ulSimpleDeviceOrientation(this);
        goto LABEL_16;
      }
      v31 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_15:
      v32 = lNormAngle(v31);
LABEL_16:
      *(_DWORD *)(*(_QWORD *)this + 392LL) = v32;
      goto LABEL_17;
    }
LABEL_79:
    v31 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_15;
  }
  *(_DWORD *)(*(_QWORD *)this + 392LL) = RFONTOBJ::ulSimpleOrientation(this, a2);
  if ( *(_DWORD *)(*(_QWORD *)this + 392LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x10) != 0 )
    goto LABEL_79;
LABEL_17:
  v33 = 0;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = a10;
  v34 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v35 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a10) + 32) + 23448LL);
  if ( *(_QWORD *)(*(_QWORD *)this + 96LL) == v35 )
  {
    if ( (unsigned int)UmfdQueryFontCapsEx(*(_QWORD *)(*(_QWORD *)this + 24LL), v35, v68) != -1 )
      v33 = v69;
  }
  else
  {
    v62 = *(unsigned int (__fastcall **)(__int64, _BYTE *))(v34 + 3016);
    if ( v62 && v62(2LL, v68) != -1 )
      v33 = v69;
  }
  v36 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v34 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v36 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
    goto LABEL_33;
  }
  v37 = *(_DWORD *)(v36 + 12);
  *(_DWORD *)(v36 + 92) = 0;
  v38 = (v37 & 0x10010000) != 0 ? 400 : 800;
  v36 = v38;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  v39 = *(_QWORD *)this;
  if ( !a10 )
  {
    v40 = *(_QWORD *)(v39 + 104);
    if ( !v40 )
    {
LABEL_27:
      v12 = v66;
      goto LABEL_28;
    }
    v41 = (*(_DWORD *)(v40 + 40) & 0x8000) == 0;
    *(_QWORD *)v65 = *(_QWORD *)(v39 + 104);
    if ( !v41 )
    {
      if ( KeAreApcsDisabled() )
      {
LABEL_26:
        v36 = v38;
        if ( (*(_DWORD *)(v40 + 1792) & 0x40000000) != 0 )
        {
          v36 = 3 * (unsigned int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)v65);
          if ( (unsigned int)v36 <= 0x320 )
            v36 = v38;
          if ( (unsigned int)v36 > 0x960 )
            v36 = 2400LL;
        }
        goto LABEL_27;
      }
      v39 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v40 + 2960) )
    {
      v72 = 0LL;
      v73 = 0LL;
      PushThreadGuardedObject(&v72, v39, vRestartbRealizeFont);
      *(_DWORD *)(*(_QWORD *)this + 88LL) = (*(__int64 (__fastcall **)(_QWORD))(v40 + 2960))(*(_QWORD *)(*(_QWORD *)this + 112LL));
      PopThreadGuardedObject(&v72);
    }
    goto LABEL_26;
  }
  *(_DWORD *)(v39 + 88) = 2;
LABEL_28:
  v42 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
  {
    if ( (v33 & 2) == 0
      || (v42[179] & 0x8000) != 0 && (v42[86] > (unsigned int)(2 * v36) || v42[87] > (unsigned int)v36) )
    {
      v42[22] = 2;
    }
  }
  else if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 && (v33 & 1) == 0 )
  {
    v42[22] = 1;
  }
LABEL_33:
  v43 = *(_QWORD *)(SGDGetSessionState(v36) + 32);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( a10 )
  {
    v61 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
      goto LABEL_73;
  }
  if ( !a11 || (v44 = 1, *(_DWORD *)(*(_QWORD *)this + 392LL)) )
    v44 = 0;
  *(_DWORD *)(*(_QWORD *)this + 640LL) = v44;
  inited = RFONTOBJ::bInitCache(this, a12);
  v46 = *(Gre::Base **)this;
  if ( !inited )
  {
    v61 = *(_QWORD *)this;
    goto LABEL_73;
  }
  *((_QWORD *)v46 + 86) = 0LL;
  *(_QWORD *)v65 = *((_QWORD *)Gre::Base::Globals(v46) + 3);
  GreAcquireSemaphore(*(_QWORD *)v65);
  v47 = *(_DWORD *)(v43 + 23408);
  v41 = v47 == -1;
  v48 = v47 + 1;
  *(_DWORD *)(v43 + 23408) = v48;
  if ( v41 )
  {
    *(_DWORD *)(v43 + 23408) = 1;
    v48 = 1;
  }
  **(_DWORD **)this = v48;
  if ( a3 )
  {
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    v66 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v66, 1LL);
    PDEVOBJ::prfntActive(a3, v66);
  }
  v49 = v70;
  v66 = *(struct RFONT **)(v70 + 72);
  RFONTOBJ::vInsert(this, &v66, 0LL);
  *(_QWORD *)(v49 + 72) = v66;
  SEMOBJ::vUnlock((SEMOBJ *)v65);
  v50 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
    v51 = v50 | 1;
  else
    v51 = v50 & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v51;
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)this + 208LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
  if ( !*(_DWORD *)(v43 + 19352) || (v52 = 1, (*((_DWORD *)v12 + 3) & 0x10) == 0) )
    v52 = 0;
  *(_DWORD *)(*(_QWORD *)this + 708LL) = v52;
  v53 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000000) != 0 )
  {
    if ( (*(_DWORD *)(v53 + 204) & 1) == 0 || (v54 = 1, *(_DWORD *)(v53 + 328)) )
      v54 = 0;
    v55 = *(_QWORD *)(*(_QWORD *)(v53 + 120) + 32LL);
    if ( (*(_DWORD *)(v55 + 48) & 0x401000) != 0 )
    {
      if ( v54 )
      {
        if ( *(_WORD *)(v55 + 46) <= 0x190u )
        {
          v60 = (const wchar_t *)(v55 + *(int *)(v55 + 8));
          if ( !_wcsicmp(v60, L"Courier New")
            || !_wcsicmp(v60, L"Rod")
            || !_wcsicmp(v60, L"Rod Transparent")
            || !_wcsicmp(v60, L"Fixed Miriam Transparent")
            || !_wcsicmp(v60, L"Miriam Fixed")
            || !_wcsicmp(v60, L"Simplified Arabic Fixed") )
          {
            *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
          }
        }
      }
    }
    v56 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    {
      v72 = 0LL;
      *(_QWORD *)&v73 = 0LL;
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v56 + 224), (struct tagFLOATOBJ_XFORM *)&v72);
      v58 = *(_BYTE **)(v49 + 192);
      v59 = (float)*(__int16 *)(v71 + 56) * *((float *)&v72 + 3);
      *((float *)&v72 + 3) = v59;
      if ( v58 )
      {
        v63 = 0;
        if ( *v58 )
        {
          v64 = v58 + 4;
          while ( *v64 != (int)v59 )
          {
            ++v63;
            v64 += 80;
            if ( v63 >= (unsigned __int8)*v58 )
              goto LABEL_60;
          }
          v17 = (__int64)&v58[80 * v63 + 4];
        }
      }
LABEL_60:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v17;
    }
  }
  return 1LL;
}
