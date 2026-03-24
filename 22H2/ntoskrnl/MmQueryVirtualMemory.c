/*
 * XREFs of MmQueryVirtualMemory @ 0x14061ED50
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140320234 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x14061ED10 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x140733988 (PfpVirtualQuery.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     MiGetProcessPartition @ 0x14021AD00 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiVadMapsLargeImage @ 0x14021CBE0 (MiVadMapsLargeImage.c)
 *     MiUnlockVadShared @ 0x14025A96C (MiUnlockVadShared.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14025AA70 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025AAB0 (MiUnlockAndDereferenceVadShared.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14025AB70 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiVadDeleted @ 0x14025AB90 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14025ABA4 (MiLockVadShared.c)
 *     MiReferenceVad @ 0x14025ABF0 (MiReferenceVad.c)
 *     MiGetControlAreaPartition @ 0x14025AC04 (MiGetControlAreaPartition.c)
 *     MiQueryAddressSpan @ 0x14025AC30 (MiQueryAddressSpan.c)
 *     MiIsSoftwareEnclave @ 0x14025AE20 (MiIsSoftwareEnclave.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x14027EA34 (MiLocateVadEvent.c)
 *     MiLockVad @ 0x140296DD8 (MiLockVad.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402C8E20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140303F74 (PsReferencePartitionSafe.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1404078B0 (RtlCompareMemoryUlong.c)
 *     VslQueryVirtualMemory @ 0x1404FCE40 (VslQueryVirtualMemory.c)
 *     MiGetWorkingSetInfo @ 0x140546B78 (MiGetWorkingSetInfo.c)
 *     MiGetAweVadPartition @ 0x14054C3C0 (MiGetAweVadPartition.c)
 *     MiGetVadPageSize @ 0x14055BCF0 (MiGetVadPageSize.c)
 *     MiWaitForVadDeletion @ 0x14055BD50 (MiWaitForVadDeletion.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14070E660 (MiIsUserQueryVmCallerTrusted.c)
 *     ObQueryNameStringMode @ 0x14070FFB0 (ObQueryNameStringMode.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12F0 (MiQueryMemoryPhysicalContiguity.c)
 */

NTSTATUS __fastcall MmQueryVirtualMemory(
        HANDLE Handle,
        unsigned __int64 a2,
        int a3,
        _OWORD *a4,
        SIZE_T Length,
        _QWORD *a6,
        int a7)
{
  SIZE_T v10; // r13
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // cl
  unsigned int v13; // ebx
  int v14; // r15d
  __int64 v15; // rcx
  struct _KPROCESS *v16; // rsi
  __int64 *p_Lock; // r15
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r10
  int v25; // r9d
  int v26; // eax
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  int v30; // r10d
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  int v33; // r10d
  __int64 v34; // r11
  unsigned __int64 v35; // rdx
  NTSTATUS result; // eax
  __int64 v37; // rax
  int v38; // r13d
  unsigned __int64 v39; // r15
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  unsigned __int16 *ProcessPartition; // r8
  __int64 v43; // r10
  __int64 v44; // r9
  int v45; // eax
  __int64 *v46; // rax
  __int64 AweVadPartition; // rax
  unsigned __int16 v48; // r12
  int v49; // edi
  unsigned __int64 v50; // r14
  char v51; // bl
  _QWORD *v52; // r8
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edx
  int v57; // eax
  int v58; // ecx
  unsigned __int64 AddressSpan; // rax
  __int64 v60; // rax
  ACCESS_MASK v61; // edx
  bool v62; // cf
  __int64 v63; // rdx
  unsigned __int64 i; // rcx
  _QWORD *v65; // rdx
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // rdi
  int IsUserQueryVmCallerTrusted; // eax
  int MemoryPhysicalContiguity; // ebx
  __int64 *v71; // rax
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rbx
  __int64 VadEvent; // rax
  __int64 v75; // r9
  __int64 v76; // rax
  unsigned int v77; // [rsp+40h] [rbp-168h]
  unsigned __int8 v78; // [rsp+44h] [rbp-164h]
  unsigned int v79; // [rsp+48h] [rbp-160h] BYREF
  _QWORD *v80; // [rsp+50h] [rbp-158h]
  unsigned __int64 v81; // [rsp+58h] [rbp-150h]
  struct _KTHREAD *v82; // [rsp+60h] [rbp-148h]
  unsigned __int8 v83; // [rsp+68h] [rbp-140h]
  PVOID Object; // [rsp+70h] [rbp-138h] BYREF
  PRKPROCESS PROCESS; // [rsp+78h] [rbp-130h]
  __m256i v86; // [rsp+80h] [rbp-128h] BYREF
  __int128 v87; // [rsp+A0h] [rbp-108h]
  __int128 v88; // [rsp+B0h] [rbp-F8h]
  __int64 v89; // [rsp+C0h] [rbp-E8h]
  int v90; // [rsp+C8h] [rbp-E0h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-D8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+D8h] [rbp-D0h]
  __int64 P; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned __int64 v94; // [rsp+E8h] [rbp-C0h]
  _QWORD *v95; // [rsp+F8h] [rbp-B0h]
  __int128 Source; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v97; // [rsp+110h] [rbp-98h]
  __int128 v98; // [rsp+120h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp-78h] BYREF

  v95 = a4;
  v90 = a3;
  v81 = a2;
  v80 = a6;
  v79 = 0;
  Object = 0LL;
  P = 0LL;
  memset(&v86, 0, sizeof(v86));
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v77 = 0;
  DmaAdapter = 0LL;
  v94 = 0LL;
  if ( a3 == 6 )
  {
    v10 = Length;
    if ( Length >= 0x18 )
      goto LABEL_6;
    return -1073741820;
  }
  if ( a3 != 3 )
  {
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
          v10 = Length;
          v62 = Length < 8;
          goto LABEL_137;
        case 2:
          v10 = Length;
          goto LABEL_6;
        case 4:
          v10 = Length;
          v62 = Length < 0x10;
LABEL_137:
          if ( !v62 )
            goto LABEL_138;
          return -1073741820;
        case 5:
          v10 = Length;
          if ( Length < 8 )
            return -1073741820;
          goto LABEL_6;
        case 7:
          v10 = Length;
          if ( Length < 0x20 )
            return -1073741820;
          goto LABEL_6;
        case 8:
          break;
        case 11:
          v10 = Length;
          if ( Length < 0x28 )
            return -1073741820;
LABEL_138:
          v77 = 64;
          goto LABEL_6;
        default:
          return -1073741821;
      }
    }
    v10 = Length;
    if ( Length >= 0x30 )
      goto LABEL_6;
    return -1073741820;
  }
  v10 = Length;
  if ( Length < 0x18 )
    return -1073741820;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  v82 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v78 = PreviousMode;
  v13 = v77;
  if ( v77 < 0x40
    || !PreviousMode
    || (IsUserQueryVmCallerTrusted = MiIsUserQueryVmCallerTrusted(CurrentThread),
        PreviousMode = v78,
        IsUserQueryVmCallerTrusted) )
  {
    v14 = a7;
  }
  else
  {
    v14 = a7 | 0x40000000;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(a4, v10, 8u);
    if ( v80 )
    {
      v15 = (__int64)v80;
      if ( (unsigned __int64)v80 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
      v13 = v77;
    }
    PreviousMode = v78;
  }
  if ( v81 > 0x7FFFFFFEFFFFLL )
    return -1073741811;
  v91 = v81 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 != 10 )
    goto LABEL_16;
  Source = *a4;
  v97 = a4[1];
  v98 = a4[2];
  v72 = *((_QWORD *)&v97 + 1);
  *((_QWORD *)&v97 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 || v72 > 0x7FFFFFFF0000LL - v81 )
    return -1073741811;
  v94 = (((v81 & 0xFFF) + v72 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v91;
  CurrentThread = v82;
  PreviousMode = v78;
LABEL_16:
  if ( Handle == (HANDLE)-1LL )
  {
    v16 = CurrentThread->ApcState.Process;
    PROCESS = v16;
    Object = v16;
  }
  else
  {
    v61 = 4096;
    if ( (v14 & 0x40000000) != 0 )
      v61 = 1024;
    result = ObReferenceObjectByHandleWithTag(
               Handle,
               v61,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
    v16 = (struct _KPROCESS *)Object;
    PROCESS = (PRKPROCESS)Object;
    if ( (*((_DWORD *)Object + 543) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return -1073741790;
    }
  }
  switch ( a3 )
  {
    case 11:
      MemoryPhysicalContiguity = MiQueryMemoryPhysicalContiguity(v16, a4, v10, v78);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v80 )
          *v80 = v10;
        return 0;
      }
      return MemoryPhysicalContiguity;
    case 4:
      MemoryPhysicalContiguity = MiGetWorkingSetInfoList((ULONG_PTR)v16, v14, (unsigned __int64)a4, v10);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v80 )
          *v80 = v10;
        return 0;
      }
      return MemoryPhysicalContiguity;
    case 1:
      MemoryPhysicalContiguity = MiGetWorkingSetInfo((__int64)v16, v14, (__int64)a4, v10, &P);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v80 )
          *v80 = 8 * P + 8;
        return 0;
      }
      return MemoryPhysicalContiguity;
    case 5:
      v73 = v16[2].Affinity.Bitmap[12];
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      *(_QWORD *)a4 = v73;
      if ( v80 )
        *v80 = 8LL;
      return 0;
  }
  p_Lock = (__int64 *)&PROCESS->Header.Lock;
  if ( Handle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v13 |= 1u;
    LOBYTE(v77) = v13;
  }
  if ( a3 == 8 && p_Lock[124] && VslQueryVirtualMemory((__int64)p_Lock, v81, &v86) >= 0 )
  {
    if ( (_DWORD)v87 == 4096 )
      v86.m256i_i16[10] = *(_WORD *)MiGetProcessPartition((__int64)p_Lock);
    else
      v86.m256i_i16[10] = 0;
    if ( (v13 & 1) != 0 )
    {
      KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
    }
    *(__m256i *)a4 = v86;
    a4[2] = v87;
    if ( v80 )
      *v80 = 48LL;
    return 0;
  }
  while ( 2 )
  {
    v18 = (__int64)v82;
    while ( 1 )
    {
      LOCK_ADDRESS_SPACE_SHARED(v18, (__int64)p_Lock);
      if ( (*((_DWORD *)p_Lock + 281) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED(v18, (__int64)p_Lock);
        if ( (v13 & 1) != 0 )
        {
          KeUnstackDetachProcess(&ApcState);
          ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
        }
        return -1073741558;
      }
      v19 = 0LL;
      v20 = 0LL;
      if ( p_Lock[253] )
      {
        v19 = p_Lock[251];
        v20 = v81 >> 12;
        while ( v19 )
        {
          v21 = *(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32);
          if ( v20 < v21 )
            goto LABEL_35;
          if ( v20 <= (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
          {
            v13 |= 2u;
            LOBYTE(v77) = v13;
            break;
          }
          if ( v20 < v21 )
          {
LABEL_35:
            if ( !*(_QWORD *)v19 )
              break;
            v19 = *(_QWORD *)v19;
          }
          else
          {
            if ( !*(_QWORD *)(v19 + 8) )
              break;
            v19 = *(_QWORD *)(v19 + 8);
          }
        }
      }
      if ( (v13 & 2) == 0 )
      {
        if ( v19 )
        {
          v63 = *(unsigned int *)(v19 + 24);
          if ( (v63 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) < v20 )
          {
            i = *(_QWORD *)(v19 + 8);
            if ( i )
            {
              v65 = *(_QWORD **)i;
              if ( *(_QWORD *)i )
              {
                do
                {
                  i = (unsigned __int64)v65;
                  v65 = (_QWORD *)*v65;
                }
                while ( v65 );
              }
            }
            else
            {
              for ( i = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v19 )
                  break;
                v19 = i;
              }
            }
            v66 = v81 & 0xFFFFFFFFFFFFF000uLL;
            if ( i )
              v67 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
            else
              v67 = 0x7FFFFFFF0000LL;
LABEL_150:
            v81 = v66;
            v68 = v67 - v66;
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v82, (__int64)p_Lock);
            if ( (v13 & 1) != 0 )
            {
              KeUnstackDetachProcess(&ApcState);
              ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
            }
            if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
            {
              *((_QWORD *)a4 + 1) = 0LL;
              *((_DWORD *)a4 + 4) = 0;
              *(_QWORD *)a4 = v81;
              *((_QWORD *)a4 + 3) = v68;
              *((_DWORD *)a4 + 8) = 0x10000;
              *(_QWORD *)((char *)a4 + 36) = 1LL;
              *((_WORD *)a4 + 10) = 0;
              if ( v80 )
                *v80 = 48LL;
              return 0;
            }
            return -1073741503;
          }
          v67 = (v63 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
        }
        else
        {
          v67 = 0x7FFFFFFF0000LL;
        }
        v66 = v81 & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_150;
      }
      MiReferenceVad(v19);
      v22 = (__int64)v82;
      --v82->KernelApcDisable;
      UNLOCK_ADDRESS_SPACE_SHARED(v22, (__int64)p_Lock);
      MiLockVadShared((__int64)v82, v19);
      KeLeaveCriticalRegionThread((__int64)v82);
      if ( (unsigned int)MiVadDeleted(v19) != 1 )
        break;
      v18 = (__int64)v82;
      MiUnlockVadShared((__int64)v82, v19);
      MiLockVad((__int64)v82, v19);
      MiWaitForVadDeletion(v19);
      MiUnlockAndDereferenceVad((char *)v19);
      v13 &= ~2u;
      LOBYTE(v77) = v13;
    }
    if ( v20 < (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
      || v20 > (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
    {
      MiUnlockAndDereferenceVadShared((char *)v19);
      v13 &= ~2u;
      LOBYTE(v77) = v13;
      continue;
    }
    break;
  }
  memset(&v86.m256i_u64[1], 0, 24);
  v87 = 0LL;
  v86.m256i_i64[0] = v91;
  v86.m256i_i64[1] = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
  v86.m256i_i32[4] = MmProtectToValue[(*(_DWORD *)(v19 + 48) >> 7) & 0x1F];
  v23 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v19);
  v86.m256i_i32[4] = v25 | v23;
  v26 = *(_DWORD *)(v19 + 48);
  if ( (v26 & 0x100000) == 0 )
  {
    if ( (v26 & 0x70) == 0x20 )
    {
      DWORD2(v87) = 0x1000000;
      if ( a3 == 7 && (*(_DWORD *)(**(_QWORD **)(v19 + 72) + 56LL) & 0x40000000) != 0 )
      {
LABEL_235:
        LOBYTE(v13) = v13 | 4;
        LOBYTE(v77) = v13;
      }
    }
    else
    {
      DWORD2(v87) = 0x40000;
      if ( a3 == 3 && v10 >= 0x30 || a3 == 7 )
      {
        v37 = *(_QWORD *)(v19 + 72);
        if ( !*(_QWORD *)(*(_QWORD *)v37 + 64LL) )
        {
          DWORD2(v87) = 0x8000000;
          goto LABEL_45;
        }
        if ( a3 == 7 && (*(_DWORD *)(*(_QWORD *)v37 + 56LL) & 0x40000000) != 0 )
          goto LABEL_235;
      }
    }
LABEL_45:
    if ( a3 == 2 )
    {
      v71 = *(__int64 **)(v19 + 72);
      v27 = *(_QWORD *)(*v71 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v27 )
      {
        v27 = MiReferenceControlAreaFile(*v71);
        v24 = v91;
      }
      if ( !v27 )
        v27 = 1LL;
    }
    else
    {
      v27 = (__int64)DmaAdapter;
    }
    goto LABEL_47;
  }
  DWORD2(v87) = 0x20000;
  if ( (unsigned int)MiIsSoftwareEnclave(v19) )
  {
    LOBYTE(v13) = v13 | 0x10;
    LOBYTE(v77) = v13;
  }
  v60 = *(unsigned int *)(v19 + 52);
  LODWORD(v60) = v60 & 0x7FFFFFFF;
  if ( (v60 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    LOBYTE(v13) = v13 | 0x20;
    LOBYTE(v77) = v13;
  }
  v27 = (__int64)DmaAdapter;
  if ( (*(_DWORD *)(v19 + 48) & 0x70) == 0x10 )
  {
    LOBYTE(v13) = v13 | 8;
    LOBYTE(v77) = v13;
  }
LABEL_47:
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v88 = 0LL;
      v89 = 0LL;
      v28 = *(_DWORD *)(v19 + 48);
      if ( (v28 & 0x100000) == 0 && (v28 & 0x70) == 0x20 )
      {
        v29 = ***(_QWORD ***)(v19 + 72);
        *(_QWORD *)&v88 = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
        *((_QWORD *)&v88 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 24), -1LL, -1LL);
        v30 = v89 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v29 + 15) >> 2) & 0x3FFFFFFC;
        LODWORD(v89) = v30;
        if ( (*(_DWORD *)(v19 + 48) & 0xF80) == 0x80 )
          LODWORD(v89) = v30 | 2;
        if ( MiVadMapsLargeImage(v19) )
        {
          VadEvent = MiLocateVadEvent(v31, 16LL);
          v83 = *(_BYTE *)(VadEvent + 8);
          v35 = *(_QWORD *)(VadEvent + 16);
          *(_QWORD *)&v88 = v75 + ((unsigned __int64)v83 << 16);
        }
        else
        {
          v35 = (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
              - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
              + 1;
        }
        if ( (v32 & 0xFFF) == 0 )
          v34 = 0LL;
        p_Lock = (__int64 *)Object;
        LOBYTE(v13) = v77;
        if ( v35 < v34 + (v32 >> 12) )
          LODWORD(v89) = v33 | 1;
      }
      MiUnlockAndDereferenceVadShared((char *)v19);
      if ( (v13 & 1) != 0 )
      {
        KeUnstackDetachProcess(&ApcState);
        ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
      }
      v79 = 24;
      *a4 = v88;
      *((_QWORD *)a4 + 2) = v89;
      if ( v80 )
        *v80 = 24LL;
      return 0;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      AddressSpan = MiQueryAddressSpan((__int64)&v86, v24, v94, v19);
      v86.m256i_i64[3] = AddressSpan - v86.m256i_i64[0];
    }
    MiUnlockAndDereferenceVadShared((char *)v19);
    if ( (v13 & 1) != 0 )
    {
      KeUnstackDetachProcess(&ApcState);
      ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      *(__m256i *)a4 = v86;
      a4[2] = v87;
      if ( v80 )
        *v80 = 48LL;
      return 0;
    }
    if ( !v27 )
      return -1073741503;
    if ( v27 == 1 )
      return -1073741672;
    if ( (unsigned int)v10 < v10 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v27);
      return -1073741581;
    }
    v79 = 0;
    MemoryPhysicalContiguity = ObQueryNameStringMode(v27, (_DWORD)a4, v10, (unsigned int)&v79, v78);
    HalPutDmaAdapter((PADAPTER_OBJECT)v27);
    if ( v80 )
      *v80 = v79;
    return MemoryPhysicalContiguity;
  }
  v38 = 0;
  v39 = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
       - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
       + 1) << 12;
  v40 = *(unsigned int *)(v19 + 52);
  LODWORD(v40) = v40 & 0x7FFFFFFF;
  v41 = v40 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31);
  if ( v41 >= 0x7FFFFFFFDLL )
    v41 = 0LL;
  ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)PROCESS);
  v44 = v43;
  v45 = *(_DWORD *)(v19 + 48);
  if ( (v45 & 0x100000) != 0 )
  {
    if ( (v45 & 0x70) != 0x30 )
    {
      if ( (v45 & 0x400000) != 0 || (v45 & 0xC0000u) >= 0x80000 )
      {
        v76 = MiLocateVadEvent(v19, 16LL);
        if ( v76 )
        {
          v44 = *(_QWORD *)(v76 + 24);
          if ( v44 )
          {
            if ( !PsReferencePartitionSafe(*(_QWORD *)(v76 + 24)) )
            {
              v38 = -1073740640;
              v44 = v43;
            }
          }
        }
      }
      goto LABEL_77;
    }
    AweVadPartition = MiGetAweVadPartition(v19);
    goto LABEL_76;
  }
  v46 = *(__int64 **)(v19 + 72);
  if ( v46 && *v46 )
  {
    AweVadPartition = MiGetControlAreaPartition(*v46);
LABEL_76:
    ProcessPartition = (unsigned __int16 *)AweVadPartition;
  }
LABEL_77:
  if ( v38 < 0 )
    v48 = v43;
  else
    v48 = *ProcessPartition;
  if ( v44 )
    PsDereferencePartition(v44);
  v49 = (*(_DWORD *)(v19 + 48) >> 12) & 0x3F;
  MiUnlockAndDereferenceVadShared((char *)v19);
  if ( (v13 & 1) != 0 )
  {
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(PROCESS, 0x6D566D4Du);
  }
  if ( v38 >= 0 )
  {
    v50 = v41 << 12;
    v51 = v13 & 0xFD;
    v52 = v95;
    *v95 = v86.m256i_i64[1];
    *((_DWORD *)v52 + 2) = v86.m256i_i32[4];
    v52[2] = v39;
    if ( v90 == 7 )
    {
      *((_DWORD *)v52 + 3) = 0;
      if ( DWORD2(v87) == 0x20000 )
      {
        *((_DWORD *)v52 + 3) = 1;
      }
      else if ( (v51 & 8) != 0 )
      {
        *((_DWORD *)v52 + 3) = 16;
      }
      else
      {
        switch ( DWORD2(v87) )
        {
          case 0x40000:
            *((_DWORD *)v52 + 3) = 2;
            break;
          case 0x1000000:
            *((_DWORD *)v52 + 3) = 4;
            break;
          case 0x8000000:
            *((_DWORD *)v52 + 3) = 8;
            break;
        }
      }
      if ( MiGetVadPageSize(v19) == 16 )
      {
        v56 |= 0x80u;
        *((_DWORD *)v52 + 3) = v56;
      }
      v57 = v56 | (8 * (v51 & 4));
      *((_DWORD *)v52 + 3) = v57;
      v58 = v57 | (4 * (v51 & 0x10));
      *((_DWORD *)v52 + 3) = v58;
      v53 = v58 | (8 * (v51 & 0x20));
    }
    else
    {
      v53 = DWORD2(v87);
    }
    *((_DWORD *)v52 + 3) = v53;
    v54 = 24LL;
    v79 = 24;
    if ( Length >= 0x20 )
    {
      v52[3] = v50;
      v54 = 32LL;
      v79 = 32;
    }
    if ( Length >= 0x28 )
    {
      v52[4] = v48;
      v54 = 40LL;
      v79 = 40;
    }
    if ( Length >= 0x30 )
    {
      if ( v49 )
        v55 = (unsigned int)(v49 - 1);
      else
        v55 = 0xFFFFFFFFLL;
      v52[5] = v55;
      v79 = 48;
      v54 = 48LL;
    }
    if ( v80 )
      *v80 = v54;
    return 0;
  }
  return v38;
}
