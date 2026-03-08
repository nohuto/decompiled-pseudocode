/*
 * XREFs of ObpCreateHandle @ 0x1407C0130
 * Callers:
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x1407C95D0 (NtOpenProcessTokenEx.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140204F00 (PsGetCurrentThreadProcessId.c)
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ObReferenceObjectExWithTag @ 0x1402CBB20 (ObReferenceObjectExWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SeComputeCreatorDeniedRights @ 0x140311EB0 (SeComputeCreatorDeniedRights.c)
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 *     ObDereferenceObjectExWithTag @ 0x140344234 (ObDereferenceObjectExWithTag.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14035A830 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x140412A90 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     SePrivilegeObjectAuditAlarm @ 0x140699650 (SePrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140699B5C (SePrivilegedServiceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14070644C (ExpAllocateHandleTableEntrySlow.c)
 *     ObReferenceProcessHandleTable @ 0x140711794 (ObReferenceProcessHandleTable.c)
 *     ObpPreInterceptHandleCreate @ 0x14075F948 (ObpPreInterceptHandleCreate.c)
 *     ObpCreateSymbolicLinkName @ 0x1407612D4 (ObpCreateSymbolicLinkName.c)
 *     SeAppendPrivileges @ 0x140761800 (SeAppendPrivileges.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14076A930 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SePrivilegeCheck @ 0x1407B9710 (SePrivilegeCheck.c)
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpDecrementHandleCount @ 0x1407D8404 (ObpDecrementHandleCount.c)
 *     ExpFreeHandleTableEntry @ 0x1407D8838 (ExpFreeHandleTableEntry.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140880604 (ObpReferenceSecurityDescriptorSlow.c)
 *     ObpSetObjectAuditInfo @ 0x1408A0C62 (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x1408A0E28 (ObpPostInterceptHandleCreate.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408A1798 (SepAdtClassifyObjectIntoSubCategory.c)
 *     ObHandleRevocationBlockAddObject @ 0x1409782CC (ObHandleRevocationBlockAddObject.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CA0F4 (SepAdtStagingEvent.c)
 *     EtwpTraceHandle @ 0x1409E3D9C (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x1409F63C0 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1409F6478 (ExpUpdateDebugInfo.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateHandle(
        int a1,
        char *a2,
        signed int a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        __int64 a8,
        int a9,
        PVOID *a10,
        _QWORD *a11)
{
  char v12; // si
  char *v13; // r14
  int v15; // edi
  struct _KPROCESS *v16; // rdx
  unsigned int *v17; // r12
  KPROCESSOR_MODE v18; // r14
  unsigned int v19; // eax
  _QWORD *v20; // rdi
  _DWORD *v21; // rbx
  signed int v22; // eax
  signed __int64 v23; // rdx
  signed __int64 v24; // rbx
  signed __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  PRKPROCESS v28; // r12
  NTSTATUS v29; // edi
  PVOID v30; // rbx
  char *v31; // r12
  __int64 v32; // rdi
  signed __int64 v33; // rdx
  signed __int64 v34; // rbx
  signed __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  int v37; // edi
  int v38; // eax
  int v39; // r14d
  PVOID v40; // rbx
  int v41; // edx
  unsigned __int64 v42; // rcx
  struct _KTHREAD *v43; // rsi
  unsigned int *v44; // r8
  char v45; // al
  unsigned int Number; // r13d
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // r12d
  ULONG_PTR v51; // rbx
  __int64 *v52; // rdi
  __int64 v53; // rax
  int v54; // eax
  void *v55; // r14
  unsigned int *v56; // r12
  int v57; // esi
  __int64 v58; // r13
  unsigned int v59; // ebx
  char v60; // al
  PVOID v61; // rbx
  __int64 v62; // rax
  __int64 v63; // r13
  char v64; // di
  void *v65; // r12
  int v66; // edi
  _DWORD *v67; // r9
  __int64 v68; // r13
  unsigned __int64 v69; // rdi
  PVOID v70; // r10
  int v71; // edx
  _QWORD *v72; // rbx
  signed __int64 v74; // rax
  signed __int64 v75; // rax
  signed __int64 v76; // rtt
  unsigned __int8 *v77; // rdi
  unsigned __int64 v78; // rcx
  ULONG_PTR v79; // r12
  signed __int64 v80; // rdx
  signed __int64 v81; // rax
  signed __int64 v82; // rbx
  signed __int64 v83; // rdx
  unsigned __int64 Pool2; // rbx
  GENERIC_MAPPING *v85; // r12
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v87; // r12
  ACCESS_MASK v88; // eax
  __int64 v89; // rcx
  signed __int64 v90; // rax
  signed __int64 v91; // rtt
  unsigned int v92; // r12d
  unsigned int v93; // eax
  volatile signed __int64 *v94; // rdi
  __int64 v95; // rbx
  char HandleTableEntrySlow; // r12
  signed __int64 v97; // rax
  signed __int64 v98; // rtt
  signed __int64 v99; // rax
  unsigned __int64 v100; // r15
  struct _KTHREAD *v101; // rax
  struct _KTHREAD *v102; // rax
  struct _ERESOURCE *v103; // rcx
  __int64 (__fastcall *v104)(PVOID, __int64, int *, unsigned __int64, unsigned int *, unsigned __int8 *, int, GENERIC_MAPPING *, KPROCESSOR_MODE); // rax
  struct _KTHREAD *v105; // rax
  struct _KTHREAD *v106; // rax
  _DWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // r8
  unsigned __int8 v110; // di
  void *v111; // r8
  __int64 v112; // r8
  void *v113; // rdi
  unsigned __int64 CurrentThreadProcessId; // rdi
  int *v115; // rax
  unsigned __int16 v116; // r13
  char v117; // al
  __int64 v118; // rdx
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F8h]
  int GenericMapping; // [rsp+30h] [rbp-F0h]
  PGENERIC_MAPPING GenericMappinga; // [rsp+30h] [rbp-F0h]
  KPROCESSOR_MODE AccessMode; // [rsp+38h] [rbp-E8h]
  int AccessModea; // [rsp+38h] [rbp-E8h]
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int GrantedAccessa; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  __int64 v127; // [rsp+88h] [rbp-98h]
  char v128; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v129; // [rsp+A1h] [rbp-7Fh]
  int v130; // [rsp+A4h] [rbp-7Ch] BYREF
  char v131; // [rsp+A8h] [rbp-78h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  unsigned int v133; // [rsp+B8h] [rbp-68h]
  NTSTATUS v134; // [rsp+BCh] [rbp-64h] BYREF
  unsigned int v135; // [rsp+C0h] [rbp-60h] BYREF
  unsigned __int8 *v136; // [rsp+C8h] [rbp-58h]
  __int64 v137; // [rsp+D0h] [rbp-50h]
  unsigned int *v138; // [rsp+D8h] [rbp-48h]
  int v139; // [rsp+E0h] [rbp-40h] BYREF
  int v140; // [rsp+E4h] [rbp-3Ch]
  PRKPROCESS PROCESS; // [rsp+E8h] [rbp-38h]
  PPRIVILEGE_SET v142; // [rsp+F0h] [rbp-30h] BYREF
  PVOID v143; // [rsp+F8h] [rbp-28h] BYREF
  HANDLE TargetHandle; // [rsp+100h] [rbp-20h] BYREF
  PVOID P; // [rsp+108h] [rbp-18h] BYREF
  ACCESS_MASK v146; // [rsp+110h] [rbp-10h] BYREF
  int v147; // [rsp+114h] [rbp-Ch] BYREF
  int v148; // [rsp+118h] [rbp-8h]
  _DWORD v149[2]; // [rsp+120h] [rbp+0h] BYREF
  void *v150; // [rsp+128h] [rbp+8h] BYREF
  int v151[2]; // [rsp+130h] [rbp+10h] BYREF
  __int64 v152; // [rsp+138h] [rbp+18h]
  __int64 v153; // [rsp+140h] [rbp+20h]
  __int128 v154; // [rsp+148h] [rbp+28h] BYREF
  unsigned int v155; // [rsp+158h] [rbp+38h]
  unsigned __int64 v156; // [rsp+160h] [rbp+40h]
  PVOID v157; // [rsp+168h] [rbp+48h] BYREF
  _QWORD *v158; // [rsp+170h] [rbp+50h]
  PVOID *v159; // [rsp+178h] [rbp+58h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+180h] [rbp+60h] BYREF

  v12 = a6;
  v159 = a10;
  v13 = a2;
  v158 = a11;
  v15 = a1;
  v130 = 0;
  v149[0] = 0;
  v149[1] = a9;
  Object = a2;
  v140 = a1;
  v143 = 0LL;
  v128 = 0;
  P = 0LL;
  v131 = 0;
  v154 = 0LL;
  v16 = KeGetCurrentThread()->ApcState.Process;
  PROCESS = v16;
  if ( (a6 & 0x200) != 0 )
  {
    v17 = (unsigned int *)ObpKernelHandleTable;
    PROCESS = PsInitialSystemProcess;
    goto LABEL_4;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v17 = (unsigned int *)KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[28];
LABEL_4:
    v138 = v17;
    goto LABEL_5;
  }
  v138 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v16);
  v17 = v138;
  if ( !v138 )
    return (unsigned int)-1073741558;
  v131 = 1;
LABEL_5:
  v129 = v17 == (unsigned int *)ObpKernelHandleTable;
  if ( a4 && (v17 != (unsigned int *)ObpKernelHandleTable || *(_DWORD *)(a4 + 24)) )
  {
    v18 = 1;
    v134 = 0;
    if ( (a6 & 0x400) == 0 )
      v18 = a7;
    v19 = v15 - 1;
    v20 = Object;
    if ( v19 > 1 )
    {
      v21 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
      v22 = *(_DWORD *)(a4 + 16);
      if ( (v22 & 0x2000000) != 0 )
      {
        v22 = v22 & 0xEDFFFFFF | 0x10000000;
        *(_DWORD *)(a4 + 16) = v22;
      }
      if ( (v22 & 0xF0000000) != 0 )
      {
        if ( v22 < 0 )
          v22 |= v21[19];
        if ( (v22 & 0x40000000) != 0 )
          v22 |= v21[20];
        if ( (v22 & 0x20000000) != 0 )
          v22 |= v21[21];
        if ( (v22 & 0x10000000) != 0 )
          v22 |= v21[22];
        v22 &= 0xFFFFFFFu;
        *(_DWORD *)(a4 + 16) = v22;
      }
      if ( (v22 & 0x1000000) == 0 )
      {
LABEL_14:
        *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 16) = 0;
        *(_DWORD *)(a4 + 20) &= v21[23] | 0x1000000;
        _m_prefetchw(v20 - 1);
        v23 = *(v20 - 1);
        if ( (v23 & 0xF) != 0 )
        {
          do
          {
            v99 = _InterlockedCompareExchange64(v20 - 1, v23 - 1, v23);
            if ( v23 == v99 )
              break;
            v23 = v99;
          }
          while ( (v99 & 0xF) != 0 );
        }
        v24 = v23;
        v25 = v23 & 0xF;
        v26 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (unsigned int)v25 <= 1 && v26 )
          v26 = ObpReferenceSecurityDescriptorSlow(v20 - 6, v25, v26);
        *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                 (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                                                 a4,
                                                 *(_DWORD *)(a4 + 20),
                                                 v26);
        if ( v26 )
        {
          _m_prefetchw(v20 - 1);
          v97 = *(v20 - 1);
          if ( (v26 ^ v97) >= 0xF )
          {
LABEL_220:
            ObDereferenceSecurityDescriptor(v26, 1u);
          }
          else
          {
            while ( 1 )
            {
              v98 = v97;
              v97 = _InterlockedCompareExchange64(v20 - 1, v97 + 1, v97);
              if ( v98 == v97 )
                break;
              if ( (v26 ^ v97) >= 0xF )
                goto LABEL_220;
            }
          }
        }
        goto LABEL_19;
      }
      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      if ( SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)(a4 + 32), v18) )
      {
        *(_DWORD *)(a4 + 16) &= ~0x1000000u;
        *(_DWORD *)(a4 + 20) |= 0x1000000u;
        SeAppendPrivileges((PACCESS_STATE)a4, &RequiredPrivileges);
        goto LABEL_14;
      }
      SePrivilegedServiceAuditAlarm(0, (__int64 *)(a4 + 32), (__int64)&RequiredPrivileges, 0);
      v29 = -1073741727;
LABEL_130:
      v28 = PROCESS;
      goto LABEL_91;
    }
    v77 = (unsigned __int8 *)Object - 48;
    v146 = 0;
    v142 = 0LL;
    v78 = v77[24] ^ (unsigned __int64)BYTE1(v77);
    v135 = 0;
    v139 = 0;
    v79 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v78];
    v137 = v79;
    if ( *(__int64 (__fastcall **)(__int64, int, _DWORD *, void *, __int64, __int64 *, int, __int64))(v79 + 152) == SeDefaultObjectMethod )
    {
      _m_prefetchw(v77 + 40);
      v80 = *((_QWORD *)v77 + 5);
      if ( (v80 & 0xF) != 0 )
      {
        do
        {
          v81 = _InterlockedCompareExchange64((volatile signed __int64 *)v77 + 5, v80 - 1, v80);
          if ( v80 == v81 )
            break;
          v80 = v81;
        }
        while ( (v81 & 0xF) != 0 );
      }
      v82 = v80;
      v83 = v80 & 0xF;
      Pool2 = v82 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (unsigned int)v83 <= 1 && Pool2 )
        Pool2 = ObpReferenceSecurityDescriptorSlow(v77, v83, Pool2);
      LOBYTE(v133) = 0;
      if ( !Pool2 && ((*(_BYTE *)(v79 + 66) & 8) != 0 || (v77[26] & 2) != 0) )
        KeBugCheckEx(0x189u, (ULONG_PTR)v77, v79, 1uLL, 0LL);
      v29 = 0;
      v85 = (GENERIC_MAPPING *)(v79 + 76);
      goto LABEL_113;
    }
    v139 = 447;
    v135 = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)ObpDefaultSecurityDescriptorLength, 1901290063LL);
    if ( Pool2 )
    {
      v104 = *(__int64 (__fastcall **)(PVOID, __int64, int *, unsigned __int64, unsigned int *, unsigned __int8 *, int, GENERIC_MAPPING *, KPROCESSOR_MODE))(v79 + 152);
      v85 = (GENERIC_MAPPING *)(v79 + 76);
      GenericMapping = *(_DWORD *)(v137 + 100);
      v136 = v77 + 40;
      v29 = v104(Object, 1LL, &v139, Pool2, &v135, v77 + 40, GenericMapping, v85, v18);
      if ( v29 == -1073741789 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        ObpDefaultSecurityDescriptorLength = v135;
        v108 = ExAllocatePool2(256LL, v135, 1901290063LL);
        Pool2 = v108;
        if ( !v108 )
        {
          v29 = -1073741670;
          goto LABEL_225;
        }
        LOBYTE(GrantedAccess) = v18;
        v29 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, __int64, unsigned int *, unsigned __int8 *, _DWORD, GENERIC_MAPPING *, int))(v137 + 152))(
                Object,
                1LL,
                &v139,
                v108,
                &v135,
                v136,
                *(_DWORD *)(v137 + 100),
                v85,
                GrantedAccess);
      }
      if ( v29 >= 0 )
      {
        LOBYTE(v133) = 1;
LABEL_113:
        if ( !Pool2 )
        {
          *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
          *(_DWORD *)(a4 + 16) = 0;
          v134 = v29;
LABEL_19:
          v13 = (char *)Object;
          v15 = v140;
          v130 = *(_DWORD *)(a4 + 20);
          goto LABEL_20;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
        if ( *(_QWORD *)(a4 + 32) )
        {
          v106 = KeGetCurrentThread();
          --v106->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
        }
        v87 = SeAccessCheck(
                (PSECURITY_DESCRIPTOR)Pool2,
                (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                1u,
                *(_DWORD *)(a4 + 16),
                *(_DWORD *)(a4 + 20),
                &v142,
                v85,
                v18,
                &v146,
                &v134);
        if ( v142 )
        {
          SeAppendPrivileges((PACCESS_STATE)a4, v142);
          CmSiFreeMemory(v142);
        }
        if ( v87 )
        {
          v88 = v146;
          *(_DWORD *)(a4 + 20) |= v146;
          *(_DWORD *)(a4 + 16) &= ~(v88 | 0x2000000);
        }
        if ( v18 )
        {
          AccessMode = v18;
          v13 = (char *)Object;
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)(v137 + 16),
            Object,
            0LL,
            (PSECURITY_DESCRIPTOR)Pool2,
            (PACCESS_STATE)a4,
            0,
            v87,
            AccessMode,
            0LL,
            (PBOOLEAN)(a4 + 10));
        }
        else
        {
          v13 = (char *)Object;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
        KeLeaveCriticalRegion();
        v89 = *(_QWORD *)(a4 + 32);
        if ( v89 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v89 + 48));
          KeLeaveCriticalRegion();
        }
        if ( (_BYTE)v133 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        else
        {
          _m_prefetchw(v13 - 8);
          v90 = *((_QWORD *)v13 - 1);
          if ( (Pool2 ^ v90) >= 0xF )
          {
LABEL_226:
            ObDereferenceSecurityDescriptor(Pool2, 1u);
          }
          else
          {
            while ( 1 )
            {
              v91 = v90;
              v90 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 - 1, v90 + 1, v90);
              if ( v91 == v90 )
                break;
              if ( (Pool2 ^ v90) >= 0xF )
                goto LABEL_226;
            }
          }
        }
        if ( v87 )
          goto LABEL_19;
        v29 = v134;
        goto LABEL_129;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      v29 = -1073741670;
    }
LABEL_225:
    v13 = (char *)Object;
    v134 = v29;
LABEL_129:
    if ( v29 >= 0 )
    {
      v15 = v140;
      goto LABEL_20;
    }
    goto LABEL_130;
  }
  if ( (a3 & 0x2000000) != 0 )
    a3 = a3 & 0xEDFFFFFF | 0x10000000;
  if ( (a3 & 0xF0000000) != 0 )
  {
    v107 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8)];
    if ( a3 < 0 )
      a3 |= v107[19];
    if ( (a3 & 0x40000000) != 0 )
      a3 |= v107[20];
    if ( (a3 & 0x20000000) != 0 )
      a3 |= v107[21];
    if ( (a3 & 0x10000000) != 0 )
      a3 |= v107[22];
    a3 &= 0xFFFFFFFu;
  }
  v130 = a3;
LABEL_20:
  v27 = 0LL;
  v150 = 0LL;
  if ( a8 )
  {
    v27 = *(_QWORD *)(a8 + 32);
    v150 = (void *)v27;
  }
  v28 = PROCESS;
  v29 = ObpIncrementHandleCountEx(v15, (unsigned int)&v130, (_DWORD)PROCESS, (_DWORD)v13, a7, a6, v27);
  if ( v29 < 0 )
    goto LABEL_91;
  if ( a4 )
  {
    if ( a8 )
    {
      v29 = ObpInsertOrLocateNamedObject(v28, v13, (__int64)&v130, a4, a7, (int *)a8, &v143);
      if ( v29 < 0 )
        goto LABEL_91;
      v30 = v143;
      if ( v143 == v13 )
      {
        v30 = 0LL;
        v143 = 0LL;
      }
      else
      {
        v13 = (char *)v143;
        Object = v143;
        v128 = 1;
      }
    }
    else
    {
      v30 = v143;
    }
    if ( *(_BYTE *)(a4 + 10) )
      v12 = a6 | 4;
  }
  else
  {
    v30 = v143;
  }
  v31 = v13 - 48;
  v136 = (unsigned __int8 *)(v13 - 48);
  v156 = (unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8);
  v32 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v13 - 24) ^ v156];
  v137 = v32;
  v130 &= *(_DWORD *)(v32 + 92) | 0x1000000;
  if ( a4 )
  {
    _m_prefetchw(v31 + 40);
    v33 = *((_QWORD *)v31 + 5);
    if ( (v33 & 0xF) != 0 )
    {
      do
      {
        v74 = _InterlockedCompareExchange64((volatile signed __int64 *)v31 + 5, v33 - 1, v33);
        if ( v33 == v74 )
          break;
        v33 = v74;
      }
      while ( (v74 & 0xF) != 0 );
    }
    v34 = v33;
    v35 = v33 & 0xF;
    v36 = v34 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned int)v35 <= 1 && v36 )
      v36 = ObpReferenceSecurityDescriptorSlow(v13 - 48, v35, v36);
    v37 = SeComputeCreatorDeniedRights((PSECURITY_SUBJECT_CONTEXT)(a4 + 32), a4, v130, v36);
    if ( v36 )
    {
      _m_prefetchw(v31 + 40);
      v75 = *((_QWORD *)v31 + 5);
      if ( (v36 ^ v75) >= 0xF )
      {
LABEL_227:
        ObDereferenceSecurityDescriptor(v36, 1u);
      }
      else
      {
        while ( 1 )
        {
          v76 = v75;
          v75 = _InterlockedCompareExchange64((volatile signed __int64 *)v31 + 5, v75 + 1, v75);
          if ( v76 == v75 )
            break;
          if ( (v36 ^ v75) >= 0xF )
            goto LABEL_227;
        }
      }
    }
    v30 = v143;
    v38 = ~v37 & v130;
    v32 = v137;
    v130 = v38;
    *(_DWORD *)(a4 + 20) = v38;
    v149[0] = *(_DWORD *)(*(_QWORD *)(a4 + 72) + 28LL);
  }
  v39 = a5;
  if ( a5 )
    ObReferenceObjectExWithTag((ULONG_PTR)Object, a5);
  if ( v30 )
    ObfDereferenceObject(v30);
  v40 = Object;
  if ( a8 && (POBJECT_TYPE)v32 == ObpSymbolicLinkObjectType && !v128 )
    ObpCreateSymbolicLinkName((__int64)Object);
  *((_QWORD *)&v154 + 1) = &v154;
  *(_QWORD *)&v154 = &v154;
  if ( (*(_BYTE *)(v32 + 66) & 0x40) == 0 || *(_QWORD *)(v32 + 200) == v32 + 200 )
    goto LABEL_41;
  v147 = v130;
  v29 = ObpPreInterceptHandleCreate((__int64)v40, v129, &v147, &v154);
  if ( v29 >= 0 )
  {
    if ( !v129 )
    {
      v130 = v147;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v147;
    }
LABEL_41:
    v41 = v130 & 0x1FFFFFF;
    v153 = v130 & 0x1FFFFFF;
    v42 = ((_QWORD)v31 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v12 & 7) << 17);
    v152 = v42;
    if ( (v12 & 8) != 0 )
      v41 |= 0x2000000u;
    v43 = KeGetCurrentThread();
    v44 = v138;
    LODWORD(v153) = v41;
    v152 = v42 | 1;
    --v43->KernelApcDisable;
    v45 = *((_BYTE *)v44 + 44);
    if ( (v45 & 4) == 0 )
    {
      if ( (v45 & 1) != 0 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v47 = ExpFreeListCount;
      v148 = ExpFreeListCount;
      while ( 2 )
      {
        v48 = *v44;
        v49 = 0;
        v133 = 0;
        v50 = Number;
        v155 = v48;
        do
        {
          v51 = (ULONG_PTR)&v44[16 * v50 + 16];
          if ( *(_QWORD *)(v51 + 8) )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&v44[16 * v50 + 16], 0LL);
            v52 = *(__int64 **)(v51 + 8);
            if ( v52 )
            {
              v53 = v52[1];
              *(_QWORD *)(v51 + 8) = v53;
              if ( !v53 )
                *(_QWORD *)(v51 + 16) = 0LL;
              v54 = ++*(_DWORD *)(v51 + 24);
              if ( v54 > *(_DWORD *)(v51 + 28) )
                *(_DWORD *)(v51 + 28) = v54;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v51);
            KeAbPostRelease(v51);
            if ( v52 )
            {
              v55 = (void *)(*(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFF000uLL) + 8)
                           + 4 * ((__int64)((__int64)v52 - ((unsigned __int64)v52 & 0xFFFFFFFFFFFFF000uLL)) >> 4));
              if ( !v149[0] && !a9 )
              {
                v56 = v138;
                goto LABEL_60;
              }
              v56 = v138;
              if ( (unsigned int)ExpSetHandleExtraInfo(v138, v55, v149) )
              {
                ExpFreeHandleTableEntry(v56, v55, v52);
                KeLeaveCriticalRegionThread((__int64)v43);
LABEL_234:
                v39 = a5;
                goto LABEL_235;
              }
LABEL_60:
              if ( *((_QWORD *)v56 + 12) )
                ExpUpdateDebugInfo(v56, v43, v55, 1LL);
              v52[1] = v153;
              *v52 = v152;
              KeLeaveCriticalRegionThread((__int64)v43);
              if ( !v55 )
                goto LABEL_234;
              v57 = a5;
              v58 = (__int64)v136;
              if ( a5 && ObpTraceFlags )
              {
                ObpPushStackInfo((__int64)v136, 0, 1u, 0x746C6644u);
                ObpPushStackInfo(v58, 1, 1u, 0x6E48624Fu);
              }
              v59 = (unsigned int)v55;
              if ( a4 )
              {
                v60 = *(_BYTE *)(v58 + 26);
                P = 0LL;
                v61 = 0LL;
                if ( (v60 & 0x20) == 0 || (v62 = ObpInfoMaskToOffset[v60 & 0x3F], v58 == v62) )
                {
                  if ( v150 )
                    v61 = v150;
                  goto LABEL_69;
                }
                v65 = *(void **)(v58 - v62);
                if ( v65 )
                {
                  v63 = *(_QWORD *)(a4 + 72);
                  v64 = 0;
                  *(_QWORD *)v151 = v55;
                  TargetHandle = 0LL;
                  v142 = 0LL;
                }
                else
                {
                  if ( v150 )
                  {
                    ObpSetObjectAuditInfo(v58, &v150, 0LL);
                    v63 = *(_QWORD *)(a4 + 72);
                    TargetHandle = 0LL;
                    v64 = 0;
                    v142 = 0LL;
                    *(_QWORD *)v151 = v55;
                    goto LABEL_70;
                  }
                  if ( (*(_BYTE *)(v58 + 24) ^ (unsigned __int8)(ObHeaderCookie ^ v156)) != *((_BYTE *)IoFileObjectType
                                                                                            + 40)
                    || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
                  {
                    v109 = *(_QWORD *)(a4 + 72);
                    v110 = 0;
                    if ( v109 && (v111 = *(void **)(v109 + 56)) != 0LL )
                      v110 = 1;
                    else
                      v111 = 0LL;
                    if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 0x20u, v111, &P) >= 0 )
                    {
                      v61 = P;
                      ObpSetObjectAuditInfo(v58, &P, v110);
                    }
                  }
LABEL_69:
                  v63 = *(_QWORD *)(a4 + 72);
                  v64 = 0;
                  *(_QWORD *)v151 = v55;
                  v65 = v61;
                  v142 = 0LL;
                  TargetHandle = 0LL;
                  if ( !v61 )
                  {
LABEL_70:
                    v65 = *(void **)(v63 + 56);
                    if ( !v65 )
                      v65 = *(void **)(a4 + 64);
                  }
                }
                v59 = (unsigned int)v55;
                if ( *(_BYTE *)(a4 + 9) )
                {
                  if ( *(_BYTE *)(a4 + 124) )
                  {
                    SepAdtPrivilegeObjectAuditAlarm(
                      &SeSubsystemName,
                      (unsigned __int16 *)(a4 + 144),
                      (unsigned __int16 *)(a4 + 128),
                      (__int64)v55,
                      *(_QWORD *)(a4 + 32),
                      *(_QWORD *)(a4 + 48),
                      *(_QWORD *)(a4 + 56),
                      *(_DWORD *)(a4 + 20),
                      *(int **)v63,
                      1);
                    goto LABEL_74;
                  }
                }
                else if ( !*(_BYTE *)(v63 + 216) )
                {
                  goto LABEL_74;
                }
                if ( ZwDuplicateObject(
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       v55,
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       &TargetHandle,
                       0,
                       0x200u,
                       2u) < 0 )
                {
                  v113 = v142;
                }
                else
                {
                  v157 = 0LL;
                  ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v157, 0LL);
                  v113 = v157;
                }
                LOBYTE(v112) = 1;
                LOWORD(v133) = SepAdtClassifyObjectIntoSubCategory(v113, a4 + 144, v112, 0LL);
                if ( v113 )
                  ObfDereferenceObject(v113);
                if ( TargetHandle )
                {
                  ZwClose(TargetHandle);
                  TargetHandle = 0LL;
                }
                v127 = v63 + 32;
                CurrentThreadProcessId = PsGetCurrentThreadProcessId();
                v115 = *(int **)v63;
                v116 = v133;
                v117 = SepAdtOpenObjectAuditAlarm(
                         (unsigned __int16)v133,
                         (int)&SeSubsystemName,
                         (int)v151,
                         (int)a4 + 144,
                         a4 + 128,
                         v65,
                         *(_QWORD *)(a4 + 32),
                         *(_QWORD *)(a4 + 48),
                         *(_DWORD *)(a4 + 24),
                         *(_DWORD *)(a4 + 20),
                         (__int64)v115,
                         1,
                         CurrentThreadProcessId,
                         2,
                         0LL,
                         0,
                         0LL,
                         v127,
                         a4);
                LOBYTE(AccessStatus) = 1;
                GrantedAccessa = *(_DWORD *)(a4 + 20);
                AccessModea = *(_DWORD *)(a4 + 24);
                GenericMappinga = *(PGENERIC_MAPPING *)(a4 + 48);
                Privileges = *(PPRIVILEGE_SET **)(a4 + 32);
                LOBYTE(v133) = v117;
                SepAdtStagingEvent(
                  v116,
                  v118,
                  v151,
                  a4 + 144,
                  a4 + 128,
                  Privileges,
                  GenericMappinga,
                  AccessModea,
                  GrantedAccessa,
                  AccessStatus,
                  CurrentThreadProcessId,
                  a4);
                v64 = v133;
                v57 = a5;
LABEL_74:
                *(_BYTE *)(a4 + 10) = v64;
                v66 = v140;
                if ( !v140 )
                {
                  v67 = **(_DWORD ***)(a4 + 72);
                  if ( v67 )
                  {
                    if ( *v67 )
                      SePrivilegeObjectAuditAlarm(
                        (int)v55,
                        (__int64 *)(a4 + 32),
                        *(_DWORD *)(a4 + 20),
                        (__int64)v67,
                        1,
                        KeGetCurrentThread()->PreviousMode);
                  }
                }
                if ( P )
                  ExFreePoolWithTag(P, 0);
                v68 = v137;
                if ( !v66 && ((POBJECT_TYPE *)v137 == CmKeyObjectType || (POBJECT_TYPE *)v137 == IoFileObjectType) )
                {
                  v69 = *(_QWORD *)(a4 + 32);
                  if ( v69 )
                  {
                    v100 = *(_QWORD *)(a4 + 48);
                    v101 = KeGetCurrentThread();
                    --v101->KernelApcDisable;
                    if ( v100 >= v69 )
                    {
                      ExAcquireResourceSharedLite(*(PERESOURCE *)(v69 + 48), 1u);
                      v105 = KeGetCurrentThread();
                      --v105->KernelApcDisable;
                      v103 = *(struct _ERESOURCE **)(v100 + 48);
                    }
                    else
                    {
                      ExAcquireResourceSharedLite(*(PERESOURCE *)(v100 + 48), 1u);
                      v102 = KeGetCurrentThread();
                      --v102->KernelApcDisable;
                      v103 = *(struct _ERESOURCE **)(v69 + 48);
                    }
                    ExAcquireResourceSharedLite(v103, 1u);
                    if ( (*(_DWORD *)(v69 + 200) & 0x4000) != 0
                      && *(int *)(v69 + 196) >= 2
                      && !RtlEqualSid(**(PSID **)(v100 + 152), **(PSID **)(v69 + 152))
                      && OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)v136)
                      && SepSidInTokenSidHash(
                           (_DWORD *)(v100 + 808),
                           0LL,
                           (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid,
                           0,
                           1,
                           0) )
                    {
                      ObHandleRevocationBlockAddObject(*(_QWORD *)(v69 + 216) + 128LL, Object);
                    }
                    ExReleaseResourceLite(*(PERESOURCE *)(v100 + 48));
                    KeLeaveCriticalRegion();
                    ExReleaseResourceLite(*(PERESOURCE *)(v69 + 48));
                    KeLeaveCriticalRegion();
                  }
                }
              }
              else
              {
                v68 = v137;
              }
              v70 = Object;
              if ( v57 && v159 )
                *v159 = Object;
              v71 = v129;
              v29 = v128 != 0 ? 0x40000000 : 0;
              if ( v129 )
                v55 = (void *)(v59 | 0xFFFFFFFF80000000uLL);
              v72 = v158;
              v28 = PROCESS;
              *v158 = v55;
              goto LABEL_88;
            }
            v49 = v133;
            v47 = v148;
            v44 = v138;
          }
          v92 = v50 + 1;
          ++v49;
          v93 = 0;
          v133 = v49;
          if ( v92 != v47 )
            v93 = v92;
          v50 = v93;
        }
        while ( v49 < v47 );
        v94 = (volatile signed __int64 *)(v44 + 14);
        v95 = (__int64)&v44[16 * Number + 16];
        HandleTableEntrySlow = 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v44 + 14), 0LL);
        if ( v155 == *v138 )
          HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v138, v95);
        if ( (_InterlockedExchangeAdd64(v94, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v94);
        KeAbPostRelease((ULONG_PTR)v94);
        if ( HandleTableEntrySlow )
        {
          v47 = v148;
          v44 = v138;
          continue;
        }
        break;
      }
    }
    KeLeaveCriticalRegionThread((__int64)v43);
LABEL_235:
    v28 = PROCESS;
    ObpDecrementHandleCount(PROCESS);
    if ( v39 )
      ObDereferenceObjectExWithTag((ULONG_PTR)Object, v39);
    v68 = v137;
    v29 = -1073741670;
    v70 = Object;
    v71 = v129;
    v72 = v158;
LABEL_88:
    if ( (__int128 *)v154 != &v154 )
    {
      ObpPostInterceptHandleCreate((_DWORD)v70, v71, v29, v130, (__int64)&v154);
      v70 = Object;
    }
    if ( (xmmword_140D1EAD0 & 0x40) != 0 && v29 >= 0 )
      EtwpTraceHandle(4384LL, *v72, v70, v68);
    goto LABEL_91;
  }
  v28 = PROCESS;
  ObpDecrementHandleCount(PROCESS);
  if ( a5 )
    ObDereferenceObjectExWithTag((ULONG_PTR)v40, a5);
LABEL_91:
  if ( v131 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v28[1].ProfileListHead.Blink);
  return (unsigned int)v29;
}
