char VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc(
        union _LARGE_INTEGER *a1,
        __int64 a2,
        VIDMM_DEVICE *a3,
        ...)
{
  union _LARGE_INTEGER *v4; // rdi
  unsigned int v5; // ecx
  int v6; // r9d
  unsigned int v7; // edx
  char v8; // al
  int v9; // r8d
  int v10; // r8d
  unsigned int v11; // eax
  LONGLONG QuadPart; // rdx
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r10
  unsigned int v16; // r13d
  bool v17; // cf
  VIDMM_DEVICE *v18; // r9
  __int64 **v19; // r8
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rsi
  char v23; // al
  int *v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  VIDMM_DEVICE *v28; // r9
  _QWORD *v29; // r12
  _QWORD *v30; // r15
  VIDMM_DEVICE *v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 *v34; // r15
  __int64 *v35; // rdi
  __int64 *v36; // r14
  _QWORD *v37; // rcx
  _QWORD *v38; // r13
  _QWORD *v39; // r12
  VIDMM_DEVICE *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 **v46; // rcx
  __int64 v47; // rcx
  __int64 **v48; // rax
  unsigned __int64 LargestGap; // rdi
  __int64 v50; // rax
  unsigned __int64 v51; // rdi
  _QWORD *v52; // rax
  __int64 v54; // [rsp+28h] [rbp-81h]
  __int64 v55; // [rsp+30h] [rbp-79h]
  __int64 v56; // [rsp+38h] [rbp-71h]
  __int64 v57; // [rsp+40h] [rbp-69h]
  unsigned int v58; // [rsp+48h] [rbp-61h]
  unsigned int v59; // [rsp+4Ch] [rbp-5Dh]
  unsigned int v60; // [rsp+50h] [rbp-59h]
  int v61; // [rsp+54h] [rbp-55h]
  bool v62; // [rsp+58h] [rbp-51h]
  unsigned int v63; // [rsp+5Ch] [rbp-4Dh] BYREF
  __int64 v64; // [rsp+60h] [rbp-49h]
  __int64 v65; // [rsp+68h] [rbp-41h]
  unsigned int v66; // [rsp+70h] [rbp-39h]
  unsigned int v67; // [rsp+74h] [rbp-35h]
  unsigned __int64 v68; // [rsp+78h] [rbp-31h] BYREF
  int v69; // [rsp+80h] [rbp-29h]
  _DWORD v70[2]; // [rsp+88h] [rbp-21h] BYREF
  int *v71; // [rsp+90h] [rbp-19h]
  __int64 v72; // [rsp+98h] [rbp-11h]
  _BYTE v73[88]; // [rsp+A0h] [rbp-9h] BYREF
  int v75; // [rsp+110h] [rbp+67h]
  __int64 v77; // [rsp+120h] [rbp+77h] BYREF
  va_list va; // [rsp+120h] [rbp+77h]
  __int64 v79; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v77 = va_arg(va1, _QWORD);
  v79 = va_arg(va1, _QWORD);
  v4 = a1;
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
    (VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v73,
    a1 + 41,
    (unsigned int *)&a1[46],
    1);
  v5 = 0;
  v75 = *(_DWORD *)(a2 + 60);
  v58 = 0;
  if ( !v75 )
    goto LABEL_88;
  v6 = *(_DWORD *)(a2 + 60);
  v7 = *(_DWORD *)(a2 + 64) == 0 ? 6 : 0;
  v59 = v7;
LABEL_3:
  if ( v7 > 5 )
  {
    v11 = v5;
    v10 = v5++;
    v58 = v5;
    if ( !_bittest(&v6, v11) )
      goto LABEL_87;
    v62 = 1;
  }
  else
  {
    v8 = 3 * v7++;
    v59 = v7;
    v9 = (*(_DWORD *)(a2 + 64) >> (2 * v8)) & 0x1F;
    if ( !v9 )
      goto LABEL_86;
    v10 = v9 - 1;
    v62 = ((*(_DWORD *)(a2 + 64) >> (6 * v7)) & 0x20) == 0;
  }
  QuadPart = v4->QuadPart;
  v13 = *(_DWORD *)(a2 + 68);
  v75 &= ~(1 << v10);
  v66 = v10 + *(_DWORD *)(1616LL * (v13 & 0x3F) + *(_QWORD *)(v4->QuadPart + 40224) + 28);
  v14 = *(_QWORD *)(QuadPart + 3712);
  v72 = v66;
  v15 = *(_QWORD *)(v14 + 8LL * v66);
  v65 = v15;
  if ( (*(_DWORD *)(v15 + 80) & 0x1001) != 0 )
    goto LABEL_85;
  v16 = 0;
  v17 = (v13 & 0x100) != 0;
  v61 = 0;
  v18 = a3;
  if ( v17 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a3 + 1) + 96LL) & 2) == 0 )
      v16 = 7;
    v61 = v16;
  }
  v19 = (__int64 **)(v15 + 136);
  v64 = v15 + 136;
LABEL_14:
  while ( 2 )
  {
    v20 = *(_QWORD *)(a2 + 16);
    v21 = 2013265919;
    v70[1] = 2;
    v22 = v20 + (v20 >> 2);
    v70[0] = 0;
    v68 = v22;
    while ( 2 )
    {
      v63 = 0;
      v23 = *((_BYTE *)v18 + 58) & 0x10;
      v60 = v21;
      v67 = v23 != 0;
      v24 = (_DWORD *)((char *)v70 + (-v67 & 4));
      v71 = v24;
      do
      {
        v25 = v21;
        v69 = *v24;
        if ( v69 == 2 )
        {
          if ( (*(_DWORD *)(a2 + 68) & 0x40) != 0 && v21 >= *(_DWORD *)(a2 + 400) - 1 )
            v25 = *(_DWORD *)(a2 + 400) - 1;
          v29 = (_QWORD *)((char *)VIDMM_PROCESS::GetCommitmentInformation(
                                     *((VIDMM_PROCESS **)v18 + 1),
                                     *(_DWORD *)(*(_QWORD *)(v4->QuadPart + 24) + 240LL),
                                     *(_DWORD *)(v15 + 20))
                         + 40);
          v30 = (_QWORD *)*v29;
          if ( (_QWORD *)*v29 == v29 )
          {
            v19 = (__int64 **)v64;
            goto LABEL_55;
          }
          do
          {
            v31 = (VIDMM_DEVICE *)v30[4];
            v30 = (_QWORD *)*v30;
            if ( (v31 != v28
               || (VIDMM_GLOBAL::_Config & 0x40) != 0
               && (*(_DWORD *)(a2 + 400) >= 0xA0000000 || (*(_DWORD *)(a2 + 68) & 0x40) == 0))
              && ((*((_BYTE *)v28 + 58) & 0x10) == 0 || v31 == v28) )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v27) + 24) = v31;
              LOBYTE(v77) = 0;
              VIDMM_DEVICE::FaultAllDemotableAllocations(v31, v26, v66, v16, v25, &v63, &v68, (__int64 *)va);
              if ( (_BYTE)v77 && g_IsInternalReleaseOrDbg )
              {
                v33 = WdLogNewEntry5_WdTrace(v27);
                v27 = v25;
                *(_QWORD *)(v33 + 24) = v31;
                *(_QWORD *)(v33 + 32) = v25;
              }
              v22 = v68;
              if ( !v68 )
                goto LABEL_66;
              v28 = a3;
            }
          }
          while ( v30 != v29 );
          v19 = (__int64 **)v64;
        }
        else
        {
          v34 = *v19;
          if ( *v19 == (__int64 *)v19 )
            goto LABEL_56;
          do
          {
            v35 = v34 - 3;
            v36 = v34;
            v37 = (_QWORD *)*(v34 - 3);
            v34 = (__int64 *)*v34;
            if ( !(unsigned __int8)PsIsSystemProcess(*v37) )
            {
              v38 = v35 + 5;
              v39 = (_QWORD *)v35[5];
              while ( v39 != v38 )
              {
                v40 = (VIDMM_DEVICE *)v39[4];
                v39 = (_QWORD *)*v39;
                if ( VIDMM_DEVICE::CanSuspendThisDevice(v40, a3, v69, v79) )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    *(_QWORD *)(WdLogNewEntry5_WdTrace(v42) + 24) = v40;
                  LOBYTE(v77) = 0;
                  VIDMM_DEVICE::FaultAllDemotableAllocations(v40, v41, v66, v61, v60, &v63, &v68, (__int64 *)va);
                  if ( (_BYTE)v77 )
                  {
                    if ( g_IsInternalReleaseOrDbg )
                    {
                      v44 = WdLogNewEntry5_WdTrace(v43);
                      *(_QWORD *)(v44 + 24) = v40;
                      *(_QWORD *)(v44 + 32) = v60;
                    }
                    v45 = *v36;
                    if ( *v36 )
                    {
                      if ( *(__int64 **)(v45 + 8) != v36
                        || (v46 = (__int64 **)v36[1], *v46 != v36)
                        || (*v46 = (__int64 *)v45,
                            *(_QWORD *)(v45 + 8) = v46,
                            v47 = v64,
                            v48 = *(__int64 ***)(v64 + 8),
                            *v48 != (__int64 *)v64) )
                      {
                        __fastfail(3u);
                      }
                      *v36 = v64;
                      v36[1] = (__int64)v48;
                      *v48 = v36;
                      *(_QWORD *)(v47 + 8) = v36;
                    }
                  }
                  v22 = v68;
                  if ( !v68 )
                  {
                    v16 = v61;
LABEL_66:
                    LOBYTE(v32) = v62;
                    LargestGap = VIDMM_SEGMENT::GetLargestGap(v65, a2, v16, v32, v54, v55, v56, v57);
                    if ( g_IsInternalReleaseOrDbg )
                    {
                      v50 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
                      *(_QWORD *)(v50 + 24) = LargestGap;
                      *(_QWORD *)(v50 + 32) = *(_QWORD *)(a2 + 16);
                    }
                    if ( LargestGap < *(_QWORD *)(a2 + 16) )
                    {
                      v19 = (__int64 **)v64;
                      v15 = v65;
                      v18 = a3;
                      v4 = a1;
                      goto LABEL_14;
                    }
                    goto LABEL_90;
                  }
                }
              }
            }
            v19 = (__int64 **)v64;
          }
          while ( v34 != (__int64 *)v64 );
          v16 = v61;
        }
        v4 = a1;
        v15 = v65;
LABEL_55:
        v21 = v60;
LABEL_56:
        v18 = a3;
        v24 = v71 + 1;
        ++v67;
        ++v71;
      }
      while ( v67 < 2 );
      if ( v63 - 1 <= 0xC7FFFFFE )
      {
        if ( v21 == 2013265919 )
        {
          v21 = -939524097;
          if ( v63 <= 0x9FFFFFFF )
            v21 = -1610612737;
          goto LABEL_65;
        }
        if ( v21 == -1610612737 )
        {
          v21 = -939524097;
LABEL_65:
          v18 = a3;
          continue;
        }
      }
      break;
    }
    if ( v22 == *(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 16) >> 2) )
      goto LABEL_93;
    LOBYTE(v18) = v62;
    v51 = VIDMM_SEGMENT::GetLargestGap(v15, a2, 0LL, v18, v54, v55, v56, v57);
    if ( g_IsInternalReleaseOrDbg )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v52[3] = v72;
      v52[4] = v51;
      v52[5] = *(_QWORD *)(a2 + 16);
    }
    if ( v51 < *(_QWORD *)(a2 + 16) )
    {
LABEL_93:
      if ( (VIDMM_GLOBAL::_Config & 0x40) == 0
        || (_DWORD)v79 == 2
        || *(_DWORD *)(a2 + 400) < 0xA0000000 && (*(_DWORD *)(a2 + 68) & 0x40) != 0
        || !dword_1C00765C0
        || g_DemotedHighPriAllocDebugMode
        || KdRefreshDebuggerNotPresent() )
      {
        v4 = a1;
        goto LABEL_85;
      }
      DbgPrintEx(0x65u, 0, "\nCouldn't find preferred memory for a high priority allocation 0x%p.\n", (const void *)a2);
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "\n"
        "To disable debug breaks on high priority allocation page-in failures, run \"?? dxgmms2!g_DemotedHighPriAllocDebu"
        "gMode=1\"\n"
        "or \"ed 0x%p 1\"\n"
        "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_DemotedHighPriAllocDebugMode=2\"\n"
        "or \"ed 0x%p 2\"\n"
        "\n",
        (const void *)&g_DemotedHighPriAllocDebugMode,
        (const void *)&g_DemotedHighPriAllocDebugMode);
      __debugbreak();
      v19 = (__int64 **)v64;
      v15 = v65;
      v18 = a3;
      v4 = a1;
      if ( g_DemotedHighPriAllocDebugMode == 2 )
        continue;
LABEL_85:
      v7 = v59;
      v6 = v75;
LABEL_86:
      v5 = v58;
LABEL_87:
      if ( !v6 )
      {
LABEL_88:
        VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v73);
        return 0;
      }
      goto LABEL_3;
    }
    break;
  }
LABEL_90:
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v73);
  return 1;
}
