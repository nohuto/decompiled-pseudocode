/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C00BA100
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C00BE880 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     HmgQueryAltLock @ 0x1C000DE90 (HmgQueryAltLock.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C001DA78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C002BE8C (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002CB94 (--1SURFREF@@QEAA@XZ.c)
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x1C002E110 (PushThreadGuardedObject.c)
 *     INC_SHARE_REF_CNT @ 0x1C002E2E0 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002F510 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C002FC10 (HmgShareLock.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C007AAA0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C007AAD0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C007AFB0 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C009C0E0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C00AB090 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00AB1BC (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C00B8008 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C00B8154 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     HmgSwapLockedHandleContents @ 0x1C00BE150 (HmgSwapLockedHandleContents.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C920C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00C95B0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00CA204 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C013FA54 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(SURFACE *this, SURFACE *a2, int a3, _DWORD *a4)
{
  unsigned int v7; // r12d
  struct _SURFOBJ *v8; // rdi
  void *v9; // rdx
  struct DC *v10; // r8
  int v11; // eax
  SURFACE *v12; // r13
  __int64 v13; // rbx
  int v14; // eax
  void *v15; // rdx
  struct DC *v16; // r8
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rsi
  int AltLock; // eax
  __int64 v21; // rbx
  int v22; // edi
  int v23; // eax
  int v24; // edi
  HLSURF v25; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  HLSURF *v27; // rsi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int16 v34; // r8
  __int16 v35; // dx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int64 v59; // rax
  __int128 v60; // xmm0
  __int128 v61; // xmm2
  __int128 v62; // xmm3
  __int64 v63; // rdx
  __int64 v64; // rbx
  int v65; // xmm0_4
  int v66; // xmm1_4
  __int64 v67; // rax
  int v68; // eax
  HLSURF v69; // rdx
  int v70; // eax
  int v71; // edi
  __int64 v72; // rcx
  int v73; // eax
  void *v74; // rdx
  struct DC *v75; // r8
  __int64 v76; // rsi
  int v77; // eax
  __int64 v78; // rdi
  int v79; // ebx
  int v80; // eax
  int v81; // eax
  void *v82; // rdx
  struct DC *v83; // r8
  void *v84; // rdx
  struct DC *v85; // r8
  int v88; // [rsp+40h] [rbp-C0h]
  int v89; // [rsp+44h] [rbp-BCh]
  SURFACE *v90[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v91; // [rsp+58h] [rbp-A8h]
  SURFACE *v92[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v93; // [rsp+70h] [rbp-90h]
  __int64 v94; // [rsp+78h] [rbp-88h] BYREF
  __int128 v95; // [rsp+80h] [rbp-80h] BYREF
  __int128 v96; // [rsp+90h] [rbp-70h]
  int v97; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v98; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v99; // [rsp+B0h] [rbp-50h]
  _BYTE v100[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v101; // [rsp+D8h] [rbp-28h]
  int v102; // [rsp+E0h] [rbp-20h]
  __int128 v103; // [rsp+F0h] [rbp-10h]
  __int128 v104; // [rsp+100h] [rbp+0h]
  __int128 v105; // [rsp+110h] [rbp+10h]
  __int128 v106; // [rsp+120h] [rbp+20h]
  __int128 v107; // [rsp+130h] [rbp+30h]
  __int128 v108; // [rsp+140h] [rbp+40h]
  __int128 v109; // [rsp+150h] [rbp+50h]
  __int128 v110; // [rsp+160h] [rbp+60h]
  __int128 v111; // [rsp+170h] [rbp+70h]
  __int128 v112; // [rsp+180h] [rbp+80h]
  __int64 v113; // [rsp+190h] [rbp+90h]
  __int64 v114; // [rsp+1A0h] [rbp+A0h] BYREF
  int v115; // [rsp+1A8h] [rbp+A8h]
  int v116; // [rsp+1ACh] [rbp+ACh]

  v115 = *((_DWORD *)this + 14);
  v116 = *((_DWORD *)this + 15);
  v93 = a4;
  v114 = 0LL;
  v7 = 1;
  v90[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v99 = v8;
  SURFREFVIEW::bMap((SURFREFVIEW *)v90, v8);
  v92[0] = 0LL;
  v98 = (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v92, v98);
  *a4 = 0;
  v11 = *((_DWORD *)this + 28);
  if ( (v11 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v92, v9, v10);
    v92[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v90, v84, v85);
    v90[0] = 0LL;
    goto LABEL_86;
  }
  if ( *((_WORD *)this + 50) == 3 )
  {
LABEL_5:
    v12 = this;
    goto LABEL_8;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v11 & 0x400000) != 0 )
      goto LABEL_5;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_86:
      v7 = 0;
      goto LABEL_87;
    }
  }
  v12 = a2;
LABEL_8:
  v13 = *((_QWORD *)v12 + 6);
  if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
    *((_DWORD *)this + 29) |= 0x10u;
  if ( a3
    || ((*((_DWORD *)v12 + 28) & 0x400) == 0
      ? (v14 = ((__int64 (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, void *, __int64 *, __int64 *))EngCopyBits)(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v114,
                 &v114))
      : (v14 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, void *, __int64 *, __int64 *))(v13 + 2840))(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v114,
                 &v114)),
        v14) )
  {
    if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
      *((_DWORD *)this + 29) &= ~0x10u;
    v17 = *(_DWORD *)this;
    v91 = *((_DWORD *)this + 29) & 0x80;
    v18 = v17 & 0x800000;
    if ( !v18 || (v89 = 1, (*((_WORD *)this + 51) & 0x200) == 0) )
      v89 = 0;
    if ( !v18 || (v88 = 1, (*((_WORD *)this + 51) & 0x400) == 0) )
      v88 = 0;
    v19 = *((_QWORD *)this + 4);
    AltLock = HmgQueryAltLock(v19);
    v21 = *((_QWORD *)a2 + 4);
    v22 = AltLock;
    v23 = HmgQueryAltLock(v21);
    if ( !(unsigned int)HmgSwapLockedHandleContents(v19, v22, v21, v23, 5) )
    {
      v7 = 0;
      goto LABEL_77;
    }
    v24 = 0;
    v25 = 0LL;
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(v100);
    v101 = 0LL;
    v102 = 0;
    FirstLSurf = SURFACE::GetFirstLSurf(this);
    v27 = (HLSURF *)FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_35;
    v24 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_35;
    if ( qword_1C02552F0 )
      v28 = qword_1C02552F0();
    else
      v28 = -1073741637;
    if ( v28 >= 0 && qword_1C02552F8 )
      v25 = (HLSURF)qword_1C02552F8(*((_QWORD *)this + 6), v27, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v100, v25);
    if ( !v101 )
    {
      v7 = 0;
    }
    else
    {
LABEL_35:
      OBJECT::SwapShareCount(this, a2);
      v29 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 70) = a2;
      *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
      v30 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v29;
      v31 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v30;
      v32 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v31;
      v33 = *((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = v32;
      v34 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v33;
      v35 = v34 & 0x8000 | *((_WORD *)this + 7) & 0x4000;
      *((_WORD *)this + 7) = *((_WORD *)this + 7) & 0x8000 | v34 & 0x4000;
      LODWORD(v32) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v35;
      LODWORD(v33) = *((_DWORD *)this + 42);
      *((_DWORD *)this + 42) = v32;
      v36 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v33;
      v37 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v36;
      *((_QWORD *)a2 + 22) = v37;
      v38 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v38;
      v39 = *((_QWORD *)this + 16);
      *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v38) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 16) = v39;
      LODWORD(v39) = *((_DWORD *)this + 80);
      *((_DWORD *)this + 80) = v38;
      LODWORD(v38) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v39;
      LODWORD(v39) = *((_DWORD *)this + 81);
      *((_DWORD *)this + 81) = v38;
      *((_DWORD *)a2 + 81) = v39;
      v40 = *((_QWORD *)this + 61);
      v41 = *(_OWORD *)((char *)this + 344);
      v103 = *(_OWORD *)((char *)this + 328);
      v42 = *(_OWORD *)((char *)this + 360);
      v104 = v41;
      v43 = *(_OWORD *)((char *)this + 376);
      v105 = v42;
      v44 = *(_OWORD *)((char *)this + 392);
      v106 = v43;
      v45 = *(_OWORD *)((char *)this + 408);
      v107 = v44;
      v46 = *(_OWORD *)((char *)this + 424);
      v108 = v45;
      v47 = *(_OWORD *)((char *)this + 440);
      v109 = v46;
      v48 = *(_OWORD *)((char *)this + 456);
      v110 = v47;
      v49 = *(_OWORD *)((char *)this + 472);
      v111 = v48;
      v112 = v49;
      v113 = v40;
      *(_OWORD *)((char *)this + 328) = *(_OWORD *)((char *)a2 + 328);
      *(_OWORD *)((char *)this + 344) = *(_OWORD *)((char *)a2 + 344);
      *(_OWORD *)((char *)this + 360) = *(_OWORD *)((char *)a2 + 360);
      *(_OWORD *)((char *)this + 376) = *(_OWORD *)((char *)a2 + 376);
      *(_OWORD *)((char *)this + 392) = *(_OWORD *)((char *)a2 + 392);
      *(_OWORD *)((char *)this + 408) = *(_OWORD *)((char *)a2 + 408);
      *(_OWORD *)((char *)this + 424) = *(_OWORD *)((char *)a2 + 424);
      *(_OWORD *)((char *)this + 440) = *(_OWORD *)((char *)a2 + 440);
      *(_OWORD *)((char *)this + 456) = *(_OWORD *)((char *)a2 + 456);
      *(_OWORD *)((char *)this + 472) = *(_OWORD *)((char *)a2 + 472);
      *((_QWORD *)this + 61) = *((_QWORD *)a2 + 61);
      v50 = v104;
      *(_OWORD *)((char *)a2 + 328) = v103;
      v51 = v105;
      *(_OWORD *)((char *)a2 + 344) = v50;
      v52 = v106;
      *(_OWORD *)((char *)a2 + 360) = v51;
      v53 = v107;
      *(_OWORD *)((char *)a2 + 376) = v52;
      v54 = v108;
      *(_OWORD *)((char *)a2 + 392) = v53;
      v55 = v109;
      *(_OWORD *)((char *)a2 + 408) = v54;
      v56 = v110;
      *(_OWORD *)((char *)a2 + 424) = v55;
      v57 = v111;
      *(_OWORD *)((char *)a2 + 440) = v56;
      v58 = v112;
      v59 = v113;
      *(_OWORD *)((char *)a2 + 456) = v57;
      v60 = *((_OWORD *)a2 + 31);
      *(_OWORD *)((char *)a2 + 472) = v58;
      *((_QWORD *)a2 + 61) = v59;
      v61 = *((_OWORD *)this + 31);
      v62 = *((_OWORD *)this + 32);
      *((_OWORD *)this + 31) = v60;
      *((_OWORD *)this + 32) = *((_OWORD *)a2 + 32);
      LODWORD(v59) = *((_DWORD *)a2 + 28);
      *((_OWORD *)a2 + 31) = v61;
      *((_OWORD *)a2 + 32) = v62;
      LODWORD(v39) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28) ^ (v39 ^ v59) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v39 ^ (v39 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v39) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v39 ^ (v39 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (v39 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      LODWORD(v39) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v39 ^ (v39 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (v39 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      LODWORD(v39) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v39 ^ (v39 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v63 = *((_QWORD *)a2 + 80);
      *((_DWORD *)a2 + 29) ^= (v39 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v64 = *((_QWORD *)this + 80);
      SURFACE::vAppContainerOwner(this, v63);
      SURFACE::vAppContainerOwner(a2, v64);
      if ( (*((_DWORD *)this + 29) & 0x800) != 0 )
      {
        v65 = *((_DWORD *)this + 165);
        v66 = *((_DWORD *)this + 166);
        v67 = *(_QWORD *)((char *)this + 668);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 165) = v65;
        *((_DWORD *)a2 + 166) = v66;
        *(_QWORD *)((char *)a2 + 668) = v67;
      }
      if ( v89 )
      {
        *((_WORD *)this + 51) &= ~0x200u;
        v68 = *(_DWORD *)a2 & 0x800000;
        if ( v68 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v88 && v68 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v93 = 1;
      }
      if ( v27 )
      {
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(&v94);
        v69 = *v27;
        *((_QWORD *)&v96 + 1) = 0LL;
        v97 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v94, v69);
        if ( v24 )
        {
          if ( qword_1C0255290 )
          {
            v70 = qword_1C0255290();
            v71 = -1073741637;
          }
          else
          {
            v71 = -1073741637;
            v70 = -1073741637;
          }
          if ( v70 >= 0 && qword_1C0255298 )
            qword_1C0255298(*((_QWORD *)v12 + 6), *((_QWORD *)&v96 + 1), a2, v101);
        }
        else
        {
          v71 = -1073741637;
        }
        while ( SURFACE::GetFirstLSurf(this) )
        {
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap();
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v94);
      }
      else
      {
        v71 = -1073741637;
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v94 = HmgShareLock(*((_QWORD *)a2 + 18), 5);
        v95 = 0LL;
        v96 = 0LL;
        PushThreadGuardedObject(
          &v95,
          (__int64)&v94,
          (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic);
        v72 = v94;
        if ( v94 && *(_QWORD *)(v94 + 24) )
        {
          if ( qword_1C02552B0 )
          {
            v73 = qword_1C02552B0();
            v72 = v94;
            v71 = v73;
          }
          if ( v71 >= 0 && qword_1C02552B8 )
            qword_1C02552B8(*(_QWORD *)(v72 + 24), v99, v98);
        }
        UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic(&v94);
        PopThreadGuardedObject(&v95);
      }
      if ( v91 )
      {
        DEC_SHARE_REF_CNT((unsigned int *)this);
        INC_SHARE_REF_CNT((unsigned int *)a2);
      }
      if ( *((_DWORD *)this + 2) )
      {
        *v93 = 1;
LABEL_75:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v100);
LABEL_77:
        if ( !v7 && v89 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v81 = *(_DWORD *)this & 0x800000;
          if ( v81 )
            *((_WORD *)this + 51) |= 0x200u;
          if ( v88 && v81 )
            *((_WORD *)this + 51) |= 0x400u;
        }
        goto LABEL_84;
      }
      SURFREF::SURFREF((SURFREF *)&v94, *((HSURF *)this + 4));
      SURFREFVIEW::bUnMapImmediate(v90, v74, v75);
      v90[0] = 0LL;
      v7 = SURFREF::bDeleteSurface(&v94, 0LL);
      if ( !v7 )
        *((_QWORD *)this + 70) = 0LL;
      SURFREF::~SURFREF((SURFREF *)&v94);
      if ( v7 )
        goto LABEL_75;
    }
    v76 = *((_QWORD *)this + 4);
    v77 = HmgQueryAltLock(v76);
    v78 = *((_QWORD *)a2 + 4);
    v79 = v77;
    v80 = HmgQueryAltLock(v78);
    HmgSwapLockedHandleContents(v78, v80, v76, v79, 5);
    goto LABEL_75;
  }
  v7 = 0;
LABEL_84:
  SURFREFVIEW::bUnMapImmediate(v92, v15, v16);
  v92[0] = 0LL;
  SURFREFVIEW::bUnMapImmediate(v90, v82, v83);
  v90[0] = 0LL;
LABEL_87:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v92);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v90);
  return v7;
}
