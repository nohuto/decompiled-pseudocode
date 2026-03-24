/*
 * XREFs of ParseCall @ 0x1C0006B60
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C0002F50 (HeapInsertFreeList.c)
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     ParseRelease @ 0x1C0003760 (ParseRelease.c)
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     ParseArg @ 0x1C0022094 (ParseArg.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     PerformNativeMethodCall @ 0x1C0064750 (PerformNativeMethodCall.c)
 *     MoveObjData @ 0x1C0065580 (MoveObjData.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 */

__int64 __fastcall ParseCall(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r13
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  void *v13; // rax
  void *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // rdx
  char v22; // al
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  _BYTE *v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rsi
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  KIRQL v34; // al
  unsigned __int64 v35; // rbx
  struct _EX_RUNDOWN_REF *v36; // rsi
  struct _EX_RUNDOWN_REF *v37; // rbx
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF *v39; // rax
  struct _EX_RUNDOWN_REF *j; // rdx
  struct _EX_RUNDOWN_REF **v41; // rcx
  _QWORD *v42; // r9
  __int64 v43; // rcx
  struct _EX_RUNDOWN_REF *v44; // rax
  struct _EX_RUNDOWN_REF *v45; // r9
  unsigned __int64 v46; // rcx
  __int64 v47; // rbx
  _QWORD *v48; // rdi
  _QWORD *v49; // rbx
  __int64 v50; // r8
  _QWORD *v51; // rax
  _QWORD *i; // rdx
  _QWORD *v53; // rcx
  _QWORD *v54; // r9
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // r9
  _QWORD *v58; // rbx
  __int64 v59; // rdx
  _QWORD *v60; // rax
  unsigned int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rax
  struct _EX_RUNDOWN_REF *v67; // rbx
  unsigned __int64 v68; // rcx
  struct _EX_RUNDOWN_REF **v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rsi
  unsigned __int64 v72; // rsi
  __int64 Ptr_high; // r10
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // r10
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  struct _EX_RUNDOWN_REF **v86; // rax
  __int64 v87; // rcx
  _QWORD *v88; // rax
  int v89; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v90; // [rsp+34h] [rbp-CCh]
  int v91; // [rsp+3Ch] [rbp-C4h]
  int v92; // [rsp+40h] [rbp-C0h]
  __int64 v93; // [rsp+44h] [rbp-BCh]
  int v94; // [rsp+4Ch] [rbp-B4h]
  __int64 v95; // [rsp+50h] [rbp-B0h]
  __int128 v96; // [rsp+58h] [rbp-A8h]
  _OWORD v97[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v98; // [rsp+88h] [rbp-78h]
  _OWORD v99[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v100; // [rsp+B0h] [rbp-50h]
  struct _KTIMER Timer; // [rsp+C0h] [rbp-40h] BYREF
  struct _KDPC Dpc; // [rsp+100h] [rbp+0h] BYREF
  __int64 v103; // [rsp+188h] [rbp+88h]
  __int64 v104; // [rsp+198h] [rbp+98h]

  v3 = a3;
  if ( a3 )
    v6 = 5;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 96);
  else
    v8 = 0LL;
  if ( v6 == 5 )
    goto LABEL_24;
  if ( v6 == 2 )
    goto LABEL_73;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 )
      {
        v24 = v10 - 1;
        if ( v24 )
        {
          if ( v24 != 2 )
            return v3;
LABEL_51:
          v48 = (_QWORD *)a1[52];
          v49 = v48 - 2;
          a1[52] = v48[1];
          *((_DWORD *)v48 - 4) = 0;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v50 = *(v48 - 1);
          v51 = *(_QWORD **)(v50 + 40);
          for ( i = (_QWORD *)(v50 + 40); v51 != i; v51 = (_QWORD *)*v51 )
          {
            if ( v48 < v51 )
              break;
          }
          v53 = (_QWORD *)v51[1];
          if ( (_QWORD *)*v53 == v51 )
          {
            v48[1] = v53;
            *v48 = v51;
            *v53 = v48;
            v51[1] = v48;
            v54 = (_QWORD *)*v48;
            v55 = *v48 - 16LL;
            if ( (_QWORD *)*v48 != i )
            {
              v76 = *((unsigned int *)v49 + 1);
              if ( (_QWORD *)v55 == (_QWORD *)((char *)v49 + v76) )
              {
                *((_DWORD *)v49 + 1) = v76 + *(_DWORD *)(v55 + 4);
                v77 = *v54;
                if ( *(_QWORD **)(*v54 + 8LL) != v54 )
                  goto LABEL_145;
                v78 = (_QWORD *)v54[1];
                if ( (_QWORD *)*v78 != v54 )
                  goto LABEL_145;
                *v78 = v77;
                *(_QWORD *)(v77 + 8) = v78;
              }
            }
            v56 = (_QWORD *)v49[3];
            v57 = v56 - 2;
            if ( v56 != i )
            {
              v79 = *((unsigned int *)v57 + 1);
              if ( v49 == (_QWORD *)((char *)v57 + v79) )
              {
                *((_DWORD *)v57 + 1) = *((_DWORD *)v49 + 1) + v79;
                v87 = *v48;
                if ( *(_QWORD **)(*v48 + 8LL) != v48 )
                  goto LABEL_145;
                v88 = (_QWORD *)v48[1];
                if ( (_QWORD *)*v88 != v48 )
                  goto LABEL_145;
                *v88 = v87;
                v49 = v57;
                *(_QWORD *)(v87 + 8) = v88;
              }
            }
            if ( *(_QWORD *)(v50 + 32) <= (unsigned __int64)v49 + *((unsigned int *)v49 + 1) )
            {
              *(_QWORD *)(v50 + 32) = v49;
              v58 = v49 + 2;
              v59 = *v58;
              if ( *(_QWORD **)(*v58 + 8LL) != v58 )
                goto LABEL_145;
              v60 = (_QWORD *)v58[1];
              if ( (_QWORD *)*v60 != v58 )
                goto LABEL_145;
              *v60 = v59;
              *(_QWORD *)(v59 + 8) = v60;
            }
            KeReleaseSpinLock(&gmutHeap, NewIrql);
            return v3;
          }
LABEL_145:
          __fastfail(3u);
        }
        goto LABEL_21;
      }
LABEL_10:
      v11 = *(_DWORD *)(a2 + 16) + 1;
      v12 = *(_DWORD *)a2 == 1280065859;
      *(_DWORD *)(a2 + 16) = v11;
      if ( v12 && (v11 & 0x80000) != 0 )
      {
        *(_QWORD *)(a2 + 32) = a1[12];
        a1[12] = a2;
        *(_DWORD *)(a2 + 16) |= 0x40000u;
        v3 = PerformNativeMethodCall(0LL, a1, a2);
        if ( v3 == 32772 )
          return v3;
      }
      else
      {
        if ( (v11 & 0x10000) != 0 )
          *(_DWORD *)(a2 + 16) = v11 | 0x20000;
        v13 = (void *)HeapAlloc(a1[40], 1314344776LL);
        v14 = v13;
        if ( v13 )
        {
          memset(v13, 0, 0x40uLL);
          *((_DWORD *)v14 + 4) = 1380865871;
          ExInitializeRundownProtection((PEX_RUNDOWN_REF)v14 + 4);
          KeInitializeSpinLock((PKSPIN_LOCK)v14 + 5);
          byte_1C0082FF0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
          v15 = off_1C007F398;
          if ( *(_UNKNOWN ***)off_1C007F398 == &glistObjOwners )
          {
            *(_QWORD *)v14 = &glistObjOwners;
            *((_QWORD *)v14 + 1) = v15;
            *v15 = v14;
            off_1C007F398 = v14;
            KeReleaseSpinLock(&gmutOwnerList, byte_1C0082FF0);
            *(_QWORD *)(a2 + 40) = a1[11];
            v3 = 0;
            v16 = a1[12];
            a1[11] = v14;
            *(_QWORD *)(a2 + 32) = v16;
            a1[12] = a2;
            *(_DWORD *)(a2 + 16) |= 0x40000u;
            v17 = *(_QWORD *)(a2 + 392);
            v18 = *(_QWORD *)(a2 + 48);
            v19 = a1[40];
            v104 = a1[15];
            v103 = *(_QWORD *)(v18 + 96) + *(unsigned int *)(v18 + 88);
            v20 = HeapAlloc(a1 + 60, 1297237576LL);
            v21 = (_QWORD *)v20;
            if ( v20 )
            {
              *(_QWORD *)(v20 + 8) = a1[52];
              a1[52] = v20;
              *(_DWORD *)v20 = 1347371859;
              *(_QWORD *)(v20 + 24) = ParseScope;
              a1[15] = v8 + 194;
              *(_QWORD *)(v20 + 32) = v103;
              *(_QWORD *)(v20 + 40) = v104;
              *(_QWORD *)(v20 + 48) = a1[10];
              v22 = gdwfAMLI;
              a1[10] = v18;
              if ( (v22 & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v18 + 112));
              v21[7] = a1[11];
              v23 = a1[40];
              a1[11] = v14;
              v21[8] = v23;
              a1[40] = v19;
              v21[9] = v17;
              return v3;
            }
LABEL_125:
            v3 = -1072431102;
            LogError(3222536194LL);
            AcpiDiagTraceAmlError(a1, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            return v3;
          }
          goto LABEL_145;
        }
        v3 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(0LL, 3221225626LL);
        PrintDebugMessage(113, 0, 0, 0, 0LL);
      }
LABEL_21:
      v25 = *(_DWORD *)(a2 + 16) + 1;
      v12 = *(_DWORD *)a2 == 1280065859;
      *(_DWORD *)(a2 + 16) = v25;
      if ( v12 && (v25 & 0x80000) != 0 )
        v3 = PerformNativeMethodCall(1LL, a1, a2);
LABEL_24:
      v26 = 0;
      v27 = *(_DWORD *)(a2 + 16) + 1;
      *(_DWORD *)(a2 + 16) = v27;
      if ( v3 != 32770 )
        v26 = v3;
      v3 = v26;
      if ( *(_DWORD *)a2 == 1280065859 && (v27 & 0x80000) != 0 )
      {
        if ( (v27 & 0x40000) != 0 )
        {
          v81 = *(_QWORD *)(a2 + 392);
          v82 = a1[40];
          memset(v97, 0, sizeof(v97));
          v98 = 0LL;
          DupObjData(v82, v97, v81);
          PerformNativeMethodCall(2LL, a1, a2);
          MoveObjData(*(_QWORD *)(a2 + 392), v97);
          a1[11] = *(_QWORD *)(a2 + 40);
          a1[12] = *(_QWORD *)(a2 + 32);
        }
        goto LABEL_45;
      }
      v28 = *(_BYTE **)(a2 + 392);
      if ( (*v28 & 1) != 0 )
      {
        v83 = a1[40];
        memset(v99, 0, sizeof(v99));
        v100 = 0LL;
        v3 = DupObjData(v83, v99, v28);
        if ( (v3 & 0x80000000) != 0 )
          return v3;
        FreeDataBuffs(*(_QWORD *)(a2 + 392), 1u);
        MoveObjData(*(_QWORD *)(a2 + 392), v99);
      }
      v29 = a2 + 72;
      v30 = 8LL;
      do
      {
        if ( (*(_BYTE *)v29 & 1) != 0 )
        {
          v84 = *(_QWORD *)(v29 + 8);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v84 + 8), 0xFFFFFFFF) == 1
            && (*(_BYTE *)v84 & 8) != 0 )
          {
            FreeData(v84);
          }
        }
        else if ( *(_QWORD *)(v29 + 32) && *(int *)(v29 + 8) <= 0 )
        {
          if ( *(_WORD *)(v29 + 2) == 4 )
            FreeDataBuffs(*(_QWORD *)(v29 + 32) + 8LL, **(_DWORD **)(v29 + 32));
          FreeObjData(v29);
        }
        *(_OWORD *)v29 = 0LL;
        *(_OWORD *)(v29 + 16) = 0LL;
        *(_QWORD *)(v29 + 32) = 0LL;
        v29 += 40LL;
        --v30;
      }
      while ( v30 );
      if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
      {
        v31 = (_QWORD *)a1[11];
        byte_1C0082FF0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
        v32 = *v31;
        if ( *(_QWORD **)(*v31 + 8LL) != v31 )
          goto LABEL_145;
        v33 = (_QWORD *)v31[1];
        if ( (_QWORD *)*v33 != v31 )
          goto LABEL_145;
        *v33 = v32;
        *(_QWORD *)(v32 + 8) = v33;
        KeReleaseSpinLock(&gmutOwnerList, byte_1C0082FF0);
        v34 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        v35 = v31[3];
        if ( v35 )
        {
          do
          {
            v72 = *(_QWORD *)(v35 + 56);
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v34);
            if ( (gdwfAMLI & 4) != 0 )
              AMLIDereferenceHandleEx(v35 + 120);
            else
              FreeNameSpaceObjects(v35);
            v34 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
            v35 = v72;
          }
          while ( v72 );
        }
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v34);
        v36 = (struct _EX_RUNDOWN_REF *)a1[11];
        memset(&Dpc, 0, sizeof(Dpc));
        memset(&Timer, 0, sizeof(Timer));
        if ( (gdwfAMLI & 4) != 0 )
        {
          KeInitializeTimer(&Timer);
          KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, v36);
          KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
          ExWaitForRundownProtectionRelease(v36 + 4);
          KeCancelTimer(&Timer);
          HeapFree(v36);
        }
        else
        {
          v37 = v36 - 2;
          LODWORD(v36[-2].Count) = 0;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          Count = v36[-1].Count;
          v39 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
          for ( j = (struct _EX_RUNDOWN_REF *)(Count + 40); v39 != j; v39 = (struct _EX_RUNDOWN_REF *)v39->Count )
          {
            if ( v36 < v39 )
              break;
          }
          v41 = (struct _EX_RUNDOWN_REF **)v39[1].Count;
          if ( *v41 != v39 )
            goto LABEL_145;
          v36[1].Count = (unsigned __int64)v41;
          v36->Count = (unsigned __int64)v39;
          *v41 = v36;
          v39[1].Count = (unsigned __int64)v36;
          v42 = (_QWORD *)v36->Count;
          v43 = v36->Count - 16;
          if ( (struct _EX_RUNDOWN_REF *)v36->Count != j )
          {
            Ptr_high = HIDWORD(v37->Ptr);
            if ( (struct _EX_RUNDOWN_REF *)v43 == (struct _EX_RUNDOWN_REF *)((char *)v37 + Ptr_high) )
            {
              HIDWORD(v37->Ptr) = Ptr_high + *(_DWORD *)(v43 + 4);
              v74 = *v42;
              if ( *(_QWORD **)(*v42 + 8LL) != v42 )
                goto LABEL_145;
              v75 = (_QWORD *)v42[1];
              if ( (_QWORD *)*v75 != v42 )
                goto LABEL_145;
              *v75 = v74;
              *(_QWORD *)(v74 + 8) = v75;
            }
          }
          v44 = (struct _EX_RUNDOWN_REF *)v37[3].Count;
          v45 = v44 - 2;
          if ( v44 != j )
          {
            v80 = HIDWORD(v45->Ptr);
            if ( v37 == (struct _EX_RUNDOWN_REF *)((char *)v45 + v80) )
            {
              HIDWORD(v45->Ptr) = HIDWORD(v37->Ptr) + v80;
              v85 = v36->Count;
              if ( *(struct _EX_RUNDOWN_REF **)(v36->Count + 8) != v36 )
                goto LABEL_145;
              v86 = (struct _EX_RUNDOWN_REF **)v36[1].Count;
              if ( *v86 != v36 )
                goto LABEL_145;
              *v86 = (struct _EX_RUNDOWN_REF *)v85;
              v37 = v45;
              *(_QWORD *)(v85 + 8) = v86;
            }
          }
          if ( *(_QWORD *)(Count + 32) <= (unsigned __int64)v37 + HIDWORD(v37->Ptr) )
          {
            *(_QWORD *)(Count + 32) = v37;
            v67 = v37 + 2;
            v68 = v67->Count;
            if ( *(struct _EX_RUNDOWN_REF **)(v67->Count + 8) != v67 )
              goto LABEL_145;
            v69 = (struct _EX_RUNDOWN_REF **)v67[1].Count;
            if ( *v69 != v67 )
              goto LABEL_145;
            *v69 = (struct _EX_RUNDOWN_REF *)v68;
            *(_QWORD *)(v68 + 8) = v69;
          }
          KeReleaseSpinLock(&gmutHeap, NewIrql);
        }
      }
      else if ( *(_QWORD *)(a2 + 48) )
      {
        goto LABEL_45;
      }
      a1[11] = *(_QWORD *)(a2 + 40);
      a1[12] = *(_QWORD *)(a2 + 32);
LABEL_45:
      v46 = *(_QWORD *)(a2 + 48);
      if ( v46 )
      {
        if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 112), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(v46 + 64) |= 4u;
          if ( (*(_WORD *)(v46 + 64) & 0x40) == 0 )
            FreeNameSpaceObjects(v46);
        }
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      v47 = *(_QWORD *)(a2 + 64);
      if ( v47 )
      {
        v70 = *(_DWORD *)(a2 + 60);
        if ( v70 )
        {
          v71 = v70;
          do
          {
            FreeData(v47);
            v47 += 40LL;
            --v71;
          }
          while ( v71 );
          v47 = *(_QWORD *)(a2 + 64);
        }
        *(_DWORD *)(v47 - 16) = 0;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        HeapInsertFreeList(*(_QWORD *)(v47 - 8), (unsigned int *)(v47 - 16));
        KeReleaseSpinLock(&gmutHeap, NewIrql);
      }
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
      {
        v90 = 0LL;
        v91 = 0;
        v93 = 0LL;
        v94 = 0;
        v96 = 0LL;
        v95 = v8;
        v89 = 1179403602;
        v92 = 393216;
        ParseRelease((__int64)a1, (__int64)&v89, 0);
      }
      goto LABEL_51;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("(");
  }
  v62 = *(_DWORD *)(a2 + 56);
  if ( v62 < *(_DWORD *)(a2 + 60) )
  {
    do
    {
      do
      {
        v63 = v62;
        if ( (gDebugger & 0xD0) != 0 && v62 )
        {
          ConPrintf(",");
          v63 = *(unsigned int *)(a2 + 56);
        }
        v64 = *(_QWORD *)(a2 + 64) + 40LL * (unsigned int)v63;
        v65 = v63 + 1;
        LOBYTE(v63) = 67;
        *(_DWORD *)(a2 + 56) = v65;
        v3 = ParseArg(a1, v63, v64, 0LL);
        if ( v3 || a2 != a1[52] )
          return v3;
        v62 = *(_DWORD *)(a2 + 56);
      }
      while ( v62 < *(_DWORD *)(a2 + 60) );
LABEL_68:
      if ( a2 != a1[52] )
        return v3;
      v62 = *(_DWORD *)(a2 + 56);
    }
    while ( v62 < *(_DWORD *)(a2 + 60) );
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf(")");
    ++*(_DWORD *)(a2 + 16);
LABEL_73:
    ++*(_DWORD *)(a2 + 16);
    if ( !v8 )
    {
      v3 = -1072431101;
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(a1, 3222536195LL);
      PrintDebugMessage(123, 0, 0, 0, 0LL);
      return v3;
    }
    if ( (*(_BYTE *)(v8 + 193) & 8) != 0 )
    {
      v66 = HeapAlloc(a1 + 60, 1297237576LL);
      if ( v66 )
      {
        v3 = 0;
        *(_QWORD *)(v66 + 8) = a1[52];
        a1[52] = v66;
        *(_DWORD *)v66 = 1179730753;
        *(_QWORD *)(v66 + 24) = ParseAcquire;
        *(_QWORD *)(v66 + 32) = v8;
        *(_WORD *)(v66 + 40) = -1;
        *(_QWORD *)(v66 + 48) = *(_QWORD *)(a2 + 392);
        return v3;
      }
      goto LABEL_125;
    }
    goto LABEL_10;
  }
  if ( !v3 )
    goto LABEL_68;
  return v3;
}
