/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x1407B507C
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1407B4B60 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x1407B4EDC (PopFxRegisterDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037E424 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IoInitializeRemoveLockEx @ 0x14037EEF0 (IoInitializeRemoveLockEx.c)
 *     PopPlRegisterComponent @ 0x1403BE6A8 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BE7B8 (PopPlRegisterDevice.c)
 *     PopFxRegisterDeviceWithPep @ 0x1403BE8CC (PopFxRegisterDeviceWithPep.c)
 *     PopFxActivateComponent @ 0x1403BEC70 (PopFxActivateComponent.c)
 *     PopFxCreateDeviceCommon @ 0x1403BED38 (PopFxCreateDeviceCommon.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056C56C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxVerifyDependencies @ 0x1408E5BB4 (PopFxVerifyDependencies.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        _QWORD *a9)
{
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  __int64 *v12; // rsi
  int v13; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v15; // edi
  unsigned int i; // r9d
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // r8d
  __int64 v23; // r10
  __int64 v24; // r12
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  size_t v29; // r15
  size_t v30; // rbx
  int AcpiDeviceByUniqueId; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  char *v34; // rdi
  int v36; // eax
  char *v37; // r15
  _DWORD *v38; // rbx
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  size_t v44; // r8
  char *v45; // rax
  char *v46; // r13
  int v47; // r12d
  char *v48; // r8
  char *v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r10d
  char *v52; // rax
  _OWORD *v53; // rbx
  char *v54; // rax
  char *v55; // rax
  size_t v56; // r11
  _QWORD *v57; // rdx
  __int64 v58; // r9
  __int128 v59; // xmm0
  __int64 *v60; // rdx
  char *v61; // r10
  int v62; // eax
  int v63; // eax
  char *v64; // r9
  unsigned int v65; // r8d
  __int64 v66; // rcx
  unsigned int *v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r11
  size_t v70; // r8
  unsigned int v71; // ecx
  size_t v72; // r9
  __int64 v73; // rax
  __int64 v74; // r10
  __int64 v75; // rax
  char *v76; // rcx
  _QWORD *v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // ebx
  _QWORD *v80; // r13
  __int64 v81; // rsi
  unsigned int v82; // r9d
  __int64 v83; // r10
  _QWORD *v84; // r14
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // r13
  PIRP Irp; // rax
  PVOID v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rdi
  _DWORD *v93; // rbx
  int v94; // [rsp+38h] [rbp-C9h]
  __int64 *v95; // [rsp+38h] [rbp-C9h]
  unsigned int v96; // [rsp+38h] [rbp-C9h]
  PVOID v97; // [rsp+40h] [rbp-C1h] BYREF
  __int64 v98; // [rsp+48h] [rbp-B9h]
  unsigned int *v99; // [rsp+50h] [rbp-B1h]
  __int64 v100; // [rsp+58h] [rbp-A9h]
  __int64 v101; // [rsp+60h] [rbp-A1h]
  volatile signed __int32 *v102; // [rsp+68h] [rbp-99h] BYREF
  _QWORD *v103; // [rsp+70h] [rbp-91h]
  char *v104; // [rsp+78h] [rbp-89h]
  _QWORD *v105; // [rsp+80h] [rbp-81h]
  PVOID v106; // [rsp+88h] [rbp-79h]
  PVOID P; // [rsp+90h] [rbp-71h]
  __int64 v108; // [rsp+98h] [rbp-69h]
  __int64 v109; // [rsp+A0h] [rbp-61h]
  signed __int32 v110; // [rsp+A8h] [rbp-59h]
  int v111; // [rsp+ACh] [rbp-55h]
  size_t v112; // [rsp+B0h] [rbp-51h]
  size_t Size; // [rsp+B8h] [rbp-49h]
  char *v114; // [rsp+C0h] [rbp-41h]
  char *v115; // [rsp+C8h] [rbp-39h]
  size_t v116; // [rsp+D0h] [rbp-31h]
  __int64 v117; // [rsp+D8h] [rbp-29h]
  size_t v118; // [rsp+E0h] [rbp-21h]
  __int64 v119; // [rsp+E8h] [rbp-19h]
  __int64 v120; // [rsp+F0h] [rbp-11h]
  char *v121; // [rsp+F8h] [rbp-9h]
  __int64 v122; // [rsp+100h] [rbp-1h]

  v9 = a5;
  v10 = 0;
  v102 = 0LL;
  v97 = 0LL;
  v12 = 0LL;
  if ( !a5 )
    return (unsigned int)-1073741811;
  v122 = a5;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v94 = 0;
  v15 = 0;
  memset(PoolWithTag, 0, 12LL * a5);
  for ( i = 0; i < a5; ++i )
  {
    v17 = a4 + 56LL * i;
    v18 = *(_DWORD *)(v17 + 28);
    if ( !v18
      || v18 > 1 && (!*(_QWORD *)a3 || !*((_QWORD *)a3 + 1) || !*((_QWORD *)a3 + 2) || *(_DWORD *)(v17 + 24) >= v18) )
    {
      goto LABEL_26;
    }
    v19 = v18 + v15;
    if ( v18 + v15 < v15 )
      goto LABEL_26;
    v20 = *(_DWORD *)(v17 + 40);
    v15 = v19;
    if ( v20 )
    {
      if ( v20 < a5 )
      {
        v21 = v20 + v10;
        if ( v20 + v10 >= v10 )
        {
          v10 += v20;
          v94 = v21;
          v22 = 0;
          while ( 1 )
          {
            v23 = *(unsigned int *)(*(_QWORD *)(v17 + 48) + 4LL * v22);
            if ( (unsigned int)v23 >= a5 )
              break;
            ++v22;
            ++*((_DWORD *)P + 3 * v23 + 2);
            if ( v22 >= *(_DWORD *)(v17 + 40) )
              goto LABEL_19;
          }
        }
      }
LABEL_26:
      v13 = -1073741811;
      goto LABEL_30;
    }
LABEL_19:
    ;
  }
  v100 = 8LL * a5;
  v24 = 448LL * a5;
  v98 = 0LL;
  v99 = 0LL;
  v25 = 24LL * v15;
  v26 = v25 + v24;
  v27 = v25 + v24 + 256;
  if ( a7 <= 0 )
  {
    v27 = v25 + v24;
    v26 = 0LL;
  }
  v120 = v26;
  if ( v10 )
  {
    v98 = v27;
    v28 = 8LL * v10;
    v99 = (unsigned int *)(v28 + v27);
    v27 += v28 + v28;
  }
  v111 = a5 * PopFxRuntimeLogNumberEntries;
  v29 = v27 + 24LL * a5 * PopFxRuntimeLogNumberEntries;
  Size = v29;
  v109 = (int)(8 * a5) + 16LL;
  v108 = v109 + 40LL * a5;
  v30 = v25 + v108;
  v112 = v25 + v108;
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (__int64 **)&v102);
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    v97 = (PVOID)v102;
    _InterlockedOr(v102 + 58, 1u);
    v34 = (char *)v97;
    goto LABEL_35;
  }
  if ( AcpiDeviceByUniqueId == -1073741738 )
  {
    v13 = -1073741661;
LABEL_29:
    v12 = (__int64 *)v102;
    goto LABEL_30;
  }
  v36 = PopFxCreateDeviceCommon((__int64)a2, v32, v33, 0, &v97);
  v34 = (char *)v97;
  v13 = v36;
  if ( !v97 )
    goto LABEL_29;
  v30 = v112;
LABEL_35:
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v34 + 240), 0x4D584650u, 0, 0, 0x20u);
  v37 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x4D584650u);
  if ( !v37 || (v106 = ExAllocatePoolWithTag(NonPagedPoolNx, v30, 0x4D584650u), (v38 = v106) == 0LL) )
  {
    v13 = -1073741670;
    goto LABEL_82;
  }
  memset(v37, 0, Size);
  v39 = *a3;
  v40 = a3[1];
  *((_DWORD *)v34 + 207) = a5;
  *((_QWORD *)v34 + 104) = v37;
  *((_OWORD *)v34 + 7) = v39;
  v105 = v34 + 832;
  v41 = a3[2];
  *((_OWORD *)v34 + 8) = v40;
  v42 = a3[3];
  *((_OWORD *)v34 + 9) = v41;
  v43 = a3[4];
  *((_OWORD *)v34 + 10) = v42;
  *((_OWORD *)v34 + 11) = v43;
  *((_QWORD *)v34 + 24) = a6;
  *((_QWORD *)v34 + 75) = 0LL;
  v34 = (char *)v97;
  v44 = v112;
  v110 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  *((_DWORD *)v97 + 154) = v110;
  *((_DWORD *)v34 + 153) = 5;
  memset(v38, 0, v44);
  v45 = &v37[v24];
  v46 = &v37[v100];
  v47 = v94;
  v48 = v46;
  v104 = v45;
  v49 = (char *)v38 + v109;
  *(_QWORD *)v38 = a8;
  v50 = 0LL;
  v121 = v49;
  v100 = (__int64)v49;
  v51 = 0;
  v52 = (char *)v38 + v108;
  v38[2] = a5;
  v119 = (__int64)v46;
  v115 = v46;
  v103 = v52;
  LODWORD(v101) = 0;
  v53 = v46 + 48;
  v54 = (char *)v99 + (_QWORD)v37;
  if ( !v94 )
    v54 = 0LL;
  v108 = (__int64)v54;
  v55 = &v37[v98];
  v98 = 0LL;
  if ( !v94 )
    v55 = 0LL;
  v56 = Size - 440;
  v114 = v55;
  v57 = (_QWORD *)(a4 + 32);
  v58 = -48LL - (_QWORD)v37;
  v118 = Size - 440;
  v99 = (unsigned int *)((char *)P + 8);
  v109 = -16LL - (_QWORD)v106;
  v95 = (__int64 *)(a4 + 32);
  v117 = -48LL - (_QWORD)v37;
  while ( 1 )
  {
    *(_QWORD *)(v50 + *v105) = v48;
    if ( (unsigned __int64)v53 + v58 > v56 )
      goto LABEL_60;
    v59 = *((_OWORD *)v57 - 2);
    *((_DWORD *)v53 - 8) = v51;
    *((_QWORD *)v53 + 4) = v34;
    *(_OWORD *)v48 = v59;
    *((_QWORD *)v53 - 1) = PopFxComponentWork;
    *(_QWORD *)v53 = v48;
    *((_QWORD *)v53 - 3) = 0LL;
    KeInitializeEvent((PRKEVENT)((char *)v53 + 56), NotificationEvent, 1u);
    v60 = v95;
    v61 = v104;
    *((_QWORD *)v53 + 10) = 0LL;
    *((_DWORD *)v53 + 27) = *((_DWORD *)v95 - 1);
    *((_QWORD *)v53 + 14) = v61;
    v62 = *((_DWORD *)v95 - 2);
    *((_DWORD *)v53 + 41) = -1;
    *((_DWORD *)v53 + 30) = v62;
    *((_DWORD *)v53 + 42) = v110;
    *((_QWORD *)v53 + 19) = 0LL;
    v63 = *((_DWORD *)v95 + 2);
    if ( v63 )
    {
      v64 = v114;
      v65 = 0;
      *((_QWORD *)v53 + 16) = v114;
      *((_DWORD *)v53 + 31) = v63;
      do
      {
        v66 = v65++;
        *(_DWORD *)v64 = *(_DWORD *)(v95[2] + 4 * v66);
        v64 += 8;
      }
      while ( v65 < *((_DWORD *)v53 + 31) );
      v114 = v64;
    }
    v67 = v99;
    if ( *v99 )
    {
      v68 = v108;
      *((_QWORD *)v53 + 18) = v108;
      v108 = v68 + 8LL * *v67;
    }
    v69 = v100;
    v70 = v112;
    *(_QWORD *)((char *)v106 + v98 + 16) = v100;
    if ( v69 + v109 + 16 > v70 - 40 )
      goto LABEL_60;
    *(_OWORD *)v69 = *((_OWORD *)v95 - 2);
    *(_QWORD *)(v69 + 16) = *(v95 - 2);
    *(_DWORD *)(v69 + 28) = *((_DWORD *)v95 - 1);
    *(_QWORD *)(v69 + 32) = v103;
    *(_DWORD *)(v69 + 24) = *((_DWORD *)v95 - 2);
    v71 = 0;
    v96 = 0;
    if ( *((_DWORD *)v53 + 27) )
    {
      v72 = Size - 24;
      v73 = -16LL - (_QWORD)v37;
      v116 = Size - 24;
      v100 = -16LL - (_QWORD)v37;
      while ( (unsigned __int64)&v61[v73 + 16] <= v72 )
      {
        v74 = *v60;
        v75 = v71;
        v76 = v104;
        *((_DWORD *)v104 + 4) = *(_DWORD *)(*v60 + 24 * v75 + 16);
        *(_QWORD *)v76 = *(_QWORD *)(v74 + 24 * v75);
        *((_QWORD *)v76 + 1) = *(_QWORD *)(v74 + 24 * v75 + 8);
        v104 = v76 + 24;
        if ( (unsigned __int64)v103 + v109 + 16 > v70 - 24 )
          break;
        v77 = v103;
        *((_DWORD *)v103 + 4) = *(_DWORD *)(v74 + 24 * v75 + 16);
        *v77 = *(_QWORD *)(v74 + 24 * v75);
        v78 = *(_QWORD *)(v74 + 24 * v75 + 8);
        v72 = v116;
        v61 = v104;
        v77[1] = v78;
        v73 = v100;
        v103 = v77 + 3;
        v71 = v96 + 1;
        v96 = v71;
        if ( v71 >= *((_DWORD *)v53 + 27) )
        {
          v67 = v99;
          goto LABEL_58;
        }
      }
      goto LABEL_60;
    }
LABEL_58:
    v48 = v115 + 440;
    v51 = v101 + 1;
    v50 = v98 + 8;
    v115 += 440;
    LODWORD(v101) = v51;
    v57 = v60 + 7;
    v100 = v69 + 40;
    v98 += 8LL;
    v53 = (_OWORD *)((char *)v53 + 440);
    v95 = v57;
    v99 = v67 + 3;
    if ( v51 >= a5 )
      break;
    v58 = v117;
    v56 = v118;
  }
  *((_DWORD *)v34 + 210) = v111;
  *((_QWORD *)v34 + 106) = &v37[v27];
  if ( v47 )
  {
    v13 = PopFxVerifyDependencies(P, v34, a5);
    if ( v13 < 0 )
      goto LABEL_81;
  }
  v79 = 0;
  v80 = v105;
  v81 = 0LL;
  do
  {
    v82 = 0;
    v83 = *(_QWORD *)(v81 + *v80);
    if ( *(_DWORD *)(v83 + 172) )
    {
      v84 = v105;
      do
      {
        v85 = *(_QWORD *)(*v84 + 8LL * *(unsigned int *)(*(_QWORD *)(v83 + 176) + 8LL * v82));
        v86 = *(unsigned int *)(v85 + 188);
        *(_DWORD *)(*(_QWORD *)(v85 + 192) + 8 * v86) = v79;
        *(_DWORD *)(*(_QWORD *)(v85 + 192) + 8 * v86 + 4) = v82++;
        ++*(_DWORD *)(v85 + 188);
      }
      while ( v82 < *(_DWORD *)(v83 + 172) );
      v9 = a5;
      v80 = v105;
    }
    PopFxActivateComponent((ULONG_PTR)v34, v83, 0, 1);
    ++v79;
    v81 += 8LL;
  }
  while ( v79 < v9 );
  v87 = v119;
  if ( a7 > 0 )
  {
    *((_QWORD *)v34 + 3) = &v37[v120];
    Irp = IoAllocateIrp(a7 + 2, 0);
    *((_QWORD *)v34 + 2) = Irp;
    if ( !Irp )
    {
LABEL_60:
      v13 = -1073741670;
      goto LABEL_81;
    }
  }
  v89 = v106;
  if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, (__int64)v34, (int)v106) )
    PopFxBugCheck(0x601uLL, (ULONG_PTR)v34, (ULONG_PTR)v89, 0LL);
  PopPlRegisterDevice((__int64)v34, v90, v91);
  if ( v9 )
  {
    v92 = v122;
    v93 = v121 + 28;
    do
    {
      if ( (*(_BYTE *)(v93 - 3) & 2) != 0 )
        *(_DWORD *)(v87 + 92) |= 2u;
      *(_DWORD *)(v87 + 156) = *v93;
      PopPlRegisterComponent(v87);
      v87 += 440LL;
      v93 += 10;
      --v92;
    }
    while ( v92 );
    v34 = (char *)v97;
  }
  v37 = 0LL;
  v13 = 0;
  *a9 = v34;
  v34 = 0LL;
LABEL_81:
  ExFreePoolWithTag(v106, 0x4D584650u);
LABEL_82:
  v12 = (__int64 *)v102;
  if ( v34 && !v102 )
    ExFreePoolWithTag(v34, 0x4D584650u);
  if ( v37 )
    ExFreePoolWithTag(v37, 0x4D584650u);
LABEL_30:
  ExFreePoolWithTag(P, 0x4D584650u);
  if ( v12 )
    PopFxReleaseAcpiRefDevice((__int64)v12);
  return (unsigned int)v13;
}
