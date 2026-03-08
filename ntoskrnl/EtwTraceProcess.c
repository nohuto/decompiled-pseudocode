/*
 * XREFs of EtwTraceProcess @ 0x1407E93B4
 * Callers:
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     PspExitProcess @ 0x1407E7B3C (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpWriteProcessStarted @ 0x1406BF738 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406BF9CC (EtwpWriteAppStateChangeSummary.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1407E885C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpInitStateChangeInfo @ 0x1407E88FC (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChange @ 0x1407E89B8 (EtwpWriteAppStateChange.c)
 *     EtwpWriteProcessEvent @ 0x1407E9594 (EtwpWriteProcessEvent.c)
 *     EtwpEnumerateAddressSpace @ 0x1407EC24C (EtwpEnumerateAddressSpace.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E3360 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(PRKPROCESS PROCESS, __int16 a2)
{
  unsigned __int8 **v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v9[112]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[416]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  memset(v10, 0, 0x198uLL);
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask[0] & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(PROCESS);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask[0] & 8) != 0 )
      EtwpLogProcessPerfCtrs(PROCESS);
  }
  EtwpWriteProcessEvent((int)PROCESS, (__int64)P, (__int64)&v7);
  v4 = (unsigned __int8 **)v7;
  if ( a2 == 769 && dword_140C042B8 && tlgKeywordOn((__int64)&dword_140C042B8, 0x600000000003LL) )
  {
    memset(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted((__int64)PROCESS, (int *)&v6, (__int64)v10, (unsigned __int16 *)P, v4);
    EtwpInitStateChangeInfo((__int64)PROCESS, (__int64)v9);
    *(_WORD *)v9 = 0;
    EtwpWriteAppStateChange();
    if ( !EtwpAppStateChangeSummaryShouldLogCommandLine((__int64)PROCESS) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary((__int64)PROCESS, v9, 0LL, (__int64)v10, (int *)&v6, (unsigned __int16 *)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
