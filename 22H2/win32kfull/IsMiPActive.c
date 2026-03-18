/*
 * XREFs of IsMiPActive @ 0x1C00A1F08
 * Callers:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C01180A8 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0150A18 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x1C0150A62 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     IsMiPEnabledForThread @ 0x1C00A1F58 (IsMiPEnabledForThread.c)
 */

__int64 __fastcall IsMiPActive(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // eax

  if ( a2 == 1 || *(_QWORD *)(a1 + 608) || !(unsigned int)IsMiPEnabledForThread(a1) )
    return 0LL;
  if ( !v2 )
    return 1LL;
  v4 = *(_DWORD *)(v2 + 100);
  if ( (v4 & 0x20) != 0 )
    return 0LL;
  return (~v4 & 0x8000000u) >> 27;
}
