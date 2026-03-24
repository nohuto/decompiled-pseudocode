/*
 * XREFs of xxxReceiveMessage @ 0x1C0059000
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00588D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C011CBA4 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C012CCE4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01EAB7C (xxxUserYield.c)
 * Callees:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059F10 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C005A2F0 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     UnlinkSendListSms @ 0x1C006A330 (UnlinkSendListSms.c)
 *     SfnDWORD @ 0x1C006B3C0 (SfnDWORD.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C021DA40 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  _QWORD *v4; // rbx
  __int64 *v5; // rsi
  struct tagSMS *v6; // r12
  __int64 *v7; // rcx
  __int64 **v8; // rax
  __int64 v9; // r15
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  int v13; // eax
  _DWORD *v14; // rax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rax
  _QWORD *v18; // rdi
  ULONG_PTR v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  int *v26; // rdx
  int v27; // ebx
  _DWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int *v32; // rdx
  unsigned int v33; // ecx
  int *v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v41; // rcx
  int v42; // edi
  unsigned int v43; // r10d
  _DWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // bl
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  void *v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // r10
  __m128i *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v63; // ecx
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  __m128i *v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // ecx
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rax
  char v76; // al
  char v77; // al
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rax
  int v82; // edx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rax
  int v88; // edx
  int v89; // eax
  __int64 v90; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v93; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v95; // zf
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 *v98; // rax
  __int64 v100; // [rsp+50h] [rbp-1C8h]
  __m128i *v101; // [rsp+50h] [rbp-1C8h]
  __int64 v102; // [rsp+58h] [rbp-1C0h]
  int v103; // [rsp+60h] [rbp-1B8h]
  __int64 v104; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v105; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned int v106; // [rsp+78h] [rbp-1A0h]
  __int64 v107; // [rsp+80h] [rbp-198h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-190h]
  __int64 v109; // [rsp+90h] [rbp-188h] BYREF
  int v110; // [rsp+98h] [rbp-180h] BYREF
  __int128 v111; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v112; // [rsp+B0h] [rbp-168h]
  int v113; // [rsp+B8h] [rbp-160h]
  __int64 v114; // [rsp+C0h] [rbp-158h]
  __int64 v115[2]; // [rsp+C8h] [rbp-150h] BYREF
  int v116; // [rsp+D8h] [rbp-140h]
  __int64 v117; // [rsp+E0h] [rbp-138h]
  __int64 *v118; // [rsp+E8h] [rbp-130h]
  _QWORD v119[3]; // [rsp+F0h] [rbp-128h] BYREF
  __int128 v120; // [rsp+108h] [rbp-110h] BYREF
  __int64 v121; // [rsp+118h] [rbp-100h]
  _QWORD v122[3]; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v123[3]; // [rsp+138h] [rbp-E0h] BYREF
  __int64 v124[3]; // [rsp+150h] [rbp-C8h] BYREF
  int v125; // [rsp+168h] [rbp-B0h]
  __int64 v126; // [rsp+170h] [rbp-A8h]
  __int64 *v127; // [rsp+178h] [rbp-A0h]
  _DWORD v128[2]; // [rsp+180h] [rbp-98h] BYREF
  __int64 v129; // [rsp+188h] [rbp-90h]
  __int64 v130; // [rsp+190h] [rbp-88h]
  __int64 v131; // [rsp+198h] [rbp-80h]
  __int128 v132; // [rsp+1A0h] [rbp-78h]
  __m128i v133; // [rsp+1B8h] [rbp-60h] BYREF
  __m128i v134; // [rsp+1C8h] [rbp-50h]
  __int64 v135; // [rsp+1D8h] [rbp-40h]

  v2 = a1;
  v107 = a1;
  v3 = 0LL;
  v109 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v4 = (_QWORD *)(a1 + 520);
  v5 = *(__int64 **)(a1 + 520);
  if ( v5 == (__int64 *)(a1 + 520) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) &= ~0x40u;
    v36 = *(_QWORD *)(a1 + 448);
    *(_WORD *)(v36 + 4) &= ~0x40u;
    return v36;
  }
  v6 = (struct tagSMS *)(v5 - 2);
  v105 = (__int64)(v5 - 2);
  --*(_DWORD *)(a1 + 536);
  v7 = (__int64 *)*v5;
  v8 = (__int64 **)v5[1];
  if ( *(__int64 **)(*v5 + 8) != v5 || *v8 != v5 )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = (__int64)v8;
  *v5 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v5 - 2);
  *((_DWORD *)v5 + 17) |= 0x4010u;
  if ( (_QWORD *)*v4 == v4 )
  {
    *(_WORD *)(*(_QWORD *)(v2 + 448) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(v2 + 448) + 4LL) &= ~0x40u;
  }
  v9 = v5[2];
  v104 = v9;
  if ( v9 )
  {
    v10 = *(unsigned __int64 **)(a1 + 480);
    v11 = *v10;
    if ( (*(_DWORD *)(v9 + 488) & 0x100) != 0 )
      v12 = v11 | 0x1000;
    else
      v12 = v11 & 0xFFFFFFFFFFFFEFFFuLL;
    *v10 = v12;
  }
  v13 = *((_DWORD *)v5 + 17);
  if ( (v13 & 0x200) != 0 )
  {
    if ( !v9 )
    {
      v39 = v5[12];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v111 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v111;
      *((_QWORD *)&v111 + 1) = v39;
      if ( v39 )
        HMLockObject(v39);
    }
    if ( (*((_DWORD *)v5 + 17) & 0x400) != 0 )
    {
      v41 = *(_DWORD **)(gptiCurrent + 448LL);
      v42 = *v41 & 8;
      *v41 |= 4u;
      **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
      v43 = *((_DWORD *)v5 + 22);
      if ( v43 == 576 || v43 == 281 )
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v43]])(
          v5[12],
          v43,
          v5[5],
          v5[7],
          v5[4],
          *(_QWORD *)(gpsi + 752LL),
          1,
          0LL);
      else
        SfnDWORD(v5[12], v43, v5[5], v5[7], v5[4], *(_QWORD *)(gpsi + 752LL));
      **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
      v44 = *(_DWORD **)(gptiCurrent + 448LL);
      v45 = *v44 | 8u;
      if ( !v42 )
        v45 = *v44 & 0xFFFFFFF7;
      *v44 = v45;
    }
    else
    {
      v54 = (__int64 *)v5[12];
      if ( v54 )
        v3 = *v54;
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v5[4])(v3, *((unsigned int *)v5 + 22), v5[5], v5[7]);
    }
    if ( !v9 )
      ThreadUnlock1(v45);
    goto LABEL_42;
  }
  if ( (v13 & 7) == 0 )
  {
    v14 = *(_DWORD **)(a1 + 448);
    v15 = *v14 & 8;
    v103 = v15;
    v114 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = v6;
    *v14 |= 2u;
    **(_DWORD **)(a1 + 448) |= 8u;
    if ( !v9 )
    {
      v100 = v5[12];
      v38 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v111 = *(_QWORD *)(v38 + 416);
      *(_QWORD *)(v38 + 416) = &v111;
      *((_QWORD *)&v111 + 1) = v100;
      if ( v100 )
        HMLockObject(v100);
    }
    if ( *((_DWORD *)v5 + 22) == 788 )
    {
      v133 = 0LL;
      v134 = 0LL;
      v135 = 0LL;
      v110 = 0;
      v55 = 0LL;
      v56 = 0LL;
      v57 = v5[10];
      v102 = v57;
      v58 = *(__m128i **)(v57 + 16);
      v101 = v58;
      v106 = *(_DWORD *)(*(_QWORD *)v57 + 48LL);
      BugCheckParameter3 = *(_QWORD *)(a1 + 1376);
      switch ( v106 )
      {
        case 0u:
        case 1u:
          if ( !v58 )
            goto LABEL_124;
          v133 = *v58;
          v134.m128i_i64[0] = v58[1].m128i_i64[0];
          if ( (unsigned int)(_mm_cvtsi128_si32(v133) - 512) > 0xE )
            goto LABEL_101;
          v59 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 280) >> 8;
          LOWORD(v59) = v59 & 0x1FF;
          v60 = *((unsigned int *)v5 + 29);
          if ( (_WORD)v59 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_99;
          v61 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v59) + 280);
          LOBYTE(v61) = v61 & 0xF;
          if ( (_BYTE)v61 != 2
            || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v61),
                v63 = 1,
                (*(_DWORD *)(CurrentProcessWin32Process + 280) & 0x20000000) == 0) )
          {
            v63 = 0;
          }
          v60 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v64 = 1, (v60 & 0x20000000) == 0) )
            v64 = 0;
          if ( v63 != v64 )
          {
LABEL_99:
            v104 = *(__int64 *)((char *)v133.m128i_i64 + 4);
            LogicalToPhysicalDPIPoint(&v104, &v104, v60, 0LL);
            v66 = PsGetCurrentProcessWin32Process(v65);
            PhysicalToLogicalDPIPoint(&v104, &v104, *(unsigned int *)(v66 + 280), 0LL);
            *(__int64 *)((char *)v133.m128i_i64 + 4) = v104;
          }
          goto LABEL_100;
        case 2u:
        case 0xAu:
          goto LABEL_123;
        case 7u:
          if ( !v58 )
            goto LABEL_124;
          v133 = *v58;
          v134 = v58[1];
          v135 = v58[2].m128i_i64[0];
          v68 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 280) >> 8;
          LOWORD(v68) = v68 & 0x1FF;
          v69 = *((unsigned int *)v5 + 29);
          if ( (_WORD)v68 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_112;
          v70 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v68) + 280);
          LOBYTE(v70) = v70 & 0xF;
          if ( (_BYTE)v70 != 2
            || (v71 = PsGetCurrentProcessWin32Process(v70), v72 = 1, (*(_DWORD *)(v71 + 280) & 0x20000000) == 0) )
          {
            v72 = 0;
          }
          v69 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v73 = 1, (v69 & 0x20000000) == 0) )
            v73 = 0;
          if ( v72 != v73 )
          {
LABEL_112:
            LogicalToPhysicalDPIPoint(&v133, &v133, v69, 0LL);
            v75 = PsGetCurrentProcessWin32Process(v74);
            PhysicalToLogicalDPIPoint(&v133, &v133, *(unsigned int *)(v75 + 280), 0LL);
          }
LABEL_100:
          v57 = v102;
          v58 = v101;
          goto LABEL_101;
        case 0xDu:
          if ( v58 )
          {
            v133 = *v58;
            v134.m128i_i64[0] = v58[1].m128i_i64[0];
            if ( *(_DWORD *)(v57 + 24) != -1 )
            {
              v76 = CheckAccess(v57 + 24, *(_QWORD *)(a1 + 424) + 880LL);
              v58 = v101;
              v57 = v102;
              if ( !v76 )
                v133.m128i_i32[2] |= 2u;
            }
          }
          goto LABEL_117;
        case 0xEu:
          InputTraceLogging::Mouse::HandleLowLevelHook();
          v58 = v101;
          v57 = v102;
          if ( v101 )
          {
            v133 = *v101;
            v134 = v101[1];
            if ( *(_DWORD *)(v102 + 24) != -1 )
            {
              v77 = CheckAccess(v102 + 24, *(_QWORD *)(a1 + 424) + 880LL);
              v58 = v101;
              v57 = v102;
              if ( !v77 )
                v133.m128i_i32[3] |= 2u;
            }
          }
LABEL_117:
          v55 = *(_QWORD *)(a1 + 1360);
          v56 = *(_QWORD *)(a1 + 1368);
          *(_QWORD *)(a1 + 1360) = *(_QWORD *)(v57 + 24);
          *(_QWORD *)(a1 + 1368) = *(_QWORD *)(v57 + 32);
          *(_QWORD *)(a1 + 1376) = &v133;
LABEL_101:
          if ( !v58 )
            goto LABEL_124;
          v67 = &v133;
          break;
        default:
          UserSetLastError(87LL);
          v57 = v102;
LABEL_123:
          v101 = 0LL;
LABEL_124:
          v67 = *(__m128i **)(v57 + 16);
          break;
      }
      v109 = xxxCallHook2(*(struct tagHOOK **)v57, *(_DWORD *)(v57 + 8), v5[9], (__int64)v67, &v110, 0);
      v78 = v106;
      if ( v106 - 13 <= 1 )
      {
        *(_QWORD *)(a1 + 1360) = v55;
        *(_QWORD *)(a1 + 1368) = v56;
        *(_QWORD *)(a1 + 1376) = BugCheckParameter3;
      }
      if ( (*((_DWORD *)v5 + 17) & 5) != 0 || !v101 || (int)v78 < 0 )
        goto LABEL_33;
      if ( (int)v78 <= 1 )
      {
        if ( (unsigned int)(v133.m128i_i32[0] - 512) <= 0xE )
        {
          v85 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 280) >> 8;
          LOWORD(v85) = v85 & 0x1FF;
          if ( (_WORD)v85 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_154;
          v86 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v85) + 280);
          LOBYTE(v86) = v86 & 0xF;
          if ( (_BYTE)v86 != 2
            || (v87 = PsGetCurrentProcessWin32Process(v86), v88 = 1, (*(_DWORD *)(v87 + 280) & 0x20000000) == 0) )
          {
            v88 = 0;
          }
          v85 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v89 = 1, (v85 & 0x20000000) == 0) )
            v89 = 0;
          if ( v88 != v89 )
          {
LABEL_154:
            v105 = *(__int64 *)((char *)v133.m128i_i64 + 4);
            v90 = PsGetCurrentProcessWin32Process(v85);
            LogicalToPhysicalDPIPoint(&v105, &v105, *(unsigned int *)(v90 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v105, &v105, *((unsigned int *)v5 + 29), 0LL);
            *(__int64 *)((char *)v133.m128i_i64 + 4) = v105;
          }
        }
      }
      else
      {
        if ( (_DWORD)v78 == 7 )
        {
          v79 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 280) >> 8;
          LOWORD(v79) = v79 & 0x1FF;
          if ( (_WORD)v79 != ((*((_DWORD *)v5 + 29) >> 8) & 0x1FF) )
            goto LABEL_143;
          v80 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v79) + 280);
          LOBYTE(v80) = v80 & 0xF;
          if ( (_BYTE)v80 != 2
            || (v81 = PsGetCurrentProcessWin32Process(v80), v82 = 1, (*(_DWORD *)(v81 + 280) & 0x20000000) == 0) )
          {
            v82 = 0;
          }
          v79 = *((unsigned int *)v5 + 29);
          if ( (*((_DWORD *)v5 + 29) & 0xF) != 2 || (v83 = 1, (v79 & 0x20000000) == 0) )
            v83 = 0;
          if ( v82 != v83 )
          {
LABEL_143:
            v84 = PsGetCurrentProcessWin32Process(v79);
            LogicalToPhysicalDPIPoint(&v133, &v133, *(unsigned int *)(v84 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v133, &v133, *((unsigned int *)v5 + 29), 0LL);
          }
          *v101 = v133;
          v101[1] = v134;
          v101[2].m128i_i64[0] = v135;
          goto LABEL_33;
        }
        if ( (_DWORD)v78 != 13 )
        {
          if ( (_DWORD)v78 == 14 )
          {
            *v101 = v133;
            v101[1] = v134;
          }
          goto LABEL_33;
        }
      }
      *v101 = v133;
      v101[1].m128i_i64[0] = v134.m128i_i64[0];
    }
    else
    {
      v106 = *(_DWORD *)(gptiCurrent + 1412LL);
      *(_DWORD *)(gptiCurrent + 1412LL) = *((_DWORD *)v5 + 28);
      if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x20) != 0 )
      {
        v16 = *((unsigned int *)v5 + 22);
        if ( (unsigned int)v16 >= 0x400
          || (MessageTable[v16] & 0x4000) == 0
          || (*(_BYTE *)(*(_QWORD *)(v5[12] + 40) + 18LL) & 4) == 0 )
        {
          v17 = (__int64 *)v5[12];
          if ( v17 )
            v117 = *v17;
          else
            v117 = 0LL;
          v116 = v16;
          v115[1] = v5[9];
          v115[0] = v5[10];
          v118 = v5 - 2;
          xxxCallHook(0, 1uLL, (__int64)v115, 4);
        }
      }
      if ( (*((_DWORD *)v5 + 17) & 7) != 0 )
        goto LABEL_35;
      v18 = (_QWORD *)v5[12];
      if ( !v18 )
      {
LABEL_34:
        v2 = v107;
LABEL_35:
        v30 = *((unsigned int *)v5 + 17);
        if ( (*((_DWORD *)v5 + 17) & 0x101) == 0x100 )
        {
          v128[1] = 0;
          v132 = 0LL;
          v30 = (unsigned int)v30 | 1;
          *((_DWORD *)v5 + 17) = v30;
          if ( (v30 & 4) == 0 )
          {
            v123[2] = 0LL;
            v128[0] = 33;
            if ( (v30 & 0x400) != 0 )
              v128[0] = 289;
            v129 = v5[4];
            v130 = v5[5];
            v131 = v109;
            BugCheckParameter3 = v5[12];
            v46 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v123[0] = *(_QWORD *)(v46 + 416);
            *(_QWORD *)(v46 + 416) = v123;
            v123[1] = BugCheckParameter3;
            if ( BugCheckParameter3 )
              HMLockObject(BugCheckParameter3);
            xxxInterSendMsgEx(
              v5[12],
              *((unsigned int *)v5 + 22),
              0LL,
              0LL,
              0,
              v5[6],
              v128,
              1,
              *((_DWORD *)v5 + 17) & 0x10000);
            ThreadUnlock1(v47);
          }
        }
        if ( !v9 )
          ThreadUnlock1(v30);
        v31 = v114;
        *(_QWORD *)(a1 + 512) = v114;
        v32 = *(unsigned int **)(v2 + 448);
        v33 = *v32 | 2;
        if ( !v31 )
          v33 = *v32 & 0xFFFFFFFD;
        *v32 = v33;
        v34 = *(int **)(v2 + 448);
        v35 = *v34;
        if ( v15 )
          *v34 = v35 | 8;
        else
          *v34 = v35 & 0xFFFFFFF7;
        goto LABEL_42;
      }
      v19 = 0LL;
      BugCheckParameter3 = 0LL;
      v20 = (unsigned __int16)*v18;
      v113 = (unsigned __int16)*v18;
      if ( v20 >= *(_QWORD *)(gpsi + 8LL)
        || (v19 = gSharedInfo[1] + (unsigned int)(v20 * LODWORD(gSharedInfo[2])),
            *(_QWORD **)(gpKernelHandleTable + 24 * v20) != v18)
        || *(_BYTE *)(v19 + 24) != 1 )
      {
        KeBugCheckEx(0x197u, 1uLL, v5[12], v19, 1uLL);
      }
      if ( (*(_BYTE *)(v18[5] + 18LL) & 4) != 0 )
      {
        v119[2] = 0LL;
        v120 = 0LL;
        v121 = 0LL;
        v48 = 0;
        v49 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v119[0] = *(_QWORD *)(v49 + 416);
        *(_QWORD *)(v49 + 416) = v119;
        v119[1] = v18;
        HMLockObject(v18);
        v50 = *((unsigned int *)v5 + 22);
        if ( (unsigned int)v50 < 0x400
          && ((MessageTable[v50] & 0x200) != 0 || (_DWORD)v50 == 537 && (v5[9] & 0x8000) != 0) )
        {
          *((_DWORD *)v5 + 17) |= 0x20u;
          if ( v9 )
          {
            v53 = *(void **)v9;
            PushW32ThreadLock(*(_QWORD *)v9, &v120, DereferenceKernelStack);
            ObfReferenceObject(v53);
            PsReferenceKernelStack(v53);
            v48 = 1;
          }
        }
        v29 = v5[12];
        v51 = *(_QWORD *)(*(_QWORD *)(v29 + 40) + 120LL);
        if ( v51 >= 7 )
          v52 = 0LL;
        else
          v52 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))(&gServerHandlers)[v51])(
                  v29,
                  *((unsigned int *)v5 + 22),
                  v5[9],
                  v5[10]);
        v109 = v52;
        if ( v48 )
          PopAndFreeW32ThreadLock(&v120);
      }
      else
      {
        v122[2] = 0LL;
        BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread();
        v21 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(gpKernelHandleTable)
          || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v93),
              v95 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
              v21 = 0LL,
              v95) )
        {
          v25 = (__int64 *)PsGetThreadWin32Thread(BugCheckParameter3);
          if ( v25 )
            v21 = *v25;
        }
        v122[0] = *(_QWORD *)(v21 + 416);
        *(_QWORD *)(v21 + 416) = v122;
        v122[1] = v18;
        HMLockObject(v18);
        v26 = *(int **)(gptiCurrent + 448LL);
        v27 = *v26;
        *v26 |= 0x10u;
        xxxSendMessageToClient((struct tagWND *)v5[12], *((_DWORD *)v5 + 22), v5[9], v5[10], v6, 1, &v109);
        v28 = *(_DWORD **)(gptiCurrent + 448LL);
        v29 = *v28 ^ ((unsigned __int8)v27 ^ (unsigned __int8)*v28) & 0x10u;
        *v28 = v29;
      }
      ThreadUnlock1(v29);
      if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x2000) != 0
        && (*((_DWORD *)v5 + 17) & 4) == 0 )
      {
        v96 = *((unsigned int *)v5 + 22);
        if ( (unsigned int)v96 >= 0x400
          || (MessageTable[v96] & 0x4000) == 0
          || (v97 = v5[12]) != 0 && (*(_BYTE *)(*(_QWORD *)(v97 + 40) + 18LL) & 4) == 0 )
        {
          v98 = (__int64 *)v5[12];
          if ( v98 )
            v126 = *v98;
          else
            v126 = 0LL;
          v125 = v96;
          v124[2] = v5[9];
          v124[1] = v5[10];
          v124[0] = v109;
          v127 = v5 - 2;
          xxxCallHook(0, 1uLL, (__int64)v124, 12);
        }
      }
      *(_DWORD *)(gptiCurrent + 1412LL) = v106;
    }
LABEL_33:
    v15 = v103;
    goto LABEL_34;
  }
LABEL_42:
  LODWORD(v36) = EtwTraceEndRetrieveSendMessage(v6);
  v37 = *((_DWORD *)v5 + 17) & 0xFFFFBFFF;
  *((_DWORD *)v5 + 17) = v37;
  if ( (v37 & 8) != 0 )
  {
    LODWORD(v36) = UnlinkSendListSms(v6);
  }
  else if ( (v37 & 1) == 0 )
  {
    LODWORD(v36) = v109;
    v5[7] = v109;
    *((_DWORD *)v5 + 17) = v37 | 1;
    if ( v9 )
    {
      LODWORD(v36) = *(_DWORD *)(v9 + 488);
      if ( (v36 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v9 + 448) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v9 + 448) + 4LL) |= 0x200u;
        v36 = *(_QWORD *)(v9 + 448);
        if ( (*(_WORD *)(v36 + 10) & 0x200) != 0 )
          LODWORD(v36) = KeSetEvent(*(PRKEVENT *)(v9 + 736), 2, 0);
      }
    }
  }
  return v36;
}
