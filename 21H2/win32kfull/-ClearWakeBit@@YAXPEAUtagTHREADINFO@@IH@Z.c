/*
 * XREFs of ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C00FA4E0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C01F6020 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

void __fastcall ClearWakeBit(struct tagTHREADINFO *a1, int a2, int a3)
{
  if ( !a3 )
    goto LABEL_6;
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 54) + 40LL)
    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 54) + 388LL) & 0x20) != 0 )
      a2 &= ~2u;
LABEL_6:
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 8LL), ~a2);
  }
}
