/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A5F14
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0057600 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDesktopThreadWaiter @ 0x1C00A4844 (xxxDesktopThreadWaiter.c)
 *     xxxGetInputEvent @ 0x1C00A5800 (xxxGetInputEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *v1; // rdx

  *(_QWORD *)(*((_QWORD *)a1 + 60) + 8LL) = 0LL;
  v1 = (struct tagTHREADINFO *)*((unsigned int *)a1 + 122);
  LODWORD(v1) = (unsigned int)v1 & 0xFFFFFBFF;
  *(_DWORD *)(*((_QWORD *)a1 + 60) + 28LL) = (_DWORD)v1;
  *((_DWORD *)a1 + 122) &= ~0x400u;
  ForegroundBoost::UpdateProcessPriorityForSpinning(a1, v1);
  return 0LL;
}
