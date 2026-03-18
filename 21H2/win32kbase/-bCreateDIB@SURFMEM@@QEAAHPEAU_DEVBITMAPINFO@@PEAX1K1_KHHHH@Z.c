/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001A590
 * Callers:
 *     GreCreateBitmap @ 0x1C001A360 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0063A90 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00DA580 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AFA8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001E8AC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     PALLOCNOZ @ 0x1C0027CFC (PALLOCNOZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0028D70 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0028F60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0045150 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     Win32CreateSection @ 0x1C0055E80 (Win32CreateSection.c)
 *     PALLOCMEM @ 0x1C0086980 (PALLOCMEM.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C008B768 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     EngAllocUserMemEx @ 0x1C00A6438 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C00A8740 (EngFreeUserMem.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B2270 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0168DA4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C016B920 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C016B9DC (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C016BB6C (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C016BC30 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        struct _KPROCESS *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v14; // r14d
  int v15; // r13d
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  int v21; // ebx
  unsigned __int64 v22; // rcx
  __int64 v23; // r15
  int v24; // eax
  int v25; // eax
  PVOID v26; // rax
  unsigned __int64 v28; // rcx
  void *v29; // rax
  char v30; // r15
  struct SURFACE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  struct _KPROCESS *BugCheckParameter4; // r15
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  PVOID v43; // rcx
  HPALETTE v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 CurrentThread; // rax
  __int64 v52; // r8
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  char *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  struct _SLIST_ENTRY *v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  SURFACE *v68; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int128 v70; // xmm0
  _OWORD *v71; // rax
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  PVOID Object; // [rsp+50h] [rbp-81h] BYREF
  __int64 v75; // [rsp+58h] [rbp-79h]
  void *v76; // [rsp+60h] [rbp-71h] BYREF
  __int64 v77; // [rsp+68h] [rbp-69h] BYREF
  __int64 v78; // [rsp+70h] [rbp-61h] BYREF
  __int128 v79; // [rsp+78h] [rbp-59h] BYREF
  __int128 v80; // [rsp+88h] [rbp-49h]
  __int128 v81; // [rsp+98h] [rbp-39h]
  _BYTE v82[104]; // [rsp+A8h] [rbp-29h] BYREF
  PEPROCESS Process; // [rsp+120h] [rbp+4Fh] BYREF
  int v84; // [rsp+128h] [rbp+57h]
  PVOID pv; // [rsp+130h] [rbp+5Fh] BYREF
  void *v86; // [rsp+138h] [rbp+67h]

  v86 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v14 = 1;
  LOWORD(v15) = 0;
  v16 = 0LL;
  v17 = *((unsigned int *)a2 + 1);
  v18 = 0;
  if ( (unsigned int)v17 > 0x7FFFFFFF )
    return 0LL;
  v19 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v19 > 0x7FFFFFFF )
    return 0LL;
  v20 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v18 = ((unsigned int)(v17 + 31) >> 3) & 0x1FFFFFFC;
    goto LABEL_21;
  }
  switch ( v20 )
  {
    case 2:
      v18 = ((unsigned int)(v17 + 7) >> 1) & 0x7FFFFFFC;
      break;
    case 3:
      v21 = v17 + 3;
LABEL_18:
      v18 = v21 & 0xFFFFFFFC;
      break;
    case 4:
      if ( (unsigned int)(v17 + 1) >= 0x7FFFFFFF )
        return 0LL;
      v21 = 2 * v17 + 2;
      goto LABEL_18;
    case 5:
      if ( (unsigned int)v17 >= 0x55555554 )
        return 0LL;
      v21 = 3 * (v17 + 1);
      goto LABEL_18;
    case 6:
      if ( (unsigned int)v17 >= 0x3FFFFFFF )
        return 0LL;
      v18 = 4 * v17;
      break;
    default:
      if ( (unsigned int)(v20 - 7) > 3 )
        return 0LL;
      v16 = 1LL;
      break;
  }
LABEL_21:
  LODWORD(v75) = SURFACE::tSize;
  Object = 0LL;
  v84 = 0;
  v76 = 0LL;
  LOBYTE(Process) = 0;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( a3 )
  {
    if ( a9 )
    {
      v17 = (_DWORD)v16 ? *((unsigned int *)a2 + 3) : v18 * v19;
      if ( v17 > 0x7FFFFFFF )
        return 0LL;
    }
    if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
    {
      v30 = 0;
      goto LABEL_63;
    }
    W32PIDLOCK::vInit((W32PIDLOCK *)&v79);
    if ( *((_QWORD *)&v81 + 1) )
    {
      LOWORD(v15) = 2048;
      v84 = 1;
      v30 = 0;
      goto LABEL_63;
    }
    return 0LL;
  }
  if ( (_DWORD)v16 )
    v22 = *((unsigned int *)a2 + 3);
  else
    v22 = v18 * v19;
  v23 = v22 + (unsigned int)SURFACE::tSize;
  if ( v23 < v22 || (unsigned __int64)v23 > 0x7FFFFFFF )
    return 0LL;
  v24 = *((_DWORD *)a2 + 6);
  if ( (v24 & 0x40000) != 0 && v23 > 4096 )
  {
    v24 |= 8u;
    *((_DWORD *)a2 + 6) = v24;
  }
  if ( (v24 & 8) != 0 )
  {
    if ( (v24 & 0x80u) == 0 )
      v25 = EngAllocUserMemEx((int)v23, v16, &pv);
    else
      v25 = AllocateSharedSection(v23, v16, &Object, &v76, &pv);
    if ( v25 < 0 )
      return 0LL;
    v17 = (unsigned __int64)pv;
    v26 = Object;
LABEL_46:
    if ( v17 || v26 )
    {
      v30 = (char)Process;
      goto LABEL_63;
    }
    goto LABEL_48;
  }
  if ( (v24 & 0x810) != 0 )
  {
    if ( (v24 & 0x800) == 0 )
    {
      AllocateKernelSection(v23, v16, &pv);
      v26 = Object;
LABEL_43:
      v17 = (unsigned __int64)pv;
      if ( pv || v26 )
      {
        v15 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
        goto LABEL_46;
      }
      goto LABEL_48;
    }
    W32PIDLOCK::vInit((W32PIDLOCK *)&v79);
    if ( *((_QWORD *)&v81 + 1) )
    {
      v77 = (unsigned int)(v23 - v75);
      Win32CreateSection((unsigned int)&Object, 6, 0, (unsigned int)&v77);
      v26 = Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v79);
        return 0LL;
      }
      goto LABEL_43;
    }
    return 0LL;
  }
LABEL_48:
  v28 = (unsigned int)(v23 - v75);
  if ( (*((_DWORD *)a2 + 6) & 2) != 0 )
    v29 = (void *)PALLOCNOZ(v28, 0x6D627047u);
  else
    v29 = (void *)PALLOCMEM(v28, 1835167815LL);
  pv = v29;
  v30 = 1;
  LOBYTE(Process) = 1;
  if ( !v29 )
    return 0LL;
LABEL_63:
  v31 = SURFACE::Allocate(v17, v16);
  v33 = 0LL;
  *(_QWORD *)this = v31;
  if ( !v31 )
  {
    BugCheckParameter4 = 0LL;
    v14 = 0;
    goto LABEL_65;
  }
  v75 = *(_QWORD *)((char *)a2 + 4);
  *((_QWORD *)v31 + 7) = v75;
  *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
  v44 = (HPALETTE)*((_QWORD *)a2 + 2);
  if ( v44 )
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v78, v44);
    v45 = *(_QWORD *)this;
    if ( v78 )
    {
      *(_QWORD *)(v45 + 128) = v78;
      v78 = 0LL;
    }
    else
    {
      *(_QWORD *)(v45 + 128) = 0LL;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v78);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
  v46 = *(_QWORD *)this;
  pv = 0LL;
  *(_BYTE *)(v46 + 688) = v30;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
  *(_WORD *)(*(_QWORD *)this + 102LL) = v15 | *((_WORD *)a2 + 12) & 0x89;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  BugCheckParameter4 = a6;
  *(_DWORD *)(*(_QWORD *)this + 208LL) = CurrentProcessId & 0xFFFFFFFC;
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v86;
  *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 192LL) = BugCheckParameter4;
  *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
  *(_DWORD *)(*(_QWORD *)this + 216LL) = a10;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
  if ( (*((_DWORD *)a2 + 6) & 0x4000000) != 0 )
    *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x4000000u;
  v49 = *(_QWORD *)this;
  v75 = 0LL;
  *(_QWORD *)(v49 + 136) = 0LL;
  v50 = *(_QWORD *)this;
  *(_QWORD *)(v50 + 152) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
  CurrentThread = W32GetCurrentThread(v50, 0LL, v48);
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
  v53 = (_QWORD *)(*(_QWORD *)this + 232LL);
  v53[1] = v53;
  *v53 = v53;
  *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  v54 = (_QWORD *)(*(_QWORD *)this + 528LL);
  v54[1] = v54;
  *v54 = v54;
  *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
  if ( v84 )
    *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
  if ( BugCheckParameter4 )
  {
    BugCheckParameter4 = 0LL;
    if ( !a10 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
  }
  v55 = *(_QWORD *)this;
  if ( (unsigned int)(*(_DWORD *)a2 - 7) > 3 )
  {
    *(_DWORD *)(v55 + 64) = v18 * *((_DWORD *)a2 + 2);
    v56 = *(_QWORD *)this;
    if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
    {
      *(_DWORD *)(v56 + 88) = -v18;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                          + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                          - v18;
      goto LABEL_96;
    }
    *(_DWORD *)(v56 + 88) = v18;
    goto LABEL_94;
  }
  *(_WORD *)(v55 + 102) &= ~0x800u;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = (_DWORD)BugCheckParameter4;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(*(_DWORD *)a2 - 9) > 1 )
  {
LABEL_94:
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    goto LABEL_96;
  }
  *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
LABEL_96:
  if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 584LL) = Object;
    *(_QWORD *)(*(_QWORD *)this + 592LL) = v76;
    v57 = *(_QWORD *)this;
    v58 = (char *)v76 + *(_QWORD *)(*(_QWORD *)this + 80LL) - *(_QWORD *)(*(_QWORD *)this + 72LL);
    *(_QWORD *)(v57 + 600) = v58;
    *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
    v59 = W32GetCurrentThread(v58, v57, v52);
    if ( v59 && (v60 = *(_QWORD *)(v59 + 72)) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = *(_DWORD *)(v60 + 8);
      *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = (_DWORD)BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 616LL) = (_DWORD)BugCheckParameter4;
    }
  }
  v61 = *(_QWORD *)this;
  *(_DWORD *)(v61 + 92) = _InterlockedIncrement((volatile signed __int32 *)&_ulGlobalSurfaceUnique);
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v82);
  if ( HmgInsertObjectHelper::Insert(
         (HmgInsertObjectHelper *)v82,
         *(struct OBJECT **)this,
         1,
         a8 != (_DWORD)BugCheckParameter4,
         5u) )
  {
    v66 = a11;
    *((_DWORD *)this + 3) = a11;
    if ( v66 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
    v67 = *(_QWORD *)this;
    *(_QWORD *)(v67 + 32) = **(_QWORD **)this;
    v68 = *(SURFACE **)this;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v67, v62, v63, v64);
    SURFACE::vAppContainerOwner(v68, CurrentProcess);
  }
  else
  {
    v65 = *(struct _SLIST_ENTRY **)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
    {
      v77 = *(_QWORD *)(*(_QWORD *)this + 128LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v77);
      *(_QWORD *)(*(_QWORD *)this + 128LL) = BugCheckParameter4;
      v65 = *(struct _SLIST_ENTRY **)this;
    }
    SURFACE::Free(v65);
    *(_QWORD *)this = BugCheckParameter4;
    v14 = (unsigned int)BugCheckParameter4;
  }
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v82);
  if ( v14 )
  {
    if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((struct _KPROCESS **)&v81 + 1) != BugCheckParameter4 )
    {
      v70 = v79;
      *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
      v71 = *(_OWORD **)this;
      v72 = v80;
      v71[17] = v70;
      v73 = v81;
      v71[18] = v72;
      v71[19] = v73;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = BugCheckParameter4;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
    }
    return v14;
  }
LABEL_65:
  if ( !pv && Object == BugCheckParameter4 )
    return v14;
  v35 = *((_DWORD *)a2 + 6);
  if ( (v35 & 8) != 0 )
  {
    if ( (v35 & 0x80u) == 0 )
    {
      EngFreeUserMem(pv);
    }
    else
    {
      v38 = W32GetCurrentThread(pv, v32, v33);
      if ( *(struct _KPROCESS **)(v38 + 72) != BugCheckParameter4 )
      {
        v41 = PsGetCurrentProcess(v37, v36, v39, v40);
        MmUnmapViewOfSection(v41);
        v42 = *(_QWORD *)(v38 + 72);
        Process = BugCheckParameter4;
        if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v42 + 8), &Process) >= 0 )
        {
          MmUnmapViewOfSection(Process);
          ObfDereferenceObject(Process);
        }
        v43 = Object;
        if ( !Object )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
LABEL_117:
        ObfDereferenceObject(v43);
      }
    }
  }
  else
  {
    if ( (v15 & 0x800) == 0 )
    {
      if ( (v15 & 0x10) != 0 )
      {
        vFreeKernelSection(pv);
      }
      else if ( (_BYTE)Process && pv )
      {
        Win32FreePool(pv);
      }
      return v14;
    }
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v79);
    if ( v84 == (_DWORD)BugCheckParameter4 )
    {
      v43 = Object;
      if ( !Object )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
      goto LABEL_117;
    }
  }
  return v14;
}
