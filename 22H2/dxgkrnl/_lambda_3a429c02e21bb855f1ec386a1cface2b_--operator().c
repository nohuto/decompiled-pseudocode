/*
 * XREFs of _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C01374D4
 * Callers:
 *     _lambda_3dc479c6339d8ea3367aebfddfa054a6_::_lambda_invoker_cdecl_ @ 0x1C001A380 (_lambda_3dc479c6339d8ea3367aebfddfa054a6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009BA0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000A258 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     MonitorGetCCDMonitorID @ 0x1C0133BCC (MonitorGetCCDMonitorID.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     MonitorGetMonitorType @ 0x1C01356A8 (MonitorGetMonitorType.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0137DA0 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C014D6FC (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall lambda_3a429c02e21bb855f1ec386a1cface2b_::operator()(unsigned int **a1, __int64 a2)
{
  unsigned int **v2; // rbx
  bool v3; // r12
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rcx
  char v14; // r14
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // si
  bool v28; // zf
  __int64 v29; // rsi
  __int64 v30; // rdx
  _OWORD *v31; // rax
  _OWORD *v32; // rcx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  int v42; // eax
  unsigned int v43; // eax
  struct HDXGMONITOR__ *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  int MonitorFromHandle; // r14d
  struct DXGMONITOR *v55; // rbx
  __int64 v56; // rcx
  struct _DEVICE_OBJECT *v57; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rbx
  _OWORD *v63; // rax
  _OWORD *v64; // rcx
  __int64 v65; // rdx
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  unsigned int v75; // edx
  unsigned int v76; // r8d
  __int64 v77; // rax
  int v78; // eax
  unsigned int v79; // r8d
  int v80; // eax
  int v81; // ecx
  int v82; // eax
  int v83; // ecx
  int v84; // eax
  int v85; // ecx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned int v100; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int **v101; // [rsp+28h] [rbp-D8h]
  PZZWSTR SymbolicLinkList; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGMONITOR *v103; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v105[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v106; // [rsp+50h] [rbp-B0h]
  char v107; // [rsp+58h] [rbp-A8h]
  _BYTE v108[560]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v109[1088]; // [rsp+290h] [rbp+190h] BYREF
  _DWORD v110[108]; // [rsp+6D0h] [rbp+5D0h] BYREF

  v2 = a1;
  v101 = a1;
  v3 = 0;
  v106 = a2;
  v107 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
  if ( *(_DWORD *)(a2 + 200) == 1 && *(_QWORD *)(a2 + 2696) )
  {
    ++**v2;
    v5 = *(_QWORD *)v2[1];
    v6 = **v2;
    if ( *(_DWORD *)(v5 + 4) >= v6 )
    {
      v62 = *(_QWORD *)(v5 + 8) + 560LL * (v6 - 1);
      memset(v108, 0, sizeof(v108));
      v63 = (_OWORD *)v62;
      v64 = v108;
      v65 = 4LL;
      do
      {
        v66 = v64[1];
        *v63 = *v64;
        v67 = v64[2];
        v63[1] = v66;
        v68 = v64[3];
        v63[2] = v67;
        v69 = v64[4];
        v63[3] = v68;
        v70 = v64[5];
        v63[4] = v69;
        v71 = v64[6];
        v63[5] = v70;
        v72 = v64[7];
        v64 += 8;
        v63[6] = v71;
        v63 += 8;
        *(v63 - 1) = v72;
        --v65;
      }
      while ( v65 );
      v73 = v64[1];
      *v63 = *v64;
      v74 = v64[2];
      v63[1] = v73;
      v63[2] = v74;
      *(_QWORD *)v62 = *(_QWORD *)(a2 + 316);
      RtlStringCbCopyNW(
        (char *)(v62 + 8),
        0LL,
        *(char **)(*(_QWORD *)(a2 + 1520) + 8LL),
        **(unsigned __int16 **)(a2 + 1520));
      v75 = *(_DWORD *)(v62 + 556) & 0xFFFFFFFD | (*(_BYTE *)(*(_QWORD *)(a2 + 2696) + 249LL) != 0 ? 2 : 0);
      *(_DWORD *)(v62 + 556) = v75;
      v76 = v75 & 0xFFFFFFFE | (*(_BYTE *)(*(_QWORD *)(a2 + 2696) + 250LL) != 0);
      *(_DWORD *)(v62 + 556) = v76;
      v77 = *(_QWORD *)(a2 + 2696);
      if ( *(_BYTE *)(v77 + 249) && *(_BYTE *)(v77 + 250)
        || (v78 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v78 = 4;
      }
      v79 = v78 | v76 & 0xFFFFFFFB;
      *(_DWORD *)(v62 + 556) = v79;
      *(_DWORD *)(v62 + 528) = *(_DWORD *)(a2 + 2596);
      *(_DWORD *)(v62 + 532) = *(_DWORD *)(*(_QWORD *)(a2 + 2696) + 80LL);
      *(_DWORD *)(v62 + 536) = *(_DWORD *)(a2 + 324);
      *(_DWORD *)(v62 + 540) = *(_DWORD *)(a2 + 328);
      *(_DWORD *)(v62 + 544) = *(_DWORD *)(a2 + 332);
      *(_DWORD *)(v62 + 548) = *(_DWORD *)(a2 + 336);
      *(_DWORD *)(v62 + 552) = *(_DWORD *)(a2 + 340);
      v80 = v79 ^ ((unsigned __int8)v79 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 348))) & 8;
      *(_DWORD *)(v62 + 556) = v80;
      v81 = v80 ^ ((unsigned __int8)v80 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 348))) & 0x10;
      *(_DWORD *)(v62 + 556) = v81;
      v82 = v81 ^ ((unsigned __int8)v81 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 348))) & 0x20;
      *(_DWORD *)(v62 + 556) = v82;
      v83 = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 348))) & 0x40;
      *(_DWORD *)(v62 + 556) = v83;
      v84 = v83 ^ (v83 ^ (4 * *(_DWORD *)(a2 + 348))) & 0x80;
      *(_DWORD *)(v62 + 556) = v84;
      v85 = v84 ^ (*(_DWORD *)(a2 + 348) ^ v84) & 0x100;
      *(_DWORD *)(v62 + 556) = v85;
      *(_DWORD *)(v62 + 556) = v85 ^ ((unsigned __int16)v85 ^ (unsigned __int16)(*(_DWORD *)(a2 + 348) >> 9)) & 0x200;
      v2 = v101;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 2696) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v104, v7);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 80) + 72LL));
    v9 = *(_QWORD *)(v7 + 80);
    v10 = v9 + 24;
    v11 = *(_QWORD *)(v9 + 24);
    if ( v11 != v9 + 24 )
    {
      v12 = v11 - 8;
      if ( v12 )
      {
        while ( 1 )
        {
          ++*v2[2];
          v8 = *(_QWORD *)v2[1];
          v13 = *v2[2];
          if ( *(_DWORD *)(v8 + 20) >= (unsigned int)v13 )
            break;
LABEL_29:
          v45 = *(_QWORD *)(v12 + 8);
          v12 = v45 - 8;
          if ( v45 == v10 )
            v12 = 0LL;
          if ( !v12 )
            goto LABEL_32;
        }
        v14 = 0;
        v100 = *(_DWORD *)(v12 + 24);
        if ( v100 != -1 )
        {
          v15 = *(_QWORD *)(a2 + 2696);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 96);
            if ( v16 )
            {
              if ( v16 == -168 )
              {
                v91 = WdLogNewEntry5_WdAssertion(v13, v8);
                WdLogEvent5_WdAssertion(v91);
              }
              KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
              v18 = v16 + 128;
              v19 = *(_QWORD *)(v16 + 128);
              if ( v19 != v16 + 128 )
              {
                v17 = 0LL;
                do
                {
                  v20 = v19 - 16;
                  if ( !v19 )
                    v20 = 0LL;
                  if ( !v20 )
                    break;
                  if ( *(_DWORD *)(v20 + 44) == v100 )
                  {
                    if ( *(_DWORD *)(v20 + 432) != 1 )
                      v20 = *(_QWORD *)(v20 + 440);
                    if ( v20 )
                    {
                      if ( v16 == -168 )
                      {
                        v92 = WdLogNewEntry5_WdAssertion(v18, 0LL);
                        WdLogEvent5_WdAssertion(v92);
                      }
                      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
                      if ( *(_DWORD *)(v20 + 432) != 1 )
                      {
                        v93 = WdLogNewEntry5_WdAssertion(v49, v48);
                        WdLogEvent5_WdAssertion(v93);
                      }
                      KeEnterCriticalRegion();
                      ExAcquireResourceSharedLite((PERESOURCE)(v20 + 296), 1u);
                      IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled((DXGMONITOR *)v20);
                      v51 = (struct _ERESOURCE *)(v20 + 296);
                      v27 = IsVirtualModeSuportDisabled;
                      ExReleaseResourceLite(v51);
                      KeLeaveCriticalRegion();
                      goto LABEL_22;
                    }
                    break;
                  }
                  v19 = *(_QWORD *)(v20 + 16);
                }
                while ( v19 != v18 );
              }
              v21 = WdLogNewEntry5_WdTrace(v18, v17);
              v24 = v100;
              *(_QWORD *)(v21 + 32) = v16;
              *(_QWORD *)(v21 + 24) = v24;
              if ( v16 == -168 )
              {
                v94 = WdLogNewEntry5_WdAssertion(v23, v22);
                WdLogEvent5_WdAssertion(v94);
              }
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
              v26 = WdLogNewEntry5_WdDmmEvent(v25);
              *(_QWORD *)(v26 + 24) = v24;
              *(_QWORD *)(v26 + 32) = a2;
              WdLogEvent5_WdDmmEvent(v26);
              v27 = 0;
LABEL_22:
              if ( v27 )
              {
                v3 = 1;
                v14 = 1;
              }
              else
              {
                v28 = *(_BYTE *)(v15 + 249) == 0;
                v3 = *(_BYTE *)(v15 + 250) == 0;
                v14 = v28;
              }
              v2 = v101;
              goto LABEL_25;
            }
            v87 = WdLogNewEntry5_WdError(v13, v8);
            *(_QWORD *)(v87 + 24) = a2;
            WdLogEvent5_WdError(v87);
            v90 = WdLogNewEntry5_WdAssertion(v89, v88);
            *(_QWORD *)(v90 + 24) = -1073741811LL;
            WdLogEvent5_WdAssertion(v90);
            v14 = 0;
          }
          else
          {
            v86 = WdLogNewEntry5_WdError(v13, v8);
            *(_QWORD *)(v86 + 24) = 9262LL;
            WdLogEvent5_WdError(v86);
          }
          v3 = 0;
        }
LABEL_25:
        v29 = *(_QWORD *)(*(_QWORD *)v2[1] + 24LL) + 1076LL * (*v2[2] - 1);
        memset(v109, 0, 0x434uLL);
        v30 = 8LL;
        v31 = v109;
        v32 = (_OWORD *)v29;
        do
        {
          v33 = v31[1];
          *v32 = *v31;
          v34 = v31[2];
          v32[1] = v33;
          v35 = v31[3];
          v32[2] = v34;
          v36 = v31[4];
          v32[3] = v35;
          v37 = v31[5];
          v32[4] = v36;
          v38 = v31[6];
          v32[5] = v37;
          v39 = v31[7];
          v31 += 8;
          v32[6] = v38;
          v32 += 8;
          *(v32 - 1) = v39;
          --v30;
        }
        while ( v30 );
        v40 = v31[1];
        *v32 = *v31;
        v41 = v31[2];
        v42 = *((_DWORD *)v31 + 12);
        v32[1] = v40;
        v32[2] = v41;
        *((_DWORD *)v32 + 12) = v42;
        *(_QWORD *)v29 = *(_QWORD *)(a2 + 316);
        *(_DWORD *)(v29 + 8) = *(_DWORD *)(v12 + 24);
        *(_DWORD *)(v29 + 1052) = *(_DWORD *)(v12 + 88);
        *(_DWORD *)(v29 + 1072) = (!v3 ? 2 : 0) | (v14 == 0 ? 4 : 0) | *(_DWORD *)(v29 + 1072) & 0xFFFFFFF8 | (*(_QWORD *)(v12 + 112) != 0LL);
        v3 = 0;
        v43 = (DMMVIDEOPRESENTTARGET::IsTargetForceable((DMMVIDEOPRESENTTARGET *)v12) != 0 ? 0x10 : 0) | *(_DWORD *)(v29 + 1072) & 0xFFFFFFEF;
        *(_DWORD *)(v29 + 1056) = 0;
        *(_DWORD *)(v29 + 1072) = v43;
        *(_DWORD *)(v29 + 1060) = *(_DWORD *)(v12 + 124);
        *(_DWORD *)(v29 + 1064) = *(_DWORD *)(v12 + 128);
        *(_DWORD *)(v29 + 1068) = *(_DWORD *)(v12 + 96);
        v44 = *(struct HDXGMONITOR__ **)(v12 + 112);
        if ( !v44 )
          goto LABEL_28;
        memset(v110, 0, 0x1A4uLL);
        v103 = 0LL;
        MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v44, &v103);
        if ( MonitorFromHandle < 0 )
          goto LABEL_61;
        v55 = v103;
        if ( !v103 )
        {
          v95 = WdLogNewEntry5_WdAssertion(v53, v52);
          WdLogEvent5_WdAssertion(v95);
          v98 = WdLogNewEntry5_WdAssertion(v97, v96);
          WdLogEvent5_WdAssertion(v98);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v55 + 296), 1u);
        if ( *((_DWORD *)v55 + 108) == 1 && (*((_DWORD *)v55 + 10) & 0x10) == 0 )
        {
          v99 = WdLogNewEntry5_WdDmmEvent(v56);
          *(_QWORD *)(v99 + 24) = v55;
          WdLogEvent5_WdDmmEvent(v99);
          ExReleaseResourceLite((PERESOURCE)((char *)v55 + 296));
          KeLeaveCriticalRegion();
          v3 = 0;
          goto LABEL_63;
        }
        memset(&v110[41], 0, 0x100uLL);
        v57 = (struct _DEVICE_OBJECT *)*((_QWORD *)v55 + 7);
        if ( !v57 || !*((_QWORD *)v55 + 12) )
          goto LABEL_54;
        SymbolicLinkList = 0LL;
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v57, 0, &SymbolicLinkList);
        MonitorFromHandle = DeviceInterfaces;
        if ( DeviceInterfaces < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v60, v59) + 24) = DeviceInterfaces;
        }
        else
        {
          MonitorFromHandle = RtlStringCchCopyW((unsigned __int16 *)&v110[41], 0x80uLL, SymbolicLinkList);
          ExFreePoolWithTag(SymbolicLinkList, 0);
          if ( MonitorFromHandle >= 0 )
          {
            HIWORD(v110[41]) = 92;
LABEL_54:
            MonitorFromHandle = DXGMONITOR::_FillMonitorDeviceInfo(v55, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v110);
            if ( MonitorFromHandle == -1071841279 )
              MonitorFromHandle = 0;
            if ( MonitorFromHandle >= 0 && (v110[5] & 1) == 0 && !LOWORD(v110[9]) )
              v110[5] |= 2u;
          }
        }
        ExReleaseResourceLite((PERESOURCE)((char *)v55 + 296));
        KeLeaveCriticalRegion();
        v3 = 0;
LABEL_61:
        if ( MonitorFromHandle >= 0 )
          RtlStringCchCopyW((unsigned __int16 *)(v29 + 532), 0x104uLL, (const unsigned __int16 *)&v110[41]);
LABEL_63:
        MonitorGetCCDMonitorID(*(struct HDXGMONITOR__ **)(v12 + 112), 0x104u, (unsigned __int16 *)(v29 + 12));
        v61 = (*(_DWORD *)(v29 + 1072) ^ (*(_DWORD *)(v12 + 556) >> 3)) & 8;
        v100 = 0;
        *(_DWORD *)(v29 + 1072) ^= v61;
        if ( (int)MonitorGetMonitorType(*(struct HDXGMONITOR__ **)(v12 + 112), &v100) >= 0 )
        {
          switch ( v100 )
          {
            case 2u:
              *(_DWORD *)(v29 + 1056) = 2;
              break;
            case 3u:
              *(_DWORD *)(v29 + 1056) = 3;
              break;
            case 4u:
              *(_DWORD *)(v29 + 1056) = 4;
              break;
            default:
              v2 = v101;
              if ( v100 == 5 )
                *(_DWORD *)(v29 + 1056) = 5;
              else
                *(_DWORD *)(v29 + 1056) = 1;
              goto LABEL_28;
          }
        }
        v2 = v101;
LABEL_28:
        v10 = v9 + 24;
        goto LABEL_29;
      }
    }
LABEL_32:
    ReferenceCounted::Release((ReferenceCounted *)(v9 + 64), v8);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v104 + 40), v46);
  }
  if ( v107 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
  return 0LL;
}
