/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B68A8
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00D895C (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0143E38 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0038580 (IsPointerInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C0072420 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C014331C (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01466D2 (DelegateCoalescePointerMessage.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01B6B44 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  char v8; // dl
  char v9; // r8
  struct tagQMSG *MsgInsertionPoint; // rax
  struct tagQMSG *v11; // rcx
  _QWORD *v12; // rax
  char v13; // dl
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]

  InputTraceLogging::DManip::ReassignMessage(a3);
  v6 = *((_QWORD *)a2 + 54);
  DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a3, 0);
  v7 = *((_QWORD *)a1 + 54);
  if ( *(struct tagQMSG **)(v7 + 88) == a3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v8 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v9 = 0;
    }
    if ( v8 || v9 )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (__int64)gFullLog,
        5u,
        0x12u,
        0xAu,
        (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
        v7,
        *(_QWORD *)(v7 + 88));
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v6, a3);
  v11 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v12 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v12 )
      *v12 = a3;
    else
      *(_QWORD *)(v6 + 24) = a3;
    *(_QWORD *)a3 = v11;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v11 + 1);
    *((_QWORD *)v11 + 1) = a3;
  }
  else
  {
    if ( *(_QWORD *)(v6 + 24) )
    {
      **(_QWORD **)(v6 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v6 + 32);
    }
    else
    {
      *(_QWORD *)(v6 + 24) = a3;
    }
    *(_QWORD *)(v6 + 32) = a3;
  }
  ++*(_DWORD *)(v6 + 40);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v13 = 0;
  }
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qiqdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v6 + 24,
      v16,
      v17,
      0xBu,
      (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6))
    || !(unsigned int)DelegateCoalescePointerMessage((__int64)a2, 0, (__int64)a3) )
  {
    if ( _bittest64((const signed __int64 *)a2 + 81, 0x31u) )
    {
      if ( *((_DWORD *)a3 + 6) == 512 )
      {
        v14 = *((_DWORD *)a3 + 25);
        if ( (v14 & 0x40) != 0 )
        {
          if ( *(_QWORD *)(*((_QWORD *)a2 + 54) + 144LL) )
          {
            v15 = *((_QWORD *)a3 + 1);
            if ( v15 )
            {
              if ( *(_DWORD *)(v15 + 24) == 512
                && *(_QWORD *)(v15 + 16) == *((_QWORD *)a3 + 2)
                && *(_QWORD *)(v6 + 88) != v15
                && (v14 & 0x100) == 0 )
              {
                DelQEntry(v6 + 24, v15, 1);
              }
            }
          }
        }
      }
    }
    WakeSomeone(v6, (__int64)a2, *((_DWORD *)a3 + 6), a3);
  }
}
