/*
 * XREFs of ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DB7A8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0107A0C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     xxxMNEndMenuStateInternal @ 0x1C021C050 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

MenuStateOwnerLockxxxUnlock *__fastcall MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        MenuStateOwnerLockxxxUnlock *this,
        struct tagMENUSTATE *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( gptiCurrent == *((_QWORD *)a2 + 4) )
      ++*((_DWORD *)a2 + 10);
    else
      *(_QWORD *)this = 0LL;
  }
  return this;
}
