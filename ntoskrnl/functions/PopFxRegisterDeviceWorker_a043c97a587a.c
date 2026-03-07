__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  __int64 v9; // r14
  __int64 *v12; // rsi
  unsigned int v13; // r10d
  unsigned int v14; // edi
  unsigned int v15; // r9d
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r12
  int AcpiDeviceByUniqueId; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  int DeviceCommon; // eax
  ULONG_PTR v29; // rdi
  int v30; // ebx
  char *Pool2; // r15
  _QWORD *v32; // rax
  _DWORD *v33; // r12
  __int128 v34; // xmm0
  unsigned int v35; // edx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int64 v40; // r13
  __int64 v41; // r13
  _OWORD *v42; // r9
  char *v43; // rax
  __int64 v44; // rbx
  char *v45; // rcx
  char *v46; // rcx
  __int64 v47; // rcx
  unsigned __int64 v48; // r11
  __int64 v49; // r8
  __int64 v50; // r10
  __int128 v51; // xmm0
  __int64 v52; // r8
  int v53; // eax
  int v54; // eax
  unsigned int *v55; // r10
  char *v56; // rdx
  __int64 v57; // rcx
  __int128 v58; // xmm0
  unsigned int v59; // ecx
  unsigned __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // rax
  char *v63; // rcx
  _QWORD *v64; // rcx
  unsigned int v65; // ebx
  __int64 v66; // rsi
  unsigned int v67; // r9d
  __int64 v68; // r10
  PIRP Irp; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdi
  _DWORD *v73; // rbx
  unsigned int v75; // ecx
  unsigned int v76; // r8d
  __int64 v77; // r11
  __int64 v78; // rax
  char *v79; // r9
  unsigned int v80; // edx
  __int64 v81; // rcx
  char *v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-B9h] BYREF
  __int64 v86; // [rsp+40h] [rbp-B1h]
  unsigned int *v87; // [rsp+48h] [rbp-A9h]
  __int64 v88; // [rsp+50h] [rbp-A1h]
  char *v89; // [rsp+58h] [rbp-99h]
  __int64 v90; // [rsp+60h] [rbp-91h]
  volatile signed __int32 *v91; // [rsp+68h] [rbp-89h] BYREF
  char *v92; // [rsp+70h] [rbp-81h]
  _QWORD *v93; // [rsp+78h] [rbp-79h]
  PVOID P; // [rsp+80h] [rbp-71h]
  __int64 v95; // [rsp+88h] [rbp-69h]
  __int64 v96; // [rsp+90h] [rbp-61h]
  __int64 v97; // [rsp+98h] [rbp-59h]
  int v98; // [rsp+A0h] [rbp-51h]
  __int64 v99; // [rsp+A8h] [rbp-49h]
  char *v100; // [rsp+B0h] [rbp-41h]
  char *v101; // [rsp+B8h] [rbp-39h]
  __int64 v102; // [rsp+C0h] [rbp-31h]
  __int64 v103; // [rsp+C8h] [rbp-29h]
  __int64 v104; // [rsp+D0h] [rbp-21h]
  __int64 v105; // [rsp+D8h] [rbp-19h]
  char *v106; // [rsp+E0h] [rbp-11h]
  unsigned int v110; // [rsp+158h] [rbp+67h]

  v9 = a5;
  v91 = 0LL;
  BugCheckParameter2 = 0LL;
  v12 = 0LL;
  if ( !a5 || (a8 & 0x18) == 0x18 )
    return (unsigned int)-1073741811;
  P = (PVOID)ExAllocatePool2(256LL, 12LL * a5, 1297630800LL);
  if ( !P )
    return (unsigned int)-1073741670;
  v110 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v16 = a4 + 56LL * v15;
      v17 = *(_DWORD *)(v16 + 28);
      if ( !v17
        || v17 > 1 && (!*(_QWORD *)a3 || !*((_QWORD *)a3 + 1) || !*((_QWORD *)a3 + 2) || *(_DWORD *)(v16 + 24) >= v17) )
      {
        break;
      }
      v18 = v17 + v13;
      if ( v17 + v13 < v13 )
        break;
      v19 = *(_DWORD *)(v16 + 40);
      v13 = v18;
      if ( v19 )
      {
        if ( v19 < (unsigned int)v9 )
        {
          v75 = v19 + v14;
          if ( v19 + v14 >= v14 )
          {
            v14 += v19;
            v110 = v75;
            v76 = 0;
            while ( 1 )
            {
              v77 = *(unsigned int *)(*(_QWORD *)(v16 + 48) + 4LL * v76);
              if ( (unsigned int)v77 >= (unsigned int)v9 )
                break;
              ++v76;
              ++*((_DWORD *)P + 3 * v77 + 2);
              if ( v76 >= *(_DWORD *)(v16 + 40) )
                goto LABEL_9;
            }
          }
        }
        break;
      }
LABEL_9:
      if ( ++v15 >= (unsigned int)v9 )
        goto LABEL_10;
    }
    v30 = -1073741811;
    goto LABEL_63;
  }
LABEL_10:
  v86 = 0LL;
  v97 = 8 * v9;
  v20 = 472LL * (unsigned int)v9 + 8 * v9;
  v88 = v20;
  v87 = 0LL;
  v21 = 24LL * v13;
  v22 = v21 + v20;
  v23 = v21 + v20 + 312;
  if ( a7 <= 0 )
  {
    v23 = v21 + v20;
    v22 = 0LL;
  }
  v105 = v22;
  if ( v14 )
  {
    v86 = v23;
    v78 = 8LL * v14;
    v87 = (unsigned int *)(v78 + v23);
    v23 += v78 + v78;
  }
  v98 = PopFxRuntimeLogNumberEntries * v9;
  v99 = v23 + 24LL * (unsigned int)(PopFxRuntimeLogNumberEntries * v9);
  v96 = 8 * (int)v9 + 16LL;
  v95 = v96 + 40 * v9;
  v24 = v21 + v95;
  v102 = v21 + v95;
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (__int64 **)&v91);
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    BugCheckParameter2 = (ULONG_PTR)v91;
    _InterlockedOr(v91 + 58, 1u);
    v29 = BugCheckParameter2;
    goto LABEL_18;
  }
  if ( AcpiDeviceByUniqueId == -1073741738 )
  {
    v30 = -1073741661;
  }
  else
  {
    DeviceCommon = PopFxCreateDeviceCommon((__int64)a2, v26, v27, 0, (__int64 *)&BugCheckParameter2);
    v29 = BugCheckParameter2;
    v30 = DeviceCommon;
    if ( BugCheckParameter2 )
    {
      v20 = v88;
LABEL_18:
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v29 + 240), 0x4D584650u, 0, 0, 0x20u);
      Pool2 = (char *)ExAllocatePool2(64LL, v99, 1297630800LL);
      if ( !Pool2 || (v32 = (_QWORD *)ExAllocatePool2(64LL, v24, 1297630800LL), (v33 = v32) == 0LL) )
      {
        v30 = -1073741670;
LABEL_60:
        v12 = (__int64 *)v91;
        if ( v29 && !v91 )
          ExFreePoolWithTag((PVOID)v29, 0x4D584650u);
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0x4D584650u);
        goto LABEL_63;
      }
      v34 = *a3;
      v35 = 0;
      v36 = a3[1];
      *(_DWORD *)(v29 + 828) = v9;
      *(_QWORD *)(v29 + 832) = Pool2;
      *(_OWORD *)(v29 + 112) = v34;
      LODWORD(v90) = 0;
      v37 = a3[2];
      *(_OWORD *)(v29 + 128) = v36;
      v38 = a3[3];
      *(_OWORD *)(v29 + 144) = v37;
      v39 = a3[4];
      v40 = v97;
      *(_OWORD *)(v29 + 160) = v38;
      v41 = (__int64)&Pool2[v40];
      *(_OWORD *)(v29 + 176) = v39;
      *(_QWORD *)(v29 + 192) = a6;
      v42 = (_OWORD *)v41;
      *(_QWORD *)(v29 + 600) = 0LL;
      *(_QWORD *)(v29 + 612) = 5LL;
      *(_QWORD *)(v29 + 1272) = v29 + 1264;
      *(_QWORD *)(v29 + 1264) = v29 + 1264;
      *v32 = a8;
      v92 = &Pool2[v20];
      v43 = (char *)v32 + v96;
      v33[2] = v9;
      v106 = v43;
      v89 = v43;
      v97 = v41;
      v93 = (_QWORD *)((char *)v33 + v95);
      if ( (_DWORD)v9 )
      {
        v44 = v41 + 48;
        v45 = (char *)v87 + (_QWORD)Pool2;
        if ( !v110 )
          v45 = 0LL;
        v101 = v45;
        v46 = &Pool2[v86];
        if ( !v110 )
          v46 = 0LL;
        v100 = v46;
        v47 = 0LL;
        v87 = (unsigned int *)((char *)P + 8);
        v48 = v99 - 472;
        v86 = 0LL;
        v49 = a4 + 32;
        v104 = v99 - 472;
        v88 = a4 + 32;
        v50 = -48LL - (_QWORD)Pool2;
        v103 = -48LL - (_QWORD)Pool2;
        v96 = -16LL - (_QWORD)v33;
        v95 = -16LL - (_QWORD)v33;
        while ( 1 )
        {
          *(_QWORD *)(v47 + *(_QWORD *)(v29 + 832)) = v42;
          if ( v50 + v44 > v48 )
            break;
          v51 = *(_OWORD *)(v49 - 32);
          *(_DWORD *)(v44 - 32) = v35;
          *(_QWORD *)(v44 + 32) = v29;
          *v42 = v51;
          *(_QWORD *)(v44 - 8) = PopFxComponentWork;
          *(_QWORD *)v44 = v42;
          *(_QWORD *)(v44 - 24) = 0LL;
          KeInitializeEvent((PRKEVENT)(v44 + 56), NotificationEvent, 1u);
          v52 = v88;
          *(_QWORD *)(v44 + 80) = 0LL;
          *(_DWORD *)(v44 + 108) = *(_DWORD *)(v52 - 4);
          *(_QWORD *)(v44 + 112) = v92;
          v53 = *(_DWORD *)(v52 - 8);
          *(_DWORD *)(v44 + 164) = -1;
          *(_DWORD *)(v44 + 120) = v53;
          *(_QWORD *)(v44 + 152) = 0LL;
          *(_QWORD *)(v44 + 416) = v44 + 408;
          *(_QWORD *)(v44 + 408) = v44 + 408;
          *(_QWORD *)(v44 + 400) = v44 + 392;
          *(_QWORD *)(v44 + 392) = v44 + 392;
          *(_DWORD *)(v44 + 168) = 0;
          v54 = *(_DWORD *)(v52 + 8);
          if ( v54 )
          {
            v79 = v100;
            v80 = 0;
            *(_QWORD *)(v44 + 128) = v100;
            *(_DWORD *)(v44 + 124) = v54;
            do
            {
              v81 = v80++;
              *(_DWORD *)v79 = *(_DWORD *)(*(_QWORD *)(v52 + 16) + 4 * v81);
              v79 += 8;
            }
            while ( v80 < *(_DWORD *)(v44 + 124) );
            v100 = v79;
          }
          v55 = v87;
          if ( *v87 )
          {
            v82 = v101;
            *(_QWORD *)(v44 + 144) = v101;
            v101 = &v82[8 * *v55];
          }
          v56 = v89;
          v57 = v96 + 16;
          *(_QWORD *)((char *)v33 + v86 + 16) = v89;
          if ( (unsigned __int64)&v56[v57] > v102 - 40 )
            break;
          v58 = *(_OWORD *)(v52 - 32);
          v59 = 0;
          LODWORD(v89) = 0;
          *(_OWORD *)v56 = v58;
          *((_QWORD *)v56 + 2) = *(_QWORD *)(v52 - 16);
          *((_DWORD *)v56 + 7) = *(_DWORD *)(v52 - 4);
          *((_QWORD *)v56 + 4) = v93;
          *((_DWORD *)v56 + 6) = *(_DWORD *)(v52 - 8);
          if ( *(_DWORD *)(v44 + 108) )
          {
            v60 = v99 - 24;
            v88 = v99 - 24;
            while ( v92 - Pool2 <= v60 )
            {
              v61 = *(_QWORD *)v52;
              v62 = v59;
              v63 = v92;
              *((_DWORD *)v92 + 4) = *(_DWORD *)(*(_QWORD *)v52 + 24 * v62 + 16);
              *(_QWORD *)v63 = *(_QWORD *)(v61 + 24 * v62);
              *((_QWORD *)v63 + 1) = *(_QWORD *)(v61 + 24 * v62 + 8);
              v92 = v63 + 24;
              if ( (unsigned __int64)v93 + v95 + 16 > v102 - 24 )
                break;
              v64 = v93;
              *((_DWORD *)v93 + 4) = *(_DWORD *)(v61 + 24 * v62 + 16);
              *v64 = *(_QWORD *)(v61 + 24 * v62);
              v60 = v88;
              v64[1] = *(_QWORD *)(v61 + 24 * v62 + 8);
              v93 = v64 + 3;
              v59 = (_DWORD)v89 + 1;
              v96 = v95;
              LODWORD(v89) = v59;
              if ( v59 >= *(_DWORD *)(v44 + 108) )
              {
                v55 = v87;
                goto LABEL_37;
              }
            }
            break;
          }
LABEL_37:
          v89 = v56 + 40;
          v42 = (_OWORD *)(v97 + 472);
          v47 = v86 + 8;
          v35 = v90 + 1;
          v97 += 472LL;
          v49 = v52 + 56;
          LODWORD(v90) = v35;
          v86 += 8LL;
          v44 += 472LL;
          v88 = v49;
          v87 = v55 + 3;
          if ( v35 >= (unsigned int)v9 )
            goto LABEL_39;
          v50 = v103;
          v48 = v104;
        }
      }
      else
      {
LABEL_39:
        *(_DWORD *)(v29 + 840) = v98;
        *(_QWORD *)(v29 + 848) = &Pool2[v23];
        if ( v110 )
        {
          v30 = PopFxVerifyDependencies(P, v29, (unsigned int)v9, v42);
          if ( v30 < 0 )
            goto LABEL_59;
        }
        v65 = 0;
        if ( (_DWORD)v9 )
        {
          v66 = 0LL;
          do
          {
            v67 = 0;
            v68 = *(_QWORD *)(v66 + *(_QWORD *)(v29 + 832));
            if ( *(_DWORD *)(v68 + 172) )
            {
              do
              {
                v83 = *(_QWORD *)(*(_QWORD *)(v29 + 832) + 8LL * *(unsigned int *)(*(_QWORD *)(v68 + 176) + 8LL * v67));
                v84 = *(unsigned int *)(v83 + 188);
                *(_DWORD *)(*(_QWORD *)(v83 + 192) + 8 * v84) = v65;
                *(_DWORD *)(*(_QWORD *)(v83 + 192) + 8 * v84 + 4) = v67++;
                ++*(_DWORD *)(v83 + 188);
              }
              while ( v67 < *(_DWORD *)(v68 + 172) );
            }
            PopFxActivateComponent(v29, v68, 0, 1u);
            ++v65;
            v66 += 8LL;
          }
          while ( v65 < (unsigned int)v9 );
        }
        if ( a7 <= 0
          || (*(_QWORD *)(v29 + 24) = &Pool2[v105], Irp = IoAllocateIrp(a7 + 2, 0), (*(_QWORD *)(v29 + 16) = Irp) != 0LL) )
        {
          if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, v29, (int)v33) )
            PopFxBugCheck(0x601uLL, v29, (ULONG_PTR)v33, 0LL);
          PopPlRegisterDevice(v29, v70, v71);
          if ( (*(_QWORD *)v33 & 0x10) == 0
            && ((*(_QWORD *)v33 & 8) != 0 || PopPoFxSystemIrpWaitForReportDevicePoweredReg) )
          {
            _InterlockedOr((volatile signed __int32 *)(v29 + 824), 0x80u);
            v29 = BugCheckParameter2;
          }
          if ( (*(_BYTE *)v33 & 0x20) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(v29 + 824), 0x1000u);
            v29 = BugCheckParameter2;
          }
          if ( (_DWORD)v9 )
          {
            v72 = v9;
            v73 = v106 + 28;
            do
            {
              if ( (*(_BYTE *)(v73 - 3) & 2) != 0 )
                *(_DWORD *)(v41 + 92) |= 2u;
              *(_DWORD *)(v41 + 156) = *v73;
              PopPlRegisterComponent(v41);
              v41 += 472LL;
              v73 += 10;
              --v72;
            }
            while ( v72 );
            v29 = BugCheckParameter2;
          }
          Pool2 = 0LL;
          v30 = 0;
          *a9 = v29;
          v29 = 0LL;
          goto LABEL_59;
        }
      }
      v30 = -1073741670;
LABEL_59:
      ExFreePoolWithTag(v33, 0x4D584650u);
      goto LABEL_60;
    }
  }
  v12 = (__int64 *)v91;
LABEL_63:
  ExFreePoolWithTag(P, 0x4D584650u);
  if ( v12 )
    PopFxReleaseAcpiRefDevice((__int64)v12);
  return (unsigned int)v30;
}
