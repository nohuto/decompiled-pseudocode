/*
 * XREFs of EtwTraceProcess @ 0x14075540C
 * Callers:
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     PspExitProcess @ 0x140751944 (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140208890 (IoSetThreadHardErrorMode.c)
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADAFC (EtwpEnumerateAddressSpace.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140751E68 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteProcessStarted @ 0x140754060 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x1407542F4 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1407543B0 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1407555EC (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChange @ 0x1407E35F8 (EtwpWriteAppStateChange.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E6200 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(__int64 a1, __int16 a2)
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
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(a1, 0LL, (int *)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(a1);
  }
  EtwpWriteProcessEvent(a1, (__int64)P, (__int64)&v7);
  v4 = (unsigned __int8 **)v7;
  if ( a2 == 769 && dword_140C042E8 && tlgKeywordOn((__int64)&dword_140C042E8, 0x600000000003LL) )
  {
    memset(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted(a1, (int *)&v6, (__int64)v10, (unsigned __int16 *)P, v4);
    EtwpInitStateChangeInfo(a1, (__int64)v9);
    *(_WORD *)v9 = 0;
    EtwpWriteAppStateChange(v9);
    if ( !EtwpAppStateChangeSummaryShouldLogCommandLine(a1) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary(a1, v9, 0LL, (__int64)v10, (int *)&v6, (unsigned __int16 *)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
