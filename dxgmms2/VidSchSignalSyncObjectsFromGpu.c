__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        unsigned int a1,
        __int64 a2,
        KPRIORITY a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned __int64 *a8,
        unsigned __int8 a9)
{
  unsigned int v9; // edx
  __int64 v10; // r12
  unsigned int v11; // r15d
  KSPIN_LOCK *v12; // rax
  unsigned __int64 *v13; // r13
  __int64 v14; // rsi
  unsigned __int64 *v15; // rdi
  __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // r9
  bool v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD **Pool2; // rsi
  unsigned int v23; // r14d
  KSPIN_LOCK *v24; // rcx
  __int64 v25; // rax
  _QWORD **v26; // rdx
  _DWORD *v27; // r8
  __int64 v28; // r14
  __int64 v29; // r12
  unsigned __int64 *v30; // rsi
  __int64 v31; // rdi
  int v32; // edx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 HwQueuePacket; // rax
  __int64 *v36; // r8
  __int64 v37; // rcx
  unsigned __int64 *v38; // r9
  __int64 v39; // r13
  char *v40; // r9
  __int64 v41; // r8
  _DWORD *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  _QWORD *v46; // r8
  unsigned __int64 *v47; // r14
  __int64 v48; // r13
  KPRIORITY v49; // r9d
  __int64 v50; // rdi
  int v51; // r8d
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v55; // rdx
  bool v56; // zf
  struct _KLOCK_QUEUE_HANDLE *v57; // rcx
  __int64 v59; // r12
  __int64 v60; // rdi
  struct _VIDSCH_QUEUE_PACKET *v61; // rcx
  __int64 v62; // r15
  __int64 v63; // rax
  _QWORD *v64; // r13
  __int64 v65; // r14
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v70; // edi
  __int64 v71; // rax
  VIDMM_DEVICE *v72; // rcx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // r9
  const wchar_t *v77; // r9
  unsigned __int64 v78; // r8
  unsigned int v79; // eax
  unsigned __int64 v80; // r8
  char v81; // r13
  int v82; // eax
  __int64 v83; // rbx
  struct _VIDSCH_QUEUE_PACKET *v84; // rdx
  unsigned __int64 v85; // r15
  unsigned __int64 v86; // r8
  unsigned int v87; // eax
  unsigned __int64 v88; // r15
  unsigned __int64 v89; // r8
  struct VIDSCH_HW_QUEUE *v90; // [rsp+50h] [rbp-B0h]
  unsigned int v91; // [rsp+50h] [rbp-B0h]
  __int64 *v92; // [rsp+58h] [rbp-A8h]
  int v93; // [rsp+58h] [rbp-A8h]
  __int64 v94; // [rsp+58h] [rbp-A8h]
  __int64 v95; // [rsp+58h] [rbp-A8h]
  __int64 v96; // [rsp+58h] [rbp-A8h]
  __int64 v97; // [rsp+58h] [rbp-A8h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-A0h]
  KSPIN_LOCK *SpinLocka; // [rsp+60h] [rbp-A0h]
  PKSPIN_LOCK SpinLockb; // [rsp+60h] [rbp-A0h]
  _QWORD **v101; // [rsp+68h] [rbp-98h]
  unsigned __int64 v102; // [rsp+68h] [rbp-98h]
  unsigned __int64 v103; // [rsp+68h] [rbp-98h]
  __int64 v104; // [rsp+70h] [rbp-90h]
  _QWORD *v105; // [rsp+70h] [rbp-90h]
  int v106; // [rsp+78h] [rbp-88h] BYREF
  __int64 v107; // [rsp+80h] [rbp-80h]
  _DWORD *v108; // [rsp+88h] [rbp-78h]
  _QWORD *v109; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v111[16]; // [rsp+A0h] [rbp-60h] BYREF
  int v112; // [rsp+B0h] [rbp-50h]
  __int64 v113; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v114; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v115; // [rsp+D8h] [rbp-28h]
  KSPIN_LOCK *v116; // [rsp+E0h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE v117; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v118; // [rsp+100h] [rbp+0h]
  KSPIN_LOCK *v119; // [rsp+108h] [rbp+8h]
  struct _KLOCK_QUEUE_HANDLE v120; // [rsp+110h] [rbp+10h] BYREF
  __int16 v121; // [rsp+128h] [rbp+28h]
  _QWORD v122[2]; // [rsp+130h] [rbp+30h] BYREF
  char v123; // [rsp+140h] [rbp+40h]
  KSPIN_LOCK *v124; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+150h] [rbp+50h] BYREF
  __int16 v126; // [rsp+168h] [rbp+68h]
  KSPIN_LOCK *v127; // [rsp+170h] [rbp+70h]
  struct _KLOCK_QUEUE_HANDLE v128; // [rsp+178h] [rbp+78h] BYREF
  __int16 v129; // [rsp+190h] [rbp+90h]
  _QWORD v130[4]; // [rsp+198h] [rbp+98h] BYREF
  __int16 v131; // [rsp+1B8h] [rbp+B8h]
  struct _KLOCK_QUEUE_HANDLE v132; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v133; // [rsp+1D8h] [rbp+D8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v134; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+208h] [rbp+108h] BYREF
  _QWORD v136[4]; // [rsp+220h] [rbp+120h] BYREF
  __int16 v137; // [rsp+240h] [rbp+140h]
  KPRIORITY Priority; // [rsp+2B0h] [rbp+1B0h]
  KPRIORITY Prioritya; // [rsp+2B0h] [rbp+1B0h]
  KPRIORITY Priorityb; // [rsp+2B0h] [rbp+1B0h]
  char Priorityc; // [rsp+2B0h] [rbp+1B0h]
  KPRIORITY Priorityd; // [rsp+2B0h] [rbp+1B0h]

  Priority = a3;
  v9 = a1;
  v109 = 0LL;
  if ( a3 || a1 )
  {
    v10 = a6;
    if ( a6 )
    {
      v11 = a5;
      if ( a5 )
        goto LABEL_4;
    }
    WdLogSingleEntry1(1LL, -1073741811LL);
    v77 = L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x";
LABEL_152:
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      v77,
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v10 = a6;
  if ( !a6 || (v11 = a5) == 0 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    v77 = L"NULL VIDSCH_CONTEXT pointer, returning 0x%I64x";
    goto LABEL_152;
  }
  Priority = 1;
  v109 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)a6 + 8LL) + 248LL);
  a4 = &v109;
LABEL_4:
  v12 = *(KSPIN_LOCK **)(*(_QWORD *)v10 + 8LL);
  v13 = a8;
  SpinLock = v12;
  if ( (a7 & 0x80000004) != 0 )
    goto LABEL_25;
  v126 = 0;
  v124 = v12 + 216;
  KeAcquireInStackQueuedSpinLock(v12 + 216, &LockHandle);
  v14 = 0LL;
  LOBYTE(v126) = 1;
  if ( !v11 )
    goto LABEL_21;
  v15 = a8;
  do
  {
    v16 = *(unsigned __int64 *)((char *)v15 + v10 - (_QWORD)a8);
    v17 = *(_DWORD *)(v16 + 48);
    if ( (unsigned int)(v17 - 4) <= 1 && !*(_BYTE *)(v16 + 28) )
    {
      v18 = *v15;
      v19 = *(_BYTE *)(v16 + 29) != 0;
      if ( *(_BYTE *)(v16 + 27) )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v16 + 208) + 40LL);
      }
      else if ( v17 == 2 )
      {
        v20 = *(_QWORD *)(v16 + 64);
      }
      else
      {
        v20 = *(_QWORD *)(v16 + 88);
      }
      if ( !v19 )
      {
        if ( (_DWORD)v20 == (_DWORD)v18 )
        {
          WdLogSingleEntry1(3LL, (unsigned int)v18);
          goto LABEL_19;
        }
        if ( (int)v20 - (int)v18 <= 0 )
          goto LABEL_19;
        WdLogSingleEntry2(3LL, (unsigned int)v18, (unsigned int)v20);
LABEL_155:
        WdLogSingleEntry2(2LL, a8[v14], -1073741811LL);
        ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
          a8[v14],
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        AcquireSpinLock::Release((AcquireSpinLock *)&v124);
        return 3221225485LL;
      }
      if ( v18 < v20 )
      {
        WdLogSingleEntry2(3LL, *v15, v20);
        goto LABEL_155;
      }
      if ( v18 == v20 )
        WdLogSingleEntry1(3LL, *v15);
    }
LABEL_19:
    v14 = (unsigned int)(v14 + 1);
    ++v15;
  }
  while ( (unsigned int)v14 < v11 );
  if ( (_BYTE)v126 )
  {
LABEL_21:
    if ( HIBYTE(v126) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v126) = 0;
  }
  v9 = a1;
LABEL_25:
  v21 = v9 + Priority;
  P = 0LL;
  v112 = 0;
  if ( (unsigned int)v21 <= 2 )
  {
    Pool2 = (_QWORD **)v111;
    P = v111;
    if ( (_DWORD)v21 )
    {
      memset(v111, 0, 8LL * (unsigned int)v21);
      Pool2 = (_QWORD **)P;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v21 < 8 )
    goto LABEL_159;
  Pool2 = (_QWORD **)ExAllocatePool2(64LL, 8 * v21, 945908054LL);
  P = Pool2;
LABEL_28:
  v9 = a1;
LABEL_29:
  v112 = v21;
  if ( !Pool2 )
  {
LABEL_159:
    WdLogSingleEntry0(3LL);
LABEL_160:
    NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>::~NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>(&P);
    return 3221225495LL;
  }
  v23 = 0;
  v24 = SpinLock + 216;
  Prioritya = 0;
  v108 = 0LL;
  if ( !(_DWORD)v21 )
    goto LABEL_39;
  v25 = 0LL;
  SpinLocka = SpinLock + 216;
  v104 = 0LL;
  v101 = Pool2;
  while ( 2 )
  {
    v107 = 0LL;
    v90 = 0LL;
    if ( v23 < v9 )
    {
      v136[0] = v24;
      v137 = 0;
      v90 = *(struct VIDSCH_HW_QUEUE **)(v25 + a2);
      AcquireSpinLock::Acquire((AcquireSpinLock *)v136);
      if ( *((struct VIDSCH_HW_QUEUE **)v90 + 20) == (struct VIDSCH_HW_QUEUE *)((char *)v90 + 160) )
      {
        AcquireSpinLock::Release((AcquireSpinLock *)v136);
        v26 = v101;
        v27 = v108;
        goto LABEL_37;
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v136);
      if ( !v90 )
        goto LABEL_49;
      HwQueuePacket = VidSchiAllocateHwQueuePacket(v90, 0LL);
    }
    else
    {
      _mm_lfence();
      v119 = v24;
      v121 = 0;
      v107 = a4[v23 - v9];
      KeAcquireInStackQueuedSpinLock(v24, &v120);
      LOBYTE(v121) = 1;
      if ( *(_QWORD *)(v107 + 664) == v107 + 664 )
      {
        if ( HIBYTE(v121) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v120);
        else
          KeReleaseInStackQueuedSpinLock(&v120);
        v26 = v101;
        v27 = v108;
        LOBYTE(v121) = 0;
        goto LABEL_37;
      }
      if ( HIBYTE(v121) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v120);
      else
        KeReleaseInStackQueuedSpinLock(&v120);
      LOBYTE(v121) = 0;
LABEL_49:
      HwQueuePacket = VidSchiAllocateQueuePacket(v107, *(_DWORD *)(v107 + 796) == 0);
    }
    v36 = (__int64 *)&Pool2[v104];
    v92 = v36;
    *v36 = HwQueuePacket;
    if ( !HwQueuePacket )
    {
      WdLogSingleEntry2(3LL, -1073741801LL, 11485LL);
      if ( v23 )
      {
        v83 = v23;
        do
        {
          v84 = (struct _VIDSCH_QUEUE_PACKET *)*Pool2;
          if ( *Pool2 )
          {
            if ( *((_QWORD *)v84 + 12) )
              VidSchiFreeQueuePacket(v90, v84);
            else
              VidSchiFreeQueuePacket(v107);
          }
          ++Pool2;
          --v83;
        }
        while ( v83 );
      }
      goto LABEL_160;
    }
    v26 = v101;
    Prioritya = v23;
    *(_DWORD *)*v101 = 895576406;
    *((_DWORD *)*v101 + 12) = 5;
    (*v101)[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)*v101 + 13) = 2;
    v37 = *v36;
    if ( v90 )
      *(_QWORD *)(v37 + 96) = v90;
    else
      *(_QWORD *)(v37 + 88) = v107;
    (*v101)[13] = KeGetCurrentThread();
    (*v101)[9] = 0LL;
    *((_DWORD *)*v101 + 68) ^= (*((_DWORD *)*v101 + 68) ^ a7) & 1;
    *((_DWORD *)*v101 + 68) ^= (*((_DWORD *)*v101 + 68) ^ (16 * a9)) & 0x10;
    if ( (a7 & 4) != 0 )
      *((_DWORD *)*v101 + 68) |= 4u;
    if ( *(_DWORD *)(*(_QWORD *)v10 + 48LL) == 2 )
      (*v101)[67] = *v13;
    if ( v11 )
    {
      v38 = v13;
      v39 = v11;
      v40 = (char *)v38 - v10;
      v41 = v10;
      do
      {
        *(_QWORD *)((char *)*v101 + 280 - v10 + v41) = *(_QWORD *)v41;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v41 + 48LL) - 4) <= 1 )
          *(_QWORD *)((char *)*v101 + 536 - v10 + v41) = *(_QWORD *)&v40[v41];
        v41 += 8LL;
        --v39;
      }
      while ( v39 );
      v13 = a8;
      v36 = v92;
    }
    v42 = v108;
    *((_DWORD *)*v101 + 69) = v11;
    (*v101)[99] = 0LL;
    v43 = *v36;
    if ( v42 )
    {
      *(_QWORD *)(v43 + 800) = v42;
      *((_QWORD *)v42 + 99) = *v101;
    }
    else
    {
      *(_QWORD *)(v43 + 800) = 0LL;
    }
    v27 = *v101;
    v108 = *v101;
LABEL_37:
    v24 = SpinLocka;
    v25 = v104 * 8 + 8;
    ++v23;
    v101 = v26 + 1;
    v9 = a1;
    ++v104;
    if ( v23 < (unsigned int)v21 )
      continue;
    break;
  }
  if ( !v27 )
  {
LABEL_39:
    v127 = v24;
    v129 = 0;
    KeAcquireInStackQueuedSpinLock(v24, &v128);
    LOBYTE(v129) = 1;
    v122[1] = v122;
    v122[0] = v122;
    v123 = 0;
    if ( !v11 )
    {
LABEL_86:
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v122);
      if ( (_BYTE)v129 )
      {
        v56 = HIBYTE(v129) == 0;
        v57 = &v128;
LABEL_88:
        if ( v56 )
          KeReleaseInStackQueuedSpinLock(v57);
        else
          KeReleaseInStackQueuedSpinLockFromDpcLevel(v57);
      }
      goto LABEL_90;
    }
    v28 = v11;
    v29 = v10 - (_QWORD)v13;
    v30 = v13;
    while ( 2 )
    {
      v31 = *(unsigned __int64 *)((char *)v13 + v29);
      v32 = *(_DWORD *)(v31 + 48);
      if ( v32 == 4 )
      {
LABEL_42:
        if ( *(_BYTE *)(v31 + 28) )
          goto LABEL_85;
        if ( *(_BYTE *)(v31 + 27) )
        {
          v88 = *v13;
          v97 = *(_QWORD *)(v31 + 208);
          memset(&v135, 0, sizeof(v135));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v97 + 8), &v135);
          v89 = *(_QWORD *)(v97 + 40);
          if ( v89 >= v88 )
            WdLogSingleEntry3(3LL, *(_QWORD *)(v31 + 16), v89, v88);
          else
            *(_QWORD *)(v97 + 40) = v88;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
          goto LABEL_85;
        }
        if ( (a7 & 4) != 0 )
          goto LABEL_83;
        v33 = *v13;
        v34 = *(_QWORD *)(v31 + 88);
        if ( *(_BYTE *)(v31 + 29) )
        {
          if ( v33 >= v34 )
          {
            if ( v33 == v34 )
              WdLogSingleEntry1(3LL, *v13);
LABEL_83:
            *(_QWORD *)(v31 + 88) = *v13;
LABEL_84:
            WdLogSingleEntry4(4LL, v31, **(_QWORD **)(v31 + 64), *v13, *(unsigned __int8 *)(v31 + 28));
LABEL_85:
            _InterlockedIncrement((volatile signed __int32 *)(v31 + 36));
            VidSchiCompleteSignalSyncObject((__int64)v122, v31, (a7 & 4) != 0, v30, 1);
            VidSchiReleaseSyncObjectReference((char *)v31, v55);
            ++v30;
            ++v13;
            if ( !--v28 )
              goto LABEL_86;
            continue;
          }
          WdLogSingleEntry2(3LL, *v13, v34);
        }
        else
        {
          if ( (_DWORD)v34 == (_DWORD)v33 )
          {
            WdLogSingleEntry1(3LL, (unsigned int)v33);
            goto LABEL_83;
          }
          if ( (int)v34 - (int)v33 <= 0 )
            goto LABEL_83;
          WdLogSingleEntry2(3LL, (unsigned int)v33, (unsigned int)v34);
        }
        WdLogSingleEntry3(3LL, *(_QWORD *)(v31 + 16), *(_QWORD *)(v31 + 88), *v13);
        goto LABEL_84;
      }
      break;
    }
    if ( v32 )
    {
      switch ( v32 )
      {
        case 1:
          v87 = *(_DWORD *)(v31 + 64);
          if ( v87 >= *(_DWORD *)(v31 + 60) )
            WdLogSingleEntry1(3LL, *(_QWORD *)(v31 + 16));
          else
            *(_DWORD *)(v31 + 64) = v87 + 1;
          break;
        case 2:
          if ( *(_BYTE *)(v31 + 27) )
          {
            v85 = *v13;
            v96 = *(_QWORD *)(v31 + 208);
            memset(&v134, 0, sizeof(v134));
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v96 + 8), &v134);
            v86 = *(_QWORD *)(v96 + 40);
            if ( v86 >= v85 )
              WdLogSingleEntry3(3LL, *(_QWORD *)(v31 + 16), v86, v85);
            else
              *(_QWORD *)(v96 + 40) = v85;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v134);
          }
          else
          {
            v75 = *(_QWORD *)(v31 + 64);
            v76 = *v13;
            if ( v75 >= *v13 )
              WdLogSingleEntry3(3LL, *(_QWORD *)(v31 + 16), v75, v76);
            else
              *(_QWORD *)(v31 + 64) = v76;
          }
          break;
        case 5:
          goto LABEL_42;
      }
    }
    else
    {
      if ( !*(_QWORD *)(v31 + 64) )
        WdLogSingleEntry1(3LL, *(_QWORD *)(v31 + 16));
      *(_QWORD *)(v31 + 64) = 0LL;
    }
    goto LABEL_85;
  }
  v116 = SpinLocka;
  v118 = 0;
  KeAcquireInStackQueuedSpinLock(SpinLocka, &v117);
  v44 = Prioritya;
  v45 = 0;
  v91 = 0;
  v46 = Pool2;
  LOBYTE(v118) = 1;
  v105 = Pool2;
  while ( 2 )
  {
    if ( *v46 && v11 )
    {
      v47 = v13;
      v48 = v10 - (_QWORD)v13;
      SpinLockb = (PKSPIN_LOCK)v11;
      while ( 1 )
      {
        Priorityb = v44;
        v49 = v44;
        if ( v45 != v44 )
        {
          v52 = *(unsigned __int64 *)((char *)v47 + v48);
          goto LABEL_101;
        }
        v50 = *(unsigned __int64 *)((char *)v47 + v48);
        v51 = *(_DWORD *)(v50 + 48);
        if ( v51 != 4 )
        {
          v52 = *(unsigned __int64 *)((char *)v47 + v48);
          switch ( v51 )
          {
            case 0:
              if ( !*(_QWORD *)(v50 + 64) )
              {
                WdLogSingleEntry1(3LL, *(_QWORD *)(v50 + 16));
                v49 = Priorityb;
              }
              v45 = v91;
              v52 = v50;
              *(_QWORD *)(v50 + 64) = 0LL;
              v44 = v49;
              goto LABEL_101;
            case 1:
              v79 = *(_DWORD *)(v50 + 64);
              if ( v79 < *(_DWORD *)(v50 + 60) )
              {
                *(_DWORD *)(v50 + 64) = v79 + 1;
LABEL_139:
                v45 = v91;
                v52 = v50;
                v44 = v49;
                goto LABEL_101;
              }
              WdLogSingleEntry1(3LL, *(_QWORD *)(v50 + 16));
LABEL_179:
              v49 = Priorityb;
              goto LABEL_139;
            case 2:
              v73 = *v47;
              if ( !*(_BYTE *)(v50 + 27) )
              {
                v74 = *(_QWORD *)(v50 + 64);
                if ( v74 >= v73 )
                {
                  WdLogSingleEntry3(3LL, *(_QWORD *)(v50 + 16), v74, *v47);
                  v52 = v50;
                  v45 = v91;
                  v44 = Priorityb;
                  goto LABEL_101;
                }
                *(_QWORD *)(v50 + 64) = v73;
                goto LABEL_139;
              }
              v102 = *v47;
              v94 = *(_QWORD *)(v50 + 208);
              memset(&v132, 0, sizeof(v132));
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v94 + 8), &v132);
              v78 = *(_QWORD *)(v94 + 40);
              if ( v78 >= v102 )
                WdLogSingleEntry3(3LL, *(_QWORD *)(v50 + 16), v78, v102);
              else
                *(_QWORD *)(v94 + 40) = v102;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v132);
              goto LABEL_179;
          }
          v45 = v91;
          if ( v51 != 5 )
            goto LABEL_101;
        }
        v52 = *(unsigned __int64 *)((char *)v47 + v48);
        if ( !*(_BYTE *)(v50 + 28) )
          break;
LABEL_101:
        _InterlockedIncrement((volatile signed __int32 *)(v52 + 36));
        ++v47;
        SpinLockb = (PKSPIN_LOCK)((char *)SpinLockb - 1);
        if ( !SpinLockb )
        {
          v13 = a8;
          v46 = v105;
          Prioritya = v44;
          goto LABEL_103;
        }
      }
      if ( *(_BYTE *)(v50 + 27) )
      {
        v103 = *v47;
        v95 = *(_QWORD *)(v50 + 208);
        memset(&v133, 0, sizeof(v133));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v95 + 8), &v133);
        v80 = *(_QWORD *)(v95 + 40);
        if ( v80 >= v103 )
          WdLogSingleEntry3(3LL, *(_QWORD *)(v50 + 16), v80, v103);
        else
          *(_QWORD *)(v95 + 40) = v103;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v133);
        v44 = Priorityb;
        v52 = v50;
        v45 = v91;
        goto LABEL_101;
      }
      if ( (a7 & 4) != 0 )
      {
LABEL_99:
        *(_QWORD *)(v50 + 88) = *v47;
      }
      else
      {
        v53 = *v47;
        v54 = *(_QWORD *)(v50 + 88);
        if ( *(_BYTE *)(v50 + 29) )
        {
          if ( v53 >= v54 )
          {
            if ( v53 == v54 )
              WdLogSingleEntry1(3LL, *v47);
            goto LABEL_99;
          }
          WdLogSingleEntry2(3LL, *v47, v54);
        }
        else
        {
          if ( (_DWORD)v54 == (_DWORD)v53 )
          {
            WdLogSingleEntry1(3LL, (unsigned int)v53);
            goto LABEL_99;
          }
          if ( (int)v54 - (int)v53 <= 0 )
            goto LABEL_99;
          WdLogSingleEntry2(3LL, (unsigned int)v53, (unsigned int)v54);
        }
        WdLogSingleEntry3(3LL, *(_QWORD *)(v50 + 16), *(_QWORD *)(v50 + 88), *v47);
      }
      WdLogSingleEntry4(4LL, v50, **(_QWORD **)(v50 + 64), *v47, *(unsigned __int8 *)(v50 + 28));
      v44 = Priorityb;
      v52 = v50;
      v45 = v91;
      goto LABEL_101;
    }
LABEL_103:
    ++v45;
    ++v46;
    v91 = v45;
    v105 = v46;
    if ( v45 <= v44 )
      continue;
    break;
  }
  if ( (_BYTE)v118 )
  {
    if ( HIBYTE(v118) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v117);
    else
      KeReleaseInStackQueuedSpinLock(&v117);
    v44 = Prioritya;
    LOBYTE(v118) = 0;
  }
  v59 = v44 + 1;
  while ( 2 )
  {
    v60 = (__int64)*Pool2;
    if ( *Pool2 )
    {
      v61 = (struct _VIDSCH_QUEUE_PACKET *)*Pool2;
      if ( *(_QWORD *)(v60 + 96) )
      {
        VidSchiSubmitCommandPacketToHwQueue(v61);
      }
      else
      {
        v62 = *(_QWORD *)(v60 + 88);
        v63 = *(_QWORD *)(v62 + 96);
        v109 = *(_QWORD **)(v62 + 104);
        v64 = v109;
        v93 = v63;
        v65 = *(_QWORD *)(v63 + 24);
        VidSchiEnsureVSyncEnabled(v61, v109);
        v115 = 0;
        v113 = v65 + 1728;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v65 + 1728), &v114);
        LOBYTE(v115) = 1;
        v66 = *(_QWORD *)(v62 + 144);
        *(_QWORD *)(v62 + 144) = v66 + 1;
        *(_QWORD *)(v60 + 112) = v66;
        v67 = MEMORY[0xFFFFF78000000320];
        v64[24] = v67 * KeQueryTimeIncrement();
        if ( !*(_DWORD *)(v60 + 48) )
        {
          *(_QWORD *)(v62 + 176) = *(_QWORD *)(v60 + 112);
          ++v64[199];
        }
        VidSchiProfilePerformanceTick(4, v65, v93, 0, 0LL, v60, 0LL, 0LL);
        v106 = 0;
        VidSchiInsertCommandToSoftwareQueue(v60, &v106);
        if ( (_BYTE)v115 )
        {
          if ( HIBYTE(v115) )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v114);
          else
            KeReleaseInStackQueuedSpinLock(&v114);
          LOBYTE(v115) = 0;
        }
        v68 = *(_QWORD *)(*(_QWORD *)(v62 + 96) + 24LL);
        if ( (*(_DWORD *)(v68 + 2536) & 0x20) != 0 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( CurrentThread == *(struct _KTHREAD **)(v68 + 168) || CurrentThread == *(struct _KTHREAD **)(v68 + 176) )
          {
            Priorityc = 1;
            if ( !*(_DWORD *)(v62 + 780) )
            {
              v70 = 16;
              goto LABEL_197;
            }
          }
          else
          {
            Priorityc = 0;
            if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
            {
              v70 = 31;
            }
            else
            {
              v70 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
              if ( v70 <= 16 )
                goto LABEL_122;
            }
LABEL_197:
            v131 = 0;
            v130[0] = v68 + 2464;
            AcquireSpinLock::Acquire((AcquireSpinLock *)v130);
            v81 = Priorityc;
            while ( 1 )
            {
              v82 = *(_DWORD *)(v62 + 780);
              if ( v81 )
              {
                if ( v82 )
                  break;
              }
              else if ( !v82 )
              {
                break;
              }
              Priorityd = VidSchiComputeWorkerThreadPriority(v62, v70);
              if ( Priorityd == KeQueryPriorityThread(*(PKTHREAD *)(v68 + 168)) )
                break;
              AcquireSpinLock::Release((AcquireSpinLock *)v130);
              KeSetPriorityThread(*(PKTHREAD *)(v68 + 168), Priorityd);
              AcquireSpinLock::Acquire((AcquireSpinLock *)v130);
            }
            AcquireSpinLock::Release((AcquireSpinLock *)v130);
            v64 = v109;
          }
        }
LABEL_122:
        if ( v106 )
        {
          *(_QWORD *)(v65 + 1224) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(v65 + 1192), 0, 0);
        }
        v71 = v64[1];
        if ( v71 )
        {
          v72 = *(VIDMM_DEVICE **)(v71 + 792);
          if ( v72 )
            VIDMM_DEVICE::EnsureSchedulable(v72, 1);
        }
        if ( (_BYTE)v115 )
        {
          if ( HIBYTE(v115) )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v114);
          else
            KeReleaseInStackQueuedSpinLock(&v114);
        }
      }
    }
    ++Pool2;
    if ( --v59 )
      continue;
    break;
  }
  if ( (_BYTE)v118 )
  {
    v56 = HIBYTE(v118) == 0;
    v57 = &v117;
    goto LABEL_88;
  }
LABEL_90:
  if ( P != v111 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
