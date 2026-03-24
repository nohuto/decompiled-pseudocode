/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0027C60
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001D420 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C0028610 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BE880 (pProcessDfbSurfacesInternal.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00C9DBC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00296EC (--1EPALOBJ@@QEAA@XZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C002B8C0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002BA18 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C002BE8C (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0035EA0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00360A8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     EngFreeUserMem @ 0x1C0048AD0 (EngFreeUserMem.c)
 *     EngAllocUserMemEx @ 0x1C0048BA8 (EngAllocUserMemEx.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C005B66C (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     Win32CreateSection @ 0x1C006C828 (Win32CreateSection.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C00808C0 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0081D30 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00A61F8 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     Feature_2216483128__private_IsEnabledDeviceUsage @ 0x1C00C9B10 (Feature_2216483128__private_IsEnabledDeviceUsage.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C013BC44 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C013EC6C (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C013ED28 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C013EF30 (-vFreeKernelSection@@YAXPEAX@Z.c)
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
  unsigned __int64 v15; // rdi
  bool v16; // zf
  int v17; // eax
  unsigned __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // edi
  int v28; // r13d
  unsigned __int64 v29; // rcx
  __int64 v30; // r15
  int v31; // eax
  int v32; // eax
  PVOID v33; // rax
  int v34; // r8d
  __int16 v35; // r15
  struct SURFACE *v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  PVOID v43; // rcx
  HPALETTE v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int CurrentProcessId; // eax
  void *v48; // r15
  int v49; // r13d
  __int64 v50; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  struct _SLIST_ENTRY *v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int128 v63; // xmm0
  _OWORD *v64; // rax
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  PVOID Object; // [rsp+50h] [rbp-91h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp-89h] BYREF
  int v69; // [rsp+60h] [rbp-81h]
  void *v70; // [rsp+68h] [rbp-79h] BYREF
  __int64 v71; // [rsp+70h] [rbp-71h] BYREF
  _DWORD v72[2]; // [rsp+78h] [rbp-69h] BYREF
  __int128 v73; // [rsp+80h] [rbp-61h] BYREF
  __int128 v74; // [rsp+90h] [rbp-51h]
  __int128 v75; // [rsp+A0h] [rbp-41h]
  __int64 v76; // [rsp+B0h] [rbp-31h] BYREF
  _BYTE v77[104]; // [rsp+B8h] [rbp-29h] BYREF
  char v78; // [rsp+130h] [rbp+4Fh]
  __int16 v79; // [rsp+138h] [rbp+57h]
  PVOID pv; // [rsp+140h] [rbp+5Fh] BYREF
  void *v81; // [rsp+148h] [rbp+67h]

  v81 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v13 = 1;
  v79 = 0;
  v14 = 0;
  LODWORD(v15) = 0;
  if ( *((_DWORD *)a2 + 1) > 0x7FFFFFFFu || *((_DWORD *)a2 + 2) > 0x7FFFFFFFu )
    return 0LL;
  v16 = (unsigned int)Feature_2216483128__private_IsEnabledDeviceUsage() == 0;
  v17 = *(_DWORD *)a2;
  v18 = !v16;
  LOWORD(v19) = -4;
  if ( !v16 )
  {
    v20 = *((unsigned int *)a2 + 1);
    if ( v17 == 1 )
    {
      v22 = 0x1FFFFFFFFFFFFFFCLL;
      v23 = (unsigned __int64)(v20 + 31) >> 3;
    }
    else
    {
      if ( v17 != 2 )
      {
        if ( v17 != 3 )
        {
          if ( v17 == 4 )
          {
            v21 = 2 * v20 + 2;
            goto LABEL_15;
          }
          if ( v17 != 5 )
          {
            if ( v17 != 6 )
            {
              if ( (unsigned int)(v17 - 7) > 3 )
                return 0LL;
              LODWORD(v15) = 0;
              goto LABEL_29;
            }
            v15 = 4 * v20;
            goto LABEL_20;
          }
          v20 *= 3LL;
        }
        v21 = v20 + 3;
LABEL_15:
        v15 = v21 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_20;
      }
      v22 = 0x7FFFFFFFFFFFFFFCLL;
      v23 = (unsigned __int64)(v20 + 7) >> 1;
    }
    v15 = v22 & v23;
LABEL_20:
    if ( v15 > 0x7FFFFFFF )
      return 0LL;
    goto LABEL_40;
  }
  switch ( v17 )
  {
    case 1:
      LODWORD(v15) = ((unsigned int)(*((_DWORD *)a2 + 1) + 31) >> 3) & 0x1FFFFFFC;
      goto LABEL_40;
    case 2:
      LODWORD(v15) = ((unsigned int)(*((_DWORD *)a2 + 1) + 7) >> 1) & 0x7FFFFFFC;
      goto LABEL_40;
    case 3:
      v27 = *((_DWORD *)a2 + 1) + 3;
LABEL_37:
      LODWORD(v15) = v27 & 0xFFFFFFFC;
      goto LABEL_40;
    case 4:
      v18 = *((unsigned int *)a2 + 1);
      if ( (unsigned int)(v18 + 1) >= 0x7FFFFFFF )
        return 0LL;
      v27 = 2 * v18 + 2;
      goto LABEL_37;
    case 5:
      v26 = *((_DWORD *)a2 + 1);
      if ( v26 >= 0x55555554 )
        return 0LL;
      v27 = 3 * (v26 + 1);
      goto LABEL_37;
  }
  if ( v17 != 6 )
  {
    if ( (unsigned int)(v17 - 7) > 3 )
      return 0LL;
LABEL_29:
    v14 = 1;
    goto LABEL_40;
  }
  v25 = *((_DWORD *)a2 + 1);
  if ( v25 >= 0x3FFFFFFF )
    return 0LL;
  LODWORD(v15) = 4 * v25;
LABEL_40:
  v28 = SURFACE::tSize;
  v73 = 0LL;
  Object = 0LL;
  v74 = 0LL;
  v69 = 0;
  v75 = 0LL;
  v70 = 0LL;
  v78 = 0;
  if ( pv )
  {
    if ( a9 )
    {
      v18 = v14 ? *((unsigned int *)a2 + 3) : (unsigned int)v15 * (unsigned __int64)*((unsigned int *)a2 + 2);
      if ( v18 > 0x7FFFFFFF )
        return 0LL;
    }
    if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
      goto LABEL_76;
    W32PIDLOCK::vInit((W32PIDLOCK *)&v73);
    if ( *((_QWORD *)&v75 + 1) )
    {
      v35 = 2048;
      v79 = 2048;
      v69 = 1;
      goto LABEL_77;
    }
    return 0LL;
  }
  if ( v14 )
    v29 = *((unsigned int *)a2 + 3);
  else
    v29 = (unsigned int)v15 * (unsigned __int64)*((unsigned int *)a2 + 2);
  v30 = v29 + (unsigned int)SURFACE::tSize;
  if ( v30 < v29 || (unsigned __int64)v30 > 0x7FFFFFFF )
    return 0LL;
  v31 = *((_DWORD *)a2 + 6);
  if ( (v31 & 0x40000) != 0 && v30 > 4096 )
  {
    v31 |= 8u;
    *((_DWORD *)a2 + 6) = v31;
  }
  if ( (v31 & 8) == 0 )
  {
    if ( (v31 & 0x810) == 0 )
      goto LABEL_66;
    if ( (v31 & 0x800) == 0 )
    {
      AllocateKernelSection(v30, 0xFFFFFFFC, &pv);
      v33 = Object;
      goto LABEL_61;
    }
    W32PIDLOCK::vInit((W32PIDLOCK *)&v73);
    if ( *((_QWORD *)&v75 + 1) )
    {
      v72[1] = 0;
      v72[0] = v30 - v28;
      Win32CreateSection((unsigned int)&Object, 6, v34, (unsigned int)v72);
      v33 = Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v73);
        return 0LL;
      }
LABEL_61:
      v18 = (unsigned __int64)pv;
      if ( !pv && !v33 )
      {
LABEL_66:
        v78 = 1;
        pv = (PVOID)PALLOCMEM2((unsigned int)(v30 - v28));
        if ( !pv )
          return 0LL;
        goto LABEL_76;
      }
      v19 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
      v79 = v19;
      goto LABEL_64;
    }
    return 0LL;
  }
  if ( (v31 & 0x80u) == 0 )
    v32 = EngAllocUserMemEx((int)v30, 4294967292LL, &pv);
  else
    v32 = AllocateSharedSection(v30, 0xFFFFFFFC, &Object, &v70, &pv);
  if ( v32 < 0 )
    return 0LL;
  v18 = (unsigned __int64)pv;
  v33 = Object;
LABEL_64:
  if ( !v18 && !v33 )
    goto LABEL_66;
LABEL_76:
  v35 = v79;
LABEL_77:
  v36 = SURFACE::Allocate(v18, v19);
  *(_QWORD *)this = v36;
  if ( v36 )
  {
    Process = *(PEPROCESS *)((char *)a2 + 4);
    *((_QWORD *)v36 + 7) = Process;
    *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
    v44 = (HPALETTE)*((_QWORD *)a2 + 2);
    if ( v44 )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v71, v44);
      v45 = *(_QWORD *)this;
      if ( v71 )
      {
        *(_QWORD *)(v45 + 128) = v71;
        v71 = 0LL;
      }
      else
      {
        *(_QWORD *)(v45 + 128) = 0LL;
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v71);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
    }
    *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
    v46 = *(_QWORD *)this;
    pv = 0LL;
    *(_BYTE *)(v46 + 688) = v78;
    *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
    *(_WORD *)(*(_QWORD *)this + 102LL) = v35 | *((_WORD *)a2 + 12) & 0x89;
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v48 = a6;
    v49 = a10;
    *(_DWORD *)(*(_QWORD *)this + 208LL) = CurrentProcessId & 0xFFFFFFFC;
    *(_QWORD *)(*(_QWORD *)this + 184LL) = v81;
    *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
    *(_QWORD *)(*(_QWORD *)this + 192LL) = v48;
    *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
    *(_DWORD *)(*(_QWORD *)this + 216LL) = v49;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
    if ( (*((_DWORD *)a2 + 6) & 0x4000000) != 0 )
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x4000000u;
    v50 = *(_QWORD *)this;
    Process = 0LL;
    *(_QWORD *)(v50 + 136) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      *(_QWORD *)(ThreadWin32Thread + 304) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 648LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 656LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 120LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
    v52 = (_QWORD *)(*(_QWORD *)this + 232LL);
    v52[1] = v52;
    *v52 = v52;
    *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
    v53 = (_QWORD *)(*(_QWORD *)this + 528LL);
    v53[1] = v53;
    *v53 = v53;
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    if ( v69 )
      *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
    if ( v48 && !v49 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
    v54 = *(_QWORD *)this;
    if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
    {
      *(_WORD *)(v54 + 102) &= ~0x800u;
      *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
        *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
      else
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    }
    else
    {
      *(_DWORD *)(v54 + 64) = v15 * *((_DWORD *)a2 + 2);
      v55 = *(_QWORD *)this;
      if ( (*((_DWORD *)a2 + 6) & 1) != 0 )
      {
        *(_DWORD *)(v55 + 88) = v15;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
      }
      else
      {
        *(_DWORD *)(v55 + 88) = -(int)v15;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                            + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 64LL) - v15);
      }
    }
    if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 584LL) = Object;
      *(_QWORD *)(*(_QWORD *)this + 592LL) = v70;
      *(_QWORD *)(*(_QWORD *)this + 600LL) = (char *)v70
                                           + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                           - *(_QWORD *)(*(_QWORD *)this + 72LL);
      *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
      v56 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v56 && (v57 = *(_QWORD *)(v56 + 72)) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 612LL) = *(_DWORD *)(v57 + 8);
        *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)this + 612LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 616LL) = 0;
      }
    }
    *(_DWORD *)(*(_QWORD *)this + 92LL) = _InterlockedIncrement((volatile signed __int32 *)&_ulGlobalSurfaceUnique);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v77);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v77, *(struct OBJECT **)this, 1, a8 != 0, 5u) )
    {
      v60 = a11;
      *((_DWORD *)this + 3) = a11;
      if ( v60 )
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
      v61 = *(_QWORD *)this;
      *(_QWORD *)(v61 + 32) = **(_QWORD **)this;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v61, v58);
      SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess);
    }
    else
    {
      v59 = *(struct _SLIST_ENTRY **)this;
      if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
      {
        v76 = *(_QWORD *)(*(_QWORD *)this + 128LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v76);
        *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
        v59 = *(struct _SLIST_ENTRY **)this;
      }
      SURFACE::Free(v59);
      *(_QWORD *)this = 0LL;
      v13 = 0;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v77);
    if ( v13 )
    {
      if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((_QWORD *)&v75 + 1) )
      {
        v63 = v73;
        *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
        v64 = *(_OWORD **)this;
        v65 = v74;
        v64[17] = v63;
        v66 = v75;
        v64[18] = v65;
        v64[19] = v66;
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
    v37 = *((_DWORD *)a2 + 6);
    if ( (v37 & 8) != 0 )
    {
      if ( (v37 & 0x80u) == 0 )
      {
        EngFreeUserMem(pv);
      }
      else
      {
        v40 = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( *(_QWORD *)(v40 + 72) )
        {
          v41 = PsGetCurrentProcess(v39, v38);
          MmUnmapViewOfSection(v41);
          v42 = *(_QWORD *)(v40 + 72);
          Process = 0LL;
          if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v42 + 8), &Process) >= 0 )
          {
            MmUnmapViewOfSection(Process);
            ObfDereferenceObject(Process);
          }
          v43 = Object;
          if ( !Object )
            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
LABEL_131:
          ObfDereferenceObject(v43);
        }
      }
    }
    else
    {
      if ( (v79 & 0x800) == 0 )
      {
        if ( (v79 & 0x10) != 0 )
        {
          vFreeKernelSection(pv);
        }
        else if ( v78 && pv )
        {
          Win32FreePool(pv);
        }
        return v13;
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v73);
      if ( !v69 )
      {
        v43 = Object;
        if ( !Object )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
        goto LABEL_131;
      }
    }
  }
  return v13;
}
