int __fastcall MiAllocateUserPhysicalPages(
        HANDLE Handle,
        unsigned __int64 *a2,
        volatile void *a3,
        unsigned __int64 *a4,
        ULONGLONG ullMultiplicand)
{
  int v8; // edi
  char PreviousMode; // r12
  int result; // eax
  int v11; // eax
  __int64 v12; // r14
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r13
  _KPROCESS *v17; // rsi
  __int64 v18; // rcx
  int v19; // r13d
  unsigned __int64 AwePageSize; // rax
  int v21; // r12d
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  struct _KTHREAD *v24; // r13
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int16 v31; // cx
  char v32; // al
  unsigned __int64 v33; // r14
  unsigned int v34; // edx
  unsigned int v35; // r12d
  unsigned int IdealNodeNumberThread; // esi
  char v37; // al
  int v38; // r15d
  int v39; // r9d
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 ProcessPartition; // rax
  __int64 v43; // r8
  unsigned int v44; // r9d
  __int64 v45; // r10
  __int64 v46; // r11
  unsigned __int64 v47; // rax
  unsigned int *PagesForMdl; // rcx
  unsigned __int64 v49; // r11
  unsigned int *v50; // rdx
  void *UserPhysicalRanges; // rax
  int FastAwePages; // eax
  unsigned int *v53; // rdx
  unsigned __int64 v54; // r8
  unsigned int *v55; // rax
  unsigned __int64 v56; // rcx
  ULONG_PTR v57; // r9
  struct _KTHREAD *v58; // r13
  __int64 v59; // r8
  unsigned int *v60; // rax
  unsigned int *v61; // r10
  PVOID v62; // rax
  unsigned __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 v66; // r10
  int v67; // edx
  int CrossPartitionCharges; // eax
  __int64 v69; // r14
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r14
  _QWORD *v72; // r14
  _QWORD *v73; // r14
  int v74; // eax
  _QWORD *v75; // rcx
  _QWORD *v76; // r10
  unsigned __int64 v77; // r15
  unsigned __int64 v78; // r9
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // r14
  _QWORD *i; // rax
  _QWORD *v82; // r15
  void *v83; // rcx
  _KPROCESS *v84; // [rsp+60h] [rbp-2E8h]
  __int64 v85; // [rsp+68h] [rbp-2E0h] BYREF
  PVOID P; // [rsp+70h] [rbp-2D8h]
  __int64 v87; // [rsp+78h] [rbp-2D0h]
  int v88; // [rsp+80h] [rbp-2C8h]
  unsigned __int64 v89; // [rsp+88h] [rbp-2C0h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-2B8h]
  PVOID Object; // [rsp+98h] [rbp-2B0h] BYREF
  unsigned __int64 v92; // [rsp+A0h] [rbp-2A8h]
  unsigned __int64 v93; // [rsp+A8h] [rbp-2A0h]
  __int64 v94; // [rsp+B0h] [rbp-298h] BYREF
  unsigned int *v95; // [rsp+B8h] [rbp-290h]
  __int64 AweInfoPartition; // [rsp+C0h] [rbp-288h]
  unsigned __int64 v97; // [rsp+C8h] [rbp-280h]
  unsigned __int64 v98; // [rsp+D0h] [rbp-278h]
  _KPROCESS *Process; // [rsp+D8h] [rbp-270h]
  unsigned int *v100; // [rsp+E0h] [rbp-268h]
  PVOID v101; // [rsp+E8h] [rbp-260h]
  int v102; // [rsp+F0h] [rbp-258h]
  __int64 v103; // [rsp+F8h] [rbp-250h]
  volatile void *Address; // [rsp+100h] [rbp-248h]
  unsigned __int64 v105; // [rsp+108h] [rbp-240h]
  unsigned __int64 v106; // [rsp+110h] [rbp-238h]
  PVOID v107; // [rsp+118h] [rbp-230h]
  _DWORD *v108; // [rsp+120h] [rbp-228h]
  __int64 v109; // [rsp+128h] [rbp-220h]
  unsigned __int64 *v110; // [rsp+130h] [rbp-218h]
  unsigned __int64 v111; // [rsp+138h] [rbp-210h]
  _QWORD v112[10]; // [rsp+150h] [rbp-1F8h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v113; // [rsp+1A0h] [rbp-1A8h] BYREF
  _QWORD v114[38]; // [rsp+1D0h] [rbp-178h] BYREF

  v110 = a2;
  Address = a3;
  memset(&v113, 0, sizeof(v113));
  v94 = 0LL;
  Object = 0LL;
  memset(v114, 0, sizeof(v114));
  memset(v112, 0, 0x48uLL);
  v8 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  result = MiCaptureAllocateMapExtendedParameters(a4, (unsigned int)ullMultiplicand, PreviousMode, 36, v112);
  if ( result < 0 )
    return result;
  if ( (v112[7] & 0xFFFFFFFFFFFFFFE5uLL) != 0 )
    return -1073741811;
  if ( (v112[7] & 0x1A) == 0 || (v11 = 0, (v112[7] & (unsigned __int8)((v112[7] & 0x1A) - 1) & 0x1A) == 0) )
    v11 = 1;
  if ( !v11 )
    return -1073741811;
  if ( (v112[7] & 2) != 0 )
  {
    v92 = 16LL;
    goto LABEL_17;
  }
  if ( (v112[7] & 8) != 0 )
  {
    v12 = 512LL;
LABEL_15:
    v92 = v12;
    goto LABEL_17;
  }
  if ( (v112[7] & 0x10) != 0 )
  {
    if ( !(unsigned int)MiHugePagesSupported() )
      return -1073741637;
    v12 = 0x40000LL;
    goto LABEL_15;
  }
  v92 = 0LL;
LABEL_17:
  if ( LODWORD(v112[4]) > (unsigned __int16)KeNumberNodes )
    return -1073741811;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a2;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v13 = *a2;
    v93 = v13;
    v98 = v13;
    if ( !v13 )
      return 0;
    if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741584;
    ProbeForWrite(Address, 8 * v13, 8u);
  }
  else
  {
    v13 = *a2;
    v93 = v13;
    v98 = v13;
    if ( !v13 )
      return 0;
  }
  v15 = 0LL;
  v85 = 0LL;
  result = MiReferenceAweHandle(Handle, 2u, PreviousMode, &Object, &v94);
  if ( result >= 0 )
  {
    v16 = v94;
    if ( v94 )
    {
      v15 = *(_QWORD *)(MiSectionControlArea(v94) + 8);
      v85 = v15;
    }
    else
    {
      v17 = (_KPROCESS *)Object;
      v84 = (_KPROCESS *)Object;
      if ( Object )
      {
LABEL_34:
        if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
        {
          v19 = -1073741727;
          goto LABEL_173;
        }
        if ( v17 != Process )
        {
          KiStackAttachProcess(v17, 0, (__int64)&v113);
          v8 |= 1u;
        }
        v87 = 0LL;
        if ( v15 )
        {
          v103 = v15;
        }
        else
        {
          LOBYTE(v18) = PreviousMode;
          v19 = MiCreateProcessDefaultAweInfo(v18, &v85);
          if ( v19 < 0 )
            goto LABEL_173;
          v103 = (__int64)v17;
          v15 = v85;
          v16 = v94;
        }
        AwePageSize = MiGetAwePageSize(v15);
        v97 = AwePageSize;
        if ( AwePageSize == 16 )
        {
          v21 = 4096;
        }
        else if ( AwePageSize == 512 )
        {
          v21 = 0x1000000;
        }
        else
        {
          v21 = 0;
          if ( AwePageSize == 0x40000 )
            v21 = 0x2000000;
        }
        if ( v15 && (*(_DWORD *)(v15 + 8) & 8) != 0 )
          v8 |= 0x20u;
        v22 = v92;
        if ( v92 )
        {
          if ( v92 <= AwePageSize || v92 % AwePageSize || ((v92 - 1) & v92) != 0 )
          {
            v19 = -1073741811;
            goto LABEL_173;
          }
        }
        else
        {
          v22 = AwePageSize;
          v92 = AwePageSize;
        }
        if ( v22 > 1 )
        {
          v23 = v22 * v13;
          if ( v13 >= v22 * v13 )
          {
            v19 = -1073741584;
            goto LABEL_173;
          }
          v13 *= v22;
          v93 = v23;
          v98 = v23;
        }
        if ( !v16 )
        {
          v24 = CurrentThread;
          LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v17);
          if ( (v17[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v24, (__int64)v17);
            v19 = -1073741558;
            goto LABEL_173;
          }
          if ( !(unsigned int)MiChargeProcessPhysicalPages(v17, v13) )
          {
            v26 = (__int64)v17;
            v27 = (__int64)v24;
LABEL_65:
            UNLOCK_ADDRESS_SPACE_SHARED(v27, v26);
            v19 = -1073741523;
            goto LABEL_173;
          }
          v8 |= 4u;
          v28 = MiChargeProcessCommitment(v25, v13);
          v26 = (__int64)v17;
          v27 = (__int64)v24;
          if ( !v28 )
            goto LABEL_65;
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)v24, (__int64)v17);
          v8 |= 2u;
        }
        AweInfoPartition = MiGetAweInfoPartition(v15);
        v30 = *(_QWORD *)(AweInfoPartition + 17032) + 1LL;
        v105 = v30;
        v101 = 0LL;
        v107 = 0LL;
        if ( v17[1].Affinity.StaticBitmap[30] )
        {
          v31 = WORD2(v17[2].Affinity.StaticBitmap[20]);
          if ( v31 == 332 || (v32 = 0, v31 == 452) )
            v32 = 1;
          if ( v32 )
          {
            if ( v30 > 0x100000000LL )
              v30 = 0x100000000LL;
            v105 = v30;
          }
        }
        v33 = v30 << 12;
        v19 = 0;
        v34 = 0x80000000;
        v35 = v21 | 0x80000000;
        if ( LODWORD(v112[4]) )
        {
          IdealNodeNumberThread = LODWORD(v112[4]) - 1;
          v37 = BYTE1(v112[6]);
          if ( BYTE1(v112[6]) )
            v35 |= 2u;
        }
        else
        {
          IdealNodeNumberThread = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)CurrentThread);
          v37 = BYTE1(v112[6]);
        }
        v38 = IdealNodeNumberThread;
        if ( !v37 )
          v38 = v34 | IdealNodeNumberThread;
        v108 = (_DWORD *)(v85 + 8);
        v39 = v35 | 1;
        if ( (*(_DWORD *)(v85 + 8) & 4) == 0 )
          v39 = v35;
        v88 = v39;
        v40 = v29 << 12;
        if ( v29 != 1 )
          v88 = v39 | 0x30;
        v41 = 0LL;
        if ( v29 != 1 )
          v41 = v29 << 12;
        v109 = v41;
        ProcessPartition = MiGetProcessPartition((__int64)v84);
        if ( v46 == ProcessPartition
          && (v8 & 0x20) == 0
          && (v44 & 0x1000) != 0
          && v43 == 16
          && (*(_DWORD *)(v46 + 4) & 0x10) == 0 )
        {
          v8 |= 0x80u;
        }
        v47 = v93;
        while ( 1 )
        {
          PagesForMdl = 0LL;
          P = 0LL;
          v49 = v47 - v87;
          v89 = v47 - v87;
          if ( v97 == 1 )
          {
            if ( v49 > 0xC0000 )
              v49 = 786432LL;
            v89 = v49;
          }
          if ( (v8 & 0x40) != 0 || v49 / v97 > 0x20 )
          {
            v50 = 0LL;
          }
          else
          {
            v8 |= 0x40u;
            v50 = (unsigned int *)v114;
            v114[0] = 0LL;
            LODWORD(v114[1]) = (unsigned __int16)(8 * (((((v49 / v97) << 12) + 4095) >> 12) + 6));
            v114[4] = 0LL;
            v114[5] = (unsigned int)(v49 / v97) << 12;
            PagesForMdl = (unsigned int *)P;
          }
          v95 = v50;
          v102 = v8 & 0x20;
          if ( (v8 & 0x20) != 0 )
          {
            UserPhysicalRanges = (void *)MiAllocateUserPhysicalRanges(
                                           AweInfoPartition,
                                           v49,
                                           v38,
                                           (*v108 >> 2) & 1,
                                           (__int64)v50);
            goto LABEL_118;
          }
          if ( v50 && (v8 & 0x90) == 0x80 )
          {
            FastAwePages = MiAllocateFastAwePages((__int64)v95, v45, IdealNodeNumberThread, v44, v105);
            v19 = FastAwePages;
            if ( FastAwePages < 0 )
            {
              if ( FastAwePages == -1073741523 )
              {
                v19 = -1073741670;
LABEL_145:
                v17 = v84;
LABEL_146:
                v69 = v87;
                goto LABEL_147;
              }
              v8 &= 0xFFFFFF3F;
              goto LABEL_109;
            }
            v50 = v95;
            PagesForMdl = v95;
            P = v95;
            v45 = v85;
            v49 = v89;
            v44 = v88;
          }
          if ( PagesForMdl )
            goto LABEL_119;
          if ( v49 < 0x10
            || (v8 & 0x10) != 0
            || (PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                                AweInfoPartition,
                                                0LL,
                                                v33 - 4096,
                                                v40,
                                                v49 << 12,
                                                *(_DWORD *)(v45 + 80),
                                                IdealNodeNumberThread,
                                                v44 | 0x42,
                                                v103,
                                                (__int64)v50),
                (P = PagesForMdl) != 0LL) )
          {
            if ( PagesForMdl )
              goto LABEL_119;
            UserPhysicalRanges = (void *)MiAllocatePagesForMdl(
                                           AweInfoPartition,
                                           0LL,
                                           v33 - 4096,
                                           v109,
                                           v89 << 12,
                                           *(_DWORD *)(v85 + 80),
                                           IdealNodeNumberThread,
                                           v88,
                                           v103,
                                           (__int64)v95);
LABEL_118:
            P = UserPhysicalRanges;
            PagesForMdl = (unsigned int *)UserPhysicalRanges;
            if ( UserPhysicalRanges )
            {
LABEL_119:
              v53 = PagesForMdl + 12;
              v100 = PagesForMdl + 12;
              v106 = (unsigned __int64)PagesForMdl[10] >> 12;
              v54 = 0LL;
              v55 = &PagesForMdl[2 * v106 + 12];
              v95 = v55;
              do
              {
                v56 = *(_QWORD *)v53;
                if ( *(_QWORD *)v53 <= v54 )
                  v56 = v54;
                v54 = v56;
                v53 += 2;
              }
              while ( v53 != v55 );
              v89 = v56 / v97;
              while ( 1 )
              {
                if ( !v94 )
                {
                  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v84);
                  if ( (v84[1].DirectoryTableBase & 0x2000000000LL) != 0 )
                    break;
                }
                v57 = MiLockAwePagesShared(v85, (__int64)CurrentThread);
                if ( v89 < *(_QWORD *)(v85 + 24) )
                {
                  v59 = *(_QWORD *)(v85 + 32);
                  v60 = v100;
                  v61 = v95;
                  do
                  {
                    _InterlockedOr(
                      (volatile signed __int32 *)(v59 + 4 * ((*(_QWORD *)v60 / v97) >> 5)),
                      1 << ((*(_QWORD *)v60 / v97) & 0x1F));
                    v60 = v100 + 2;
                    v100 = v60;
                  }
                  while ( v60 != v61 );
                  MiUnlockAweVadsShared((__int64)CurrentThread, v57);
                  v84 = (_KPROCESS *)Object;
                  if ( !v94 )
                    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
                  v62 = P;
                  *(_QWORD *)P = v101;
                  v101 = v62;
                  v107 = v62;
                  v63 = v97 * v106;
                  v89 = v97 * v106;
                  if ( !v102 )
                  {
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 17832), v63);
                    v84 = (_KPROCESS *)Object;
                    v64 = MiGetProcessPartition((__int64)Process);
                    if ( v64 != v66 )
                    {
                      v67 = 4;
                      if ( v65 != 1 )
                        v67 = 2;
                      CrossPartitionCharges = MiGetCrossPartitionCharges(v66, v67, 1, v63);
                      v63 = v89;
                      v19 = CrossPartitionCharges;
                    }
                  }
                  v87 += v63;
                  v47 = v98;
                  v93 = v98;
                  goto LABEL_142;
                }
                v58 = CurrentThread;
                MiUnlockAweVadsShared((__int64)CurrentThread, v57);
                if ( !v94 )
                  UNLOCK_ADDRESS_SPACE_SHARED((__int64)v58, (__int64)v84);
                v19 = MiResizeAweBitMap(v85);
                if ( v19 < 0 && v89 >= *(_QWORD *)(v85 + 24) )
                {
                  v73 = P;
                  MiFreeAwePagesFromMdl(v85, (ULONG_PTR)P);
                  if ( v73 != v114 )
                    ExFreePoolWithTag(v73, 0);
                  goto LABEL_145;
                }
                v19 = 0;
              }
              v17 = v84;
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v84);
              v72 = P;
              MiFreeAwePagesFromMdl(v85, (ULONG_PTR)P);
              if ( v72 != v114 )
                ExFreePoolWithTag(v72, 0);
              v19 = -1073741558;
              goto LABEL_146;
            }
            v74 = v19;
            v69 = v87;
            if ( !v87 )
              v74 = -1073741670;
            v19 = v74;
            v17 = v84;
LABEL_147:
            if ( (v8 & 1) != 0 )
            {
              KiUnstackDetachProcess(&v113);
              LOBYTE(v8) = v8 & 0xFE;
            }
            if ( v19 < 0 )
            {
              v71 = v92;
            }
            else
            {
              v70 = v69;
              v71 = v92;
              *v110 = v70 / v92;
            }
            v75 = v101;
            P = v101;
            v76 = Address;
            v77 = v97;
            while ( v75 )
            {
              v100 = (unsigned int *)(v75 + 6);
              v78 = (unsigned __int64)*((unsigned int *)v75 + 10) >> 12;
              v106 = v78;
              v79 = 0LL;
              v111 = 0LL;
              while ( v79 < v78 )
              {
                *v76++ = v75[v79 + 6];
                Address = v76;
                v79 += v71 / v77;
                v111 = v79;
              }
              v75 = (_QWORD *)*v75;
              P = v75;
            }
            v80 = v93;
            for ( i = v101; ; i = v82 )
            {
              P = i;
              if ( !i )
                break;
              v82 = (_QWORD *)*i;
              if ( i != v114 )
                ExFreePoolWithTag(i, 0);
            }
            v13 = v80 - v87;
            v98 = v13;
LABEL_173:
            if ( v13 )
            {
              if ( (v8 & 2) != 0 )
              {
                LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v17);
                MiReturnProcessCommitment((__int64)v17, v13);
                UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v17);
              }
              if ( (v8 & 4) != 0 )
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)&v17[1].Spare2[39], -(__int64)v13);
                v17 = (_KPROCESS *)Object;
              }
            }
            if ( (v8 & 1) != 0 )
              KiUnstackDetachProcess(&v113);
            if ( (v8 & 8) == 0 )
            {
              v83 = (void *)v94;
              if ( !v94 )
                v83 = v17;
              ObfDereferenceObjectWithTag(v83, 0x68506D4Du);
            }
            return v19;
          }
          v8 |= 0x10u;
LABEL_109:
          v47 = v93;
LABEL_142:
          if ( v87 == v47 )
            goto LABEL_145;
          v45 = v85;
          v44 = v88;
        }
      }
      v8 = 8;
    }
    v17 = Process;
    Object = Process;
    v84 = Process;
    goto LABEL_34;
  }
  return result;
}
