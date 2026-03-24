/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C0051294
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0050EC0 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+38h] [rbp-40h] BYREF
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  char v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0LL;
  v17 = 0;
  v9 = 0;
  v7[0] = a1;
  if ( a2 )
    v3 = *a2;
  else
    v3 = 0LL;
  v7[1] = v3;
  v10 = *(_QWORD *)(a3 + 32);
  v8 = *(_DWORD *)(a3 + 28);
  v11 = *(_DWORD *)(a3 + 40);
  v12 = *(_DWORD *)(a3 + 44);
  v13 = *(_DWORD *)(a3 + 48);
  v14 = *(_DWORD *)(a3 + 52);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(88LL);
  v4 = KeUserModeCallback(88LL, v7, 48LL, &v18, &v17);
  EtwTraceEndCallback(88LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
  if ( v4 < 0 || v17 != 24 )
    return 0LL;
  v5 = (__int64 *)v18;
  if ( v18 + 8 < v18 || v18 + 8 > MmUserProbeAddress )
    v5 = (__int64 *)MmUserProbeAddress;
  result = *v5;
  v15 = *v5;
  return result;
}
