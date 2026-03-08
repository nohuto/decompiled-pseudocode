/*
 * XREFs of _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01AA250
 * Callers:
 *     _lambda_6c26126ad1bc2cece2687303122ecfc1_::_lambda_invoker_cdecl_ @ 0x1C00154D0 (_lambda_6c26126ad1bc2cece2687303122ecfc1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00093B0 (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0011E10 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     RtlStringCopyWorkerW @ 0x1C00128B0 (RtlStringCopyWorkerW.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0019400 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     MonitorGetCCDMonitorID @ 0x1C01718C0 (MonitorGetCCDMonitorID.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C0180454 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01E016C (-_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator()(unsigned int **a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r14
  _DWORD *v5; // rax
  unsigned int *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  struct _KTHREAD **v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned int *v13; // r15
  __int64 v14; // rdi
  unsigned int v15; // edx
  bool v16; // bl
  bool v17; // r13
  char v18; // r14
  __int64 v19; // r14
  MONITOR_MGR *v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rdx
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  int v34; // eax
  int v35; // eax
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rbx
  __int64 v42; // rax
  _DWORD *v43; // r8
  int v44; // eax
  int v45; // ecx
  bool v46; // al
  int v47; // eax
  __int64 v48; // rbx
  __int64 v49; // rax
  DXGMONITOR *v51; // r13
  char IsVirtualModeSupportDisabled; // bl
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  DXGMONITOR *v56; // rbx
  __int64 v57; // rax
  struct _DEVICE_OBJECT *v58; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  NTSTATUS v64; // r14d
  int v65; // eax
  int v66; // r14d
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rbx
  int v72; // ecx
  __int64 v73; // rdi
  _OWORD *v74; // rax
  _OWORD *v75; // rcx
  __int64 v76; // rdx
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  int v86; // ecx
  unsigned int v87; // edx
  unsigned int v88; // edx
  __int64 v89; // rax
  int v90; // eax
  unsigned int v91; // edx
  int v92; // ecx
  unsigned int v93; // edx
  int v94; // ecx
  unsigned int v95; // edx
  int v96; // ecx
  unsigned int v97; // edx
  int v98; // ecx
  unsigned int v99; // edx
  int v100; // ecx
  unsigned int v101; // edx
  int v102; // ecx
  unsigned int v103; // edx
  int v104; // ecx
  int v105; // ecx
  int v106; // ecx
  int v107; // ecx
  DXGMONITOR *v108; // [rsp+60h] [rbp-A8h] BYREF
  DXGMONITOR *v109; // [rsp+68h] [rbp-A0h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+70h] [rbp-98h] BYREF
  __int64 v111; // [rsp+78h] [rbp-90h]
  unsigned int *v112; // [rsp+80h] [rbp-88h]
  DXGMONITOR *v113; // [rsp+88h] [rbp-80h] BYREF
  struct _KTHREAD **v114; // [rsp+90h] [rbp-78h]
  __int64 v115; // [rsp+A0h] [rbp-68h]
  _BYTE v116[560]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v117[1088]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _DWORD v118[108]; // [rsp+718h] [rbp+610h] BYREF

  v2 = a2;
  v111 = a2;
  _InterlockedIncrement64((volatile signed __int64 *)(a2 + 24));
  v4 = a2 + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
  if ( *(_DWORD *)(v2 + 200) == 1 && *(_QWORD *)(v2 + 2920) )
  {
    v5 = *a1;
    v7 = **a1;
    v112 = a1[1];
    v6 = v112;
    *v5 = v7 + 1;
    if ( *(_DWORD *)(*(_QWORD *)v6 + 4LL) >= (unsigned int)(v7 + 1) )
    {
      v73 = *(_QWORD *)(*(_QWORD *)v6 + 8LL) + 560 * v7;
      memset(v116, 0, sizeof(v116));
      v74 = (_OWORD *)v73;
      v75 = v116;
      v76 = 4LL;
      do
      {
        v77 = v75[1];
        *v74 = *v75;
        v78 = v75[2];
        v74[1] = v77;
        v79 = v75[3];
        v74[2] = v78;
        v80 = v75[4];
        v74[3] = v79;
        v81 = v75[5];
        v74[4] = v80;
        v82 = v75[6];
        v74[5] = v81;
        v83 = v75[7];
        v75 += 8;
        v74[6] = v82;
        v74 += 8;
        *(v74 - 1) = v83;
        --v76;
      }
      while ( v76 );
      v84 = v75[1];
      *v74 = *v75;
      v85 = v75[2];
      v74[1] = v84;
      v74[2] = v85;
      *(_QWORD *)v73 = *(_QWORD *)(v2 + 404);
      RtlStringCbCopyNW(
        (char *)(v73 + 8),
        0LL,
        *(char **)(*(_QWORD *)(v2 + 1744) + 8LL),
        **(unsigned __int16 **)(v2 + 1744));
      v86 = 0;
      if ( *(_BYTE *)(*(_QWORD *)(v2 + 2920) + 289LL) )
        v86 = 2;
      v87 = v86 | *(_DWORD *)(v73 + 556) & 0xFFFFFFFD;
      *(_DWORD *)(v73 + 556) = v87;
      v88 = (*(_BYTE *)(*(_QWORD *)(v2 + 2920) + 290LL) != 0) | v87 & 0xFFFFFFFE;
      *(_DWORD *)(v73 + 556) = v88;
      v89 = *(_QWORD *)(v2 + 2920);
      if ( *(_BYTE *)(v89 + 289) && *(_BYTE *)(v89 + 290)
        || (v90 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v90 = 4;
      }
      v91 = v90 | v88 & 0xFFFFFFFB;
      *(_DWORD *)(v73 + 556) = v91;
      *(_DWORD *)(v73 + 528) = *(_DWORD *)(v2 + 2820);
      *(_DWORD *)(v73 + 532) = *(_DWORD *)(*(_QWORD *)(v2 + 2920) + 96LL);
      v92 = 0;
      *(_DWORD *)(v73 + 536) = *(_DWORD *)(v2 + 412);
      *(_DWORD *)(v73 + 540) = *(_DWORD *)(v2 + 416);
      *(_DWORD *)(v73 + 544) = *(_DWORD *)(v2 + 420);
      *(_DWORD *)(v73 + 548) = *(_DWORD *)(v2 + 424);
      *(_DWORD *)(v73 + 552) = *(_DWORD *)(v2 + 428);
      if ( (*(_DWORD *)(v2 + 436) & 1) != 0 )
        v92 = 8;
      v93 = v92 | v91 & 0xFFFFFFF7;
      v94 = 0;
      *(_DWORD *)(v73 + 556) = v93;
      if ( (*(_DWORD *)(v2 + 436) & 2) != 0 )
        v94 = 16;
      v95 = v94 | v93 & 0xFFFFFFEF;
      v96 = 0;
      *(_DWORD *)(v73 + 556) = v95;
      if ( (*(_DWORD *)(v2 + 436) & 8) != 0 )
        v96 = 32;
      v97 = v96 | v95 & 0xFFFFFFDF;
      v98 = 0;
      *(_DWORD *)(v73 + 556) = v97;
      if ( (*(_DWORD *)(v2 + 436) & 0x10) != 0 )
        v98 = 64;
      v99 = v98 | v97 & 0xFFFFFFBF;
      *(_DWORD *)(v73 + 556) = v99;
      v100 = 0;
      if ( (*(_DWORD *)(v2 + 436) & 0x20) != 0 )
        v100 = 128;
      v101 = v100 | v99 & 0xFFFFFF7F;
      v102 = 0;
      *(_DWORD *)(v73 + 556) = v101;
      if ( (*(_DWORD *)(v2 + 436) & 0x100) != 0 )
        v102 = 256;
      v103 = v102 | v101 & 0xFFFFFEFF;
      *(_DWORD *)(v73 + 556) = v103;
      v104 = 0;
      if ( (*(_DWORD *)(v2 + 436) & 0x40000) != 0 )
        v104 = 512;
      *(_DWORD *)(v73 + 556) = v104 | v103 & 0xFFFFFDFF;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(v2 + 2920) + 104LL);
    if ( !v8 )
      WdLogSingleEntry0(1LL);
    v9 = (struct _KTHREAD **)(v8 + 40);
    v114 = (struct _KTHREAD **)(v8 + 40);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 120) + 72LL));
    v10 = *(_QWORD *)(v8 + 120);
    v11 = *(_QWORD *)(v10 + 24);
    v115 = v10;
    if ( v11 != v10 + 24 )
    {
      v12 = v11 - 8;
      if ( v12 )
      {
        v13 = a1[2];
        v14 = v10 + 24;
        while ( *(_DWORD *)(*(_QWORD *)v6 + 20LL) < ++*v13 )
        {
LABEL_41:
          v49 = *(_QWORD *)(v12 + 8);
          v12 = v49 - 8;
          if ( v49 == v14 )
            v12 = 0LL;
          if ( !v12 )
          {
            v10 = v115;
            v4 = v2 + 136;
            v9 = v114;
            goto LABEL_45;
          }
        }
        v15 = *(_DWORD *)(v12 + 24);
        v16 = 0;
        v17 = 0;
        v18 = 0;
        if ( v15 == -1 )
        {
LABEL_19:
          v21 = *(_QWORD *)(*(_QWORD *)v112 + 24LL) + 1076LL * (*v13 - 1);
          memset(v117, 0, 0x434uLL);
          v22 = 8LL;
          v23 = v117;
          v24 = (_OWORD *)v21;
          do
          {
            v25 = v23[1];
            *v24 = *v23;
            v26 = v23[2];
            v24[1] = v25;
            v27 = v23[3];
            v24[2] = v26;
            v28 = v23[4];
            v24[3] = v27;
            v29 = v23[5];
            v24[4] = v28;
            v30 = v23[6];
            v24[5] = v29;
            v31 = v23[7];
            v23 += 8;
            v24[6] = v30;
            v24 += 8;
            *(v24 - 1) = v31;
            --v22;
          }
          while ( v22 );
          v32 = v23[1];
          *v24 = *v23;
          v33 = v23[2];
          v34 = *((_DWORD *)v23 + 12);
          v24[1] = v32;
          v24[2] = v33;
          *((_DWORD *)v24 + 12) = v34;
          *(_QWORD *)v21 = *(_QWORD *)(v111 + 404);
          *(_DWORD *)(v21 + 8) = *(_DWORD *)(v12 + 24);
          *(_DWORD *)(v21 + 1052) = *(_DWORD *)(v12 + 92);
          v35 = 4;
          if ( v16 )
            v35 = 0;
          v36 = v35 | *(_DWORD *)(v21 + 1072) & 0xFFFFFFFA | (*(_QWORD *)(v12 + 112) != 0LL);
          v37 = 2;
          if ( v17 )
            v37 = 0;
          v38 = v37 | v36 & 0xFFFFFFFD;
          v39 = 32;
          if ( v18 )
            v39 = 0;
          v40 = v39 | v38 & 0xFFFFFFDF;
          *(_DWORD *)(v21 + 1072) = v40;
          if ( !*(_QWORD *)(v12 + 40) )
          {
            WdLogSingleEntry0(1LL);
            v40 = *(_DWORD *)(v21 + 1072);
          }
          v41 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
          if ( !*(_QWORD *)(v41 + 8) )
          {
            WdLogSingleEntry0(1LL);
            v40 = *(_DWORD *)(v21 + 1072);
          }
          v42 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + 16LL);
          if ( *(_DWORD *)(v42 + 412) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v42 + 2920) + 16LL) + 2820LL) < 1105 )
          {
            v43 = (_DWORD *)(v12 + 128);
          }
          else
          {
            v43 = (_DWORD *)(v12 + 128);
            if ( *(_DWORD *)(v12 + 128) != -1
              || ((v44 = *(_DWORD *)(v12 + 408), v44 != -1)
                ? (v46 = v44 == 1)
                : (v45 = *(_DWORD *)(v12 + 80), v45 < 14) && v45 >= 4
               || v45 && (v53 = v45 - 1) != 0 && (v54 = v53 - 1) != 0 && (v55 = v54 - 1) != 0 && v55 != 11
                ? (v46 = 0)
                : (v46 = 1),
                  v46) )
            {
              v47 = 16;
LABEL_39:
              *(_DWORD *)(v21 + 1056) = 0;
              *(_DWORD *)(v21 + 1072) = v47 | v40 & 0xFFFFFFEF;
              *(_DWORD *)(v21 + 1060) = *(_DWORD *)(v12 + 124);
              *(_DWORD *)(v21 + 1064) = *v43;
              *(_DWORD *)(v21 + 1068) = *(_DWORD *)(v12 + 100);
              v48 = *(_QWORD *)(v12 + 112);
              if ( !v48 )
                goto LABEL_40;
              memset(v118, 0, 0x1A4uLL);
              MONITOR_MGR::AcquireMonitorShared(&v108, v48);
              v56 = v108;
              if ( v108 )
              {
                if ( *((_DWORD *)v108 + 78) == 1 && !*(_BYTE *)(*((_QWORD *)v108 + 25) + 16LL) )
                {
                  WdLogSingleEntry1(7LL, 1LL);
                  RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v108);
                }
                else
                {
                  memset(&v118[41], 0, 0x100uLL);
                  v57 = *((_QWORD *)v108 + 25);
                  v58 = *(struct _DEVICE_OBJECT **)(v57 + 8);
                  if ( !v58 || !*(_QWORD *)(v57 + 56) )
                  {
LABEL_70:
                    v65 = DXGMONITOR::_FillMonitorDeviceInfo(v56, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v118);
                    v66 = v65;
                    if ( v65 == -1071841279 )
                    {
                      v66 = 0;
                    }
                    else if ( v65 < 0 )
                    {
LABEL_75:
                      ExReleaseResourceLite((PERESOURCE)((char *)v56 + 24));
                      KeLeaveCriticalRegion();
                      if ( v66 >= 0 )
                        RtlStringCchCopyW((char *)(v21 + 532), 260LL, (char *)&v118[41]);
                      goto LABEL_77;
                    }
                    if ( (v118[5] & 1) == 0 && !LOWORD(v118[9]) )
                      v118[5] |= 2u;
                    goto LABEL_75;
                  }
                  SymbolicLinkList = 0LL;
                  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v58, 0, &SymbolicLinkList);
                  if ( DeviceInterfaces < 0 )
                  {
                    *(_QWORD *)(WdLogNewEntry5_WdTrace(v61, v60, v62, v63) + 24) = DeviceInterfaces;
                    RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v108);
                  }
                  else
                  {
                    v64 = RtlStringCopyWorkerW(
                            (NTSTRSAFE_PWSTR)&v118[41],
                            0x80uLL,
                            0LL,
                            SymbolicLinkList,
                            0x7FFFFFFEuLL);
                    ExFreePoolWithTag(SymbolicLinkList, 0);
                    if ( v64 >= 0 )
                    {
                      HIWORD(v118[41]) = 92;
                      goto LABEL_70;
                    }
                    RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v108);
                  }
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, -1073741275LL);
                RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v108);
              }
LABEL_77:
              MonitorGetCCDMonitorID(*(DXGMONITOR ***)(v12 + 112), 0x104u, (unsigned __int16 *)(v21 + 12));
              v70 = 0LL;
              if ( (*(_BYTE *)(v12 + 556) & 0x40) != 0 )
                v70 = 8LL;
              *(_DWORD *)(v21 + 1072) = v70 | *(_DWORD *)(v21 + 1072) & 0xFFFFFFF7;
              v71 = *(_QWORD *)(v12 + 112);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v70, v67, v68, v69) + 24) = v71;
              if ( !v71 )
                goto LABEL_40;
              v72 = *(_DWORD *)(v71 + 312);
              if ( v72 == 1 )
                goto LABEL_81;
              v105 = v72 - 2;
              if ( !v105 )
              {
                *(_DWORD *)(v21 + 1056) = 2;
                goto LABEL_40;
              }
              v106 = v105 - 1;
              if ( !v106 )
              {
                *(_DWORD *)(v21 + 1056) = 3;
                goto LABEL_40;
              }
              v107 = v106 - 1;
              if ( !v107 )
              {
                *(_DWORD *)(v21 + 1056) = 4;
                goto LABEL_40;
              }
              if ( v107 != 1 )
LABEL_81:
                *(_DWORD *)(v21 + 1056) = 1;
              else
                *(_DWORD *)(v21 + 1056) = 5;
LABEL_40:
              v6 = v112;
              v2 = v111;
              goto LABEL_41;
            }
          }
          v47 = 0;
          goto LABEL_39;
        }
        v19 = *(_QWORD *)(v2 + 2920);
        if ( !v19 )
        {
          WdLogSingleEntry1(2LL, 9698LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The selected adapter is render-only",
            9698LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v18 = 0;
          goto LABEL_19;
        }
        v20 = *(MONITOR_MGR **)(v19 + 112);
        if ( v20 )
        {
          v113 = 0LL;
          if ( (int)MONITOR_MGR::_GetMonitorInstance(v20, v15, 1u, &v113) >= 0 )
          {
            v51 = v113;
            v109 = v113;
            if ( v113 )
            {
              KeEnterCriticalRegion();
              ExAcquireResourceSharedLite((PERESOURCE)((char *)v51 + 24), 1u);
              if ( *((_DWORD *)v51 + 78) != 1 )
                WdLogSingleEntry0(1LL);
              IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v51);
              ExReleaseResourceLite((PERESOURCE)((char *)v51 + 24));
              KeLeaveCriticalRegion();
              if ( IsVirtualModeSupportDisabled )
              {
                v16 = 1;
                v17 = 1;
LABEL_18:
                v18 = 1;
                goto LABEL_19;
              }
LABEL_16:
              v16 = *(_BYTE *)(v19 + 289) == 0;
              v17 = *(_BYTE *)(v19 + 290) == 0;
              if ( *(_BYTE *)(v19 + 289) && (*(_DWORD *)(v19 + 24) & 0x20) != 0 )
              {
                v18 = 0;
                goto LABEL_19;
              }
              goto LABEL_18;
            }
          }
          else
          {
            v109 = 0LL;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v2);
          v109 = 0LL;
        }
        WdLogSingleEntry1(2LL, -1073741632LL);
        RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v109);
        goto LABEL_16;
      }
    }
LABEL_45:
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
    DXGFASTMUTEX::Release(v9);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 16));
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v2 + 16), (struct DXGADAPTER *)v2);
  return 0LL;
}
