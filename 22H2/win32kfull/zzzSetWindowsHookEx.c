/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C006F810
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C006F550 (NtUserSetWindowsHookEx.c)
 *     ?NtUserSetWindowsHookAW_Body@@YAPEAUHHOOK__@@HP6A_JH_K_J@ZK@Z @ 0x1C01CC11C (-NtUserSetWindowsHookAW_Body@@YAPEAUHHOOK__@@HP6A_JH_K_J@ZK@Z.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C006F404 (zzzUnhookWindowsHookEx.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C006F4E4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0071024 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00710DC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     AddHmodDependency @ 0x1C007154C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C007163C (GetHmodTableIndex.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C007176C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C013A458 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01BB5CC (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x1C01BB67C (WPP_RECORDER_AND_TRACE_SF_l.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5, char a6, _DWORD *a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  char v10; // si
  int v11; // edx
  int v12; // r8d
  PDEVICE_OBJECT v13; // r9
  bool v14; // bl
  __int16 v15; // cx
  struct tagTHREADINFO *v16; // rax
  int v17; // ecx
  struct tagTHREADINFO *v18; // r15
  _QWORD *v19; // r12
  int v20; // edx
  int v21; // r8d
  bool v22; // bl
  int v23; // edx
  int v24; // r8d
  PDEVICE_OBJECT v25; // r10
  bool v26; // bl
  __int16 v27; // cx
  char *v28; // rbx
  __int64 v29; // rcx
  int v30; // edx
  int v31; // r8d
  bool v32; // bl
  ACCESS_MASK v33; // ebx
  bool v34; // zf
  _QWORD *v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rsi
  int HmodTableIndex; // eax
  int v39; // edx
  int v40; // r8d
  bool v41; // bl
  char v42; // bl
  int v43; // edx
  __int64 *v44; // r9
  PRKPROCESS *v45; // rcx
  int v46; // edx
  _DWORD *v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // edx
  int v51; // r8d
  _QWORD *v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _UNKNOWN **v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  char v61; // [rsp+20h] [rbp-188h]
  __int16 v62; // [rsp+30h] [rbp-178h]
  char v63; // [rsp+60h] [rbp-148h]
  char v64; // [rsp+61h] [rbp-147h]
  __int64 v65; // [rsp+68h] [rbp-140h] BYREF
  int v66; // [rsp+70h] [rbp-138h]
  int v67; // [rsp+74h] [rbp-134h]
  __int64 *v68; // [rsp+78h] [rbp-130h]
  __int64 v69; // [rsp+80h] [rbp-128h]
  int v70; // [rsp+88h] [rbp-120h]
  int v71; // [rsp+90h] [rbp-118h]
  _DWORD *v72; // [rsp+98h] [rbp-110h]
  struct tagTHREADINFO *v73; // [rsp+A0h] [rbp-108h]
  __int128 v74; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-F0h]
  __int64 v76; // [rsp+C0h] [rbp-E8h]
  struct tagTHREADINFO *v77; // [rsp+C8h] [rbp-E0h]
  __int64 v78; // [rsp+D8h] [rbp-D0h]
  _QWORD *v79; // [rsp+E0h] [rbp-C8h]
  __int64 v80; // [rsp+E8h] [rbp-C0h]
  __int64 v81; // [rsp+F0h] [rbp-B8h]
  _BYTE v82[48]; // [rsp+100h] [rbp-A8h] BYREF
  _BYTE v83[48]; // [rsp+130h] [rbp-78h] BYREF

  v7 = a4;
  v8 = a3;
  v68 = a2;
  v69 = a1;
  v78 = a1;
  v80 = a3;
  v71 = a4;
  v72 = a7;
  v74 = 0LL;
  v75 = 0LL;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    UserSetLastError(1426LL);
    v25 = WPP_GLOBAL_Control;
    v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v27 = 10;
    goto LABEL_181;
  }
  v10 = byte_1C0317021[a4];
  v63 = v10;
  if ( !a5 )
  {
    UserSetLastError(1427LL);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = 11;
    goto LABEL_110;
  }
  v16 = PtiCurrentShared();
  v18 = v16;
  v77 = v16;
  v73 = v16;
  if ( v8 )
  {
    if ( (v10 & 2) != 0 )
    {
      if ( *(_QWORD *)(v8 + 456) != *((_QWORD *)v16 + 57) )
      {
        UserSetLastError(5LL);
        v13 = WPP_GLOBAL_Control;
        v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v11 = 14;
        v62 = 14;
        goto LABEL_111;
      }
      v28 = (char *)v16 + 424;
      v19 = (_QWORD *)((char *)v16 + 424);
      if ( *((_QWORD *)v16 + 53) != *(_QWORD *)(v8 + 424) )
      {
        if ( !a1 && (v10 & 0x24) == 0 )
        {
          UserSetLastError(5LL);
          v13 = WPP_GLOBAL_Control;
          v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v62 = 15;
          goto LABEL_111;
        }
        if ( !(unsigned __int8)Enforced() )
        {
          v29 = *(_QWORD *)(v8 + 424);
          if ( (*(_DWORD *)(v29 + 772) != *(_DWORD *)(*(_QWORD *)v28 + 772LL)
             || *(_DWORD *)(v29 + 776) != *(_DWORD *)(*(_QWORD *)v28 + 776LL))
            && (*(_DWORD *)(v8 + 488) & 0x400000) == 0 )
          {
            UserSetLastError(5LL);
            v13 = WPP_GLOBAL_Control;
            v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v62 = 16;
            goto LABEL_111;
          }
        }
        v17 = 12;
        if ( (*(_DWORD *)(v8 + 488) & 0xC) != 0 && (v10 & 0x10) == 0 )
        {
          UserSetLastError(1458LL);
          v32 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = v32;
            LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, v30, v31, (_DWORD)WPP_GLOBAL_Control);
          }
          return 0LL;
        }
      }
      goto LABEL_23;
    }
    UserSetLastError(1429LL);
    v25 = WPP_GLOBAL_Control;
    v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v27 = 13;
LABEL_181:
    LOBYTE(v23) = v26;
    WPP_RECORDER_AND_TRACE_SF_D(
      v25->AttachedDevice,
      v23,
      v24,
      (_DWORD)gFullLog,
      3,
      5,
      v27,
      (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids,
      v7);
    return 0LL;
  }
  if ( !a1 && (v10 & 0x24) == 0 )
  {
    UserSetLastError(1428LL);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = 12;
    goto LABEL_110;
  }
  v19 = (_QWORD *)((char *)v16 + 424);
LABEL_23:
  v79 = v19;
  v64 = v10 & 4;
  LOBYTE(v17) = v10 & 4;
  v67 = v17;
  v70 = v17;
  if ( (v10 & 4) != 0 )
  {
    v65 = 0xFFFFFFFF00004000uLL;
    if ( *(int *)(*v19 + 12LL) >= 0 && !(unsigned __int8)CheckAccess(*v19 + 888LL, &v65) )
    {
      UserSetLastError(5LL);
      v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = v22;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          5,
          18,
          (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids);
      }
      EtwTraceUIPISystemError(*v19, 0LL, 4LL);
      return 0LL;
    }
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
      v33 = 32;
    else
      v33 = 8;
  }
  else
  {
    v33 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v18 + 224), v33) )
  {
    UserSetLastError(5LL);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = 19;
    goto LABEL_110;
  }
  v34 = v33 == 8;
  v35 = (_QWORD *)((char *)v18 + 456);
  if ( !v34 && (*(_DWORD *)(*(_QWORD *)(*v35 + 40LL) + 64LL) & 4) != 0 )
  {
    UserSetLastError(1459LL);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = 20;
LABEL_110:
    v62 = v15;
LABEL_111:
    v61 = 3;
LABEL_121:
    LOBYTE(v11) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      v11,
      v12,
      (_DWORD)v13,
      v61,
      5,
      v62,
      (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids);
    return 0LL;
  }
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v83);
  LOBYTE(v36) = 5;
  v65 = HMAllocObject(v18, *v35, v36);
  v37 = v65;
  v76 = v65;
  v81 = v65;
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v83);
  if ( !v37 )
  {
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v62 = 21;
    v61 = 2;
    goto LABEL_121;
  }
  *(_DWORD *)(v37 + 68) = -1;
  if ( v69 )
  {
    HmodTableIndex = GetHmodTableIndex(v68);
    *(_DWORD *)(v37 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126LL);
      v41 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v39) = v41;
        LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v39,
          v40,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          5,
          22,
          (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids);
      }
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v82);
      HMFreeObject(v37);
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v82);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>(v82);
  v42 = 1;
  v43 = 1 << (v7 + 1);
  if ( v8 )
  {
    v44 = (__int64 *)(v8 + 8 * (v7 + 116));
    v68 = v44;
    *(_DWORD *)(v8 + 680) |= v43;
    if ( *(_QWORD *)(v8 + 480) )
    {
      v45 = *(PRKPROCESS **)(v8 + 424);
      if ( v45 == (PRKPROCESS *)*v19 )
      {
        v46 = 0;
      }
      else
      {
        KeAttachProcess(*v45);
        v46 = 1;
        v44 = v68;
      }
      v66 = v46;
      *(_DWORD *)(*(_QWORD *)(v8 + 480) + 56LL) = *(_DWORD *)(v8 + 680);
      if ( v46 )
      {
        KeDetachProcess();
        v44 = v68;
      }
    }
    v47 = (_DWORD *)(v81 + 64);
    v48 = v65;
  }
  else
  {
    v44 = (__int64 *)(*((_QWORD *)v18 + 58) + 8 * (v7 + 6));
    v47 = (_DWORD *)(v37 + 64);
    *(_DWORD *)(v37 + 64) |= 1u;
    *(_DWORD *)(**((_QWORD **)v18 + 58) + 16LL) |= v43;
    v8 = 0LL;
    v48 = v37;
  }
  *(_QWORD *)(v48 + 72) = v8;
  *v47 |= a6 & 0x42;
  *(_DWORD *)(v37 + 48) = v7;
  *(_QWORD *)(v37 + 56) = a5 - v69;
  v49 = *v44;
  *(_QWORD *)(v37 + 40) = *v44;
  if ( v72 )
    *v72 = v49 == 0;
  *v44 = v37;
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v82);
  if ( (_BYTE)v67 )
  {
    v52 = (_QWORD *)((char *)v18 + 416);
    *(_QWORD *)&v74 = *((_QWORD *)v18 + 52);
    *((_QWORD *)v18 + 52) = &v74;
    *((_QWORD *)&v74 + 1) = v37;
    HMLockObject(v37);
    if ( !(unsigned int)zzzJournalAttach(v18, 1) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v42 = 0;
      }
      v56 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v55) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v53) = v42;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v53,
          v55,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          5,
          23,
          (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids,
          v37);
      }
      if ( ThreadUnlock1(v56, v53, v55) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v37);
      return 0LL;
    }
    v37 = ThreadUnlock1(v54, v53, v55);
    if ( !v37 )
      return 0LL;
  }
  else
  {
    v52 = (_QWORD *)((char *)v73 + 416);
  }
  if ( (*(_DWORD *)(v37 + 64) & 1) != 0 && (v63 & 0x10) != 0 )
  {
    *((_DWORD *)v18 + 122) |= 0x40000u;
    KeSetPriorityThread(*(PKTHREAD *)v18, 14);
    if ( v64 )
    {
      *(_QWORD *)&v74 = *v52;
      *v52 = &v74;
      *((_QWORD *)&v74 + 1) = v37;
      HMLockObject(v37);
      GenerateMouseMove(0LL);
      v37 = ThreadUnlock1(v58, v57, v59);
      if ( (_DWORD)v7 == 1 )
        gppiInputProvider = *v19;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v42 = 0;
  }
  if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v50) = v42;
    LOBYTE(v51) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, v50, v51, (_DWORD)gFullLog);
  }
  return v37;
}
