/*
 * XREFs of fnHkINDWORD @ 0x1C00D7148
 * Callers:
 *     xxxHkCallHook @ 0x1C006C7F0 (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x1C00D6FB4 (xxxCallCtfHook.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINDWORD(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  _DWORD v12[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]
  __int64 v18; // [rsp+70h] [rbp-18h]
  char v19; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  v21 = 0LL;
  v20 = 0;
  v12[1] = 0;
  v17 = 0;
  v12[0] = a1;
  v13 = a2;
  v18 = a3;
  v14 = a4;
  v15 = a5;
  v6 = a6;
  v16 = *a6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(40LL);
  v7 = KeUserModeCallback(40LL, v12, 48LL, &v21, &v20);
  EtwTraceEndCallback(40LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  if ( v7 < 0 || v20 != 24 )
    return 0LL;
  v8 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v10 = *(_DWORD **)(v21 + 16);
  if ( v10 + 1 < v10 || (unsigned __int64)(v10 + 1) > MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v6 ^= ((unsigned __int8)*v10 ^ (unsigned __int8)*v6) & 0x10;
  return v9;
}
