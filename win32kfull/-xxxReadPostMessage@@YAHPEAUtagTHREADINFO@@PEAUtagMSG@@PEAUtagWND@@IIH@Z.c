__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  _DWORD *v8; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 **v15; // r14
  __int64 QMsg; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v24; // r12d
  int v25; // r8d
  _QWORD *v26; // rdx
  __int16 v27; // ax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ecx
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  _DWORD *v34; // r10
  _QWORD *v35; // rcx
  PDEVICE_OBJECT v36; // rcx
  int v37; // eax
  int v38; // r9d
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // [rsp+70h] [rbp-88h]
  __int64 v42; // [rsp+78h] [rbp-80h]
  _DWORD *v43; // [rsp+88h] [rbp-70h]
  _QWORD *v44; // [rsp+90h] [rbp-68h]

  v8 = (_DWORD *)((char *)a1 + 488);
  v43 = v8;
  if ( (*v8 & 0x40000000) == 0 || *((_DWORD *)a1 + 206) )
  {
    v10 = 0;
    v14 = 0;
    v9 = a6;
  }
  else
  {
    v9 = a6;
    if ( a6 )
      *v8 &= ~0x40000000u;
    v10 = 0;
    *(_QWORD *)a2 = 0LL;
    *((_DWORD *)a2 + 2) = 18;
    *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 146);
    *((_QWORD *)a2 + 3) = 0LL;
    *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v11 = *((_QWORD *)a1 + 54);
    v12 = *(_QWORD *)(v11 + 128);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 16);
    else
      v13 = *(_QWORD *)(v11 + 104);
    *(_QWORD *)((char *)a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(v13 + 424)
                                                                                           + 280LL));
    EtwTraceRetrievePseudoMessage(a1, a2, a6);
    v14 = 1;
  }
  if ( v14 )
    return 1LL;
  v15 = (__int64 **)((char *)a1 + 808);
  QMsg = FindQMsg(a1, (struct tagTHREADINFO *)((char *)a1 + 808), a5, 0);
  v17 = QMsg;
  if ( !QMsg )
  {
    v18 = *((_DWORD *)a1 + 122);
    if ( (v18 & 0x40000000) == 0 || *((_DWORD *)a1 + 206) )
    {
      v22 = 0;
    }
    else
    {
      if ( v9 )
        *((_DWORD *)a1 + 122) = v18 & 0xBFFFFFFF;
      *(_QWORD *)a2 = 0LL;
      *((_DWORD *)a2 + 2) = 18;
      *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 146);
      *((_QWORD *)a2 + 3) = 0LL;
      *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v19 = *((_QWORD *)a1 + 54);
      v20 = *(_QWORD *)(v19 + 128);
      if ( v20 )
        v21 = *(_QWORD *)(v20 + 16);
      else
        v21 = *(_QWORD *)(v19 + 104);
      *(_QWORD *)((char *)a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(v21 + 424)
                                                                                             + 280LL));
      EtwTraceRetrievePseudoMessage(a1, a2, v9);
      v22 = 1;
    }
    if ( v22 )
      return 1LL;
    goto LABEL_83;
  }
  v24 = 1;
  if ( (*((_DWORD *)a1 + 318) & 0x2000) == 0 && (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) <= 1 )
    v9 = 1;
  EtwTraceRetrievePostMessage(QMsg, v9);
  *((_DWORD *)a1 + 142) = *(_DWORD *)(v17 + 48);
  if ( *(_QWORD *)((char *)a1 + 764) != *(_QWORD *)(v17 + 52) )
    *((_DWORD *)a1 + 122) |= 0x100000u;
  *((_DWORD *)a1 + 191) = *(_DWORD *)(v17 + 52);
  *((_DWORD *)a1 + 192) = *(_DWORD *)(v17 + 56);
  v41 = *(_QWORD *)(v17 + 16);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)v41 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_37;
  v42 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v41;
  v26 = (_QWORD *)HMPkheFromPhe(v42);
  v44 = v26;
  v25 = 0x7FFF;
  v27 = WORD1(v41) & 0x7FFF;
  v28 = v42;
  if ( (WORD1(v41) & 0x7FFF) != *(_WORD *)(v42 + 26) && v27 != 0x7FFF )
  {
    if ( v27 || !PsGetCurrentProcessWow64Process(v42) )
      goto LABEL_37;
    v28 = v42;
    v26 = v44;
  }
  if ( (*(_BYTE *)(v28 + 25) & 1) != 0 || *(_BYTE *)(v28 + 24) != 1 )
  {
LABEL_37:
    v29 = 0LL;
    goto LABEL_38;
  }
  v29 = *v26;
LABEL_38:
  if ( v29 )
    v30 = *(_DWORD *)(*(_QWORD *)(v29 + 40) + 288LL);
  else
    v30 = *(_DWORD *)(*((_QWORD *)a1 + 53) + 280LL);
  *((_DWORD *)a1 + 193) = v30;
  *((_QWORD *)a1 + 97) = *(_QWORD *)(v17 + 80);
  *((_QWORD *)a1 + 72) = v17;
  *(_QWORD *)(*((_QWORD *)a1 + 54) + 408LL) = *(_QWORD *)(v17 + 72);
  *((_QWORD *)a1 + 161) = *(_QWORD *)(v17 + 120);
  *(_OWORD *)a2 = *(_OWORD *)(v17 + 16);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v17 + 32);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(v17 + 48);
  if ( v9 )
  {
    v31 = (unsigned __int64 *)*((_QWORD *)a1 + 60);
    v32 = *v31;
    if ( (*(_DWORD *)(v17 + 100) & 1) != 0 )
      v33 = v32 | 0x1000;
    else
      v33 = v32 & 0xFFFFFFFFFFFFEFFFuLL;
    *v31 = v33;
    v34 = (_DWORD *)((char *)a1 + 488);
    if ( *((_DWORD *)*v15 + 6) == 786 )
      CheckRemoveHotkeyBit(a1, v15);
    if ( (*v34 & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
      return 0LL;
    v35 = *(_QWORD **)(v17 + 8);
    if ( v35 )
      *v35 = *(_QWORD *)v17;
    v36 = *(PDEVICE_OBJECT *)v17;
    if ( *(_QWORD *)v17 )
      v36->DriverObject = *(struct _DRIVER_OBJECT **)(v17 + 8);
    if ( *v15 == (__int64 *)v17 )
      *v15 = *(__int64 **)v17;
    if ( *((_QWORD *)a1 + 102) == v17 )
      *((_QWORD *)a1 + 102) = *(_QWORD *)(v17 + 8);
    v37 = *(_DWORD *)(v17 + 100);
    if ( (v37 & 0x2000) == 0 && (v37 & 0x4000) == 0 && (v37 & 0x10000) == 0 )
      v24 = 0;
    if ( !v24 )
    {
      v38 = *((_DWORD *)a1 + 206) - 1;
      *((_DWORD *)a1 + 206) = v38;
      v36 = WPP_GLOBAL_Control;
      LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qiqdd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v31, v25, v38);
      }
    }
    if ( v17 == *((_QWORD *)a1 + 105) )
      *((_QWORD *)a1 + 105) = 0LL;
    if ( (*(_DWORD *)(v17 + 100) & 8) != 0 && !*(_DWORD *)(v17 + 96) && IsPointerInputMessage(*(_DWORD *)(v17 + 24)) )
      FreePointerMessageParams(v17);
    v39 = SGDGetUserSessionState(v36);
    Win32FreeToPagedLookasideList(*(_QWORD *)(v39 + 16872), v17);
  }
  else
  {
    *((_QWORD *)a1 + 72) = 1LL;
  }
  v40 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)(v40 + 2147482655) <= 7 )
  {
    *((_DWORD *)a2 + 2) = v40 & 0x7FFFFFFF;
    xxxDDETrackGetMessageHook(a2);
    if ( !v9 && v17 == FindQMsg(a1, (struct tagMLIST *)v15, a5, 0) )
    {
      *(_OWORD *)(v17 + 16) = *(_OWORD *)a2;
      *(_OWORD *)(v17 + 32) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v17 + 48) = *((_OWORD *)a2 + 2);
    }
  }
LABEL_83:
  if ( !*((_DWORD *)a1 + 206) && (*v43 & 0x40000000) == 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 8LL), 0xFFFFFEF7);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 4LL), 0xFFFFFEFF);
  }
  LOBYTE(v10) = v17 != 0;
  return v10;
}
