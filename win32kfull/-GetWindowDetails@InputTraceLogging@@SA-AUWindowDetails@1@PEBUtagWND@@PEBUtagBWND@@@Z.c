/*
 * XREFs of ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C0143726
 * Callers:
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C0010D24 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C00723D0 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     xxxWindowFromPoint @ 0x1C00D6B18 (xxxWindowFromPoint.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00D6C70 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C022070C (-ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputTraceLogging::GetWindowDetails(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // r8
  __int64 v6; // rax
  const unsigned __int16 *v7; // rax
  __int64 v8; // rdx
  struct _KTHREAD *v9; // rcx
  unsigned int ThreadId; // eax
  PETHREAD *v11; // rcx

  v2 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v6 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)(a2 + 136) + 104LL);
    if ( *(_DWORD *)(v6 + 184) )
      v7 = *(const unsigned __int16 **)(a2 + 184);
    else
      v7 = &word_1C03142AC;
    v8 = *(_QWORD *)(v5 + 424);
    v9 = *(struct _KTHREAD **)v5;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = v8 + 976;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v8 + 56);
    ThreadId = (unsigned int)PsGetThreadId(v9);
    v11 = *(PETHREAD **)(a2 + 264);
    *(_DWORD *)(a1 + 28) = ThreadId;
    if ( v11 )
      v2 = (unsigned int)PsGetThreadId(*v11);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 260);
    *(_DWORD *)(a1 + 32) = v2;
  }
  return a1;
}
