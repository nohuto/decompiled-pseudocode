/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C018B320
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0020580 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EngFreeMem @ 0x1C002AE00 (EngFreeMem.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002D3CC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00448F0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C006BF4C (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     EngAllocMem @ 0x1C009EBD0 (EngAllocMem.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C018BCA8 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C018BD50 (bIntersect.c)
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
  int v10; // ebx
  struct _GDIINFO *v12; // r12
  struct HDEV__ *v13; // rsi
  __int64 v14; // rcx
  char *v15; // r13
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rbx
  __int64 v19; // r14
  int v20; // eax
  _OWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  struct _GDIINFO *v24; // rax
  __int128 v25; // xmm1
  _DWORD *v26; // rdx
  __int128 v27; // xmm1
  struct tagDEVINFO *v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int64 v31; // rcx
  char **v32; // rax
  __int64 v33; // rax
  char *v34; // r14
  __int64 v35; // rax
  _QWORD *v36; // rbx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // ebx
  struct tagDEVINFO *v42; // rdx
  __int64 v43; // r12
  int v44; // eax
  __int64 v45; // rbx
  bool v46; // zf
  signed __int32 v47; // ett
  __int64 v48; // rax
  signed __int32 v49; // ett
  __int64 v50; // rcx
  __int64 v51; // rbx
  int *v52; // rcx
  int v53; // r8d
  int v54; // edx
  _DWORD *v55; // rdx
  _DWORD *v56; // r8
  int v57; // eax
  signed __int32 v59; // ett
  __int64 v60; // rdx
  unsigned int v61; // r14d
  unsigned int v62; // r12d
  _QWORD *v63; // r13
  void *v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rbx
  signed __int32 v67; // ett
  signed __int32 v68; // ett
  signed __int32 v69; // ett
  __int64 v70; // rcx
  signed __int32 v71; // ett
  signed __int32 v72; // ett
  signed __int32 v73; // ett
  unsigned int i; // r8d
  __int64 v75; // rdx
  __int64 v76; // rax
  int v77; // [rsp+58h] [rbp-B0h]
  __int64 v78; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+68h] [rbp-A0h]
  struct tagDEVINFO *v80; // [rsp+70h] [rbp-98h]
  PVOID pv; // [rsp+78h] [rbp-90h]
  __int64 v82; // [rsp+80h] [rbp-88h] BYREF
  int *v83; // [rsp+88h] [rbp-80h] BYREF
  char **v84; // [rsp+90h] [rbp-78h]
  struct _GDIINFO *v85; // [rsp+98h] [rbp-70h]
  __int64 v86; // [rsp+A0h] [rbp-68h]
  struct HDEV__ *v87; // [rsp+A8h] [rbp-60h]
  void *v88; // [rsp+B0h] [rbp-58h]
  char *v89; // [rsp+B8h] [rbp-50h] BYREF

  v9 = a9;
  v10 = -1;
  v86 = 0LL;
  LODWORD(v78) = 0;
  v88 = 0LL;
  v12 = a6;
  v80 = a8;
  v85 = a6;
  v83 = (int *)a9;
  LODWORD(v79) = -1;
  if ( !a9 )
    return 0LL;
  v84 = &v89;
  v87 = (struct HDEV__ *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v13 = v87;
  if ( !v87 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
    goto LABEL_62;
  v15 = (char *)(v87 + 28);
  *(_DWORD *)(v87 + 4) = *(_DWORD *)(struct HDEV__ *)&a1->dmDeviceName[10];
  *((_DWORD *)v13 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v13 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v13 + 20) = 0x80000000;
  *((_DWORD *)v13 + 21) = 0x80000000;
  v16 = 0LL;
  *((_QWORD *)v13 + 4) = a9;
  v77 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v17 = -1;
    do
    {
      v82 = 56 * v16;
      v18 = *(_QWORD *)&a1->dmDeviceName[28 * v16 + 20];
      v19 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
      if ( *(_QWORD *)(v18 + 2552) == -4LL && !*(_DWORD *)(v19 + 3252) )
      {
        DbgkWerCaptureLiveKernelDump(L"NTGDI", 400LL, 38LL, v18, a1, 0LL, 0LL, 0LL, 0);
        *(_DWORD *)(v19 + 3252) = 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 2552) + 160LL) & 4) != 0 )
      {
        v20 = *(_DWORD *)(v18 + 2140);
        v21 = (_OWORD *)(v18 + 2104);
        v22 = 2LL;
        v86 = v18;
        v23 = 2LL;
        LODWORD(v78) = v20 & 0x100;
        v24 = v12;
        do
        {
          *(_OWORD *)&v24->ulVersion = *v21;
          *(_OWORD *)&v24->ulHorzRes = v21[1];
          *(_OWORD *)&v24->ulNumColors = v21[2];
          *(_OWORD *)&v24->flTextCaps = v21[3];
          *(_OWORD *)&v24->ulAspectX = v21[4];
          *(_OWORD *)&v24->yStyleStep = v21[5];
          *(_OWORD *)&v24->szlPhysSize.cx = v21[6];
          v24 = (struct _GDIINFO *)((char *)v24 + 128);
          v25 = v21[7];
          v21 += 8;
          *(_OWORD *)&v24[-1].flShadeBlend = v25;
          --v23;
        }
        while ( v23 );
        v26 = (_DWORD *)(v18 + 1792);
        *(_OWORD *)&v24->ulVersion = *v21;
        *(_OWORD *)&v24->ulHorzRes = v21[1];
        *(_OWORD *)&v24->ulNumColors = v21[2];
        v27 = v21[3];
        v28 = v80;
        *(_OWORD *)&v24->flTextCaps = v27;
        v29 = (_OWORD *)(v18 + 1792);
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
          --v22;
        }
        while ( v22 );
        *(_OWORD *)v28 = *v29;
        *((_OWORD *)v28 + 1) = v29[1];
        *((_OWORD *)v28 + 2) = v29[2];
        *((_QWORD *)v28 + 6) = *((_QWORD *)v29 + 6);
      }
      else
      {
        v26 = (_DWORD *)(v18 + 1792);
      }
      v17 &= *v26;
      v31 = v82;
      LODWORD(v79) = *(_DWORD *)(v18 + 2096) & v79;
      v32 = v84;
      *v84 = v15;
      v32[1] = v15;
      *((_DWORD *)v15 + 4) = v77;
      *(_OWORD *)(v15 + 28) = *(_OWORD *)((char *)&a1->dmDeviceName[28] + v31);
      v33 = *(_QWORD *)((char *)&a1->dmDeviceName[20] + v31);
      *((_QWORD *)v15 + 6) = v33;
      *((_QWORD *)v15 + 7) = v33;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v15 + 56));
      v34 = v89;
      *((_DWORD *)v15 + 18) = -*(_DWORD *)(v18 + 2560);
      *((_DWORD *)v15 + 19) = -*(_DWORD *)(v18 + 2564);
      v35 = *(_QWORD *)(v18 + 2528);
      v36 = v34;
      *((_DWORD *)v15 + 5) = 1;
      *((_QWORD *)v15 + 8) = (v35 + 24) & -(__int64)(v35 != 0);
      if ( v34 != v15 )
      {
        do
        {
          if ( (unsigned int)bIntersect((char *)v36 + 28, v15 + 28) )
          {
            *(_DWORD *)(*((_QWORD *)v15 + 7) + 1792LL) |= 0x8000000u;
            *((_DWORD *)v15 + 5) = 0;
          }
          v36 = (_QWORD *)*v36;
        }
        while ( v36 != (_QWORD *)v15 );
        v13 = v87;
      }
      v37 = *((_DWORD *)v13 + 18);
      v12 = v85;
      if ( v37 >= *((_DWORD *)v15 + 7) )
        v37 = *((_DWORD *)v15 + 7);
      v84 = (char **)v15;
      *((_DWORD *)v13 + 18) = v37;
      v38 = *((_DWORD *)v13 + 19);
      if ( v38 >= *((_DWORD *)v15 + 8) )
        v38 = *((_DWORD *)v15 + 8);
      *((_DWORD *)v13 + 19) = v38;
      v39 = *((_DWORD *)v13 + 20);
      if ( v39 <= *((_DWORD *)v15 + 9) )
        v39 = *((_DWORD *)v15 + 9);
      *((_DWORD *)v13 + 20) = v39;
      v40 = *((_DWORD *)v15 + 10);
      v14 = *((unsigned int *)v13 + 21);
      if ( (int)v14 <= v40 )
        v14 = (unsigned int)v40;
      v16 = (unsigned int)(v77 + 1);
      *((_DWORD *)v13 + 21) = v14;
      v15 += 80;
      v77 = v16;
    }
    while ( (unsigned int)v16 < *(_DWORD *)&a1->dmDeviceName[10] );
    v10 = v17;
    v9 = (HDEV)v83;
  }
  else
  {
    v34 = v89;
  }
  v41 = v10 & 0xFFFEE7FF;
  v42 = v80;
  v12->ulHorzSize = -v12->ulHorzSize;
  v12->ulVertSize = -v12->ulVertSize;
  v43 = v86;
  v44 = v41 | 0x80020;
  if ( !(_DWORD)v78 )
    v44 = v41;
  *(_DWORD *)v42 = v44;
  *((_DWORD *)v42 + 76) = v79;
  v13[16] = *(_DWORD *)(struct HDEV__ *)((int)v42 + 284);
  *(_QWORD *)v13 = v34;
  *((_QWORD *)v13 + 1) = v34;
  *((_QWORD *)v13 + 5) = v43;
  if ( !v34 )
  {
LABEL_65:
    v9[640] = v13[18];
    v9[641] = v13[19];
    *((_DWORD *)v9 + 422) = *((_DWORD *)v13 + 20) - *((_DWORD *)v13 + 18);
    *((_DWORD *)v9 + 423) = *((_DWORD *)v13 + 21) - *((_DWORD *)v13 + 19);
    _m_prefetchw(v9 + 10);
    do
      v59 = *((_DWORD *)v9 + 10);
    while ( v59 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v59 | 0x20000, v59) );
    v60 = *(unsigned int *)&a1->dmDeviceName[10];
    v61 = 0;
    v62 = 0;
    v63 = pv;
    if ( (_DWORD)v60 )
    {
      v64 = v88;
      do
      {
        v65 = 28LL * v62;
        v66 = *(_QWORD *)&a1->dmDeviceName[v65 + 20];
        v78 = v66;
        if ( (*(_DWORD *)(v66 + 1792) & 0x8000000) != 0 )
        {
          _m_prefetchw(v9 + 10);
          do
            v67 = *((_DWORD *)v9 + 10);
          while ( v67 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v67 | 0x1000000, v67) );
          v66 = v78;
          if ( (*(_DWORD *)(v78 + 2096) & 0x1000) != 0 )
          {
            _m_prefetchw(v9 + 10);
            do
              v68 = *((_DWORD *)v9 + 10);
            while ( v68 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v68 | 0x2000000, v68) );
            *((_DWORD *)v9 + 524) |= 0x1000u;
            v66 = v78;
          }
          if ( (*(_DWORD *)(v66 + 2096) & 0x8000) != 0 )
          {
            _m_prefetchw(v9 + 10);
            do
              v69 = *((_DWORD *)v9 + 10);
            while ( v69 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v69 | 0x20000000, v69) );
            v66 = v78;
          }
          v70 = v61++;
          v63[v70] = *(_QWORD *)&a1->dmDeviceName[v65 + 20];
        }
        if ( !(unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v78) && *(_DWORD *)(v66 + 2588) != 5 )
        {
          _m_prefetchw(v9 + 10);
          do
            v71 = *((_DWORD *)v9 + 10);
          while ( v71 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v71 | 0x8000000, v71) );
          v66 = v78;
        }
        if ( ((_DWORD)v9[10] & 0x4000000) == 0 && ((*(_DWORD *)(v66 + 2096) & 0x8000) == 0 || !*(_QWORD *)(v66 + 2744)) )
        {
          if ( !v64 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v78) == v64 )
          {
            v64 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v78);
          }
          else
          {
            _m_prefetchw(v9 + 10);
            do
              v72 = *((_DWORD *)v9 + 10);
            while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v72 | 0x4000000, v72) );
          }
        }
        if ( ((_DWORD)v9[10] & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v78) )
        {
          _m_prefetchw(v9 + 10);
          do
            v73 = *((_DWORD *)v9 + 10);
          while ( v73 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v73 | 0x40000000, v73) );
        }
        v60 = *(unsigned int *)&a1->dmDeviceName[10];
        ++v62;
      }
      while ( v62 < (unsigned int)v60 );
      v13 = v87;
    }
    for ( i = 0; i < (unsigned int)v60; ++i )
    {
      v75 = *(_QWORD *)&a1->dmDeviceName[28 * i + 20];
      if ( (*(_DWORD *)(v75 + 1792) & 0x8000000) == 0 )
      {
        v76 = v61++;
        v63[v76] = v75;
      }
      v60 = *(unsigned int *)&a1->dmDeviceName[10];
    }
    if ( qword_1C02D55A0 )
      qword_1C02D55A0(v9, v60, v63);
    return v13;
  }
  while ( 1 )
  {
    v45 = *((_QWORD *)v34 + 6);
    v46 = v34 == *(char **)v13;
    _m_prefetchw((const void *)(v45 + 40));
    if ( v46 )
    {
      do
        v47 = *(_DWORD *)(v45 + 40);
      while ( v47 != _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 40), v47 | 0x10000000, v47) );
      v48 = 0LL;
    }
    else
    {
      do
        v49 = *(_DWORD *)(v45 + 40);
      while ( v49 != _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 40), v49 & 0xEFFFFFFF, v49) );
      v48 = *(_QWORD *)(*(_QWORD *)v13 + 48LL);
    }
    *(_QWORD *)(v45 + 32) = v48;
    if ( v45 == v43 )
    {
      *((_DWORD *)v34 + 6) = 0;
      goto LABEL_55;
    }
    v50 = (unsigned int)(*(_DWORD *)(v45 + 2076) - *((_DWORD *)v13 + 16));
    *((_DWORD *)v34 + 6) = v50;
    if ( !(_DWORD)v50 )
      break;
LABEL_53:
    if ( *((_DWORD *)v34 + 6) )
    {
      *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
      *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v50) + 24) + 3248LL) = 1;
    }
LABEL_55:
    v34 = *(char **)v34;
    if ( !v34 )
      goto LABEL_65;
    v42 = v80;
  }
  EPALOBJ::EPALOBJ((EPALOBJ *)&v82, *((HPALETTE *)v42 + 37));
  EPALOBJ::EPALOBJ((EPALOBJ *)&v83, *(HPALETTE *)(v45 + 2088));
  v51 = v82;
  v52 = v83;
  if ( v82 )
  {
    if ( !v83 )
      goto LABEL_59;
    v53 = v83[6] & 0x1F;
    v54 = *(_DWORD *)(v82 + 24) & 0x1F;
    *((_DWORD *)v34 + 6) = v54 != v53;
    if ( v54 == v53 && (*(_DWORD *)(v51 + 24) & 0x1F) == 2 )
    {
      v55 = (_DWORD *)*((_QWORD *)v52 + 14);
      v56 = *(_DWORD **)(v51 + 112);
      if ( *v56 != *v55 || v56[1] != v55[1] || (v57 = 0, v56[2] != v55[2]) )
        v57 = 1;
      *((_DWORD *)v34 + 6) = v57;
    }
    HmgDecrementShareReferenceCountEx(v52, 0LL);
    HmgDecrementShareReferenceCountEx((int *)v51, 0LL);
    goto LABEL_53;
  }
  if ( v83 )
    HmgDecrementShareReferenceCountEx(v83, 0LL);
LABEL_59:
  if ( v51 )
    HmgDecrementShareReferenceCountEx((int *)v51, 0LL);
  EngFreeMem(pv);
LABEL_62:
  EngFreeMem(v13);
  return 0LL;
}
