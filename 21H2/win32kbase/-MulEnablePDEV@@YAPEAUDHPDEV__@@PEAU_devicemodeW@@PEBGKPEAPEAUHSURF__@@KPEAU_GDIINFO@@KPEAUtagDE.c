/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C01415E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0010F60 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0011060 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002A5A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002E210 (HmgDecrementShareReferenceCountEx.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0039100 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EngAllocMem @ 0x1C007A3E0 (EngAllocMem.c)
 *     EngFreeMem @ 0x1C007CAF0 (EngFreeMem.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0141ED8 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C0141F80 (bIntersect.c)
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
  int v9; // r12d
  struct _GDIINFO *v10; // rbx
  __int64 **v12; // r14
  struct HDEV__ *v13; // rsi
  __int64 v14; // rdx
  char *v15; // r13
  unsigned int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rbx
  _OWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  struct _GDIINFO *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  struct tagDEVINFO *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  int v28; // eax
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int64 *v31; // r14
  __int64 v32; // rax
  char *v33; // rbx
  int v34; // ecx
  unsigned int v35; // r9d
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  unsigned int v39; // r12d
  struct tagDEVINFO *v40; // rdx
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rbx
  bool v44; // zf
  signed __int32 v45; // ett
  __int64 v46; // rax
  signed __int32 v47; // ett
  int v48; // ecx
  __int64 v49; // rbx
  __int64 v50; // rcx
  int v51; // r8d
  int v52; // edx
  _DWORD *v53; // rdx
  _DWORD *v54; // r8
  int v55; // eax
  signed __int32 v56; // ett
  __int64 v57; // rdx
  unsigned int v58; // ebx
  _QWORD *v59; // r12
  unsigned int v60; // r14d
  void *v61; // rsi
  __int64 v62; // rdx
  signed __int32 v63; // ett
  __int64 v64; // r9
  int v65; // eax
  signed __int32 v66; // ett
  signed __int32 v67; // ett
  __int64 v68; // rcx
  __int64 v69; // r9
  signed __int32 v70; // ett
  int v71; // eax
  signed __int32 v72; // ett
  int v74; // edx
  signed __int32 v75; // ett
  unsigned int i; // r8d
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // [rsp+28h] [rbp-A9h] BYREF
  int v80; // [rsp+30h] [rbp-A1h]
  unsigned int v81; // [rsp+34h] [rbp-9Dh]
  __int64 v82; // [rsp+38h] [rbp-99h] BYREF
  struct tagDEVINFO *v83; // [rsp+40h] [rbp-91h]
  PVOID pv; // [rsp+48h] [rbp-89h]
  __int64 v85; // [rsp+50h] [rbp-81h] BYREF
  struct _GDIINFO *v86; // [rsp+58h] [rbp-79h]
  __int64 **v87; // [rsp+60h] [rbp-71h]
  char *v88; // [rsp+70h] [rbp-61h]
  __int64 *v89; // [rsp+78h] [rbp-59h] BYREF

  v9 = -1;
  v10 = a6;
  v83 = a8;
  v86 = a6;
  v80 = -1;
  v82 = 0LL;
  LODWORD(v79) = 0;
  if ( !a9 )
    return 0LL;
  v12 = &v89;
  v88 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v13 = (struct HDEV__ *)v88;
  if ( !v88 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_86:
    EngFreeMem(v13);
    return 0LL;
  }
  v15 = v88 + 112;
  *((_DWORD *)v88 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  v16 = 0;
  *((_QWORD *)v13 + 4) = a9;
  *((_DWORD *)v13 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v13 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v13 + 20) = 0x80000000;
  *((_DWORD *)v13 + 21) = 0x80000000;
  v81 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    while ( 1 )
    {
      v17 = 28LL * v16;
      v18 = *(_QWORD *)&a1->dmDeviceName[v17 + 20];
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 2576) + 160LL) & 4) != 0 )
      {
        v19 = (_OWORD *)(v18 + 2136);
        v20 = *(_DWORD *)(v18 + 2172) & 0x100;
        v82 = *(_QWORD *)&a1->dmDeviceName[v17 + 20];
        LODWORD(v79) = v20;
        v21 = 2LL;
        v22 = v86;
        do
        {
          *(_OWORD *)&v22->ulVersion = *v19;
          *(_OWORD *)&v22->ulHorzRes = v19[1];
          *(_OWORD *)&v22->ulNumColors = v19[2];
          *(_OWORD *)&v22->flTextCaps = v19[3];
          *(_OWORD *)&v22->ulAspectX = v19[4];
          *(_OWORD *)&v22->yStyleStep = v19[5];
          *(_OWORD *)&v22->szlPhysSize.cx = v19[6];
          v22 = (struct _GDIINFO *)((char *)v22 + 128);
          v23 = v19[7];
          v19 += 8;
          *(_OWORD *)&v22[-1].flShadeBlend = v23;
          --v21;
        }
        while ( v21 );
        v14 = 2LL;
        *(_OWORD *)&v22->ulVersion = *v19;
        *(_OWORD *)&v22->ulHorzRes = v19[1];
        *(_OWORD *)&v22->ulNumColors = v19[2];
        v24 = v19[3];
        v25 = v83;
        *(_OWORD *)&v22->flTextCaps = v24;
        v26 = (_OWORD *)(v18 + 1824);
        do
        {
          *(_OWORD *)v25 = *v26;
          *((_OWORD *)v25 + 1) = v26[1];
          *((_OWORD *)v25 + 2) = v26[2];
          *((_OWORD *)v25 + 3) = v26[3];
          *((_OWORD *)v25 + 4) = v26[4];
          *((_OWORD *)v25 + 5) = v26[5];
          *((_OWORD *)v25 + 6) = v26[6];
          v25 = (struct tagDEVINFO *)((char *)v25 + 128);
          v27 = v26[7];
          v26 += 8;
          *((_OWORD *)v25 - 1) = v27;
          --v14;
        }
        while ( v14 );
        *(_OWORD *)v25 = *v26;
        *((_OWORD *)v25 + 1) = v26[1];
        *((_OWORD *)v25 + 2) = v26[2];
        *((_QWORD *)v25 + 6) = *((_QWORD *)v26 + 6);
      }
      v9 &= *(_DWORD *)(v18 + 1824);
      v28 = *(_DWORD *)(v18 + 2128) & v80;
      *v12 = (__int64 *)v15;
      v12[1] = (__int64 *)v15;
      *((_DWORD *)v15 + 4) = v16;
      v29 = *(_OWORD *)&a1->dmDeviceName[v17 + 28];
      v80 = v28;
      *(_OWORD *)(v15 + 28) = v29;
      v30 = *(_QWORD *)&a1->dmDeviceName[v17 + 20];
      *((_QWORD *)v15 + 6) = v30;
      *((_QWORD *)v15 + 7) = v30;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v15 + 56), v14, v17 * 2);
      v31 = v89;
      *((_DWORD *)v15 + 18) = -*(_DWORD *)(v18 + 2584);
      *((_DWORD *)v15 + 19) = -*(_DWORD *)(v18 + 2588);
      v32 = *(_QWORD *)(v18 + 2552);
      v33 = (char *)v31;
      *((_DWORD *)v15 + 5) = 1;
      *((_QWORD *)v15 + 8) = (v32 + 24) & -(__int64)(v32 != 0);
      if ( v31 != (__int64 *)v15 )
      {
        do
        {
          if ( (unsigned int)bIntersect(v33 + 28, v15 + 28) )
          {
            *(_DWORD *)(*((_QWORD *)v15 + 7) + 1824LL) |= 0x8000000u;
            *((_DWORD *)v15 + 5) = 0;
          }
          v33 = *(char **)v33;
        }
        while ( v33 != v15 );
      }
      v34 = *((_DWORD *)v13 + 18);
      v35 = v81;
      if ( v34 >= *((_DWORD *)v15 + 7) )
        v34 = *((_DWORD *)v15 + 7);
      v87 = (__int64 **)v15;
      *((_DWORD *)v13 + 18) = v34;
      v36 = *((_DWORD *)v13 + 19);
      if ( v36 >= *((_DWORD *)v15 + 8) )
        v36 = *((_DWORD *)v15 + 8);
      *((_DWORD *)v13 + 19) = v36;
      v37 = *((_DWORD *)v13 + 20);
      if ( v37 <= *((_DWORD *)v15 + 9) )
        v37 = *((_DWORD *)v15 + 9);
      *((_DWORD *)v13 + 20) = v37;
      v38 = *((_DWORD *)v13 + 21);
      if ( v38 <= *((_DWORD *)v15 + 10) )
        v38 = *((_DWORD *)v15 + 10);
      v16 = v35 + 1;
      v15 += 80;
      *((_DWORD *)v13 + 21) = v38;
      v81 = v16;
      if ( v16 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v12 = v87;
    }
    v10 = v86;
  }
  else
  {
    v31 = v89;
  }
  v39 = v9 & 0xFFFEE7FF;
  v40 = v83;
  v10->ulHorzSize = -v10->ulHorzSize;
  v10->ulVertSize = -v10->ulVertSize;
  v41 = v39 | 0x80020;
  if ( !(_DWORD)v79 )
    v41 = v39;
  *(_DWORD *)v40 = v41;
  v42 = v82;
  *((_DWORD *)v40 + 76) = v80;
  v13[16] = *(_DWORD *)(struct HDEV__ *)((int)v40 + 284);
  *(_QWORD *)v13 = v31;
  *((_QWORD *)v13 + 1) = v31;
  *((_QWORD *)v13 + 5) = v42;
  while ( v31 )
  {
    v43 = v31[6];
    v44 = v31 == *(__int64 **)v13;
    _m_prefetchw((const void *)(v43 + 40));
    if ( v44 )
    {
      do
        v45 = *(_DWORD *)(v43 + 40);
      while ( v45 != _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 40), v45 | 0x10000000, v45) );
      v46 = 0LL;
    }
    else
    {
      do
        v47 = *(_DWORD *)(v43 + 40);
      while ( v47 != _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 40), v47 & 0xEFFFFFFF, v47) );
      v46 = *(_QWORD *)(*(_QWORD *)v13 + 48LL);
    }
    *(_QWORD *)(v43 + 32) = v46;
    if ( v43 == v42 )
    {
      *((_DWORD *)v31 + 6) = 0;
    }
    else
    {
      v48 = *(_DWORD *)(v43 + 2108) - *((_DWORD *)v13 + 16);
      *((_DWORD *)v31 + 6) = v48;
      if ( !v48 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v85, *((HPALETTE *)v40 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v82, *(HPALETTE *)(v43 + 2120));
        v49 = v85;
        v50 = v82;
        if ( !v85 )
        {
          if ( v82 )
          {
            HmgDecrementShareReferenceCountEx(v82, 0LL);
LABEL_83:
            if ( v49 )
              HmgDecrementShareReferenceCountEx(v49, 0LL);
          }
          EngFreeMem(pv);
          goto LABEL_86;
        }
        if ( !v82 )
          goto LABEL_83;
        v51 = *(_DWORD *)(v82 + 24) & 0x1F;
        v52 = *(_DWORD *)(v85 + 24) & 0x1F;
        *((_DWORD *)v31 + 6) = v52 != v51;
        if ( v52 == v51 && (*(_DWORD *)(v49 + 24) & 0x1F) == 2 )
        {
          v53 = *(_DWORD **)(v50 + 112);
          v54 = *(_DWORD **)(v49 + 112);
          if ( *v54 != *v53 || v54[1] != v53[1] || (v55 = 0, v54[2] != v53[2]) )
            v55 = 1;
          *((_DWORD *)v31 + 6) = v55;
        }
        HmgDecrementShareReferenceCountEx(v50, 0LL);
        HmgDecrementShareReferenceCountEx(v49, 0LL);
        v48 = *((_DWORD *)v31 + 6);
        v40 = v83;
      }
      if ( v48 )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        gbMultiMonMismatchColor = 1;
      }
    }
    v31 = (__int64 *)*v31;
  }
  a9[646] = v13[18];
  a9[647] = v13[19];
  *((_DWORD *)a9 + 430) = *((_DWORD *)v13 + 20) - *((_DWORD *)v13 + 18);
  *((_DWORD *)a9 + 431) = *((_DWORD *)v13 + 21) - *((_DWORD *)v13 + 19);
  _m_prefetchw(a9 + 10);
  do
    v56 = *((_DWORD *)a9 + 10);
  while ( v56 != _InterlockedCompareExchange((volatile signed __int32 *)a9 + 10, v56 | 0x20000, v56) );
  v57 = *(unsigned int *)&a1->dmDeviceName[10];
  v58 = 0;
  v59 = pv;
  v60 = 0;
  if ( (_DWORD)v57 )
  {
    v61 = 0LL;
    do
    {
      v62 = 28LL * v60;
      v79 = *(_QWORD *)&a1->dmDeviceName[v62 + 20];
      if ( (*(_DWORD *)(v79 + 1824) & 0x8000000) != 0 )
      {
        _m_prefetchw(a9 + 10);
        do
          v63 = *((_DWORD *)a9 + 10);
        while ( v63 != _InterlockedCompareExchange((volatile signed __int32 *)a9 + 10, v63 | 0x1000000, v63) );
        v64 = v79;
        v65 = *(_DWORD *)(v79 + 2128);
        if ( (v65 & 0x1000) != 0 )
        {
          _m_prefetchw(a9 + 10);
          do
            v66 = *((_DWORD *)a9 + 10);
          while ( v66 != _InterlockedCompareExchange((volatile signed __int32 *)a9 + 10, v66 | 0x2000000, v66) );
          *((_DWORD *)a9 + 532) |= 0x1000u;
          v65 = *(_DWORD *)(v64 + 2128);
        }
        if ( (v65 & 0x8000) != 0 )
        {
          _m_prefetchw(a9 + 10);
          do
            v67 = *((_DWORD *)a9 + 10);
          while ( v67 != _InterlockedCompareExchange((volatile signed __int32 *)a9 + 10, v67 | 0x20000000, v67) );
        }
        v68 = v58++;
        v59[v68] = *(_QWORD *)&a1->dmDeviceName[v62 + 20];
      }
      if ( !(unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v79) && *(_DWORD *)(v69 + 2612) != 5 )
      {
        _m_prefetchw(a9 + 10);
        do
          v70 = *((_DWORD *)a9 + 10);
        while ( v70 != _InterlockedCompareExchange((volatile signed __int32 *)a9 + 10, v70 | 0x8000000, v70) );
        v69 = v79;
      }
      v71 = *((_DWORD *)a9 + 10);
      if ( (v71 & 0x4000000) == 0 && ((*(_DWORD *)(v69 + 2128) & 0x8000) == 0 || !*(_QWORD *)(v69 + 2768)) )
      {
        if ( !v61 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v79) == v61 )
        {
          v61 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v79);
          v71 = v74;
        }
        else
        {
          _m_prefetchw(a9 + 10);
          do
            v72 = *((_DWORD *)a9 + 10);
          while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)a9 + 10, v72 | 0x4000000, v72) );
          v71 = *((_DWORD *)a9 + 10);
        }
      }
      if ( (v71 & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v79) )
      {
        _m_prefetchw(a9 + 10);
        do
          v75 = *((_DWORD *)a9 + 10);
        while ( v75 != _InterlockedCompareExchange((volatile signed __int32 *)a9 + 10, v75 | 0x40000000, v75) );
      }
      v57 = *(unsigned int *)&a1->dmDeviceName[10];
      ++v60;
    }
    while ( v60 < (unsigned int)v57 );
    v13 = (struct HDEV__ *)v88;
  }
  for ( i = 0; i < (unsigned int)v57; ++i )
  {
    v77 = *(_QWORD *)&a1->dmDeviceName[28 * i + 20];
    if ( (*(_DWORD *)(v77 + 1824) & 0x8000000) == 0 )
    {
      v78 = v58++;
      v59[v78] = v77;
    }
    v57 = *(unsigned int *)&a1->dmDeviceName[10];
  }
  if ( qword_1C0256020 )
    qword_1C0256020(a9, v57, v59);
  return v13;
}
