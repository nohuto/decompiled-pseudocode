void __fastcall _ShellHandwritingDelegationReassignInputMessage(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        struct tagQMSG *a3)
{
  int v3; // r15d
  __int64 v7; // rdi
  __int64 v8; // r9
  char v9; // si
  char v10; // dl
  char v11; // r8
  struct tagQMSG *MsgInsertionPoint; // rax
  struct tagQMSG *v13; // rcx
  _QWORD *v14; // rax
  BOOL v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+28h] [rbp-60h]

  v3 = *((_DWORD *)a2 + 318);
  InputTraceLogging::DManip::ShellHandwritingDelegationReassignMessage(a3);
  v7 = *((_QWORD *)a2 + 54);
  DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a3, 0);
  v8 = *((_QWORD *)a1 + 54);
  v9 = 1;
  if ( *(struct tagQMSG **)(v8 + 88) == a3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v10 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v11 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v11 = 0;
    }
    if ( v10 || v11 )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (__int64)gFullLog,
        5u,
        0x12u,
        0xCu,
        (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
        v8,
        *(_QWORD *)(v8 + 88));
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= 0xF7FFFFEF;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v7, a3);
  v13 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v14 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v14 )
      *v14 = a3;
    else
      *(_QWORD *)(v7 + 24) = a3;
    *(_QWORD *)a3 = v13;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v13 + 1);
    *((_QWORD *)v13 + 1) = a3;
  }
  else
  {
    if ( *(_QWORD *)(v7 + 24) )
    {
      **(_QWORD **)(v7 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v7 + 32);
    }
    else
    {
      *(_QWORD *)(v7 + 24) = a3;
    }
    *(_QWORD *)(v7 + 32) = a3;
  }
  ++*(_DWORD *)(v7 + 40);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qiqdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v7 + 24,
      v18,
      v19,
      0xDu,
      (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
  v15 = IsPointerInputMessage(*((_DWORD *)a3 + 6));
  if ( (v3 & 0x2000) != 0 )
  {
    if ( !v15 || !(unsigned int)DelegateChainingResetAndCoalescePointerMessage(v17, v16, a3) )
    {
      *((_DWORD *)a3 + 25) = *((_DWORD *)a3 + 25) & 0xFFFFFF9F | 0x20;
LABEL_36:
      WakeSomeone(v7, (__int64)a2, *((_DWORD *)a3 + 6), a3);
    }
  }
  else if ( !v15 || !(unsigned int)DelegateCoalescePointerMessage((__int64)a2, 0, (__int64)a3) )
  {
    goto LABEL_36;
  }
}
