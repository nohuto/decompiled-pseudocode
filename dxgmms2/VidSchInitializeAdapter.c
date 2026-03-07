_VIDSCH_GLOBAL *__fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  _VIDSCH_GLOBAL *Pool2; // rax
  _VIDSCH_GLOBAL *v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // r15
  unsigned __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  char *v27; // rbx
  __int64 v28; // r15
  char *v29; // rbx
  __int64 v30; // r15
  __int64 Timer; // rax
  NTSTATUS v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // ebx
  _DWORD *v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  unsigned int i; // edx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r14
  __int64 v44; // rbx
  __int64 v45; // r13
  __int64 v46; // r14
  unsigned int v47; // ebx
  unsigned __int64 v48; // r13
  __int64 v49; // rax
  bool v50; // cf
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // r13d
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned int v58; // edx
  unsigned int j; // edx
  __int64 v60; // rax
  _QWORD *v61; // rcx
  unsigned int v62; // eax
  unsigned int v63; // ebx
  unsigned int v64; // eax
  __int64 Node; // rax
  __int64 *v66; // rcx
  __int64 v67; // r15
  _QWORD *v68; // rcx
  unsigned int v69; // r8d
  _QWORD *v70; // rdx
  unsigned int v71; // r13d
  __int64 v72; // rax
  __int64 *v73; // rcx
  _QWORD *v74; // rcx
  unsigned int v75; // r8d
  _QWORD *v76; // rdx
  int v77; // eax
  int v78; // eax
  NTSTATUS v79; // eax
  _QWORD *v80; // rcx
  _QWORD *v81; // rax
  __int64 v83; // rcx
  unsigned int v84; // ecx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // [rsp+50h] [rbp-B0h]
  unsigned int v88; // [rsp+50h] [rbp-B0h]
  int v89; // [rsp+58h] [rbp-A8h] BYREF
  void *ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int64 v92; // [rsp+A0h] [rbp-60h] BYREF
  int v93; // [rsp+A8h] [rbp-58h]
  const wchar_t *v94; // [rsp+B0h] [rbp-50h]
  unsigned int *v95; // [rsp+B8h] [rbp-48h]
  int v96; // [rsp+C0h] [rbp-40h]
  int *v97; // [rsp+C8h] [rbp-38h]
  int v98; // [rsp+D0h] [rbp-30h]
  __int64 v99; // [rsp+D8h] [rbp-28h]
  int v100; // [rsp+E0h] [rbp-20h]
  __int128 v101; // [rsp+E8h] [rbp-18h]
  __int128 v102; // [rsp+F8h] [rbp-8h]
  __int64 v103; // [rsp+108h] [rbp+8h]
  unsigned int v104; // [rsp+150h] [rbp+50h]
  unsigned int v105; // [rsp+150h] [rbp+50h]
  unsigned int v106; // [rsp+168h] [rbp+68h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v83, 0x40000LL);
    return 0LL;
  }
  v6 = *(_QWORD *)(a1 + 16);
  v87 = v6;
  Pool2 = (_VIDSCH_GLOBAL *)ExAllocatePool2(64LL, 6640LL, 811690326LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 0LL;
  }
  v8 = _VIDSCH_GLOBAL::_VIDSCH_GLOBAL(Pool2);
  *(_DWORD *)v8 = 811690326;
  *((_DWORD *)v8 + 1) = *(_DWORD *)(v6 + 240);
  *((_QWORD *)v8 + 1) = a1;
  *((_QWORD *)v8 + 2) = v6;
  *((_QWORD *)v8 + 3) = a2;
  *((_DWORD *)v8 + 8) = *(_DWORD *)(v6 + 2252);
  *((_DWORD *)v8 + 9) = 7;
  *((_QWORD *)v8 + 826) = a3;
  KeQueryPerformanceCounter((PLARGE_INTEGER)v8 + 328);
  v9 = *(_DWORD *)(v6 + 1672);
  *((_DWORD *)v8 + 10) = v9;
  if ( !v9 )
  {
    *((_DWORD *)v8 + 10) = 1;
    *((_BYTE *)v8 + 50) = 1;
  }
  if ( *(_BYTE *)(v6 + 2759) )
    *((_BYTE *)v8 + 51) = 1;
  *((_BYTE *)v8 + 45) = (*(_DWORD *)(v6 + 2280) & 2) != 0;
  *((_BYTE *)v8 + 44) = *(_BYTE *)(v6 + 2754);
  *((_BYTE *)v8 + 46) = (*(_DWORD *)(v6 + 2280) & 0x10) != 0;
  *((_BYTE *)v8 + 47) = (*(_DWORD *)(v6 + 2276) & 0x10) != 0;
  *((_BYTE *)v8 + 48) = (*(_DWORD *)(v6 + 2280) & 0x20) == 0;
  *((_BYTE *)v8 + 49) = (*(_DWORD *)(v6 + 2280) & 0x40) != 0;
  v10 = 14;
  *((_BYTE *)v8 + 53) = (**(_DWORD **)(v6 + 2824) & 0x40) != 0;
  if ( ((*(_DWORD *)(v6 + 2280) >> 7) & 0xF) != 0 && ((*(_DWORD *)(v6 + 2280) >> 7) & 0xFu) < 0xE )
    v10 = (*(_DWORD *)(v6 + 2280) >> 7) & 0xF;
  *((_DWORD *)v8 + 57) = v10;
  *((_DWORD *)v8 + 38) = *(_DWORD *)(v6 + 2760);
  *((_BYTE *)v8 + 156) = *(_BYTE *)(v6 + 2866) != 0;
  *((_DWORD *)v8 + 40) = *(_DWORD *)(v6 + 2788);
  if ( (**(_DWORD **)(v6 + 2824) & 0x100000) != 0 )
  {
    v84 = *(_DWORD *)(v6 + 2796);
    *((_DWORD *)v8 + 15) = v84;
    if ( !v84 )
    {
      *((_DWORD *)v8 + 15) = 1;
      v84 = 1;
    }
    *((_DWORD *)v8 + 16) = *(_DWORD *)(v6 + 2800);
    *((_BYTE *)v8 + 59) = v84 > 1;
  }
  else
  {
    *((_DWORD *)v8 + 15) = 1;
  }
  v11 = 0;
  *((_BYTE *)v8 + 6632) = *(_BYTE *)(v6 + 2888) != 0;
  *((_BYTE *)v8 + 2212) = (*(_DWORD *)(v6 + 2792) & 0x10) != 0;
  *((_QWORD *)v8 + 301) = MEMORY[0xFFFFF78000000320];
  v12 = *(_DWORD *)(v6 + 288);
  *(_QWORD *)((char *)v8 + 76) = v12;
  if ( v12 )
  {
    v13 = 0LL;
    v14 = v12;
    do
    {
      v15 = *(unsigned __int16 *)(v13 + *(_QWORD *)(v6 + 2808));
      v13 += 344LL;
      v11 += v15;
      *((_DWORD *)v8 + 20) = v11;
      --v14;
    }
    while ( v14 );
  }
  v16 = (unsigned int)(v11 + *((_DWORD *)v8 + 19));
  *((_DWORD *)v8 + 21) = v16;
  v17 = (unsigned __int64)(v16 + 63) >> 6;
  if ( (unsigned int)v16 <= 8 )
  {
    *((_QWORD *)v8 + 79) = (char *)v8 + 640;
    if ( (_DWORD)v16 )
      memset((char *)v8 + 640, 0, 8LL * (unsigned int)v16);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v16 < 8 )
    {
LABEL_127:
      WdLogSingleEntry1(1LL, v6);
      goto LABEL_128;
    }
    *((_QWORD *)v8 + 79) = ExAllocatePool2(64LL, 8 * v16, 811690326LL);
  }
  *((_DWORD *)v8 + 176) = v16;
  if ( !*((_QWORD *)v8 + 79)
    || !NonPagedPoolZeroedArray<unsigned long,8,811690326>::AllocateElements((__int64 *)v8 + 321, *((_DWORD *)v8 + 21))
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v8 + 57, v17)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v8 + 63, v17)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v8 + 69, v17)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v8 + 75, v17) )
  {
    goto LABEL_127;
  }
  RtlInitializeBitMapEx((char *)v8 + 440, *((_QWORD *)v8 + 57), *((unsigned int *)v8 + 21));
  RtlInitializeBitMapEx((char *)v8 + 488, *((_QWORD *)v8 + 63), *((unsigned int *)v8 + 21));
  RtlInitializeBitMapEx((char *)v8 + 536, *((_QWORD *)v8 + 69), *((unsigned int *)v8 + 21));
  RtlInitializeBitMapEx((char *)v8 + 584, *((_QWORD *)v8 + 75), *((unsigned int *)v8 + 21));
  v18 = 31;
  v19 = *((unsigned int *)v8 + 19);
  if ( *(_DWORD *)(v6 + 2272) < 0x1Fu )
    v18 = *(_DWORD *)(v6 + 2272);
  *((_DWORD *)v8 + 654) = v18;
  v20 = 8 * v19;
  *((_DWORD *)v8 + 634) ^= (*(_DWORD *)(v6 + 2276) ^ *((_DWORD *)v8 + 634)) & 8;
  v21 = ExAllocatePool2(64LL, v20, 811690326LL);
  v22 = 0LL;
  *((_QWORD *)v8 + 33) = v21;
  if ( !v21 )
    goto LABEL_127;
  v23 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v8 + 19), 811690326LL);
  *((_QWORD *)v8 + 34) = v23;
  if ( !v23 )
    goto LABEL_127;
  v24 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v8 + 19), 811690326LL);
  *((_QWORD *)v8 + 35) = v24;
  if ( !v24 )
    goto LABEL_127;
  v25 = ExAllocatePool2(64LL, v20, 811690326LL);
  *((_QWORD *)v8 + 36) = v25;
  if ( !v25 )
    goto LABEL_127;
  *((_DWORD *)v8 + 78) = 0;
  VidSchiReadGlobalConfiguration(v8);
  v26 = 3;
  if ( (*((_BYTE *)v8 + 2536) & 0x18) != 0x18 )
    v26 = 1;
  *((_DWORD *)v8 + 635) = v26;
  *((_DWORD *)v8 + 636) = 5;
  if ( !*((_DWORD *)v8 + 637) && (*(_DWORD *)(v6 + 2276) & 0x40) == 0 )
    *((_DWORD *)v8 + 637) = 1;
  if ( !*((_DWORD *)v8 + 638) )
    *((_DWORD *)v8 + 638) = (*(_DWORD *)(*((_QWORD *)v8 + 2) + 2820LL) >= 2400) + 1;
  if ( !*((_DWORD *)v8 + 639) )
    *((_DWORD *)v8 + 639) = 1;
  ExInitializeResourceLite((PERESOURCE)((char *)v8 + 984));
  ExInitializeResourceLite((PERESOURCE)((char *)v8 + 1088));
  ExInitializeResourceLite((PERESOURCE)((char *)v8 + 320));
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 216);
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 219);
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 217);
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 218);
  v27 = (char *)v8 + 1192;
  v28 = 4LL;
  do
  {
    *(_OWORD *)v27 = 0LL;
    *((_OWORD *)v27 + 1) = 0LL;
    *((_OWORD *)v27 + 2) = 0LL;
    *((_QWORD *)v27 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)v27, SynchronizationEvent, 0);
    v27 += 56;
    --v28;
  }
  while ( v28 );
  v29 = (char *)v8 + 1416;
  v30 = 4LL;
  do
  {
    *(_OWORD *)v29 = 0LL;
    *((_OWORD *)v29 + 1) = 0LL;
    *((_OWORD *)v29 + 2) = 0LL;
    *((_QWORD *)v29 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)v29, SynchronizationEvent, 0);
    v29 += 56;
    --v30;
  }
  while ( v30 );
  Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, v8, 4LL);
  *((_QWORD *)v8 + 23) = Timer;
  if ( !Timer )
  {
LABEL_123:
    WdLogSingleEntry0(3LL);
LABEL_130:
    VidSchTerminateAdapter(v8);
    return 0LL;
  }
  *((_QWORD *)v8 + 38) = (char *)v8 + 296;
  *((_QWORD *)v8 + 37) = (char *)v8 + 296;
  InitializeSListHead((PSLIST_HEADER)v8 + 111);
  *((_QWORD *)v8 + 225) = (char *)v8 + 1792;
  *((_QWORD *)v8 + 224) = (char *)v8 + 1792;
  *((_QWORD *)v8 + 206) = (char *)v8 + 1640;
  *((_QWORD *)v8 + 205) = (char *)v8 + 1640;
  *((_QWORD *)v8 + 208) = (char *)v8 + 1656;
  *((_QWORD *)v8 + 207) = (char *)v8 + 1656;
  *((_QWORD *)v8 + 210) = (char *)v8 + 1672;
  *((_QWORD *)v8 + 209) = (char *)v8 + 1672;
  *((_QWORD *)v8 + 212) = (char *)v8 + 1688;
  *((_QWORD *)v8 + 211) = (char *)v8 + 1688;
  *((_QWORD *)v8 + 396) = (char *)v8 + 3160;
  *((_QWORD *)v8 + 395) = (char *)v8 + 3160;
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 397);
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 398);
  *((_QWORD *)v8 + 214) = (char *)v8 + 1704;
  *((_QWORD *)v8 + 213) = (char *)v8 + 1704;
  *((_QWORD *)v8 + 104) = (char *)v8 + 824;
  *((_QWORD *)v8 + 103) = (char *)v8 + 824;
  *((_QWORD *)v8 + 106) = (char *)v8 + 840;
  *((_QWORD *)v8 + 105) = (char *)v8 + 840;
  *((_QWORD *)v8 + 108) = (char *)v8 + 856;
  *((_QWORD *)v8 + 107) = (char *)v8 + 856;
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 308);
  ExInitializeResourceLite((PERESOURCE)((char *)v8 + 2880));
  KeInitializeEvent((PRKEVENT)((char *)v8 + 2984), SynchronizationEvent, 0);
  *((_QWORD *)v8 + 282) = v8;
  *((_QWORD *)v8 + 281) = VidSchiControlVSyncThread;
  *((_QWORD *)v8 + 279) = 0LL;
  *((_QWORD *)v8 + 305) = VidSchiDeferredVisibilityThread;
  *((_QWORD *)v8 + 306) = v6;
  *((_QWORD *)v8 + 441) = (char *)v8 + 3520;
  *((_QWORD *)v8 + 440) = (char *)v8 + 3520;
  *((_QWORD *)v8 + 443) = (char *)v8 + 3536;
  *((_QWORD *)v8 + 442) = (char *)v8 + 3536;
  *((_QWORD *)v8 + 303) = 0LL;
  v32 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)v8 + 880),
          0LL,
          0LL,
          (POOL_TYPE)512,
          0,
          *((_DWORD *)v8 + 38) * ((*((_DWORD *)v8 + 19) << 6) + ((8 * *((_DWORD *)v8 + 19) + 231) & 0xFFFFFFF8))
        + 656
        + 8 * *((_DWORD *)v8 + 19),
          0x38616956u,
          0);
  if ( v32 < 0 )
  {
    WdLogSingleEntry2(1LL, v8, v32);
LABEL_128:
    v86 = 0x40000LL;
    goto LABEL_129;
  }
  v33 = *((_DWORD *)v8 + 10);
  v34 = 0;
  v104 = 0;
  *((_BYTE *)v8 + 976) = 1;
  for ( *((_BYTE *)v8 + 6634) = 1; v34 < v33; v104 = v34 )
  {
    v35 = (_DWORD *)ExAllocatePool2(64LL, 82960LL, 962685270LL);
    v36 = v34;
    *((_QWORD *)v8 + v34 + 400) = v35;
    if ( !v35 )
      goto LABEL_123;
    *v35 = 962685270;
    *(_DWORD *)(*((_QWORD *)v8 + v34 + 400) + 44328LL) = -1;
    *(_BYTE *)(*((_QWORD *)v8 + v34 + 400) + 78788LL) = 1;
    *(_DWORD *)(*((_QWORD *)v8 + v34 + 400) + 82932LL) = 1;
    *(_DWORD *)(*((_QWORD *)v8 + v34 + 400) + 24LL) = v34;
    if ( *((_BYTE *)v8 + 6634) )
    {
      v37 = (_QWORD *)operator new(4200LL, 0x39616956u, 64LL);
      v38 = v37;
      if ( v37 )
      {
        v37[11] = 0LL;
        *v37 = &LinearFitT<256>::`vftable';
        v37[12] = 0LL;
        v37[4] = 0x3FF0000000000000LL;
        LinearFitT<256>::Reset((__int64)v37);
        v38[11] = 1LL;
        *v38 = &LinearFitT<256>::`vftable';
      }
      else
      {
        v38 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)v8 + v36 + 400) + 44248LL) = v38;
      if ( !*(_QWORD *)(*((_QWORD *)v8 + v36 + 400) + 44248LL) )
        goto LABEL_120;
    }
    for ( i = 0; i < *((_DWORD *)v8 + 38); *(_DWORD *)(288 * v40 + *((_QWORD *)v8 + v36 + 400) + 188) = -1 )
      v40 = i++;
    v41 = ExAllocatePool2(64LL, 12LL, 962685270LL);
    *((_QWORD *)v8 + v36 + 810) = v41;
    if ( !v41 )
      goto LABEL_123;
    InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v8 + v36 + 400) + 44688LL));
    v42 = 0LL;
    v43 = 64LL;
    do
    {
      *(_DWORD *)(*((_QWORD *)v8 + v36 + 400) + v22 + 44704) = 929130838;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*((_QWORD *)v8 + v36 + 400) + 44688LL),
        (PSLIST_ENTRY)(v42 + *((_QWORD *)v8 + v36 + 400) + 44720LL));
      v42 += 528LL;
      v22 += 528LL;
      --v43;
    }
    while ( v43 );
    v44 = 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + v36 + 400) + 78800LL) = 0LL;
    *(_WORD *)(*((_QWORD *)v8 + v36 + 400) + 82928LL) = 0;
    InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v8 + v36 + 400) + 78816LL));
    v45 = 0LL;
    v46 = 64LL;
    do
    {
      *(_DWORD *)(*((_QWORD *)v8 + v36 + 400) + v45 + 78832) = 1650551126;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*((_QWORD *)v8 + v36 + 400) + 78816LL),
        (PSLIST_ENTRY)(v44 + *((_QWORD *)v8 + v36 + 400) + 78848LL));
      v44 += 64LL;
      v45 += 64LL;
      --v46;
    }
    while ( v46 );
    v6 = v87;
    v47 = v104;
    *(_DWORD *)(*((_QWORD *)v8 + v36 + 400) + 128LL) = *((_DWORD *)v8 + 56);
    v48 = *(unsigned int *)(*((_QWORD *)v8 + v36 + 400) + 128LL);
    v49 = 112 * v48;
    if ( !is_mul_ok(v48, 0x70uLL) )
      v49 = -1LL;
    v50 = __CFADD__(v49, 8LL);
    v51 = v49 + 8;
    if ( v50 )
      v51 = -1LL;
    v52 = (_QWORD *)operator new[](v51, 0x61616956u, 64LL);
    if ( v52 )
    {
      *v52 = v48;
      v53 = v52 + 1;
    }
    else
    {
      v53 = 0LL;
    }
    *(_QWORD *)(*((_QWORD *)v8 + v36 + 400) + 136LL) = v53;
    v54 = *((_QWORD *)v8 + v36 + 400);
    if ( !*(_QWORD *)(v54 + 136) )
    {
      WdLogSingleEntry1(1LL, v36);
      goto LABEL_128;
    }
    v55 = 0;
    if ( *(_DWORD *)(v54 + 128) )
    {
      while ( 1 )
      {
        v56 = *(_QWORD *)(v54 + 136) + 112LL * v55;
        v57 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v8 + 38), 962685270LL);
        *(_QWORD *)(v56 + 72) = v57;
        if ( !v57 )
          break;
        v54 = *((_QWORD *)v8 + v36 + 400);
        if ( ++v55 >= *(_DWORD *)(v54 + 128) )
        {
          v47 = v104;
          goto LABEL_67;
        }
      }
LABEL_120:
      WdLogSingleEntry0(1LL);
      goto LABEL_128;
    }
LABEL_67:
    v33 = *((_DWORD *)v8 + 10);
    v34 = v47 + 1;
    v22 = 0LL;
  }
  v58 = *((_DWORD *)v8 + 38) * v33;
  if ( !v58 )
    v58 = 1;
  if ( !NonPagedPoolZeroedArray<_VIDSCH_INDEPENDENT_FLIP_STATE,1,962685270>::AllocateElements((__int64 *)v8 + 416, v58) )
  {
    _InterlockedAdd(&dword_1C00768E0, 1u);
    WdLogSingleEntry1(6LL, 882LL);
    v86 = 262145LL;
LABEL_129:
    DxgkLogInternalTriageEvent(v85, v86);
    goto LABEL_130;
  }
  for ( j = 0; j < *((_DWORD *)v8 + 874); v61[17] = v61 + 17 )
  {
    v60 = j++;
    v61 = (_QWORD *)(*((_QWORD *)v8 + 416) + 160 * v60);
    v61[16] = v61 + 15;
    v61[15] = v61 + 15;
    v61[18] = v61 + 17;
  }
  v62 = *((_DWORD *)v8 + 19);
  *((_QWORD *)v8 + 438) = 0LL;
  *((_DWORD *)v8 + 878) = -1;
  v63 = 0;
  if ( v62 )
  {
    while ( 1 )
    {
      v64 = 0;
      v105 = 0;
      v88 = *(unsigned __int16 *)(344LL * (unsigned int)v22 + *(_QWORD *)(v6 + 2808));
      *((_BYTE *)v8 + (unsigned int)v22 + 88) = v63;
      if ( v88 )
        break;
LABEL_84:
      v62 = *((_DWORD *)v8 + 19);
      LODWORD(v22) = v22 + 1;
      if ( (unsigned int)v22 >= v62 )
        goto LABEL_85;
    }
    while ( 1 )
    {
      Node = VidSchiCreateNode(v8, (unsigned int)v22, v64, v63);
      v66 = (__int64 *)*((_QWORD *)v8 + 79);
      v67 = v63;
      if ( v63 < *((_DWORD *)v8 + 176) )
        v66 += v63;
      *v66 = Node;
      v68 = (_QWORD *)*((_QWORD *)v8 + 79);
      v69 = *((_DWORD *)v8 + 176);
      v70 = &v68[v63];
      if ( v63 >= v69 )
        v70 = (_QWORD *)*((_QWORD *)v8 + 79);
      if ( !*v70 )
        goto LABEL_125;
      if ( v63 < v69 )
        v68 += v63;
      if ( (int)VidSchiInitializeNode(*v68) < 0 )
        goto LABEL_130;
      ++v63;
      v64 = v105 + 1;
      v105 = v64;
      if ( v64 >= v88 )
        goto LABEL_84;
    }
  }
LABEL_85:
  v71 = 0;
  if ( v62 )
  {
    while ( 1 )
    {
      v72 = VidSchiCreateNode(v8, v71, 0x7FFFLL, v63);
      v73 = (__int64 *)*((_QWORD *)v8 + 79);
      v67 = v63;
      if ( v63 < *((_DWORD *)v8 + 176) )
        v73 += v63;
      *v73 = v72;
      v74 = (_QWORD *)*((_QWORD *)v8 + 79);
      v75 = *((_DWORD *)v8 + 176);
      v76 = &v74[v63];
      if ( v63 >= v75 )
        v76 = (_QWORD *)*((_QWORD *)v8 + 79);
      if ( !*v76 )
        break;
      if ( v63 < v75 )
        v74 += v63;
      if ( (int)VidSchiInitializeNode(*v74) < 0 )
        goto LABEL_130;
      ++v63;
      if ( ++v71 >= *((_DWORD *)v8 + 19) )
        goto LABEL_95;
    }
LABEL_125:
    WdLogSingleEntry2(1LL, v6, v67);
    goto LABEL_128;
  }
LABEL_95:
  v89 = 1;
  v106 = 0;
  v94 = L"PageFaultDebugMode";
  v92 = 0LL;
  v95 = &v106;
  v93 = 288;
  v97 = &v89;
  v96 = 67108868;
  v103 = 0LL;
  v98 = 4;
  v99 = 0LL;
  v100 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v77 = RtlQueryRegistryValuesEx(
          0LL,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
          &v92,
          0LL,
          0LL);
  if ( v77 < 0 )
  {
    v106 = 1;
    WdLogSingleEntry1(3LL, v77);
  }
  v78 = v106;
  if ( v106 > 1 )
  {
    WdLogSingleEntry1(3LL, v106);
    v78 = 1;
    v106 = 1;
  }
  g_PageFaultDebugMode = v78;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ThreadHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v79 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, VidSchiWorkerThread, v8);
  if ( v79 < 0 )
  {
    WdLogSingleEntry2(1LL, v6, v79);
    goto LABEL_128;
  }
  VidSchiRequestSchedulerStatus(v8, 1LL, 1LL);
  ObfReferenceObject(*((PVOID *)v8 + 21));
  ZwClose(ThreadHandle);
  ExAcquirePushLockExclusiveEx(&gAdapterListLock, 0LL);
  v80 = (_QWORD *)qword_1C0076918;
  v81 = (_QWORD *)((char *)v8 + 3560);
  if ( *(PVOID **)qword_1C0076918 != &gAdapterListHead )
    __fastfail(3u);
  *v81 = &gAdapterListHead;
  *((_QWORD *)v8 + 446) = v80;
  *v80 = v81;
  qword_1C0076918 = (__int64)v8 + 3560;
  ExReleasePushLockExclusiveEx(&gAdapterListLock, 0LL);
  return v8;
}
