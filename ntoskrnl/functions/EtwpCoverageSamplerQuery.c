__int64 __fastcall EtwpCoverageSamplerQuery(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        int a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  signed int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ecx
  __int64 *v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r15d
  unsigned int v15; // esi
  struct _KTHREAD *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // r15
  _DWORD *v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // edx
  _QWORD *v26; // r15
  _QWORD *v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // r15d
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edx
  char *Pool2; // rax
  char *v38; // r15
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  char *v44; // rsi
  char *v45; // rcx
  char *v46; // rsi
  _OWORD *v47; // rax
  __int64 v48; // r8
  char *v49; // rsi
  char *v50; // r10
  char *v51; // rsi
  __int64 *v52; // rax
  __int64 *v53; // r8
  unsigned int v54; // r9d
  _DWORD *v55; // r11
  char *v56; // rcx
  char *v57; // rsi
  void *v58; // r9
  unsigned int v59; // r8d
  unsigned int v60; // esi
  __int128 *v61; // r15
  int v62; // ecx
  char *v63; // rdx
  struct _KTHREAD *v64; // rcx
  int v65; // edx
  _OWORD *v66; // r15
  __int64 *v67; // rax
  __int64 *v68; // rsi
  __int64 *v69; // r15
  __int64 **v70; // rax
  char *v71; // rbx
  __int64 v72; // r14
  unsigned int v74; // [rsp+20h] [rbp-158h]
  unsigned int v75; // [rsp+24h] [rbp-154h]
  __int64 *v76; // [rsp+28h] [rbp-150h]
  char *v77; // [rsp+30h] [rbp-148h]
  char *v78; // [rsp+38h] [rbp-140h]
  int v79; // [rsp+40h] [rbp-138h]
  unsigned int v80; // [rsp+44h] [rbp-134h]
  unsigned int v81; // [rsp+48h] [rbp-130h]
  unsigned int v82; // [rsp+4Ch] [rbp-12Ch]
  unsigned __int64 v83; // [rsp+50h] [rbp-128h]
  unsigned int v84; // [rsp+58h] [rbp-120h]
  int v85; // [rsp+5Ch] [rbp-11Ch]
  unsigned __int64 v86; // [rsp+60h] [rbp-118h]
  __int128 v87; // [rsp+68h] [rbp-110h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+78h] [rbp-100h]
  __int64 v89; // [rsp+80h] [rbp-F8h]
  unsigned __int64 v90; // [rsp+88h] [rbp-F0h]
  unsigned __int64 v91; // [rsp+90h] [rbp-E8h]
  __int64 v92; // [rsp+98h] [rbp-E0h] BYREF
  int v93; // [rsp+A0h] [rbp-D8h]
  _DWORD *v94; // [rsp+A8h] [rbp-D0h]
  char *v95; // [rsp+B0h] [rbp-C8h]
  unsigned int *v96; // [rsp+B8h] [rbp-C0h]
  ULONG_PTR v97; // [rsp+C0h] [rbp-B8h]
  ULONG_PTR v98; // [rsp+C8h] [rbp-B0h]
  char *v99; // [rsp+D0h] [rbp-A8h]
  __int64 v100; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v101; // [rsp+E0h] [rbp-98h]
  char *v102; // [rsp+E8h] [rbp-90h]
  wchar_t *v103; // [rsp+F0h] [rbp-88h]
  __int64 *v104; // [rsp+F8h] [rbp-80h]
  char *v105; // [rsp+100h] [rbp-78h]
  char *v106; // [rsp+108h] [rbp-70h]
  _DWORD *v107; // [rsp+110h] [rbp-68h]
  __int128 v108; // [rsp+118h] [rbp-60h] BYREF
  __int128 v109; // [rsp+128h] [rbp-50h]

  v96 = a4;
  LODWORD(v86) = a3;
  v90 = a2;
  v98 = BugCheckParameter2;
  v92 = 0LL;
  v5 = qword_140C31888;
  v89 = qword_140C31888;
  v6 = BugCheckParameter2 + 16;
  v97 = BugCheckParameter2 + 16;
  v77 = 0LL;
  v91 = 0LL;
  v87 = 0LL;
  v74 = 0;
  v78 = 0LL;
  v95 = 0LL;
  v7 = EtwpCovSampAcquireSamplerRundown(&v92);
  if ( v7 < 0 )
    goto LABEL_94;
  if ( v92 != BugCheckParameter2 )
  {
    v7 = -1073741431;
    goto LABEL_94;
  }
  EtwpCovSampCaptureFlush(v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v9 = 0;
  v84 = 0;
  v10 = *(__int64 **)(BugCheckParameter2 + 1680);
  v76 = v10;
  if ( v10 != (__int64 *)(BugCheckParameter2 + 1680) )
  {
    do
    {
      v9 += *((_DWORD *)v10 + 4);
      v10 = (__int64 *)*v10;
    }
    while ( v10 != (__int64 *)(BugCheckParameter2 + 1680) );
    v76 = v10;
    v84 = v9;
  }
  v11 = 8LL * v9;
  v101 = v11;
  v12 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v12 = v11;
  v7 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 > 0xFFFFFFFF )
    goto LABEL_94;
  v13 = v12 + 1232;
  v14 = -1;
  if ( v12 + 1232 >= v12 )
    v14 = v12 + 1232;
  v82 = v14;
  v7 = v13 < v12 ? 0xC0000095 : 0;
  if ( v13 < v12 )
    goto LABEL_94;
  v15 = 0;
  v74 = 0;
  v81 = 0;
  v75 = 0;
  v79 = 0;
  v80 = 0;
  *((_QWORD *)&v87 + 1) = &v87;
  *(_QWORD *)&v87 = &v87;
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  ExAcquirePushLockSharedEx(v6 + 1176, 0LL);
  v17 = *(__int64 **)(v6 + 1224);
  v76 = v17;
  if ( v17 == (__int64 *)(v6 + 1224) )
    goto LABEL_37;
  do
  {
    v18 = v17;
    v17 = (__int64 *)*v17;
    v83 = (unsigned __int64)v17;
    v76 = v17;
    v19 = v18 + 6;
    v94 = v18 + 6;
    if ( *((_DWORD *)v18 + 15) )
    {
      v94 = v18 + 6;
    }
    else if ( (*v19 & 0x100000) == 0 )
    {
      continue;
    }
    if ( v18[4] )
    {
      v74 = v15 + 1;
      v81 = v15 + 1;
      ++v75;
      v20 = 2 * (unsigned __int16)*v19 + 2;
      v21 = v20 + v79;
      v22 = -1;
      if ( v20 + v79 >= v20 )
        v22 = v20 + v79;
      v79 = v22;
      v7 = v21 < v20 ? 0xC0000095 : 0;
      if ( v21 < v20 )
        goto LABEL_94;
      v23 = *((_DWORD *)v18 - 4) - (((unsigned __int8)*((_DWORD *)v18 - 4) - 1) & 3) + 3;
      v24 = v23 + v80;
      v25 = -1;
      if ( v23 + v80 >= v23 )
        v25 = v23 + v80;
      v80 = v25;
      v7 = v24 < v23 ? 0xC0000095 : 0;
      if ( v24 < v23 )
        goto LABEL_94;
      if ( (unsigned int)Feature_WatsonFix32512504__private_IsEnabledDeviceUsage()
        && (*v94 & 0x100000) != 0
        && !*((_DWORD *)v18 + 15) )
      {
        _InterlockedExchange((volatile __int32 *)v18 + 15, 1);
        v17 = v76;
      }
      else
      {
        v17 = (__int64 *)v83;
      }
      v26 = v18 + 9;
      v27 = (_QWORD *)*((_QWORD *)&v87 + 1);
      if ( **((__int128 ***)&v87 + 1) != &v87 )
LABEL_93:
        __fastfail(3u);
      *v26 = &v87;
      v26[1] = v27;
      *v27 = v26;
      *((_QWORD *)&v87 + 1) = v26;
      v15 = v74;
    }
    else
    {
      if ( *(v18 - 1) == 1 )
        _InterlockedAdd((volatile signed __int32 *)(v6 + 1636), 1u);
      _InterlockedExchange((volatile __int32 *)v18 + 15, 0);
      v17 = v76;
    }
  }
  while ( v17 != (__int64 *)(v6 + 1224) );
  v14 = v82;
LABEL_37:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1176), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 1176));
  KeAbPostRelease(v6 + 1176);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v28 = 48LL * v75;
  v83 = v28;
  v29 = -1;
  if ( v28 <= 0xFFFFFFFF )
    v29 = 48 * v75;
  v7 = v28 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v28 > 0xFFFFFFFF )
    goto LABEL_94;
  v30 = v14 + v29;
  v31 = -1;
  if ( v30 >= v14 )
    v31 = v30;
  v7 = v30 < v14 ? 0xC0000095 : 0;
  if ( v30 < v14 )
    goto LABEL_94;
  v32 = v79;
  v33 = v31 + v79;
  v34 = -1;
  if ( v31 + v79 >= v31 )
    v34 = v31 + v79;
  v7 = v33 < v31 ? 0xC0000095 : 0;
  if ( v33 < v31 )
    goto LABEL_94;
  v35 = v34 + v80;
  v36 = -1;
  if ( v34 + v80 >= v34 )
    v36 = v34 + v80;
  v82 = v36;
  v7 = v35 < v34 ? 0xC0000095 : 0;
  if ( v35 < v34 )
  {
LABEL_94:
    v38 = 0LL;
    goto LABEL_95;
  }
  if ( (unsigned int)v86 < v36 )
  {
    *v96 = v36;
    v7 = -1073741789;
    goto LABEL_94;
  }
  if ( v74 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, 8 * v74, 1450669125LL);
    v38 = Pool2;
    v78 = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_95;
    }
    memset(Pool2, 0, 8 * v74);
    v32 = v79;
  }
  v39 = v90;
  if ( (*(_DWORD *)(v90 + 16) & 1) != 0 )
  {
    v40 = v89;
    v41 = *(_QWORD *)(v89 + 1320);
    if ( v41 )
    {
      v100 = *(_QWORD *)(v89 + 1320);
      memset((void *)(v41 + 8), 0, 4LL * *(unsigned int *)(v41 + 4));
      v40 = v89;
    }
    v42 = *(_QWORD *)(v40 + 1328);
    if ( v42 )
    {
      v100 = *(_QWORD *)(v40 + 1328);
      memset((void *)(v42 + 8), 0, 4LL * *(unsigned int *)(v42 + 4));
    }
  }
  v43 = v39 + 20;
  v91 = v43;
  v44 = (char *)(v39 + 64);
  v77 = v44;
  *(_OWORD *)v43 = 0LL;
  *(_OWORD *)(v43 + 16) = 0LL;
  *(_QWORD *)(v43 + 32) = 0LL;
  *(_DWORD *)(v43 + 40) = 0;
  *(_DWORD *)v43 = 44;
  *(_DWORD *)(v43 + 8) = *(_DWORD *)(BugCheckParameter2 + 1724);
  *(_DWORD *)(v43 + 16) = 1108;
  *(_DWORD *)(v43 + 12) = (_DWORD)v44 - v43;
  v45 = v44;
  v105 = v44;
  v46 = v44 + 1108;
  v77 = v46;
  v47 = (_OWORD *)(v6 + 8);
  v48 = 8LL;
  do
  {
    *(_OWORD *)v45 = *v47;
    *((_OWORD *)v45 + 1) = v47[1];
    *((_OWORD *)v45 + 2) = v47[2];
    *((_OWORD *)v45 + 3) = v47[3];
    *((_OWORD *)v45 + 4) = v47[4];
    *((_OWORD *)v45 + 5) = v47[5];
    *((_OWORD *)v45 + 6) = v47[6];
    v45 += 128;
    *((_OWORD *)v45 - 1) = v47[7];
    v47 += 8;
    --v48;
  }
  while ( v48 );
  *(_OWORD *)v45 = *v47;
  *((_OWORD *)v45 + 1) = v47[1];
  *((_OWORD *)v45 + 2) = v47[2];
  *((_OWORD *)v45 + 3) = v47[3];
  *((_OWORD *)v45 + 4) = v47[4];
  *((_DWORD *)v45 + 20) = *((_DWORD *)v47 + 20);
  *(_DWORD *)(v43 + 24) = 60;
  *(_DWORD *)(v43 + 20) = (_DWORD)v46 - v43;
  v95 = v46;
  v49 = v46 + 60;
  *(_DWORD *)(v43 + 32) = v84;
  *(_DWORD *)(v43 + 28) = (_DWORD)v49 - v43;
  v50 = v49;
  v102 = v49;
  v51 = &v49[v101];
  v77 = v51;
  v106 = v51;
  v52 = (__int64 *)(BugCheckParameter2 + 1680);
  v53 = *(__int64 **)(BugCheckParameter2 + 1680);
  while ( 1 )
  {
    v76 = v53;
    if ( v53 == v52 )
      break;
    v104 = v53;
    v54 = 0;
    v93 = 0;
    while ( v54 < *((_DWORD *)v53 + 5) )
    {
      v55 = (_DWORD *)(v53[3] + 8LL * v54);
      v107 = v55;
      if ( *(_QWORD *)v55 )
      {
        if ( v50 >= v51 )
          break;
        *(_DWORD *)v50 = *v55;
        *((_DWORD *)v50 + 1) = v55[1];
        v50 += 8;
        v102 = v50;
      }
      v93 = ++v54;
    }
    v53 = (__int64 *)*v53;
    v52 = (__int64 *)(BugCheckParameter2 + 1680);
  }
  *(_DWORD *)(v43 + 40) = v75;
  *(_DWORD *)(v43 + 36) = (_DWORD)v51 - v43;
  v56 = v51;
  v99 = v51;
  v57 = &v51[v83];
  memset(v56, 0, v57 - v99);
  v58 = v57;
  v86 = (unsigned __int64)v57;
  v103 = (wchar_t *)&v57[v80];
  v59 = v80 + (_DWORD)v57;
  pszDest = v103;
  v60 = v32 + (_DWORD)v103;
  v77 = (char *)v103 + v32;
  v90 = (unsigned __int64)v77;
  v85 = 0;
  v61 = (__int128 *)v87;
  v76 = (__int64 *)v87;
  while ( v61 != &v87 )
  {
    v76 = *(__int64 **)v61;
    v62 = v91;
    v63 = v99;
    *((_DWORD *)v99 + 2) = (_DWORD)v58 - v91;
    *((_DWORD *)v63 + 3) = *((_DWORD *)v61 - 22);
    *(_DWORD *)v63 = v59 - v62;
    *((_DWORD *)v63 + 1) = (unsigned __int16)*((_DWORD *)v61 - 6);
    *((_DWORD *)v63 + 4) = *((_DWORD *)v61 - 27);
    *((_DWORD *)v63 + 5) = *((_DWORD *)v61 - 28);
    *((_DWORD *)v63 + 6) = *((_DWORD *)v61 - 26);
    *((_DWORD *)v63 + 7) = *((_DWORD *)v61 - 5);
    *((_DWORD *)v63 + 8) = *((_DWORD *)v61 - 4);
    *((_DWORD *)v63 + 9) = *((_DWORD *)v61 + 4);
    *((_DWORD *)v63 + 10) = *((_DWORD *)v61 + 5);
    *((_DWORD *)v63 + 11) = *((_DWORD *)v61 + 6);
    v99 = v63 + 48;
    memmove(v58, *((const void **)v61 - 12), *((unsigned int *)v61 - 22));
    v86 = (*((unsigned int *)v61 - 22) + v86 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v86 > (unsigned __int64)v103 )
      break;
    RtlStringCchCopyNW(
      pszDest,
      (__int64)(v90 - (_QWORD)pszDest) >> 1,
      *((STRSAFE_PCNZWCH *)v61 - 4),
      (unsigned __int16)*((_DWORD *)v61 - 6));
    pszDest += (unsigned int)(unsigned __int16)*((_DWORD *)v61 - 6) + 1;
    if ( (unsigned __int64)pszDest > v90 )
      break;
    v64 = KeGetCurrentThread();
    --v64->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 1176, 0LL);
    *(_QWORD *)(v6 + 1184) = KeGetCurrentThread();
    v65 = v85;
    *(_QWORD *)&v78[8 * v85] = *((_QWORD *)v61 - 5);
    v85 = v65 + 1;
    *((_QWORD *)v61 - 5) = 0LL;
    *((_QWORD *)v61 - 4) = 0LL;
    *((_DWORD *)v61 - 6) &= 0xFFFF0000;
    *((_DWORD *)v61 - 6) |= 0x80000u;
    *(_QWORD *)(v6 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1176));
    KeAbPostRelease(v6 + 1176);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    --v75;
    if ( *((_QWORD *)v61 - 10) == 1LL )
      _InterlockedAdd((volatile signed __int32 *)(v6 + 1636), 1u);
    _InterlockedExchange((volatile __int32 *)v61 - 3, 0);
    v60 = (unsigned int)v77;
    v61 = (__int128 *)v76;
    v59 = (unsigned int)pszDest;
    v58 = (void *)v86;
  }
  v66 = v95;
  *(_OWORD *)v95 = *(_OWORD *)(v6 + 1116);
  v66[1] = *(_OWORD *)(v6 + 1132);
  v66[2] = *(_OWORD *)(v6 + 1148);
  *((_QWORD *)v66 + 6) = *(_QWORD *)(v6 + 1164);
  *((_DWORD *)v66 + 14) = *(_DWORD *)(v6 + 1172);
  *(_OWORD *)(v6 + 1116) = 0LL;
  *(_OWORD *)(v6 + 1132) = 0LL;
  *(_OWORD *)(v6 + 1148) = 0LL;
  *(_QWORD *)(v6 + 1164) = 0LL;
  *(_DWORD *)(v6 + 1172) = 0;
  v108 = 0LL;
  v109 = 0LL;
  EtwpCovSampCaptureFlushStats(v89, &v108);
  *(_OWORD *)((char *)v66 + 28) = v108;
  *(_OWORD *)((char *)v66 + 44) = v109;
  *(_DWORD *)(v91 + 4) = v60 - v91;
  v67 = (__int64 *)(BugCheckParameter2 + 1680);
  v68 = *(__int64 **)(BugCheckParameter2 + 1680);
  v76 = v68;
  while ( v68 != v67 )
  {
    v69 = v68;
    v104 = v68;
    v68 = (__int64 *)*v68;
    v76 = v68;
    if ( v69 == *(__int64 **)(BugCheckParameter2 + 1664) )
    {
      memset((void *)v69[3], 0, 8LL * *((unsigned int *)v69 + 5));
      *((_DWORD *)v69 + 4) = 0;
    }
    else
    {
      v70 = (__int64 **)v69[1];
      if ( (__int64 *)v68[1] != v69 || *v70 != v69 )
        goto LABEL_93;
      *v70 = v68;
      v68[1] = (__int64)v70;
      --*(_DWORD *)(BugCheckParameter2 + 1696);
      EtwpCoverageSamplerFreeTable(v69);
    }
    v67 = (__int64 *)(BugCheckParameter2 + 1680);
  }
  ++*(_DWORD *)(BugCheckParameter2 + 1724);
  EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v89, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  EtwpCovSampContextPruneModules(v6);
  *v96 = v82;
  v7 = 0;
  v38 = v78;
LABEL_95:
  if ( *(struct _KTHREAD **)(v6 + 1184) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v6 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1176));
    KeAbPostRelease(v6 + 1176);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v38 )
  {
    if ( v74 )
    {
      v71 = v38;
      v72 = v74;
      do
      {
        EtwpCovSampModuleNameInfoCleanup(v71);
        v71 += 8;
        --v72;
      }
      while ( v72 );
    }
    ExFreePoolWithTag(v38, 0x56777445u);
  }
  if ( v92 )
  {
    ExReleaseRundownProtection_0(&stru_140C31880);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v7;
}
