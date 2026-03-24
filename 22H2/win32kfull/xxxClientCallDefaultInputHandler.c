/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C0231320
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C0227D84 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(__int64 *a1)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF
  int v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+44h] [rbp-34h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+5Ch] [rbp-1Ch]
  int v12; // [rsp+64h] [rbp-14h]
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF
  char v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  v15 = 0;
  v7 = 0;
  v12 = 0;
  InputTraceLogging::Delivery::CallDefaultInputHandler((const struct tagMSG *)a1);
  v5 = *a1;
  v6 = *((_DWORD *)a1 + 2);
  v8 = a1[2];
  v9 = a1[3];
  v10 = *((_DWORD *)a1 + 8);
  v11 = *(__int64 *)((char *)a1 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v14);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(116LL);
  v2 = KeUserModeCallback(116LL, &v5, 48LL, &v16, &v15);
  EtwTraceEndCallback(116LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v14);
  if ( v2 < 0 || v15 != 24 )
    return 0LL;
  v3 = (__int64 *)v16;
  if ( v16 + 8 < v16 || v16 + 8 > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v13 = *v3;
  return result;
}
