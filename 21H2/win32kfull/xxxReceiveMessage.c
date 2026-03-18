/*
 * XREFs of xxxReceiveMessage @ 0x1C0058700
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C010756C (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010E6C0 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01E57EC (xxxUserYield.c)
 * Callees:
 *     FreeDelayedHooks @ 0x1C0023FA0 (FreeDelayedHooks.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SfnDWORD @ 0x1C004DC40 (SfnDWORD.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00514D0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     UnlinkSendListSms @ 0x1C00AC18C (UnlinkSendListSms.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C00AD240 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0159D38 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C0218A80 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r15
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  int v14; // eax
  _DWORD *v15; // rax
  int v16; // ebx
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 *v20; // rbx
  ULONG_PTR v21; // r9
  __int64 v22; // rdi
  __int64 *ThreadWin32Thread; // rax
  int *v24; // rdx
  int v25; // ebx
  _DWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned int *v30; // rdx
  unsigned int v31; // ecx
  unsigned int *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 *v38; // rax
  _DWORD *v39; // rcx
  int v40; // edi
  unsigned int v41; // r10d
  __int64 v42; // r8
  _DWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  void *v54; // rbx
  __int64 *v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // r10
  __m128i *v59; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rax
  __m128i *v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rax
  char v67; // al
  char v68; // al
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 *v76; // rax
  char v78; // [rsp+50h] [rbp-238h]
  __m128i *v79; // [rsp+58h] [rbp-230h]
  int v80; // [rsp+60h] [rbp-228h]
  __int64 v81; // [rsp+68h] [rbp-220h]
  __int64 v82; // [rsp+70h] [rbp-218h] BYREF
  __int64 v83; // [rsp+78h] [rbp-210h] BYREF
  _QWORD *v84; // [rsp+80h] [rbp-208h]
  __int64 v85; // [rsp+88h] [rbp-200h] BYREF
  unsigned int v86; // [rsp+90h] [rbp-1F8h]
  int v87; // [rsp+98h] [rbp-1F0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-1E8h]
  int v89; // [rsp+A8h] [rbp-1E0h]
  __int64 v90[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  int v91; // [rsp+C0h] [rbp-1C8h]
  int v92; // [rsp+C4h] [rbp-1C4h]
  __int64 v93; // [rsp+C8h] [rbp-1C0h]
  _QWORD *v94; // [rsp+D0h] [rbp-1B8h]
  __int64 v95[3]; // [rsp+D8h] [rbp-1B0h] BYREF
  int v96; // [rsp+F0h] [rbp-198h]
  int v97; // [rsp+F4h] [rbp-194h]
  __int64 v98; // [rsp+F8h] [rbp-190h]
  _QWORD *v99; // [rsp+100h] [rbp-188h]
  __int128 v100; // [rsp+108h] [rbp-180h] BYREF
  __int64 v101; // [rsp+118h] [rbp-170h]
  __int128 v102; // [rsp+120h] [rbp-168h] BYREF
  __int64 v103; // [rsp+130h] [rbp-158h]
  _QWORD v104[3]; // [rsp+138h] [rbp-150h] BYREF
  _DWORD v105[2]; // [rsp+150h] [rbp-138h] BYREF
  __int64 v106; // [rsp+158h] [rbp-130h]
  __int64 v107; // [rsp+160h] [rbp-128h]
  __int64 v108; // [rsp+168h] [rbp-120h]
  __int128 v109; // [rsp+170h] [rbp-118h]
  __int64 v110; // [rsp+188h] [rbp-100h]
  __int128 v111; // [rsp+190h] [rbp-F8h] BYREF
  __int64 v112; // [rsp+1A0h] [rbp-E8h]
  __int128 v113; // [rsp+1A8h] [rbp-E0h] BYREF
  __int64 v114; // [rsp+1B8h] [rbp-D0h]
  __m128i v115; // [rsp+1C0h] [rbp-C8h] BYREF
  __m128i v116; // [rsp+1D0h] [rbp-B8h]
  __int64 v117; // [rsp+1E0h] [rbp-A8h]
  _BYTE v118[56]; // [rsp+1E8h] [rbp-A0h] BYREF
  _BYTE v119[56]; // [rsp+220h] [rbp-68h] BYREF

  v3 = 0LL;
  v85 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v4 = (_QWORD *)(a1 + 520);
  v5 = *(_QWORD **)(a1 + 520);
  if ( v5 == (_QWORD *)(a1 + 520) )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFFFBF);
    v35 = *(_QWORD *)(a1 + 448);
    _InterlockedAnd((volatile signed __int32 *)(v35 + 4), 0xFFFFFFBF);
    return v35;
  }
  v6 = v5 - 2;
  v7 = v5 - 2;
  v82 = (__int64)(v5 - 2);
  v84 = v5 - 2;
  --*(_DWORD *)(a1 + 536);
  v8 = *v5;
  v9 = (_QWORD *)v5[1];
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v9 != v5 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v5 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v5 - 2);
  *((_DWORD *)v6 + 21) |= 0x4010u;
  if ( (_QWORD *)*v4 == v4 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFFFBF);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 4LL), 0xFFFFFFBF);
  }
  v10 = v6[4];
  if ( v10 )
  {
    v11 = *(unsigned __int64 **)(a1 + 480);
    v12 = *v11;
    if ( (*(_DWORD *)(v10 + 488) & 0x100) != 0 )
      v13 = v12 | 0x1000;
    else
      v13 = v12 & 0xFFFFFFFFFFFFEFFFuLL;
    *v11 = v13;
  }
  v14 = *((_DWORD *)v7 + 21);
  if ( (v14 & 0x200) != 0 )
  {
    if ( !v10 )
    {
      ThreadLock(v7[14], &v100);
      v14 = *((_DWORD *)v6 + 21);
    }
    if ( (v14 & 0x400) != 0 )
    {
      v39 = *(_DWORD **)(gptiCurrent + 448LL);
      v40 = *v39 & 8;
      *v39 |= 4u;
      **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
      v41 = *((_DWORD *)v84 + 26);
      if ( v41 == 576 || v41 == 281 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v41]])(
          v7[14],
          v41,
          v7[7],
          v7[9],
          v7[6],
          *(_QWORD *)(gpsi + 752LL),
          1,
          0LL);
      else
        SfnDWORD((__int64 *)v7[14], v41, v7[7], v7[9], v7[6], *(_QWORD *)(gpsi + 752LL));
      **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
      v43 = *(_DWORD **)(gptiCurrent + 448LL);
      v44 = *v43 | 8u;
      if ( !v40 )
        v44 = *v43 & 0xFFFFFFF7;
      *v43 = v44;
    }
    else
    {
      v55 = (__int64 *)v7[14];
      if ( v55 )
        v3 = *v55;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v7[6])(v3, *((unsigned int *)v84 + 26), v7[7], v7[9]);
    }
    if ( !v10 )
      ThreadUnlock1(v44, v43, v42);
    goto LABEL_37;
  }
  if ( (v14 & 7) == 0 )
  {
    v15 = *(_DWORD **)(a1 + 448);
    v16 = *v15 & 8;
    v80 = v16;
    v17 = *(_QWORD **)(a1 + 512);
    v84 = v17;
    *(_QWORD *)(a1 + 512) = v7;
    *v15 |= 2u;
    **(_DWORD **)(a1 + 448) |= 8u;
    if ( !v10 )
      ThreadLock(v7[14], &v100);
    if ( *((_DWORD *)v7 + 26) != 788 )
    {
      v86 = *(_DWORD *)(gptiCurrent + 1412LL);
      *(_DWORD *)(gptiCurrent + 1412LL) = *((_DWORD *)v7 + 32);
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v118);
      if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 0x20) != 0 )
      {
        v37 = *((unsigned int *)v7 + 26);
        if ( (unsigned int)v37 >= 0x400
          || !_bittest16(&MessageTable[v37], 0xEu)
          || (*(_BYTE *)(*(_QWORD *)(v7[14] + 40LL) + 18LL) & 4) == 0 )
        {
          v92 = 0;
          v38 = (__int64 *)v7[14];
          if ( v38 )
            v93 = *v38;
          else
            v93 = 0LL;
          v91 = v37;
          v90[1] = v7[11];
          v90[0] = v7[12];
          v94 = v7;
          xxxCallHook(0, 1uLL, (__int64)v90, 4);
        }
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v118);
      FreeDelayedHooks();
      if ( (*((_DWORD *)v7 + 21) & 7) != 0 )
        goto LABEL_29;
      v20 = (__int64 *)v7[14];
      if ( v20 )
      {
        v21 = 0LL;
        BugCheckParameter3 = 0LL;
        v110 = *v20;
        v89 = (unsigned __int16)v110;
        if ( (unsigned __int64)(unsigned __int16)v110 >= *(_QWORD *)(gpsi + 8LL)
          || (v21 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v110 * *((_DWORD *)&gSharedInfo + 4),
              *(__int64 **)(gpKernelHandleTable + 24LL * (unsigned __int16)v110) != v20)
          || *(_BYTE *)(v21 + 24) != 1 )
        {
          KeBugCheckEx(0x197u, 1uLL, v7[14], v21, 1uLL);
        }
        if ( (*(_BYTE *)(v20[5] + 18) & 4) != 0 )
        {
          v111 = 0LL;
          v112 = 0LL;
          v102 = 0LL;
          v103 = 0LL;
          v78 = 0;
          ThreadLock(v20, &v111);
          v49 = *((unsigned int *)v7 + 26);
          v50 = 0x1C0000000uLL;
          if ( (unsigned int)v49 < 0x400
            && (_bittest16(&MessageTable[v49], 9u) || (_DWORD)v49 == 537 && (v7[11] & 0x8000LL) != 0) )
          {
            *((_DWORD *)v7 + 21) |= 0x20u;
            if ( v10 )
            {
              v78 = 1;
              v54 = *(void **)v10;
              PushW32ThreadLock(*(_QWORD *)v10, &v102, DereferenceKernelStack);
              ObfReferenceObject(v54);
              PsReferenceKernelStack(v54);
              v50 = 0x1C0000000uLL;
            }
          }
          v51 = v7[14];
          v52 = *(_QWORD *)(*(_QWORD *)(v51 + 40) + 120LL);
          if ( v52 >= 7 )
            v53 = 0LL;
          else
            v53 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v52])(
                    v51,
                    *((unsigned int *)v7 + 26),
                    v7[11],
                    v7[12]);
          v85 = v53;
          if ( v78 )
            PopAndFreeW32ThreadLock(&v102);
          ThreadUnlock1(v51, v50, v48);
        }
        else
        {
          v104[2] = 0LL;
          v22 = 0LL;
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
            v22 = *ThreadWin32Thread;
          v104[0] = *(_QWORD *)(v22 + 416);
          *(_QWORD *)(v22 + 416) = v104;
          v104[1] = v20;
          HMLockObject(v20);
          v24 = *(int **)(gptiCurrent + 448LL);
          v25 = *v24;
          *v24 |= 0x10u;
          xxxSendMessageToClient(
            (struct tagWND *)v7[14],
            *((_DWORD *)v7 + 26),
            v7[11],
            v7[12],
            (struct tagSMS *)v7,
            1,
            &v85);
          v26 = *(_DWORD **)(gptiCurrent + 448LL);
          v27 = *v26 ^ ((unsigned __int8)v25 ^ (unsigned __int8)*v26) & 0x10u;
          *v26 = v27;
          ThreadUnlock1(v27, v26, v28);
          v17 = v84;
        }
        SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v119);
        if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x2000) != 0
          && (*((_DWORD *)v7 + 21) & 4) == 0 )
        {
          v74 = *((unsigned int *)v7 + 26);
          if ( (unsigned int)v74 >= 0x400
            || !_bittest16(&MessageTable[v74], 0xEu)
            || (v75 = v7[14]) != 0 && (*(_BYTE *)(*(_QWORD *)(v75 + 40) + 18LL) & 4) == 0 )
          {
            v97 = 0;
            v76 = (__int64 *)v7[14];
            if ( v76 )
              v98 = *v76;
            else
              v98 = 0LL;
            v96 = v74;
            v95[2] = v7[11];
            v95[1] = v7[12];
            v95[0] = v85;
            v99 = v7;
            xxxCallHook(0, 1uLL, (__int64)v95, 12);
          }
        }
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v119);
        FreeDelayedHooks();
        *(_DWORD *)(gptiCurrent + 1412LL) = v86;
      }
LABEL_28:
      v16 = v80;
LABEL_29:
      v29 = *((unsigned int *)v7 + 21);
      if ( (*((_DWORD *)v7 + 21) & 0x101) == 0x100 )
      {
        v105[1] = 0;
        v109 = 0LL;
        v29 = (unsigned int)v29 | 1;
        *((_DWORD *)v7 + 21) = v29;
        if ( (v29 & 4) == 0 )
        {
          v113 = 0LL;
          v114 = 0LL;
          v105[0] = 33;
          if ( (v29 & 0x400) != 0 )
            v105[0] = 289;
          v106 = v7[6];
          v107 = v7[7];
          v108 = v85;
          ThreadLock(v7[14], &v113);
          xxxInterSendMsgEx(
            (struct tagWND *)v7[14],
            *((_DWORD *)v7 + 26),
            0LL,
            0LL,
            0,
            (struct tagTHREADINFO *)v7[8],
            (__int64)v105,
            1,
            *((_DWORD *)v7 + 21) & 0x10000);
          ThreadUnlock1(v46, v45, v47);
        }
      }
      if ( !v10 )
        ThreadUnlock1(v29, v18, v19);
      *(_QWORD *)(a1 + 512) = v17;
      v30 = *(unsigned int **)(a1 + 448);
      v31 = *v30 | 2;
      if ( !v17 )
        v31 = *v30 & 0xFFFFFFFD;
      *v30 = v31;
      v32 = *(unsigned int **)(a1 + 448);
      v33 = *v32;
      if ( v16 )
        v34 = v33 | 8;
      else
        v34 = v33 & 0xFFFFFFF7;
      *v32 = v34;
      goto LABEL_37;
    }
    v115 = 0LL;
    v116 = 0LL;
    v117 = 0LL;
    v87 = 0;
    v56 = 0LL;
    v57 = 0LL;
    v58 = v7[12];
    v81 = v58;
    v59 = *(__m128i **)(v58 + 16);
    v79 = v59;
    v86 = *(_DWORD *)(*(_QWORD *)v58 + 48LL);
    BugCheckParameter3 = *(_QWORD *)(a1 + 1376);
    switch ( v86 )
    {
      case 0u:
      case 1u:
        if ( !v59 )
          goto LABEL_105;
        v115 = *v59;
        v116.m128i_i64[0] = v59[1].m128i_i64[0];
        if ( (unsigned int)(_mm_cvtsi128_si32(v115) - 512) > 0xE )
          goto LABEL_89;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v59);
        v61 = *((unsigned int *)v7 + 33);
        if ( ((*(_DWORD *)(CurrentProcessWin32Process + 280) >> 8) & 0x1FF) != ((*((_DWORD *)v7 + 33) >> 8) & 0x1FF) )
        {
          v83 = *(__int64 *)((char *)v115.m128i_i64 + 4);
          LogicalToPhysicalDPIPoint(&v83, &v83, v61, 0LL);
          v63 = PsGetCurrentProcessWin32Process(v62);
          PhysicalToLogicalDPIPoint(&v83, &v83, *(unsigned int *)(v63 + 280), 0LL);
          *(__int64 *)((char *)v115.m128i_i64 + 4) = v83;
        }
        goto LABEL_88;
      case 2u:
      case 0xAu:
        goto LABEL_104;
      case 7u:
        if ( !v59 )
          goto LABEL_105;
        v115 = *v59;
        v116 = v59[1];
        v117 = v59[2].m128i_i64[0];
        if ( ((*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 280) >> 8) & 0x1FF) != ((*((_DWORD *)v7 + 33) >> 8) & 0x1FF) )
        {
          LogicalToPhysicalDPIPoint(&v115, &v115, *((unsigned int *)v7 + 33), 0LL);
          v66 = PsGetCurrentProcessWin32Process(v65);
          PhysicalToLogicalDPIPoint(&v115, &v115, *(unsigned int *)(v66 + 280), 0LL);
        }
LABEL_88:
        v58 = v81;
        v59 = v79;
        goto LABEL_89;
      case 0xDu:
        if ( v59 )
        {
          v115 = *v59;
          v116.m128i_i64[0] = v59[1].m128i_i64[0];
          if ( *(_DWORD *)(v58 + 24) != -1 )
          {
            v67 = CheckAccess(v58 + 24, *(_QWORD *)(a1 + 424) + 880LL);
            v59 = v79;
            v58 = v81;
            if ( !v67 )
              v115.m128i_i32[2] |= 2u;
          }
        }
        goto LABEL_98;
      case 0xEu:
        InputTraceLogging::Mouse::HandleLowLevelHook();
        v59 = v79;
        v58 = v81;
        if ( v79 )
        {
          v115 = *v79;
          v116 = v79[1];
          if ( *(_DWORD *)(v81 + 24) != -1 )
          {
            v68 = CheckAccess(v81 + 24, *(_QWORD *)(a1 + 424) + 880LL);
            v59 = v79;
            v58 = v81;
            if ( !v68 )
              v115.m128i_i32[3] |= 2u;
          }
        }
LABEL_98:
        v56 = *(_QWORD *)(a1 + 1360);
        v57 = *(_QWORD *)(a1 + 1368);
        *(_QWORD *)(a1 + 1360) = *(_QWORD *)(v58 + 24);
        *(_QWORD *)(a1 + 1368) = *(_QWORD *)(v58 + 32);
        *(_QWORD *)(a1 + 1376) = &v115;
LABEL_89:
        if ( !v59 )
          goto LABEL_105;
        v64 = &v115;
        break;
      default:
        UserSetLastError(87LL);
        v58 = v81;
LABEL_104:
        v79 = 0LL;
LABEL_105:
        v64 = *(__m128i **)(v58 + 16);
        break;
    }
    v85 = xxxCallHook2(*(struct tagHOOK **)v58, *(_DWORD *)(v58 + 8), v7[11], (__int64)v64, &v87, 0);
    v69 = v86;
    if ( v86 - 13 <= 1 )
    {
      *(_QWORD *)(a1 + 1360) = v56;
      *(_QWORD *)(a1 + 1368) = v57;
      *(_QWORD *)(a1 + 1376) = BugCheckParameter3;
    }
    if ( (*((_DWORD *)v7 + 21) & 5) == 0 && v79 && (int)v69 >= 0 )
    {
      if ( (int)v69 <= 1 )
      {
        if ( (unsigned int)(v115.m128i_i32[0] - 512) <= 0xE )
        {
          v72 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 280) >> 8;
          v18 = 511LL;
          LOWORD(v72) = v72 & 0x1FF;
          if ( (_WORD)v72 != ((*((_DWORD *)v7 + 33) >> 8) & 0x1FF) )
          {
            v82 = *(__int64 *)((char *)v115.m128i_i64 + 4);
            v73 = PsGetCurrentProcessWin32Process(v72);
            LogicalToPhysicalDPIPoint(&v82, &v82, *(unsigned int *)(v73 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v82, &v82, *((unsigned int *)v7 + 33), 0LL);
            *(__int64 *)((char *)v115.m128i_i64 + 4) = v82;
          }
        }
      }
      else
      {
        if ( (_DWORD)v69 == 7 )
        {
          v70 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 280) >> 8;
          v18 = 511LL;
          LOWORD(v70) = v70 & 0x1FF;
          if ( (_WORD)v70 != ((*((_DWORD *)v7 + 33) >> 8) & 0x1FF) )
          {
            v71 = PsGetCurrentProcessWin32Process(v70);
            LogicalToPhysicalDPIPoint(&v115, &v115, *(unsigned int *)(v71 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v115, &v115, *((unsigned int *)v7 + 33), 0LL);
          }
          *v79 = v115;
          v79[1] = v116;
          v79[2].m128i_i64[0] = v117;
          goto LABEL_116;
        }
        if ( (_DWORD)v69 != 13 )
        {
          if ( (_DWORD)v69 == 14 )
          {
            *v79 = v115;
            v79[1] = v116;
          }
          goto LABEL_116;
        }
      }
      *v79 = v115;
      v79[1].m128i_i64[0] = v116.m128i_i64[0];
    }
LABEL_116:
    v17 = v84;
    goto LABEL_28;
  }
LABEL_37:
  LODWORD(v35) = EtwTraceEndRetrieveSendMessage(v7);
  v36 = *((_DWORD *)v7 + 21) & 0xFFFFBFFF;
  *((_DWORD *)v7 + 21) = v36;
  if ( (v36 & 8) != 0 )
  {
    LODWORD(v35) = UnlinkSendListSms(v7);
  }
  else if ( (v36 & 1) == 0 )
  {
    LODWORD(v35) = v85;
    v7[9] = v85;
    *((_DWORD *)v7 + 21) = v36 | 1;
    if ( v10 )
    {
      LODWORD(v35) = *(_DWORD *)(v10 + 488);
      if ( (v35 & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v10 + 448) + 8LL), 0x200u);
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v10 + 448) + 4LL), 0x200u);
        v35 = *(_QWORD *)(v10 + 448);
        if ( (*(_DWORD *)(v35 + 16) & 0x200) != 0 )
          LODWORD(v35) = KeSetEvent(*(PRKEVENT *)(v10 + 736), 2, 0);
      }
    }
  }
  return v35;
}
