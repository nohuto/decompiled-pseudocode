/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005E63C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005E8F8 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C005EB50 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C015AC60 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F908 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C003FAF4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0047860 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z @ 0x1C0047980 (-dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C0047A04 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     PALLOCMEM @ 0x1C004F000 (PALLOCMEM.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0078150 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     Win32CreateSection @ 0x1C007E7E8 (Win32CreateSection.c)
 *     PALLOCNOZ @ 0x1C008AF78 (PALLOCNOZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C009A7B8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009D9C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B5870 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     Feature_1746721083__private_IsEnabledDeviceUsage @ 0x1C00D284C (Feature_1746721083__private_IsEnabledDeviceUsage.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A68 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C0158294 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0158350 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C01584E0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C01586EC (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C0169C28 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C016A070 (EngFreeUserMem.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v13; // r14d
  int v14; // r15d
  unsigned __int64 v15; // rbx
  bool v16; // zf
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int64 v39; // rcx
  __int64 v40; // r15
  _DWORD *v41; // r12
  int v42; // eax
  int v43; // eax
  PVOID v44; // rax
  int v45; // r8d
  unsigned __int64 v46; // rcx
  void *v47; // rax
  struct SURFACE *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  PVOID v55; // rcx
  HPALETTE v56; // rdx
  __int64 v57; // rdx
  _WORD *v58; // r15
  __int64 v59; // rax
  __int64 CurrentThread; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // r8
  int v72; // eax
  __int64 v73; // rcx
  SURFACE *v74; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int128 v76; // xmm0
  _OWORD *v77; // rax
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  PVOID Object; // [rsp+50h] [rbp-91h] BYREF
  int v81; // [rsp+58h] [rbp-89h]
  __int64 v82; // [rsp+60h] [rbp-81h]
  void *v83; // [rsp+68h] [rbp-79h] BYREF
  __int64 v84; // [rsp+70h] [rbp-71h] BYREF
  __int64 v85; // [rsp+78h] [rbp-69h] BYREF
  __int128 v86; // [rsp+80h] [rbp-61h] BYREF
  __int128 v87; // [rsp+90h] [rbp-51h]
  __int128 v88; // [rsp+A0h] [rbp-41h]
  _BYTE v89[112]; // [rsp+B0h] [rbp-31h] BYREF
  PEPROCESS Process; // [rsp+130h] [rbp+4Fh] BYREF
  int v91; // [rsp+138h] [rbp+57h]
  PVOID pv; // [rsp+140h] [rbp+5Fh] BYREF
  void *v93; // [rsp+148h] [rbp+67h]

  v93 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v13 = 1;
  v91 = 0;
  v14 = 0;
  LODWORD(v15) = 0;
  if ( *((_DWORD *)a2 + 1) > 0x7FFFFFFFu || *((_DWORD *)a2 + 2) > 0x7FFFFFFFu )
    return 0LL;
  v16 = (unsigned int)Feature_1746721083__private_IsEnabledDeviceUsage() == 0;
  v18 = *(_DWORD *)a2;
  if ( !v16 )
  {
    v29 = *((unsigned int *)a2 + 1);
    if ( v18 > 6 )
    {
      v37 = v18 - 7;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          if ( v38 - 1 > 1 )
            return 0LL;
        }
      }
      LODWORD(v15) = 0;
LABEL_46:
      v14 = 1;
      goto LABEL_47;
    }
    if ( v18 == 6 )
    {
      v15 = 4 * v29;
    }
    else
    {
      v30 = v18 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              if ( v33 != 1 )
                return 0LL;
              v34 = 3 * (v29 + 1);
            }
            else
            {
              v34 = 2 * v29 + 2;
            }
          }
          else
          {
            v34 = v29 + 3;
          }
          v15 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
          goto LABEL_40;
        }
        v35 = 0x7FFFFFFFFFFFFFFCLL;
        v36 = (unsigned __int64)(v29 + 7) >> 1;
      }
      else
      {
        v35 = 0x1FFFFFFFFFFFFFFCLL;
        v36 = (unsigned __int64)(v29 + 31) >> 3;
      }
      v15 = v35 & v36;
    }
LABEL_40:
    if ( v15 > 0x7FFFFFFF )
      return 0LL;
    goto LABEL_47;
  }
  if ( v18 > 6 )
  {
    v26 = v18 - 7;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 - 1 >= 2 )
          return 0LL;
      }
    }
    goto LABEL_46;
  }
  if ( v18 == 6 )
  {
    v25 = *((_DWORD *)a2 + 1);
    if ( v25 >= 0x3FFFFFFF )
      return 0LL;
    LODWORD(v15) = 4 * v25;
  }
  else
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 != 1 )
              return 0LL;
            v23 = *((_DWORD *)a2 + 1);
            if ( v23 >= 0x55555554 )
              return 0LL;
            v24 = 3 * (v23 + 1);
          }
          else
          {
            v17 = *((unsigned int *)a2 + 1);
            if ( (unsigned int)(v17 + 1) >= 0x7FFFFFFF )
              return 0LL;
            v24 = 2 * v17 + 2;
          }
        }
        else
        {
          v24 = *((_DWORD *)a2 + 1) + 3;
        }
        LODWORD(v15) = v24 & 0xFFFFFFFC;
      }
      else
      {
        LODWORD(v15) = ((unsigned int)(*((_DWORD *)a2 + 1) + 7) >> 1) & 0x7FFFFFFC;
      }
    }
    else
    {
      LODWORD(v15) = ((unsigned int)(*((_DWORD *)a2 + 1) + 31) >> 3) & 0x1FFFFFFC;
    }
  }
LABEL_47:
  Object = 0LL;
  v86 = 0LL;
  v81 = 0;
  v87 = 0LL;
  v83 = 0LL;
  v88 = 0LL;
  LOBYTE(Process) = 0;
  if ( pv )
  {
    if ( !a9
      || (!v14
        ? (v17 = (unsigned int)v15 * (unsigned __int64)*((unsigned int *)a2 + 2))
        : (v17 = *((unsigned int *)a2 + 3)),
          v17 <= 0x7FFFFFFF) )
    {
      v41 = (_DWORD *)((char *)a2 + 24);
      if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
        goto LABEL_77;
      W32PIDLOCK::vInit((W32PIDLOCK *)&v86);
      if ( *((_QWORD *)&v88 + 1) )
      {
        v91 = 2048;
        v81 = 1;
        goto LABEL_77;
      }
    }
    return 0LL;
  }
  if ( v14 )
    v39 = *((unsigned int *)a2 + 3);
  else
    v39 = (unsigned int)v15 * (unsigned __int64)*((unsigned int *)a2 + 2);
  v40 = v39 + 856;
  if ( v39 + 856 < v39 || (unsigned __int64)v40 > 0x7FFFFFFF )
    return 0LL;
  v41 = (_DWORD *)((char *)a2 + 24);
  v42 = *((_DWORD *)a2 + 6);
  if ( (v42 & 0x40000) != 0 && v40 > 4096 )
  {
    v42 |= 8u;
    *v41 = v42;
  }
  if ( (v42 & 8) == 0 )
  {
    if ( (v42 & 0x810) == 0 )
      goto LABEL_73;
    if ( (v42 & 0x800) == 0 )
    {
      AllocateKernelSection(v40, 0xFFFFFFFC, &pv);
      v44 = Object;
      goto LABEL_68;
    }
    W32PIDLOCK::vInit((W32PIDLOCK *)&v86);
    if ( *((_QWORD *)&v88 + 1) )
    {
      v84 = (unsigned int)(v40 - 856);
      Win32CreateSection((unsigned int)&Object, 6, v45, (unsigned int)&v84);
      v44 = Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v86);
        return 0LL;
      }
LABEL_68:
      v17 = (unsigned __int64)pv;
      if ( !pv && !v44 )
        goto LABEL_73;
      v91 = *v41 & 0x800 | 0x10;
      goto LABEL_71;
    }
    return 0LL;
  }
  if ( (v42 & 0x80u) == 0 )
    v43 = EngAllocUserMemEx((int)v40, 4294967292LL, &pv);
  else
    v43 = AllocateSharedSection(v40, 0xFFFFFFFC, &Object, &v83, &pv);
  if ( v43 < 0 )
    return 0LL;
  v17 = (unsigned __int64)pv;
  v44 = Object;
LABEL_71:
  if ( v17 || v44 )
    goto LABEL_77;
LABEL_73:
  v46 = (unsigned int)(v40 - 856);
  if ( (*v41 & 2) != 0 )
    v47 = (void *)PALLOCNOZ(v46, 0x6D627047u);
  else
    v47 = (void *)PALLOCMEM(v46, 0x6D627047u);
  pv = v47;
  LOBYTE(Process) = 1;
  if ( !v47 )
    return 0LL;
LABEL_77:
  v48 = SURFACE::Allocate(v17);
  *(_QWORD *)this = v48;
  if ( v48 )
  {
    v82 = *(_QWORD *)((char *)a2 + 4);
    *((_QWORD *)v48 + 7) = v82;
    *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
    v56 = (HPALETTE)*((_QWORD *)a2 + 2);
    if ( v56 )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v85, v56);
      v57 = *(_QWORD *)this;
      if ( v85 )
      {
        *(_QWORD *)(v57 + 128) = v85;
        v85 = 0LL;
      }
      else
      {
        *(_QWORD *)(v57 + 128) = 0LL;
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v85);
      v58 = (_WORD *)((char *)a2 + 24);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      v58 = v41;
    }
    *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
    pv = 0LL;
    *(_BYTE *)(*(_QWORD *)this + 688LL) = (_BYTE)Process;
    *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
    *(_WORD *)(*(_QWORD *)this + 102LL) = v91 | *v58 & 0x89;
    *(_DWORD *)(*(_QWORD *)this + 208LL) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_QWORD *)(*(_QWORD *)this + 184LL) = v93;
    *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
    *(_QWORD *)(*(_QWORD *)this + 192LL) = a6;
    *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
    *(_DWORD *)(*(_QWORD *)this + 216LL) = a10;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
    SURFACE::dhpdev(*(SURFACE **)this, 0LL);
    *(_DWORD *)(*(_QWORD *)this + 112LL) = *(_DWORD *)v58 & 0x40000;
    if ( (*(_DWORD *)v58 & 0x4000000) != 0 )
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x4000000u;
    v59 = *(_QWORD *)this;
    v82 = 0LL;
    *(_QWORD *)(v59 + 136) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
    SURFACE::hdev(*(SURFACE **)this, 0LL);
    *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
    CurrentThread = W32GetCurrentThread();
    if ( CurrentThread )
      *(_QWORD *)(CurrentThread + 304) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 648LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 656LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 120LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
    v61 = (_QWORD *)(*(_QWORD *)this + 232LL);
    v61[1] = v61;
    *v61 = v61;
    *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
    v62 = (_QWORD *)(*(_QWORD *)this + 528LL);
    v62[1] = v62;
    *v62 = v62;
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    if ( v81 )
      *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
    if ( a6 && !a10 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
    v63 = *(_QWORD *)this;
    if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
    {
      *(_WORD *)(v63 + 102) &= ~0x800u;
      *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
        *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
      else
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    }
    else
    {
      *(_DWORD *)(v63 + 64) = *((_DWORD *)a2 + 2) * v15;
      v64 = *(_QWORD *)this;
      if ( (*(_DWORD *)v58 & 1) != 0 )
      {
        *(_DWORD *)(v64 + 88) = v15;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
      }
      else
      {
        *(_DWORD *)(v64 + 88) = -(int)v15;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                            + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 64LL) - v15);
      }
    }
    v65 = *(_QWORD *)this;
    if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
    {
      *(_QWORD *)(v65 + 584) = Object;
      *(_QWORD *)(*(_QWORD *)this + 592LL) = v83;
      *(_QWORD *)(*(_QWORD *)this + 600LL) = (char *)v83
                                           + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                           - *(_QWORD *)(*(_QWORD *)this + 72LL);
      *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
      v66 = W32GetCurrentThread();
      if ( v66 && (v67 = *(_QWORD *)(v66 + 72)) != 0 )
      {
        v65 = *(_QWORD *)this;
        *(_DWORD *)(*(_QWORD *)this + 612LL) = *(_DWORD *)(v67 + 8);
        *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)this + 612LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 616LL) = 0;
      }
    }
    v68 = SGDGetSessionState(v65);
    v69 = *(_QWORD *)this;
    *(_DWORD *)(v69 + 92) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v68 + 24) + 6492LL));
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v89);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v89, *(struct OBJECT **)this, 1u, a8 != 0, 5) )
    {
      v72 = a11;
      *((_DWORD *)this + 3) = a11;
      if ( v72 )
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
      v73 = *(_QWORD *)this;
      *(_QWORD *)(v73 + 32) = **(_QWORD **)this;
      v74 = *(SURFACE **)this;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v73, v70, v71);
      SURFACE::vAppContainerOwner(v74, CurrentProcess);
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
      {
        v84 = *(_QWORD *)(*(_QWORD *)this + 128LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v84);
        *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      }
      SURFACE::Free(*(PVOID *)this);
      *(_QWORD *)this = 0LL;
      v13 = 0;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v89);
    if ( v13 )
    {
      if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((_QWORD *)&v88 + 1) )
      {
        v76 = v86;
        *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
        v77 = *(_OWORD **)this;
        v78 = v87;
        v77[17] = v76;
        v79 = v88;
        v77[18] = v78;
        v77[19] = v79;
        *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
      }
      return v13;
    }
  }
  else
  {
    v13 = 0;
  }
  if ( pv || Object )
  {
    if ( (*v41 & 8) != 0 )
    {
      if ( (*v41 & 0x80u) == 0 )
      {
        EngFreeUserMem(pv);
      }
      else
      {
        v51 = W32GetCurrentThread();
        if ( *(_QWORD *)(v51 + 72) )
        {
          v53 = PsGetCurrentProcess(v50, v49, v52);
          MmUnmapViewOfSection(v53);
          v54 = *(_QWORD *)(v51 + 72);
          Process = 0LL;
          if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v54 + 8), &Process) >= 0 )
          {
            MmUnmapViewOfSection(Process);
            ObfDereferenceObject(Process);
          }
          v55 = Object;
          if ( !Object )
            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
LABEL_139:
          ObfDereferenceObject(v55);
        }
      }
    }
    else
    {
      if ( (v91 & 0x800) == 0 )
      {
        if ( (v91 & 0x10) != 0 )
        {
          vFreeKernelSection(pv);
        }
        else if ( (_BYTE)Process && pv )
        {
          Win32FreePool((char *)pv);
        }
        return v13;
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v86);
      if ( !v81 )
      {
        v55 = Object;
        if ( !Object )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
        goto LABEL_139;
      }
    }
  }
  return v13;
}
