__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 PreviousMode; // r10
  int v13; // edi
  int v14; // r15d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  _KPROCESS *Process; // rcx
  PVOID v20; // rbx
  PVOID v21; // r9
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  bool v27; // zf
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  int v30; // eax
  unsigned __int64 v31; // r15
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r13
  int v37; // r13d
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  unsigned __int16 *ProcessPartition; // r10
  __int64 v42; // r11
  int v43; // ecx
  __int64 *v44; // rax
  unsigned __int16 v45; // r15
  int v46; // ebx
  unsigned __int64 v47; // r14
  char v48; // di
  _QWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  __int64 result; // rax
  unsigned __int64 AddressSpan; // rax
  __int64 v60; // rax
  int v61; // ecx
  int v62; // edx
  int v63; // eax
  __int64 v64; // rdx
  int v65; // r10d
  unsigned __int64 v66; // r8
  int v67; // r10d
  __int64 v68; // r11
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r8
  PVOID v71; // rbx
  __int64 v72; // rdx
  unsigned __int64 NextVad; // rax
  unsigned __int64 v74; // rbx
  __int64 v75; // rbx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rbx
  int MemoryPhysicalContiguity; // ebx
  __int64 *v79; // rax
  int IsUserQueryVmCallerTrusted; // eax
  bool v81; // cf
  __int64 v82; // rbx
  __int64 v83; // rcx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rbx
  int VirtualMemory; // eax
  __int16 v87; // cx
  __int64 VadEvent; // rax
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  int BadAddresses; // ebx
  int v95; // [rsp+40h] [rbp-158h]
  char v96; // [rsp+40h] [rbp-158h]
  char v97; // [rsp+44h] [rbp-154h]
  unsigned int v98; // [rsp+48h] [rbp-150h] BYREF
  PVOID Object; // [rsp+50h] [rbp-148h]
  __int64 v100; // [rsp+60h] [rbp-138h]
  PVOID v101; // [rsp+68h] [rbp-130h] BYREF
  unsigned __int64 v102; // [rsp+70h] [rbp-128h]
  unsigned __int64 VadPageSize; // [rsp+78h] [rbp-120h]
  unsigned __int64 v104; // [rsp+80h] [rbp-118h]
  _OWORD v105[3]; // [rsp+88h] [rbp-110h] BYREF
  __int128 v106; // [rsp+B8h] [rbp-E0h]
  __int64 v107; // [rsp+C8h] [rbp-D0h]
  int v108; // [rsp+D0h] [rbp-C8h]
  __int64 P; // [rsp+D8h] [rbp-C0h] BYREF
  _QWORD *v110; // [rsp+E8h] [rbp-B0h]
  __int128 Source; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v112; // [rsp+100h] [rbp-98h]
  __int128 v113; // [rsp+110h] [rbp-88h]
  $115DCDF994C6370D29323EAB0E0C9502 v114; // [rsp+120h] [rbp-78h] BYREF

  v110 = (_QWORD *)a4;
  v108 = a3;
  v104 = a2;
  v100 = a6;
  v98 = 0;
  v101 = 0LL;
  P = 0LL;
  memset(v105, 0, sizeof(v105));
  v106 = 0LL;
  v107 = 0LL;
  memset(&v114, 0, sizeof(v114));
  v95 = 0;
  VadPageSize = 0LL;
  if ( a3 != 3 )
  {
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
          v10 = a5;
          v81 = a5 < 8;
          goto LABEL_185;
        case 2:
          goto LABEL_176;
        case 4:
          v10 = a5;
          v81 = a5 < 0x10;
LABEL_185:
          if ( !v81 )
            goto LABEL_186;
          return 3221225476LL;
        case 5:
          v10 = a5;
          if ( a5 >= 8 )
            goto LABEL_3;
          return 3221225476LL;
        case 6:
          v10 = a5;
          if ( a5 < 0x18 )
            return 3221225476LL;
          goto LABEL_3;
        case 7:
          v10 = a5;
          if ( a5 < 0x20 )
            return 3221225476LL;
          goto LABEL_3;
        case 8:
          break;
        case 11:
          v10 = a5;
          if ( a5 < 0x28 )
            return 3221225476LL;
LABEL_186:
          v95 = 256;
          goto LABEL_3;
        case 12:
          if ( a2 )
            return 3221225485LL;
LABEL_176:
          v10 = a5;
          goto LABEL_3;
        default:
          return 3221225475LL;
      }
    }
    v10 = a5;
    if ( a5 >= 0x30 )
      goto LABEL_3;
    return 3221225476LL;
  }
  v10 = a5;
  if ( a5 < 0x18 )
    return 3221225476LL;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v97 = PreviousMode;
  v13 = v95;
  if ( v95 == 256
    && PreviousMode
    && (IsUserQueryVmCallerTrusted = MiIsUserQueryVmCallerTrusted((__int64)CurrentThread),
        PreviousMode = v97,
        !IsUserQueryVmCallerTrusted) )
  {
    v14 = a7 | 0x40000000;
  }
  else
  {
    v14 = a7;
  }
  if ( PreviousMode )
  {
    if ( v10 )
    {
      v15 = a4;
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v10 + a4 - 1;
      if ( a4 > v16 || v16 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
      v13 = v95;
    }
    if ( v100 )
    {
      v18 = v100;
      if ( (unsigned __int64)v100 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v18 = *(_QWORD *)v18;
      v13 = v95;
    }
  }
  if ( v104 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v102 = v104 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 != 10 )
    goto LABEL_22;
  Source = *(_OWORD *)a4;
  v112 = *(_OWORD *)(a4 + 16);
  v113 = *(_OWORD *)(a4 + 32);
  v82 = *((_QWORD *)&v112 + 1);
  *((_QWORD *)&v112 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 )
    return 3221225485LL;
  v83 = v82 - 1;
  if ( !v82 )
    v83 = 0LL;
  v84 = v104 + v83;
  if ( v84 < v104 || v84 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  VadPageSize = (((v104 & 0xFFF) + v82 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v102;
  v10 = a5;
  PreviousMode = v97;
LABEL_22:
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
    v101 = Process;
  }
  else
  {
    v62 = 4096;
    if ( (v14 & 0x40000000) != 0 )
      v62 = 1024;
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               v62,
               (__int64)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &v101,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    Process = (_KPROCESS *)v101;
    Object = v101;
    if ( (*((_DWORD *)v101 + 543) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(v101, 0x6D566D4Du);
      return 3221225506LL;
    }
    PreviousMode = v97;
  }
  if ( a3 == 11 )
  {
    MemoryPhysicalContiguity = MiQueryMemoryPhysicalContiguity(Process, a4, v10, PreviousMode);
    if ( BugCheckParameter1 != -1LL )
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    if ( MemoryPhysicalContiguity >= 0 )
    {
      if ( v100 )
        *(_QWORD *)v100 = a5;
      return 0LL;
    }
    return (unsigned int)MemoryPhysicalContiguity;
  }
  if ( (unsigned int)(a3 - 12) <= 1 )
  {
    BadAddresses = MmQueryBadAddresses((ULONG_PTR)Process, v10, v100);
    if ( BugCheckParameter1 != -1LL )
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    result = 0LL;
    if ( BadAddresses < 0 )
      return (unsigned int)BadAddresses;
    return result;
  }
  switch ( a3 )
  {
    case 4:
      MemoryPhysicalContiguity = MiGetWorkingSetInfoList((ULONG_PTR)Process, v14, a4, v10);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v100 )
          *(_QWORD *)v100 = a5;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 1:
      MemoryPhysicalContiguity = MiGetWorkingSetInfo((__int64)Process, v14, a4, v10, &P);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v100 )
          *(_QWORD *)v100 = 8 * P + 8;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 5:
      v85 = Process[2].Affinity.StaticBitmap[12];
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v101, 0x6D566D4Du);
      *(_QWORD *)a4 = v85;
      if ( v100 )
        *(_QWORD *)v100 = 8LL;
      return 0LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess(Process, 0, (__int64)&v114);
    v13 |= 1u;
  }
  v96 = v13;
  v20 = Object;
  if ( a3 == 8 )
  {
    if ( *((_QWORD *)Object + 124) )
    {
      VirtualMemory = VslQueryVirtualMemory((__int64)Object, v104, v105);
      if ( VirtualMemory >= 0 )
      {
        if ( LODWORD(v105[2]) == 4096 )
          v87 = *(_WORD *)MiGetProcessPartition((__int64)Object);
        else
          v87 = 0;
        WORD2(v105[1]) = v87;
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v114);
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        }
        *(_OWORD *)a4 = v105[0];
        *(__m256i *)(a4 + 16) = *(__m256i *)&v105[1];
        if ( v100 )
          *(_QWORD *)v100 = 48LL;
        return 0LL;
      }
    }
  }
  while ( 2 )
  {
    while ( 2 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v20);
      v21 = Object;
      if ( (*((_DWORD *)Object + 281) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v114);
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        }
        return 3221225738LL;
      }
      v22 = 0LL;
      v23 = 0LL;
      v24 = *((_QWORD *)Object + 251);
      if ( !v24 )
        goto LABEL_43;
      v23 = v104 >> 12;
      while ( 1 )
      {
        while ( 1 )
        {
          v22 = v24;
          v25 = *(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32);
          if ( v23 >= v25 )
            break;
LABEL_40:
          v24 = *(_QWORD *)v24;
          if ( !v24 )
            goto LABEL_43;
        }
        if ( v23 <= (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
          break;
        if ( v23 < v25 )
          goto LABEL_40;
        v24 = *(_QWORD *)(v24 + 8);
        if ( !v24 )
          goto LABEL_43;
      }
      v13 |= 2u;
      v96 = v13;
LABEL_43:
      if ( (v13 & 2) == 0 )
      {
        if ( v22 )
        {
          v72 = *(unsigned int *)(v22 + 24);
          if ( (v72 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) >= v23 )
          {
            v74 = v72 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32);
            goto LABEL_160;
          }
          NextVad = MiGetNextVad(v22);
          if ( NextVad )
          {
            v74 = *(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32);
LABEL_160:
            v75 = v74 << 12;
            goto LABEL_161;
          }
          v75 = 0x7FFFFFFF0000LL;
        }
        else
        {
          v75 = 0x7FFFFFFF0000LL;
        }
LABEL_161:
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v21);
        v76 = v102;
        v77 = v75 - v102;
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v114);
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          v76 = v102;
        }
        if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
        {
          *(_QWORD *)(a4 + 8) = 0LL;
          *(_DWORD *)(a4 + 16) = 0;
          *(_QWORD *)a4 = v76;
          *(_QWORD *)(a4 + 24) = v77;
          *(_DWORD *)(a4 + 32) = 0x10000;
          *(_QWORD *)(a4 + 36) = 1LL;
          MiSetBasicInfoPartitionId(a4, 0);
          if ( v100 )
            *(_QWORD *)v100 = 48LL;
          return 0LL;
        }
        return 3221225793LL;
      }
      MiReferenceVad(v22);
      --CurrentThread->KernelApcDisable;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v26);
      MiLockVadShared((__int64)CurrentThread, v22);
      v27 = CurrentThread->KernelApcDisable++ == -1;
      if ( v27
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (unsigned int)MiVadDeleted(v22) )
      {
        MiUnlockVadShared((__int64)CurrentThread, v22);
        MiLockVad((__int64)CurrentThread, v22);
        MiWaitForVadDeletion(v22);
        MiUnlockAndDereferenceVad((PVOID)v22);
        v13 &= ~2u;
        v96 = v13;
        v20 = Object;
        continue;
      }
      break;
    }
    if ( v23 < (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
      || v23 > (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) )
    {
      MiUnlockAndDereferenceVadShared((PVOID)v22);
      v13 &= ~2u;
      v96 = v13;
      v20 = Object;
      continue;
    }
    break;
  }
  memset((char *)&v105[1] + 4, 0, 20);
  HIDWORD(v105[2]) = 0;
  *(_QWORD *)&v105[0] = v102;
  *((_QWORD *)&v105[0] + 1) = (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12;
  LODWORD(v105[1]) = MmProtectToValue[(*(_DWORD *)(v22 + 48) >> 7) & 0x1F] | MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v22);
  v30 = *(_DWORD *)(v22 + 48);
  if ( (v30 & 0x200000) != 0 )
  {
    DWORD2(v105[2]) = 0x20000;
    if ( MiIsSoftwareEnclave(v22) )
    {
      LOBYTE(v13) = v13 | 0x40;
      v96 = v13;
    }
    v60 = *(unsigned int *)(v22 + 52);
    LODWORD(v60) = v60 & 0x7FFFFFFF;
    if ( (v60 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v13) = v13 | 0x80;
      v96 = v13;
    }
    v61 = *(_DWORD *)(v22 + 48);
    if ( (v61 & 0x70) == 0x10 )
    {
      LOBYTE(v13) = v13 | 8;
      v96 = v13;
    }
    if ( (v61 & 0x70) == 0x30 )
    {
      LOBYTE(v13) = v13 | 0x10;
      v96 = v13;
    }
    v34 = 1LL;
    v31 = a5;
    v36 = v29;
    if ( (v61 & 0x400000) != 0 )
    {
      LOBYTE(v13) = v13 | 0x20;
      v96 = v13;
    }
    goto LABEL_59;
  }
  if ( (v30 & 0x70) == 0x20 )
  {
    DWORD2(v105[2]) = 0x1000000;
    if ( a3 == 7 && (*(_BYTE *)(**(_QWORD **)(v22 + 72) + 62LL) & 0xC) == 4 )
    {
      LOBYTE(v13) = v13 | 4;
      v96 = v13;
    }
    v31 = a5;
    goto LABEL_137;
  }
  DWORD2(v105[2]) = 0x40000;
  v31 = a5;
  if ( (a3 != 3 || a5 < 0x30) && a3 != 7 )
  {
LABEL_137:
    v34 = 1LL;
    goto LABEL_57;
  }
  v32 = *(__int64 **)(v22 + 72);
  v33 = *v32;
  v34 = 1LL;
  if ( *(_QWORD *)(*v32 + 64) == v29 )
    v35 = v29;
  else
    v35 = 1;
  if ( v35 )
  {
    if ( a3 == 7 && (*(_BYTE *)(v33 + 62) & 0xC) == 4 )
    {
      LOBYTE(v13) = v13 | 4;
      v96 = v13;
    }
  }
  else
  {
    DWORD2(v105[2]) = 0x8000000;
  }
LABEL_57:
  if ( a3 == 2 )
  {
    v79 = *(__int64 **)(v22 + 72);
    v36 = *(_QWORD *)(*v79 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v36 )
    {
      v36 = MiReferenceControlAreaFile(*v79);
      v29 = 0LL;
      v28 = v102;
    }
    if ( !v36 )
      v36 = 1LL;
  }
  else
  {
    v36 = v29;
  }
LABEL_59:
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v106 = 0LL;
      v107 = 0LL;
      v63 = *(_DWORD *)(v22 + 48);
      if ( (v63 & 0x200000) != 0 || (v63 & 0x70) != 0x20 )
      {
        v71 = Object;
      }
      else
      {
        v64 = ***(_QWORD ***)(v22 + 72);
        *(_QWORD *)&v106 = (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12;
        *((_QWORD *)&v106 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v64 + 24), -1LL, -1LL);
        v65 = v107 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v64 + 15) >> 2) & 0x3FFFFFFC;
        LODWORD(v107) = v65;
        if ( (*(_DWORD *)(v22 + 48) & 0xF80) == 0x80 )
          LODWORD(v107) = v65 | 2;
        if ( (unsigned int)MiVadMapsLargeImage(v22) )
        {
          VadEvent = MiLocateVadEvent();
          v69 = *(_QWORD *)(VadEvent + 16);
          *(_QWORD *)&v106 = v89 + ((unsigned __int64)*(unsigned __int8 *)(VadEvent + 8) << 16);
        }
        else
        {
          v69 = (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32))
              - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
              + 1;
        }
        if ( (v66 & 0xFFF) == 0 )
          v34 = v68;
        v70 = v34 + (v66 >> 12);
        v71 = v101;
        LOBYTE(v13) = v96;
        if ( v69 < v70 )
          LODWORD(v107) = v67 | 1;
      }
      MiUnlockAndDereferenceVadShared((PVOID)v22);
      if ( (v13 & 1) != 0 )
      {
        KiUnstackDetachProcess(&v114);
        ObfDereferenceObjectWithTag(v71, 0x6D566D4Du);
      }
      v98 = 24;
      *(_OWORD *)a4 = v106;
      *(_QWORD *)(a4 + 16) = v107;
      if ( v100 )
        *(_QWORD *)v100 = 24LL;
      return 0LL;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      AddressSpan = MiQueryAddressSpan((__int64)v105, v28, VadPageSize, v22);
      *((_QWORD *)&v105[1] + 1) = AddressSpan - *(_QWORD *)&v105[0];
    }
    MiUnlockAndDereferenceVadShared((PVOID)v22);
    if ( (v13 & 1) != 0 )
    {
      KiUnstackDetachProcess(&v114);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      *(_OWORD *)a4 = v105[0];
      *(__m256i *)(a4 + 16) = *(__m256i *)&v105[1];
      if ( v100 )
        *(_QWORD *)v100 = 48LL;
      return 0LL;
    }
    if ( v36 )
    {
      if ( v36 == 1 )
        return 3221225624LL;
      if ( (unsigned int)v31 < v31 )
      {
        ObfDereferenceObject((PVOID)v36);
        return 3221225715LL;
      }
      v98 = 0;
      MemoryPhysicalContiguity = ObQueryNameStringMode((char *)v36, a4, v31, &v98, v97);
      ObfDereferenceObject((PVOID)v36);
      if ( v100 )
        *(_QWORD *)v100 = v98;
      return (unsigned int)MemoryPhysicalContiguity;
    }
    return 3221225793LL;
  }
  v37 = v29;
  v38 = ((*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32))
       - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
       + 1) << 12;
  v39 = *(unsigned int *)(v22 + 52);
  LODWORD(v39) = v39 & 0x7FFFFFFF;
  v40 = v39 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31);
  if ( v40 >= 0x7FFFFFFFDLL )
    v40 = v29;
  VadPageSize = MiGetVadPageSize(v22);
  ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)Object);
  v43 = *(_DWORD *)(v22 + 48);
  if ( (v43 & 0x200000) != 0 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      MiGetAweVadPartition(v22);
      VadPageSize = MiGetAweVadPageSize(v22, v90, v91, v92);
    }
    else
    {
      if ( (v43 & 0x800000) == 0 && (v43 & 0x180000u) < 0x100000 )
        goto LABEL_66;
      v93 = MiLocateVadEvent();
      if ( v93 )
      {
        v42 = *(_QWORD *)(v93 + 24);
        if ( !v42 || PsReferencePartitionSafe(*(_QWORD *)(v93 + 24)) )
          goto LABEL_66;
        v37 = -1073740640;
      }
      v42 = 0LL;
    }
  }
  else
  {
    v44 = *(__int64 **)(v22 + 72);
    if ( v44 && *v44 )
      ProcessPartition = (unsigned __int16 *)MiGetControlAreaPartition(*v44);
  }
LABEL_66:
  if ( v37 < 0 )
    v45 = 0;
  else
    v45 = *ProcessPartition;
  if ( v42 )
    PsDereferencePartition(v42);
  v46 = (*(_DWORD *)(v22 + 48) >> 12) & 0x7F;
  MiUnlockAndDereferenceVadShared((PVOID)v22);
  if ( (v13 & 1) != 0 )
  {
    KiUnstackDetachProcess(&v114);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  if ( v37 < 0 )
    return (unsigned int)v37;
  v47 = v40 << 12;
  v48 = v13 & 0xFD;
  v49 = v110;
  *v110 = *((_QWORD *)&v105[0] + 1);
  *((_DWORD *)v49 + 2) = v105[1];
  v49[2] = v38;
  if ( v108 != 7 )
  {
    v50 = DWORD2(v105[2]);
    goto LABEL_75;
  }
  v53 = 0;
  *((_DWORD *)v49 + 3) = 0;
  if ( DWORD2(v105[2]) == 0x20000 )
  {
    v53 = 1;
    *((_DWORD *)v49 + 3) = 1;
  }
  else if ( (v48 & 8) != 0 )
  {
    *((_DWORD *)v49 + 3) = 16;
    v53 = 16;
  }
  else
  {
    switch ( DWORD2(v105[2]) )
    {
      case 0x40000:
        *((_DWORD *)v49 + 3) = 2;
        v53 = 2;
        break;
      case 0x1000000:
        *((_DWORD *)v49 + 3) = 4;
        v53 = 4;
        break;
      case 0x8000000:
        *((_DWORD *)v49 + 3) = 8;
        v53 = 8;
        break;
    }
  }
  switch ( VadPageSize )
  {
    case 0x10uLL:
      v53 |= 0x80u;
      goto LABEL_101;
    case 0x200uLL:
      v53 |= 0x800u;
      goto LABEL_101;
    case 0x40000uLL:
      v53 |= 0x1000u;
LABEL_101:
      *((_DWORD *)v49 + 3) = v53;
      break;
  }
  v54 = v53 | (32 * (v48 & 0x20));
  *((_DWORD *)v49 + 3) = v54;
  v55 = v54 | (32 * (v48 & 0x10));
  *((_DWORD *)v49 + 3) = v55;
  v56 = v55 | (8 * (v48 & 4));
  *((_DWORD *)v49 + 3) = v56;
  v57 = v56 | v48 & 0x40;
  *((_DWORD *)v49 + 3) = v57;
  v50 = v57 | (2 * (v48 & 0x80));
LABEL_75:
  *((_DWORD *)v49 + 3) = v50;
  v51 = 24LL;
  v98 = 24;
  if ( a5 >= 0x20 )
  {
    v49[3] = v47;
    v51 = 32LL;
    v98 = 32;
  }
  if ( a5 >= 0x28 )
  {
    v49[4] = v45;
    v51 = 40LL;
    v98 = 40;
  }
  if ( a5 >= 0x30 )
  {
    if ( v46 )
      v52 = (unsigned int)(v46 - 1);
    else
      v52 = 0xFFFFFFFFLL;
    v49[5] = v52;
    v98 = 48;
    v51 = 48LL;
  }
  if ( v100 )
    *(_QWORD *)v100 = v51;
  return 0LL;
}
