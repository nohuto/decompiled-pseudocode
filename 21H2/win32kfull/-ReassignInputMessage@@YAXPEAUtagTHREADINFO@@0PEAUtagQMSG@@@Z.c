/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E0D20
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00C15F8 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1860 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004F354 (WPP_RECORDER_SF_qq.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C0051608 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0058670 (WPP_RECORDER_SF_qiqdd.c)
 *     DelQEntry @ 0x1C006684C (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C006B374 (IsPointerInputMessage.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C01101B0 (GetAppCompatFlags2QuadWord.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C01E0444 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01E0F40 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01F1F38 (DelegateCoalescePointerMessage.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagQMSG *MsgInsertionPoint; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx

  InputTraceLogging::DManip::ReassignMessage(a3);
  v6 = *((_QWORD *)a2 + 54);
  DelQEntry((unsigned int **)(*((_QWORD *)a1 + 54) + 24LL), (unsigned int *)a3, 0);
  v7 = *((_QWORD *)a1 + 54);
  if ( *(struct tagQMSG **)(v7 + 80) == a3 )
  {
    v8 = *((_QWORD *)a1 + 54);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_qq(
        v8,
        5u,
        0x12u,
        0xAu,
        (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
        v7,
        *(_QWORD *)(v7 + 80));
      v8 = *((_QWORD *)a1 + 54);
    }
    *(_QWORD *)(v8 + 80) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v6, a3);
  v12 = (_QWORD *)(v6 + 24);
  v13 = (__int64)MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v14 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v14 )
      *v14 = a3;
    else
      *v12 = a3;
    *(_QWORD *)a3 = v13;
    *((_QWORD *)a3 + 1) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = a3;
  }
  else
  {
    if ( *v12 )
    {
      **(_QWORD **)(v6 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v6 + 32);
    }
    else
    {
      *v12 = a3;
    }
    *(_QWORD *)(v6 + 32) = a3;
  }
  v15 = *(_DWORD *)(v6 + 40) + 1;
  *(_DWORD *)(v6 + 40) = v15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qiqdd(
      v13,
      v10,
      v11,
      0xBu,
      (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
      a3,
      *((_QWORD *)a3 + 17),
      v6 + 24,
      *(_DWORD *)(v6 + 44),
      v15);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v16 = *((_DWORD *)a3 + 25);
      if ( (v16 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 54) + 136LL) )
        {
          v17 = *((_QWORD *)a3 + 1);
          if ( v17 )
          {
            if ( *(_DWORD *)(v17 + 24) == 512
              && *(_QWORD *)(v17 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v6 + 80) != v17
              && (v16 & 0x100) == 0 )
            {
              DelQEntry((unsigned int **)(v6 + 24), (unsigned int *)v17, 1);
            }
          }
        }
      }
    }
    WakeSomeone((struct tagQ *)v6, a2, *((_DWORD *)a3 + 6), a3);
  }
}
