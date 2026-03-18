/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C016E490
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0030540 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EngFreeMem @ 0x1C00486B0 (EngFreeMem.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C006FDF4 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     EngAllocMem @ 0x1C00887E0 (EngAllocMem.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C008DCA0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C016EDF8 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C016EEA0 (bIntersect.c)
 */

struct HDEV__ *__fastcall MulEnablePDEV(
        struct _devicemodeW *a1,
        const unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9)
{
  HDEV v9; // rdi
  int v10; // r12d
  struct _GDIINFO *v11; // rbx
  char **v13; // r14
  struct HDEV__ *v14; // rsi
  __int64 v15; // r9
  char *v16; // r13
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  _OWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  struct _GDIINFO *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  struct tagDEVINFO *v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  int v31; // r12d
  int v32; // eax
  __int128 v33; // xmm0
  __int64 v34; // rax
  char *v35; // r14
  __int64 v36; // rax
  _QWORD *v37; // rbx
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // r8d
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  unsigned int v45; // r12d
  struct tagDEVINFO *v46; // rdx
  int v47; // eax
  unsigned int *v48; // r12
  __int64 v49; // rbx
  bool v50; // zf
  signed __int32 v51; // ett
  __int64 v52; // rax
  signed __int32 v53; // ett
  int v54; // ecx
  HDEV v55; // rbx
  unsigned int *v56; // rcx
  unsigned int v57; // r8d
  int v58; // edx
  _DWORD *v59; // rdx
  _DWORD *v60; // r8
  int v61; // eax
  signed __int32 v62; // ett
  __int64 v63; // rdx
  unsigned int v64; // ebx
  _QWORD *v65; // r12
  unsigned int v66; // r14d
  void *v67; // rsi
  __int64 v68; // rdx
  signed __int32 v69; // ett
  __int64 v70; // r9
  int v71; // eax
  signed __int32 v72; // ett
  signed __int32 v73; // ett
  __int64 v74; // rcx
  signed __int32 v75; // ett
  int v76; // eax
  signed __int32 v77; // ett
  int v79; // edx
  signed __int32 v80; // ett
  unsigned int i; // r8d
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v85; // [rsp+60h] [rbp-A8h]
  int v86; // [rsp+64h] [rbp-A4h]
  __int64 v87; // [rsp+68h] [rbp-A0h]
  unsigned int *v88; // [rsp+70h] [rbp-98h] BYREF
  struct tagDEVINFO *v89; // [rsp+78h] [rbp-90h]
  PVOID pv; // [rsp+80h] [rbp-88h]
  HDEV v91; // [rsp+88h] [rbp-80h] BYREF
  struct _GDIINFO *v92; // [rsp+90h] [rbp-78h]
  char *v93; // [rsp+98h] [rbp-70h]
  char *v94; // [rsp+A8h] [rbp-60h]
  char *v95; // [rsp+B8h] [rbp-50h] BYREF

  v9 = a9;
  v10 = -1;
  v11 = a6;
  v91 = a9;
  v89 = a8;
  v92 = a6;
  v86 = -1;
  v88 = 0LL;
  LODWORD(v84) = 0;
  if ( !a9 )
    return 0LL;
  v13 = &v95;
  v94 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v14 = (struct HDEV__ *)v94;
  if ( !v94 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_91:
    EngFreeMem(v14);
    return 0LL;
  }
  v16 = v94 + 112;
  *((_DWORD *)v94 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  v17 = 0LL;
  *((_QWORD *)v14 + 4) = a9;
  *((_DWORD *)v14 + 18) = 0x7FFFFFFF;
  v18 = 0;
  *((_DWORD *)v14 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 20) = 0x80000000;
  *((_DWORD *)v14 + 21) = 0x80000000;
  v85 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    while ( 1 )
    {
      v19 = 28LL * v18;
      v20 = *(_QWORD *)&a1->dmDeviceName[v19 + 20];
      v21 = *(_QWORD *)(v20 + 2552);
      if ( v21 == -4 && !dword_1C029E438 )
      {
        DbgkWerCaptureLiveKernelDump(L"NTGDI", 400LL, 38LL, v20, a1, 0LL, 0LL, 0LL, 0);
        v21 = *(_QWORD *)(v20 + 2552);
        v18 = v85;
        dword_1C029E438 = 1;
      }
      if ( (*(_DWORD *)(v21 + 160) & 4) != 0 )
      {
        v22 = (_OWORD *)(v20 + 2104);
        v23 = *(_DWORD *)(v20 + 2140) & 0x100;
        v88 = (unsigned int *)v20;
        LODWORD(v84) = v23;
        v24 = 2LL;
        v25 = v92;
        do
        {
          *(_OWORD *)&v25->ulVersion = *v22;
          *(_OWORD *)&v25->ulHorzRes = v22[1];
          *(_OWORD *)&v25->ulNumColors = v22[2];
          *(_OWORD *)&v25->flTextCaps = v22[3];
          *(_OWORD *)&v25->ulAspectX = v22[4];
          *(_OWORD *)&v25->yStyleStep = v22[5];
          *(_OWORD *)&v25->szlPhysSize.cx = v22[6];
          v25 = (struct _GDIINFO *)((char *)v25 + 128);
          v26 = v22[7];
          v22 += 8;
          *(_OWORD *)&v25[-1].flShadeBlend = v26;
          --v24;
        }
        while ( v24 );
        v17 = 2LL;
        *(_OWORD *)&v25->ulVersion = *v22;
        *(_OWORD *)&v25->ulHorzRes = v22[1];
        *(_OWORD *)&v25->ulNumColors = v22[2];
        v27 = v22[3];
        v28 = v89;
        *(_OWORD *)&v25->flTextCaps = v27;
        v29 = (_OWORD *)(v20 + 1792);
        do
        {
          *(_OWORD *)v28 = *v29;
          *((_OWORD *)v28 + 1) = v29[1];
          *((_OWORD *)v28 + 2) = v29[2];
          *((_OWORD *)v28 + 3) = v29[3];
          *((_OWORD *)v28 + 4) = v29[4];
          *((_OWORD *)v28 + 5) = v29[5];
          *((_OWORD *)v28 + 6) = v29[6];
          v28 = (struct tagDEVINFO *)((char *)v28 + 128);
          v30 = v29[7];
          v29 += 8;
          *((_OWORD *)v28 - 1) = v30;
          --v17;
        }
        while ( v17 );
        *(_OWORD *)v28 = *v29;
        *((_OWORD *)v28 + 1) = v29[1];
        *((_OWORD *)v28 + 2) = v29[2];
        *((_QWORD *)v28 + 6) = *((_QWORD *)v29 + 6);
      }
      v31 = *(_DWORD *)(v20 + 1792) & v10;
      v32 = *(_DWORD *)(v20 + 2096) & v86;
      *v13 = v16;
      v13[1] = v16;
      *((_DWORD *)v16 + 4) = v18;
      v33 = *(_OWORD *)&a1->dmDeviceName[v19 + 28];
      v86 = v32;
      LODWORD(v87) = v31;
      *(_OWORD *)(v16 + 28) = v33;
      v34 = *(_QWORD *)&a1->dmDeviceName[v19 + 20];
      *((_QWORD *)v16 + 6) = v34;
      *((_QWORD *)v16 + 7) = v34;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v16 + 56), v17, v18);
      v35 = v95;
      *((_DWORD *)v16 + 18) = -*(_DWORD *)(v20 + 2560);
      *((_DWORD *)v16 + 19) = -*(_DWORD *)(v20 + 2564);
      v36 = *(_QWORD *)(v20 + 2528);
      v37 = v35;
      *((_DWORD *)v16 + 5) = 1;
      *((_QWORD *)v16 + 8) = (v36 + 24) & -(__int64)(v36 != 0);
      if ( v35 == v16 )
      {
        v17 = 0LL;
      }
      else
      {
        do
        {
          v38 = bIntersect((char *)v37 + 28, v16 + 28);
          v17 = 0LL;
          if ( v38 )
          {
            *(_DWORD *)(*((_QWORD *)v16 + 7) + 1792LL) |= 0x8000000u;
            *((_DWORD *)v16 + 5) = 0;
          }
          v37 = (_QWORD *)*v37;
        }
        while ( v37 != (_QWORD *)v16 );
      }
      v15 = 128LL;
      v39 = *((_DWORD *)v14 + 18);
      v40 = v85;
      v10 = v87;
      if ( v39 >= *((_DWORD *)v16 + 7) )
        v39 = *((_DWORD *)v16 + 7);
      *((_DWORD *)v14 + 18) = v39;
      v41 = *((_DWORD *)v16 + 8);
      v42 = *((_DWORD *)v14 + 19);
      v93 = v16;
      if ( v42 >= v41 )
        v42 = v41;
      *((_DWORD *)v14 + 19) = v42;
      v43 = *((_DWORD *)v14 + 20);
      if ( v43 <= *((_DWORD *)v16 + 9) )
        v43 = *((_DWORD *)v16 + 9);
      *((_DWORD *)v14 + 20) = v43;
      v44 = *((_DWORD *)v14 + 21);
      if ( v44 <= *((_DWORD *)v16 + 10) )
        v44 = *((_DWORD *)v16 + 10);
      v18 = v40 + 1;
      v16 += 80;
      *((_DWORD *)v14 + 21) = v44;
      v85 = v18;
      if ( v18 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v13 = (char **)v93;
    }
    v9 = v91;
    v11 = v92;
  }
  else
  {
    v35 = v95;
  }
  v45 = v10 & 0xFFFEE7FF;
  v46 = v89;
  v11->ulHorzSize = -v11->ulHorzSize;
  v11->ulVertSize = -v11->ulVertSize;
  v47 = v45 | 0x80020;
  if ( !(_DWORD)v84 )
    v47 = v45;
  *(_DWORD *)v46 = v47;
  v48 = v88;
  *((_DWORD *)v46 + 76) = v86;
  v14[16] = *(_DWORD *)(struct HDEV__ *)((int)v46 + 284);
  *(_QWORD *)v14 = v35;
  *((_QWORD *)v14 + 1) = v35;
  *((_QWORD *)v14 + 5) = v48;
  while ( v35 )
  {
    v49 = *((_QWORD *)v35 + 6);
    v50 = v35 == *(char **)v14;
    _m_prefetchw((const void *)(v49 + 40));
    if ( v50 )
    {
      do
        v51 = *(_DWORD *)(v49 + 40);
      while ( v51 != _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 40), v51 | 0x10000000, v51) );
      v52 = 0LL;
    }
    else
    {
      do
        v53 = *(_DWORD *)(v49 + 40);
      while ( v53 != _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 40), v53 & 0xEFFFFFFF, v53) );
      v52 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
    }
    *(_QWORD *)(v49 + 32) = v52;
    if ( (unsigned int *)v49 == v48 )
    {
      *((_DWORD *)v35 + 6) = 0;
    }
    else
    {
      v54 = *(_DWORD *)(v49 + 2076) - *((_DWORD *)v14 + 16);
      *((_DWORD *)v35 + 6) = v54;
      if ( !v54 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v91, *((HPALETTE *)v46 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v88, *(HPALETTE *)(v49 + 2088));
        v55 = v91;
        v56 = v88;
        if ( !v91 )
        {
          if ( v88 )
          {
            HmgDecrementShareReferenceCountEx(v88, 0LL);
LABEL_88:
            if ( v55 )
              HmgDecrementShareReferenceCountEx((unsigned int *)v55, 0LL);
          }
          EngFreeMem(pv);
          goto LABEL_91;
        }
        if ( !v88 )
          goto LABEL_88;
        v57 = v88[6] & 0x1F;
        v58 = (_DWORD)v91[6] & 0x1F;
        *((_DWORD *)v35 + 6) = v58 != v57;
        if ( v58 == v57 && ((_DWORD)v55[6] & 0x1F) == 2 )
        {
          v59 = (_DWORD *)*((_QWORD *)v56 + 14);
          v60 = (_DWORD *)*((_QWORD *)v55 + 14);
          if ( *v60 != *v59 || v60[1] != v59[1] || (v61 = 0, v60[2] != v59[2]) )
            v61 = 1;
          *((_DWORD *)v35 + 6) = v61;
        }
        HmgDecrementShareReferenceCountEx(v56, 0LL);
        HmgDecrementShareReferenceCountEx((unsigned int *)v55, 0LL);
        v54 = *((_DWORD *)v35 + 6);
        v46 = v89;
      }
      if ( v54 )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        gbMultiMonMismatchColor = 1;
      }
    }
    v35 = *(char **)v35;
  }
  v9[640] = v14[18];
  v9[641] = v14[19];
  *((_DWORD *)v9 + 422) = *((_DWORD *)v14 + 20) - *((_DWORD *)v14 + 18);
  *((_DWORD *)v9 + 423) = *((_DWORD *)v14 + 21) - *((_DWORD *)v14 + 19);
  _m_prefetchw(v9 + 10);
  do
    v62 = *((_DWORD *)v9 + 10);
  while ( v62 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v62 | 0x20000, v62) );
  v63 = *(unsigned int *)&a1->dmDeviceName[10];
  v64 = 0;
  v65 = pv;
  v66 = 0;
  if ( (_DWORD)v63 )
  {
    v67 = 0LL;
    do
    {
      v68 = 28LL * v66;
      v84 = *(_QWORD *)&a1->dmDeviceName[v68 + 20];
      if ( (*(_DWORD *)(v84 + 1792) & 0x8000000) != 0 )
      {
        _m_prefetchw(v9 + 10);
        do
          v69 = *((_DWORD *)v9 + 10);
        while ( v69 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v69 | 0x1000000, v69) );
        v70 = v84;
        v71 = *(_DWORD *)(v84 + 2096);
        if ( (v71 & 0x1000) != 0 )
        {
          _m_prefetchw(v9 + 10);
          do
            v72 = *((_DWORD *)v9 + 10);
          while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v72 | 0x2000000, v72) );
          *((_DWORD *)v9 + 524) |= 0x1000u;
          v71 = *(_DWORD *)(v70 + 2096);
        }
        if ( (v71 & 0x8000) != 0 )
        {
          _m_prefetchw(v9 + 10);
          do
            v73 = *((_DWORD *)v9 + 10);
          while ( v73 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v73 | 0x20000000, v73) );
        }
        v74 = v64++;
        v65[v74] = *(_QWORD *)&a1->dmDeviceName[v68 + 20];
      }
      if ( !(unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v84) && *(_DWORD *)(v15 + 2588) != 5 )
      {
        _m_prefetchw(v9 + 10);
        do
          v75 = *((_DWORD *)v9 + 10);
        while ( v75 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v75 | 0x8000000, v75) );
        v15 = v84;
      }
      v76 = *((_DWORD *)v9 + 10);
      if ( (v76 & 0x4000000) == 0 && ((*(_DWORD *)(v15 + 2096) & 0x8000) == 0 || !*(_QWORD *)(v15 + 2744)) )
      {
        if ( !v67 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v84) == v67 )
        {
          v67 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v84);
          v76 = v79;
        }
        else
        {
          _m_prefetchw(v9 + 10);
          do
            v77 = *((_DWORD *)v9 + 10);
          while ( v77 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v77 | 0x4000000, v77) );
          v76 = *((_DWORD *)v9 + 10);
        }
      }
      if ( (v76 & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v84) )
      {
        _m_prefetchw(v9 + 10);
        do
          v80 = *((_DWORD *)v9 + 10);
        while ( v80 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v80 | 0x40000000, v80) );
      }
      v63 = *(unsigned int *)&a1->dmDeviceName[10];
      ++v66;
    }
    while ( v66 < (unsigned int)v63 );
    v14 = (struct HDEV__ *)v94;
  }
  for ( i = 0; i < (unsigned int)v63; ++i )
  {
    v82 = *(_QWORD *)&a1->dmDeviceName[28 * i + 20];
    if ( (*(_DWORD *)(v82 + 1792) & 0x8000000) == 0 )
    {
      v83 = v64++;
      v65[v83] = v82;
    }
    v63 = *(unsigned int *)&a1->dmDeviceName[10];
  }
  if ( qword_1C029ADA0 )
    qword_1C029ADA0(v9, v63, v65, v15);
  return v14;
}
