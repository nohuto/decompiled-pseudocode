/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C00748EC
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C007446C (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
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
  int v16; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = 0LL;
  v16 = 0;
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(88LL);
  v4 = KeUserModeCallback(88LL, v7, 48LL, &v17, &v16);
  EtwTraceEndCallback(88LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  if ( v4 < 0 || v16 != 24 )
    return 0LL;
  v5 = (__int64 *)v17;
  if ( v17 + 8 < v17 || v17 + 8 > MmUserProbeAddress )
    v5 = (__int64 *)MmUserProbeAddress;
  result = *v5;
  v15 = *v5;
  return result;
}
