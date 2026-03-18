/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C00249B8
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C0024770 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C01FEB30 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C002468C (zzzUnhookWindowsHookEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0024DE0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     GetHmodTableIndex @ 0x1C0025248 (GetHmodTableIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C009A694 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     AddHmodDependency @ 0x1C00E6268 (AddHmodDependency.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C0159E2C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C015A0E0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C015A154 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E0DC0 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x1C01E0E70 (WPP_RECORDER_AND_TRACE_SF_l.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, _DWORD *a7)
{
  __int64 v7; // r13
  __int64 v8; // r15
  char v10; // bl
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  ACCESS_MASK v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // edx
  int v17; // r8d
  int HmodTableIndex; // eax
  char v19; // bl
  int v20; // edx
  __int64 *v21; // r8
  PRKPROCESS *v22; // rcx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r8d
  char v28; // cl
  PDEVICE_OBJECT v30; // r9
  bool v31; // bl
  __int16 v32; // cx
  int v33; // edx
  int v34; // r8d
  PDEVICE_OBJECT v35; // r10
  bool v36; // bl
  __int16 v37; // cx
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // edx
  int v41; // r8d
  bool v42; // bl
  __int64 v43; // rcx
  int v44; // edx
  int v45; // r8d
  bool v46; // bl
  int v47; // edx
  int v48; // r8d
  bool v49; // bl
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  _UNKNOWN **v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  char v57; // [rsp+20h] [rbp-158h]
  __int16 v58; // [rsp+30h] [rbp-148h]
  char v59; // [rsp+60h] [rbp-118h]
  __int64 v61; // [rsp+70h] [rbp-108h] BYREF
  int v62; // [rsp+78h] [rbp-100h]
  __int64 v63; // [rsp+80h] [rbp-F8h]
  int v64; // [rsp+88h] [rbp-F0h]
  _DWORD *v65; // [rsp+90h] [rbp-E8h]
  __int128 v66; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-D0h]
  __int64 v68; // [rsp+B0h] [rbp-C8h]
  __int64 v69; // [rsp+B8h] [rbp-C0h]
  __int64 v70; // [rsp+C0h] [rbp-B8h]
  __int64 v71; // [rsp+C8h] [rbp-B0h]
  _BYTE v72[48]; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE v73[48]; // [rsp+108h] [rbp-70h] BYREF

  v7 = a4;
  v8 = a3;
  v63 = a1;
  v70 = a1;
  v71 = a3;
  v64 = a4;
  v65 = a7;
  v66 = 0LL;
  v67 = 0LL;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    UserSetLastError(1426LL);
    v35 = WPP_GLOBAL_Control;
    v36 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v36 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v37 = 10;
    goto LABEL_182;
  }
  v10 = byte_1C02E8961[a4];
  v59 = v10;
  if ( !a5 )
  {
    UserSetLastError(1427LL);
    v30 = WPP_GLOBAL_Control;
    v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v32 = 11;
LABEL_135:
    v58 = v32;
LABEL_136:
    v57 = 3;
LABEL_145:
    LOBYTE(v16) = v31;
    WPP_RECORDER_AND_TRACE_SF_(
      v30->AttachedDevice,
      v16,
      v17,
      (_DWORD)v30,
      v57,
      12,
      v58,
      (__int64)&WPP_2f783c65cfeb33cb020ce7f53e61bce9_Traceguids);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  v69 = ThreadWin32Thread;
  if ( v8 )
  {
    if ( (v10 & 2) != 0 )
    {
      if ( *(_QWORD *)(v8 + 456) != *(_QWORD *)(ThreadWin32Thread + 456) )
      {
        UserSetLastError(5LL);
        v30 = WPP_GLOBAL_Control;
        v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v16 = 14;
        v58 = 14;
        goto LABEL_136;
      }
      if ( *(_QWORD *)(ThreadWin32Thread + 424) != *(_QWORD *)(v8 + 424) )
      {
        if ( !a1 && (v10 & 0x24) == 0 )
        {
          UserSetLastError(5LL);
          v30 = WPP_GLOBAL_Control;
          v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v58 = 15;
          goto LABEL_136;
        }
        if ( !(unsigned __int8)Enforced() )
        {
          v38 = *(_QWORD *)(v8 + 424);
          v39 = *(_QWORD *)(v12 + 424);
          if ( (*(_DWORD *)(v38 + 780) != *(_DWORD *)(v39 + 780) || *(_DWORD *)(v38 + 784) != *(_DWORD *)(v39 + 784))
            && (*(_DWORD *)(v8 + 488) & 0x400000) == 0 )
          {
            UserSetLastError(5LL);
            v30 = WPP_GLOBAL_Control;
            v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v58 = 16;
            goto LABEL_136;
          }
        }
        if ( (*(_DWORD *)(v8 + 488) & 0xC) != 0 && (v10 & 0x10) == 0 )
        {
          UserSetLastError(1458LL);
          v42 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v40) = v42;
            LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, v40, v41, (_DWORD)WPP_GLOBAL_Control);
          }
          return 0LL;
        }
      }
      goto LABEL_7;
    }
    UserSetLastError(1429LL);
    v35 = WPP_GLOBAL_Control;
    v36 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v36 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v37 = 13;
LABEL_182:
    LOBYTE(v33) = v36;
    WPP_RECORDER_AND_TRACE_SF_D(
      v35->AttachedDevice,
      v33,
      v34,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      12,
      v37,
      (__int64)&WPP_2f783c65cfeb33cb020ce7f53e61bce9_Traceguids,
      v7);
    return 0LL;
  }
  if ( !a1 && (v10 & 0x24) == 0 )
  {
    UserSetLastError(1428LL);
    v30 = WPP_GLOBAL_Control;
    v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v58 = 12;
    goto LABEL_136;
  }
LABEL_7:
  if ( (v10 & 4) != 0 )
  {
    v61 = 0xFFFFFFFF00004000uLL;
    v43 = *(_QWORD *)(v12 + 424);
    if ( *(int *)(v43 + 12) >= 0 && !(unsigned __int8)CheckAccess(v43 + 880, &v61) )
    {
      UserSetLastError(5LL);
      v46 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v44) = v46;
        LOBYTE(v45) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v44,
          v45,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          12,
          18,
          (__int64)&WPP_2f783c65cfeb33cb020ce7f53e61bce9_Traceguids);
      }
      EtwTraceUIPISystemError(*(_QWORD *)(v12 + 424), 0LL, 4LL);
      return 0LL;
    }
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_JournalingDisabled__private_reporting,
      25576270LL,
      0LL,
      0LL,
      &Feature_GdiEnableTestEscapeAPI_logged_traits,
      0);
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
      v13 = 32;
    else
      v13 = 8;
  }
  else
  {
    v13 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v12 + 888), v13) )
  {
    UserSetLastError(5LL);
    v30 = WPP_GLOBAL_Control;
    v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v32 = 20;
    goto LABEL_135;
  }
  if ( v13 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 456) + 40LL) + 64LL) & 4) != 0 )
  {
    UserSetLastError(1459LL);
    v30 = WPP_GLOBAL_Control;
    v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v32 = 21;
    goto LABEL_135;
  }
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(v73);
  LOBYTE(v14) = 5;
  v61 = HMAllocObject(v12, *(_QWORD *)(v12 + 456), v14);
  v15 = v61;
  v68 = v61;
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v73);
  if ( !v15 )
  {
    v30 = WPP_GLOBAL_Control;
    v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v58 = 22;
    v57 = 2;
    goto LABEL_145;
  }
  *(_DWORD *)(v15 + 68) = -1;
  if ( v63 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v15 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126LL);
      v49 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v47) = v49;
        LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_S(
          WPP_GLOBAL_Control->AttachedDevice,
          v47,
          v48,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          12,
          23,
          (__int64)&WPP_2f783c65cfeb33cb020ce7f53e61bce9_Traceguids,
          a2);
      }
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(v72);
      HMFreeObject(v15);
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v72);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>(v72);
  v19 = 1;
  v20 = 1 << (v7 + 1);
  if ( v8 )
  {
    v21 = (__int64 *)(v8 + 8 * (v7 + 115));
    *(_DWORD *)(v8 + 680) |= v20;
    if ( *(_QWORD *)(v8 + 480) )
    {
      v22 = *(PRKPROCESS **)(v8 + 424);
      if ( v22 == *(PRKPROCESS **)(v12 + 424) )
      {
        v23 = 0;
      }
      else
      {
        KeAttachProcess(*v22);
        v23 = 1;
        v21 = (__int64 *)(v8 + 8 * (v7 + 115));
      }
      v62 = v23;
      *(_DWORD *)(*(_QWORD *)(v8 + 480) + 56LL) = *(_DWORD *)(v8 + 680);
      if ( v23 )
      {
        KeDetachProcess();
        v21 = (__int64 *)(v8 + 8 * (v7 + 115));
      }
    }
    v24 = v61;
  }
  else
  {
    v21 = (__int64 *)(*(_QWORD *)(v12 + 464) + 8 * (v7 + 6));
    *(_DWORD *)(v15 + 64) |= 1u;
    *(_DWORD *)(**(_QWORD **)(v12 + 464) + 16LL) |= v20;
    v8 = 0LL;
    v24 = v15;
  }
  *(_QWORD *)(v24 + 72) = v8;
  *(_DWORD *)(v15 + 64) |= a6 & 0x42;
  *(_DWORD *)(v15 + 48) = v7;
  *(_QWORD *)(v15 + 56) = a5 - v63;
  v25 = *v21;
  *(_QWORD *)(v15 + 40) = *v21;
  if ( v65 )
    *v65 = v25 == 0;
  *v21 = v15;
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v72);
  v28 = v59;
  if ( (v59 & 4) != 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_JournalingDisabled__private_reporting,
      25576270LL,
      0LL,
      0LL,
      &Feature_GdiEnableTestEscapeAPI_logged_traits,
      0);
    *(_QWORD *)&v66 = *(_QWORD *)(v12 + 416);
    *(_QWORD *)(v12 + 416) = &v66;
    *((_QWORD *)&v66 + 1) = v15;
    HMLockObject(v15);
    if ( !(unsigned int)zzzJournalAttach((struct tagTHREADINFO *)v12, 1) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v19 = 0;
      }
      v53 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v50) = v19;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v50,
          v52,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          12,
          24,
          (__int64)&WPP_2f783c65cfeb33cb020ce7f53e61bce9_Traceguids,
          v15);
      }
      if ( ThreadUnlock1(v53, v50, v52) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v15);
      return 0LL;
    }
    v15 = ThreadUnlock1(v51, v50, v52);
    if ( !v15 )
      return 0LL;
    v28 = v59;
  }
  if ( (*(_DWORD *)(v15 + 64) & 1) != 0 && (v28 & 0x10) != 0 )
  {
    *(_DWORD *)(v12 + 488) |= 0x40000u;
    KeSetPriorityThread(*(PKTHREAD *)v12, 14);
    if ( (v59 & 4) != 0 )
    {
      *(_QWORD *)&v66 = *(_QWORD *)(v12 + 416);
      *(_QWORD *)(v12 + 416) = &v66;
      *((_QWORD *)&v66 + 1) = v15;
      HMLockObject(v15);
      GenerateMouseMove(0LL);
      v15 = ThreadUnlock1(v55, v54, v56);
      if ( (_DWORD)v7 == 1 )
        gppiInputProvider = *(_QWORD *)(v12 + 424);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v19 = 0;
  }
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = v19;
    LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, v26, v27, (_DWORD)WPP_GLOBAL_Control);
  }
  return v15;
}
