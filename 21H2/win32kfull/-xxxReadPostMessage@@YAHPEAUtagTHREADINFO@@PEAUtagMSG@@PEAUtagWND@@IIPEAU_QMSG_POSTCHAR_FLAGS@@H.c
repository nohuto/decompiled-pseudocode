/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0057CA0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0038F48 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     FindQMsg @ 0x1C00582A0 (FindQMsg.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0058670 (WPP_RECORDER_SF_qiqdd.c)
 *     IsPointerInputMessage @ 0x1C006B374 (IsPointerInputMessage.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C01358B4 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreePointerMessageParams @ 0x1C01EFA18 (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021CCF4 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        __int64 a4,
        unsigned int a5,
        struct _QMSG_POSTCHAR_FLAGS *a6,
        unsigned int a7)
{
  unsigned int *v9; // rdi
  int v10; // eax
  char *v11; // r14
  __int64 QMsg; // rax
  __int64 v13; // rbx
  unsigned int v14; // r12d
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r8d
  __int64 v21; // rdi
  _QWORD *v22; // rcx
  unsigned __int64 v23; // r15
  bool v24; // zf
  __int64 v25; // rax
  int v26; // ecx
  unsigned __int64 *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned int v30; // r15d
  _QWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v44; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  _QWORD *v47; // [rsp+58h] [rbp-60h]

  v9 = (unsigned int *)((char *)a1 + 488);
  v10 = *((_DWORD *)a1 + 122);
  if ( (v10 & 0x40000000) == 0 || *((_DWORD *)a1 + 206) )
  {
    v11 = (char *)a1 + 808;
    QMsg = FindQMsg(a1, (char *)a1 + 808);
    v13 = QMsg;
    if ( !QMsg )
    {
      if ( (*v9 & 0x40000000) != 0 && !*((_DWORD *)a1 + 206) )
      {
        v37 = a7;
        if ( a7 )
          *v9 &= ~0x40000000u;
        *(_QWORD *)a2 = 0LL;
        *((_DWORD *)a2 + 2) = 18;
        *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 146);
        *((_QWORD *)a2 + 3) = 0LL;
        *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v38 = *((_QWORD *)a1 + 54);
        v41 = *(_QWORD *)(v38 + 120);
        if ( v41 )
        {
          v40 = *(_QWORD *)(v41 + 16);
          goto LABEL_68;
        }
LABEL_76:
        v40 = *(_QWORD *)(v38 + 96);
        goto LABEL_68;
      }
      v30 = 1;
      v14 = a7;
LABEL_42:
      if ( !*((_DWORD *)v11 + 4) && (*v9 & 0x40000000) == 0 )
      {
        *(_WORD *)(*((_QWORD *)a1 + 56) + 6LL) &= 0xFEF7u;
        *(_WORD *)(*((_QWORD *)a1 + 56) + 4LL) &= ~0x100u;
      }
      if ( v14 )
      {
        if ( !v13 )
          return 0;
        v35 = *((_DWORD *)a2 + 2);
        if ( (unsigned int)(v35 - 256) <= 9 && v35 != 258 )
          *((_DWORD *)a1 + 336) &= ~1u;
      }
      if ( v13 )
        return v30;
      return 0;
    }
    if ( (*((_DWORD *)a1 + 308) & 0x2000) != 0 || (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) > 1 )
      v14 = a7;
    else
      v14 = 1;
    EtwTraceRetrievePostMessage(QMsg, v14);
    *((_DWORD *)a1 + 142) = *(_DWORD *)(v13 + 48);
    v15 = *(_QWORD *)((char *)a1 + 764);
    if ( v15 != *(_QWORD *)(v13 + 52) )
      *v9 |= 0x100000u;
    *((_DWORD *)a1 + 191) = *(_DWORD *)(v13 + 52);
    *((_DWORD *)a1 + 192) = *(_DWORD *)(v13 + 56);
    v16 = *(_QWORD *)(v13 + 16);
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v15)
      || (CurrentProcess = PsGetCurrentProcess(v18, v17, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v44),
          v24 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
          v9 = (unsigned int *)((char *)a1 + 488),
          v24) )
    {
      PsGetThreadWin32Thread(CurrentThread);
    }
    if ( (unsigned __int64)(unsigned __int16)v16 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_54;
    v21 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v16 * LODWORD(gSharedInfo[2]);
    v22 = (_QWORD *)HMPkheFromPhe(v21);
    v47 = v22;
    v23 = v16 >> 16;
    if ( (_WORD)v23 != *(_WORD *)(v21 + 26) && (_WORD)v23 != 0xFFFF )
    {
      if ( (_WORD)v23 || !PsGetCurrentProcessWow64Process(v22) )
        goto LABEL_53;
      v22 = v47;
    }
    if ( (*(_BYTE *)(v21 + 25) & 1) == 0 )
    {
      v24 = *(_BYTE *)(v21 + 24) == 1;
      v9 = (unsigned int *)((char *)a1 + 488);
      if ( v24 )
      {
        v25 = *v22;
LABEL_15:
        if ( v25 )
          v26 = *(_DWORD *)(*(_QWORD *)(v25 + 40) + 288LL);
        else
          v26 = *(_DWORD *)(*((_QWORD *)a1 + 53) + 280LL);
        *((_DWORD *)a1 + 193) = v26;
        *((_QWORD *)a1 + 97) = *(_QWORD *)(v13 + 80);
        *((_QWORD *)a1 + 72) = v13;
        *(_QWORD *)(*((_QWORD *)a1 + 54) + 408LL) = *(_QWORD *)(v13 + 72);
        *((_QWORD *)a1 + 155) = *(_QWORD *)(v13 + 120);
        *(_OWORD *)a2 = *(_OWORD *)(v13 + 16);
        *((_OWORD *)a2 + 1) = *(_OWORD *)(v13 + 32);
        *((_OWORD *)a2 + 2) = *(_OWORD *)(v13 + 48);
        if ( a6 )
        {
          *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v13 + 100) >> 14)) & 1;
          *(_DWORD *)a6 ^= ((unsigned __int8)*(_DWORD *)a6 ^ (unsigned __int8)(*(int *)(v13 + 100) >> 14)) & 2;
        }
        if ( v14 )
        {
          v27 = (unsigned __int64 *)*((_QWORD *)a1 + 60);
          v28 = *v27;
          if ( (*(_DWORD *)(v13 + 100) & 1) != 0 )
            v29 = v28 | 0x1000;
          else
            v29 = v28 & 0xFFFFFFFFFFFFEFFFuLL;
          *v27 = v29;
          v30 = 1;
          if ( *(_DWORD *)(*(_QWORD *)v11 + 24LL) == 786 )
            CheckRemoveHotkeyBit(a1, (struct tagMLIST *)v11);
          if ( (*((_DWORD *)a1 + 122) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
            return 0LL;
          v31 = *(_QWORD **)(v13 + 8);
          if ( v31 )
            *v31 = *(_QWORD *)v13;
          if ( *(_QWORD *)v13 )
            *(_QWORD *)(*(_QWORD *)v13 + 8LL) = *(_QWORD *)(v13 + 8);
          if ( *(_QWORD *)v11 == v13 )
            *(_QWORD *)v11 = *(_QWORD *)v13;
          if ( *((_QWORD *)v11 + 1) == v13 )
            *((_QWORD *)v11 + 1) = *(_QWORD *)(v13 + 8);
          v32 = *(_DWORD *)(v13 + 100);
          if ( (v32 & 0x10000) == 0 && (v32 & 0x20000) == 0 && (v32 & 0x80000) == 0 )
          {
            v33 = *((_DWORD *)v11 + 4) - 1;
            *((_DWORD *)v11 + 4) = v33;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qiqdd(
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                (_DWORD)v27,
                v20,
                20,
                (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
                v13,
                *(_QWORD *)(v13 + 136),
                (char)v11,
                *((_DWORD *)v11 + 5),
                v33);
          }
          if ( (*(_DWORD *)(v13 + 100) & 8) != 0
            && !*(_DWORD *)(v13 + 96)
            && (unsigned int)IsPointerInputMessage(*(unsigned int *)(v13 + 24)) )
          {
            FreePointerMessageParams(v13);
          }
          Win32FreeToPagedLookasideList(QEntryLookaside, v13);
        }
        else
        {
          v30 = 1;
          *((_QWORD *)a1 + 72) = 1LL;
        }
        v34 = *((_DWORD *)a2 + 2);
        if ( (unsigned int)(v34 + 2147482655) <= 7 )
        {
          *((_DWORD *)a2 + 2) = v34 & 0x7FFFFFFF;
          xxxDDETrackGetMessageHook(a2);
          if ( !v14 && v13 == FindQMsg(a1, v11) )
          {
            *(_OWORD *)(v13 + 16) = *(_OWORD *)a2;
            *(_OWORD *)(v13 + 32) = *((_OWORD *)a2 + 1);
            *(_OWORD *)(v13 + 48) = *((_OWORD *)a2 + 2);
          }
        }
        goto LABEL_42;
      }
LABEL_54:
      v25 = 0LL;
      goto LABEL_15;
    }
LABEL_53:
    v9 = (unsigned int *)((char *)a1 + 488);
    goto LABEL_54;
  }
  v37 = a7;
  if ( a7 )
    *v9 = v10 & 0xBFFFFFFF;
  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 18;
  *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 146);
  *((_QWORD *)a2 + 3) = 0LL;
  *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v38 = *((_QWORD *)a1 + 54);
  v39 = *(_QWORD *)(v38 + 120);
  if ( !v39 )
    goto LABEL_76;
  v40 = *(_QWORD *)(v39 + 16);
LABEL_68:
  *(_QWORD *)((char *)a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(v40 + 424) + 280LL));
  EtwTraceRetrievePseudoMessage(a1, a2, v37);
  return 1LL;
}
