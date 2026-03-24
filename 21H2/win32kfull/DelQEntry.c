/*
 * XREFs of DelQEntry @ 0x1C006684C
 * Callers:
 *     EditionDelQEntry @ 0x1C0007A20 (EditionDelQEntry.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C003ADE8 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     FindQMsg @ 0x1C00582A0 (FindQMsg.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00662E8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     DestroyThreadsMessages @ 0x1C00C16B0 (DestroyThreadsMessages.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00DA9C8 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     FreeMessageList @ 0x1C010D820 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C0117790 (SuspendThreadQueue.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E0D20 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E131C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1860 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF694 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F0E44 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01F1F38 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB5C0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0058670 (WPP_RECORDER_SF_qiqdd.c)
 *     FreeQEntry @ 0x1C0065D58 (FreeQEntry.c)
 *     IsHiddenByInputService @ 0x1C0066924 (IsHiddenByInputService.c)
 */

__int64 __fastcall DelQEntry(unsigned int **a1, unsigned int *a2, int a3)
{
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v6 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( v6 )
    *v6 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  if ( *a1 == a2 )
    *a1 = *(unsigned int **)a2;
  if ( a1[1] == a2 )
    a1[1] = (unsigned int *)*((_QWORD *)a2 + 1);
  result = IsHiddenByInputService(a2);
  if ( !(_DWORD)result )
  {
    result = (unsigned int)(*(_DWORD *)(v8 + 16) - 1);
    *(_DWORD *)(v8 + 16) = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = result;
      v10 = *(_DWORD *)(v8 + 20);
      result = WPP_RECORDER_SF_qiqdd(
                 (__int64)&WPP_RECORDER_INITIALIZED,
                 v8,
                 v9,
                 0x14u,
                 (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
                 a2,
                 *((_QWORD *)a2 + 17),
                 v8,
                 v10,
                 v11);
    }
  }
  if ( a3 )
    return FreeQEntry(a2);
  return result;
}
