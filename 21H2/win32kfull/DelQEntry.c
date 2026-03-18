/*
 * XREFs of DelQEntry @ 0x1C005BE3C
 * Callers:
 *     EditionDelQEntry @ 0x1C00039E0 (EditionDelQEntry.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     FindQMsg @ 0x1C0057C00 (FindQMsg.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00AB408 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00AC9C8 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     DestroyThreadsMessages @ 0x1C00F6000 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00F60B0 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C0105CE0 (SuspendThreadQueue.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C01095EC (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C016B120 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01DBF48 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01DC5A0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9DA0 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01EB954 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01EC898 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C01F6020 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C005806C (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01EA2A8 (FreePointerMessageParams.c)
 */

__int64 __fastcall DelQEntry(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdx
  __int64 result; // rax
  char v7; // dl
  int v8; // [rsp+20h] [rbp-58h]
  int v9; // [rsp+28h] [rbp-50h]

  v5 = *(_QWORD **)(a2 + 8);
  if ( v5 )
    *v5 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a1 == a2 )
    *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( *(_QWORD *)(a1 + 8) == a2 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  result = *(unsigned int *)(a2 + 100);
  if ( (result & 0x2000) == 0 && (result & 0x4000) == 0 && (result & 0x10000) == 0 )
  {
    --*(_DWORD *)(a1 + 16);
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (__int64)WPP_RECORDER_AND_TRACE_SF_qiqdd(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          v7,
                          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                          (__int64)WPP_GLOBAL_Control,
                          v8,
                          v9,
                          0x14u,
                          (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids);
  }
  if ( a3 )
  {
    if ( (*(_DWORD *)(a2 + 100) & 8) != 0 && !*(_DWORD *)(a2 + 96) )
    {
      if ( (unsigned int)IsPointerInputMessage(*(unsigned int *)(a2 + 24)) )
        FreePointerMessageParams(a2);
    }
    return Win32FreeToPagedLookasideList(QEntryLookaside, a2);
  }
  return result;
}
