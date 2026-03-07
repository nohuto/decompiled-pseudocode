__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, struct OBJECT *a2, int a3, int *a4)
{
  unsigned int v7; // r14d
  struct _SURFOBJ *v8; // r15
  __int64 v9; // rcx
  void *v10; // rdx
  __int64 v11; // rcx
  struct _ERESOURCE *v12; // r8
  int v13; // eax
  struct OBJECT *v14; // r13
  __int64 v15; // rbx
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v17; // rax
  void *v18; // rdx
  struct _ERESOURCE *v19; // r8
  _WORD *v20; // r15
  int v21; // ecx
  unsigned __int16 AltLock; // bx
  unsigned __int16 v23; // ax
  int v24; // r12d
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  struct SFMLOGICALSURFACE *v26; // rbx
  HLSURF v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int16 v33; // dx
  __int16 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int64 v58; // rax
  __int128 v59; // xmm0
  __int128 v60; // xmm2
  __int128 v61; // xmm3
  struct _EPROCESS *v62; // rdx
  struct _EPROCESS *v63; // rbx
  __int64 v64; // rax
  int v65; // xmm0_4
  int v66; // xmm1_4
  int v67; // ecx
  HLSURF v68; // rdx
  struct SFMLOGICALSURFACE *v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rbx
  void *v72; // rdx
  struct _ERESOURCE *v73; // r8
  unsigned __int16 v74; // bx
  unsigned __int16 v75; // ax
  int v76; // eax
  void *v77; // rdx
  struct _ERESOURCE *v78; // r8
  void *v79; // rdx
  struct _ERESOURCE *v80; // r8
  int v82; // [rsp+40h] [rbp-C0h]
  int v84; // [rsp+44h] [rbp-BCh]
  BOOL (__stdcall *v85)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+48h] [rbp-B8h]
  int v86; // [rsp+48h] [rbp-B8h]
  int *v87; // [rsp+50h] [rbp-B0h] BYREF
  SURFACE *v88[2]; // [rsp+58h] [rbp-A8h] BYREF
  HLSURF *v89; // [rsp+68h] [rbp-98h] BYREF
  int v90; // [rsp+70h] [rbp-90h]
  SURFACE *v91[2]; // [rsp+78h] [rbp-88h] BYREF
  HLSURF v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h] BYREF
  int v94; // [rsp+98h] [rbp-68h]
  struct _SURFOBJ *v95; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v96; // [rsp+A8h] [rbp-58h]
  __int128 v97; // [rsp+B0h] [rbp-50h]
  __int128 v98; // [rsp+C0h] [rbp-40h]
  __int128 v99; // [rsp+D0h] [rbp-30h]
  __int128 v100; // [rsp+E0h] [rbp-20h]
  __int128 v101; // [rsp+F0h] [rbp-10h]
  __int128 v102; // [rsp+100h] [rbp+0h]
  __int128 v103; // [rsp+110h] [rbp+10h]
  __int128 v104; // [rsp+120h] [rbp+20h]
  __int128 v105; // [rsp+130h] [rbp+30h]
  __int128 v106; // [rsp+140h] [rbp+40h]
  __int64 v107; // [rsp+150h] [rbp+50h]
  __int64 v108; // [rsp+160h] [rbp+60h] BYREF
  int v109; // [rsp+168h] [rbp+68h]
  int v110; // [rsp+16Ch] [rbp+6Ch]

  v109 = *((_DWORD *)a1 + 14);
  v110 = *((_DWORD *)a1 + 15);
  v87 = a4;
  v108 = 0LL;
  v7 = 1;
  v88[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL));
  v96 = v8;
  SURFREFVIEW::bMap((SURFREFVIEW *)v88, v8);
  v91[0] = 0LL;
  v95 = (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v91, v95);
  *a4 = 0;
  SGDGetSessionState(v9);
  v13 = *((_DWORD *)a1 + 28);
  if ( (v13 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v91, v10, v12);
    v91[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v88, v79, v80);
    v88[0] = 0LL;
    goto LABEL_85;
  }
  if ( *((_WORD *)a1 + 50) == 3 )
  {
LABEL_5:
    v14 = a1;
    goto LABEL_8;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v13 & 0x400000) != 0 )
      goto LABEL_5;
    if ( !_bittest((const signed __int32 *)a2 + 28, 0x16u) )
    {
LABEL_85:
      v7 = 0;
      goto LABEL_86;
    }
  }
  v14 = a2;
LABEL_8:
  v15 = *((_QWORD *)v14 + 6);
  if ( (*(_DWORD *)(v15 + 40) & 0x20000) != 0 )
    *((_DWORD *)a1 + 29) |= 0x10u;
  if ( a3
    || ((*((_DWORD *)v14 + 28) & 0x400) == 0
      ? (v16 = EngCopyBits)
      : (v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2816)),
        v85 = v16,
        v17 = SGDGetSessionState(v11),
        ((unsigned int (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, __int64, __int64 *, __int64 *))v85)(
          ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
          v8,
          0LL,
          *(_QWORD *)(v17 + 24) + 6896LL,
          &v108,
          &v108)) )
  {
    if ( (*(_DWORD *)(v15 + 40) & 0x20000) != 0 )
      *((_DWORD *)a1 + 29) &= ~0x10u;
    v20 = (_WORD *)((char *)a1 + 102);
    v86 = *((_DWORD *)a1 + 29) & 0x80;
    v21 = *(_DWORD *)a1 & 0x800000;
    if ( v21 && (*v20 & 0x200) != 0 )
    {
      v82 = 1;
    }
    else
    {
      v82 = 0;
      if ( !v21 )
      {
        v82 = 0;
        goto LABEL_25;
      }
    }
    if ( (*v20 & 0x400) != 0 )
    {
      v84 = 1;
      goto LABEL_26;
    }
LABEL_25:
    v84 = 0;
LABEL_26:
    AltLock = HmgQueryAltLock(*((_QWORD *)a1 + 4));
    v23 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
    if ( !(unsigned int)HmgSwapLockedHandleContents(*((_QWORD *)a1 + 4), AltLock, *((_QWORD *)a2 + 4), v23, 5) )
    {
      v7 = 0;
      goto LABEL_77;
    }
    v92 = 0LL;
    v24 = 0;
    v93 = 0LL;
    v94 = 0;
    FirstLSurf = SURFACE::GetFirstLSurf(a1);
    v89 = (HLSURF *)FirstLSurf;
    v26 = FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_36;
    v24 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_36;
    if ( qword_1C02D5870 && (int)qword_1C02D5870() >= 0 )
    {
      v27 = qword_1C02D5878;
      if ( qword_1C02D5878 )
        v27 = (HLSURF)((__int64 (__fastcall *)(_QWORD, struct SFMLOGICALSURFACE *, _QWORD, __int64, int))qword_1C02D5878)(
                        *((_QWORD *)a1 + 6),
                        v26,
                        0LL,
                        1LL,
                        1);
    }
    else
    {
      v27 = v92;
    }
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v93, v27);
    if ( !v93 )
    {
      v7 = 0;
    }
    else
    {
LABEL_36:
      OBJECT::SwapShareCount(a1, a2);
      v28 = *((_QWORD *)a1 + 4);
      *((_QWORD *)a1 + 70) = a2;
      *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
      v29 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v28;
      v30 = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 18) = v29;
      v31 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v30;
      v32 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 20) = v31;
      v33 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v32;
      v34 = v33 & 0x8000 | *((_WORD *)a1 + 7) & 0x4000;
      *((_WORD *)a1 + 7) = *((_WORD *)a1 + 7) & 0x8000 | v33 & 0x4000;
      LODWORD(v31) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v34;
      LODWORD(v32) = *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v31;
      v35 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v32;
      v36 = *((_QWORD *)a1 + 22);
      *((_QWORD *)a1 + 22) = v35;
      *((_QWORD *)a2 + 22) = v36;
      v37 = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v37;
      v38 = *((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v37) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 16) = v38;
      LODWORD(v38) = *((_DWORD *)a1 + 80);
      *((_DWORD *)a1 + 80) = v37;
      LODWORD(v37) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v38;
      LODWORD(v38) = *((_DWORD *)a1 + 81);
      *((_DWORD *)a1 + 81) = v37;
      *((_DWORD *)a2 + 81) = v38;
      v39 = *((_QWORD *)a1 + 61);
      v40 = *(_OWORD *)((char *)a1 + 344);
      v97 = *(_OWORD *)((char *)a1 + 328);
      v41 = *(_OWORD *)((char *)a1 + 360);
      v98 = v40;
      v42 = *(_OWORD *)((char *)a1 + 376);
      v99 = v41;
      v43 = *(_OWORD *)((char *)a1 + 392);
      v100 = v42;
      v44 = *(_OWORD *)((char *)a1 + 408);
      v101 = v43;
      v45 = *(_OWORD *)((char *)a1 + 424);
      v102 = v44;
      v46 = *(_OWORD *)((char *)a1 + 440);
      v103 = v45;
      v47 = *(_OWORD *)((char *)a1 + 456);
      v104 = v46;
      v48 = *(_OWORD *)((char *)a1 + 472);
      v105 = v47;
      v106 = v48;
      v107 = v39;
      *(_OWORD *)((char *)a1 + 328) = *(_OWORD *)((char *)a2 + 328);
      *(_OWORD *)((char *)a1 + 344) = *(_OWORD *)((char *)a2 + 344);
      *(_OWORD *)((char *)a1 + 360) = *(_OWORD *)((char *)a2 + 360);
      *(_OWORD *)((char *)a1 + 376) = *(_OWORD *)((char *)a2 + 376);
      *(_OWORD *)((char *)a1 + 392) = *(_OWORD *)((char *)a2 + 392);
      *(_OWORD *)((char *)a1 + 408) = *(_OWORD *)((char *)a2 + 408);
      *(_OWORD *)((char *)a1 + 424) = *(_OWORD *)((char *)a2 + 424);
      *(_OWORD *)((char *)a1 + 440) = *(_OWORD *)((char *)a2 + 440);
      *(_OWORD *)((char *)a1 + 456) = *(_OWORD *)((char *)a2 + 456);
      *(_OWORD *)((char *)a1 + 472) = *(_OWORD *)((char *)a2 + 472);
      *((_QWORD *)a1 + 61) = *((_QWORD *)a2 + 61);
      v49 = v98;
      *(_OWORD *)((char *)a2 + 328) = v97;
      v50 = v99;
      *(_OWORD *)((char *)a2 + 344) = v49;
      v51 = v100;
      *(_OWORD *)((char *)a2 + 360) = v50;
      v52 = v101;
      *(_OWORD *)((char *)a2 + 376) = v51;
      v53 = v102;
      *(_OWORD *)((char *)a2 + 392) = v52;
      v54 = v103;
      *(_OWORD *)((char *)a2 + 408) = v53;
      v55 = v104;
      *(_OWORD *)((char *)a2 + 424) = v54;
      v56 = v105;
      *(_OWORD *)((char *)a2 + 440) = v55;
      v57 = v106;
      v58 = v107;
      *(_OWORD *)((char *)a2 + 456) = v56;
      v59 = *((_OWORD *)a2 + 31);
      *(_OWORD *)((char *)a2 + 472) = v57;
      *((_QWORD *)a2 + 61) = v58;
      v60 = *((_OWORD *)a1 + 31);
      v61 = *((_OWORD *)a1 + 32);
      *((_OWORD *)a1 + 31) = v59;
      *((_OWORD *)a1 + 32) = *((_OWORD *)a2 + 32);
      *((_OWORD *)a2 + 31) = v60;
      *((_OWORD *)a2 + 32) = v61;
      LODWORD(v38) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = *((_DWORD *)a2 + 28) ^ (*((_DWORD *)a2 + 28) ^ v38) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v38 ^ (*((_DWORD *)a2 + 28) ^ v38) & 0x3B5EF;
      LODWORD(v38) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v38 ^ (*((_DWORD *)a2 + 29) ^ v38) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (*((_DWORD *)a2 + 29) ^ v38) & 0x3FFF;
      LODWORD(v38) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = v38 ^ (*((_DWORD *)a2 + 28) ^ v38) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (*((_DWORD *)a2 + 28) ^ v38) & 0xC00000;
      LODWORD(v38) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v38 ^ (*((_DWORD *)a2 + 29) ^ v38) & 0x390D;
      v62 = (struct _EPROCESS *)*((_QWORD *)a2 + 80);
      *((_DWORD *)a2 + 29) ^= (*((_DWORD *)a2 + 29) ^ v38) & 0x390D;
      v63 = (struct _EPROCESS *)*((_QWORD *)a1 + 80);
      SURFACE::vAppContainerOwner(a1, v62);
      SURFACE::vAppContainerOwner(a2, v63);
      if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
      {
        v64 = *(_QWORD *)((char *)a1 + 668);
        v65 = *((_DWORD *)a1 + 165);
        v66 = *((_DWORD *)a1 + 166);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 165) = v65;
        *((_DWORD *)a2 + 166) = v66;
        *(_QWORD *)((char *)a2 + 668) = v64;
      }
      if ( v82 )
      {
        *v20 &= ~0x200u;
        v67 = *(_DWORD *)a2 & 0x800000;
        if ( v67 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v84 && v67 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v87 = 1;
      }
      if ( v89 )
      {
        v68 = *v89;
        v89 = 0LL;
        v90 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v89, v68);
        if ( v24 && qword_1C02D5810 && (int)qword_1C02D5810() >= 0 && qword_1C02D5818 )
          qword_1C02D5818(*((_QWORD *)v14 + 6), v89, a2, v93);
        while ( 1 )
        {
          v69 = SURFACE::GetFirstLSurf(a1);
          if ( !v69 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 && qword_1C02D5828 )
            qword_1C02D5828(*((_QWORD *)v14 + 6), v69, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v89);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v70 = HmgShareLockEx(*((_QWORD *)a2 + 18), 5, 0);
        v71 = v70;
        if ( v70 )
        {
          if ( *(_QWORD *)(v70 + 24) && qword_1C02D5830 && (int)qword_1C02D5830() >= 0 && qword_1C02D5838 )
            qword_1C02D5838(*(_QWORD *)(v71 + 24), v96, v95);
          HmgDecrementShareReferenceCountEx((int *)v71, 0LL);
        }
      }
      if ( v86 )
      {
        HmgDecrementShareReferenceCountEx((int *)a1, 0LL);
        HmgIncrementShareReferenceCount((int *)a2);
      }
      if ( *((_DWORD *)a1 + 2) )
      {
        *v87 = 1;
        goto LABEL_74;
      }
      v87 = (int *)HmgShareLockCheck(*((_QWORD *)a1 + 4), 5);
      SURFREFVIEW::bUnMapImmediate(v88, v72, v73);
      v88[0] = 0LL;
      v7 = SURFREF::bDeleteSurface((SURFREF *)&v87);
      if ( !v7 )
        *((_QWORD *)a1 + 70) = 0LL;
      if ( v87 )
        HmgDecrementShareReferenceCountEx(v87, 0LL);
      if ( v7 )
      {
LABEL_74:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v93);
        if ( v7 )
          goto LABEL_83;
LABEL_77:
        if ( v82 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v76 = *(_DWORD *)a1 & 0x800000;
          if ( v76 )
            *v20 |= 0x200u;
          if ( v84 && v76 )
            *v20 |= 0x400u;
        }
        goto LABEL_83;
      }
    }
    v74 = HmgQueryAltLock(*((_QWORD *)a1 + 4));
    v75 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
    HmgSwapLockedHandleContents(*((_QWORD *)a2 + 4), v75, *((_QWORD *)a1 + 4), v74, 5);
    goto LABEL_74;
  }
  v7 = 0;
LABEL_83:
  SURFREFVIEW::bUnMapImmediate(v91, v18, v19);
  v91[0] = 0LL;
  SURFREFVIEW::bUnMapImmediate(v88, v77, v78);
  v88[0] = 0LL;
LABEL_86:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v91);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v88);
  return v7;
}
