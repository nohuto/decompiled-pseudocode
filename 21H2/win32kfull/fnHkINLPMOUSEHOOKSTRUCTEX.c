/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0104010
 * Callers:
 *     xxxHkCallHook @ 0x1C0053C4C (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x1C0075F08 (xxxCallCtfHook.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int *a6)
{
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rcx
  _BYTE v11[4]; // [rsp+30h] [rbp-98h] BYREF
  int v12; // [rsp+34h] [rbp-94h] BYREF
  _QWORD v13[5]; // [rsp+38h] [rbp-90h] BYREF
  _DWORD v14[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v15; // [rsp+68h] [rbp-60h]
  __int64 v16; // [rsp+70h] [rbp-58h]
  __int64 v17; // [rsp+78h] [rbp-50h]
  int v18; // [rsp+80h] [rbp-48h]
  int v19; // [rsp+84h] [rbp-44h]
  __int128 v20; // [rsp+88h] [rbp-40h]
  __int128 v21; // [rsp+98h] [rbp-30h]
  __int64 v22; // [rsp+A8h] [rbp-20h]

  v13[0] = 0LL;
  v12 = 0;
  v14[1] = 0;
  v19 = 0;
  v14[0] = a1;
  v15 = a2;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 9) = 0;
  v20 = *a3;
  v21 = a3[1];
  v22 = *((_QWORD *)a3 + 4);
  v16 = a4;
  v17 = a5;
  v18 = *a6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v11);
  EtwTraceBeginCallback(44LL);
  v6 = KeUserModeCallback(44LL, v14, 80LL, v13, &v12);
  EtwTraceEndCallback(44LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v11);
  if ( v6 < 0 || v12 != 24 )
    return 0LL;
  v7 = (__int64 *)v13[0];
  if ( (unsigned __int64)(v13[0] + 8LL) < v13[0] || v13[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v13[1] = *v7;
  v9 = *(_DWORD **)(v13[0] + 16LL);
  if ( v9 + 1 < v9 || (unsigned __int64)(v9 + 1) > MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  *a6 ^= ((unsigned __int8)*v9 ^ (unsigned __int8)*a6) & 0x10;
  return v8;
}
