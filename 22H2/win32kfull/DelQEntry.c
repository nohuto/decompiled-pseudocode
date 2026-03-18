/*
 * XREFs of DelQEntry @ 0x1C01184CC
 * Callers:
 *     EditionDelQEntry @ 0x1C0015D40 (EditionDelQEntry.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C0066AF4 (_anonymous_namespace_--RemoveEventMessage.c)
 *     FreeMessageList @ 0x1C009CCF0 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1C009CD50 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1C00A7F30 (SuspendThreadQueue.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C0115518 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0116EA4 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     FindQMsg @ 0x1C012AFC0 (FindQMsg.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0150B38 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C0153402 (DelegateCoalescePointerMessage.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B56F8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5C70 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B607C (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B64C4 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C3CE8 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01C58C8 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     NtUserGetRawInputBuffer @ 0x1C01D3540 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x1C0118064 (IsPointerInputClientMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C012B280 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     FreePointerMessageParams @ 0x1C0153266 (FreePointerMessageParams.c)
 */

__int64 __fastcall DelQEntry(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  _QWORD *v5; // rcx
  _DWORD *v6; // rbx
  PDEVICE_OBJECT v7; // rcx
  __int64 result; // rax
  int v9; // r9d
  unsigned int v10; // ecx
  __int64 v11; // rax

  v4 = a3;
  v5 = *(_QWORD **)(a2 + 8);
  v6 = (_DWORD *)a2;
  if ( v5 )
    *v5 = *(_QWORD *)a2;
  v7 = *(PDEVICE_OBJECT *)a2;
  if ( *(_QWORD *)a2 )
    v7->DriverObject = *(struct _DRIVER_OBJECT **)(a2 + 8);
  if ( *(_QWORD *)a1 == a2 )
    *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( *(_QWORD *)(a1 + 8) == a2 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  result = *(unsigned int *)(a2 + 100);
  if ( (result & 0x2000) == 0 && (result & 0x4000) == 0 && (result & 0x10000) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 16) - 1;
    *(_DWORD *)(a1 + 16) = v9;
    v7 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      result = WPP_RECORDER_AND_TRACE_SF_qiqdd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v9);
    }
  }
  if ( v6 == *(_DWORD **)(a1 + 32) )
    *(_QWORD *)(a1 + 32) = 0LL;
  if ( v4 )
  {
    if ( (v6[25] & 8) != 0 && !v6[24] )
    {
      v10 = v6[6];
      if ( v10 - 577 <= 3 || IsPointerInputClientMessage(v10) )
        FreePointerMessageParams(v6);
    }
    v11 = SGDGetUserSessionState(v7);
    return Win32FreeToPagedLookasideList(*(_QWORD *)(v11 + 16872), v6);
  }
  return result;
}
