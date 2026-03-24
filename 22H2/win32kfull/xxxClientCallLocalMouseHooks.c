/*
 * XREFs of xxxClientCallLocalMouseHooks @ 0x1C02317E4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallLocalMouseHooks(int a1, __int128 *a2, int a3)
{
  int v3; // ebx
  ULONG64 v4; // rcx
  _DWORD v6[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v7; // [rsp+48h] [rbp-40h]
  __int128 v8; // [rsp+58h] [rbp-30h]
  __int64 v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+70h] [rbp-18h]
  int v11; // [rsp+74h] [rbp-14h]
  char v12; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF
  char v14; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v15 = 0LL;
  v13 = 0;
  v6[1] = 0;
  v11 = 0;
  v6[0] = a1;
  v7 = *a2;
  v8 = a2[1];
  v9 = *((_QWORD *)a2 + 4);
  v10 = a3;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v14);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(120LL);
  v3 = KeUserModeCallback(120LL, v6, 56LL, &v15, &v13);
  EtwTraceEndCallback(120LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v14);
  if ( v3 < 0 || v13 != 24 )
    return 0LL;
  v4 = v15;
  if ( v15 + 8 < v15 || v15 + 8 > MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  return *(_QWORD *)v4;
}
