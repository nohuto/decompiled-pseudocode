/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0213884
 * Callers:
 *     xxxHkCallHook @ 0x1C006C7F0 (xxxHkCallHook.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C0207D78 (-CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  _BYTE v12[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v13; // [rsp+34h] [rbp-B4h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-B0h] BYREF
  int v15; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-90h]
  __int128 v17; // [rsp+60h] [rbp-88h]
  __int128 v18; // [rsp+70h] [rbp-78h]
  _BYTE v19[48]; // [rsp+80h] [rbp-68h] BYREF
  int v20; // [rsp+B0h] [rbp-38h]
  __int64 v21; // [rsp+B8h] [rbp-30h]
  __int64 v22; // [rsp+C0h] [rbp-28h]

  v14[0] = 0LL;
  v13 = 0;
  memset_0(&v15, 0, 0x78uLL);
  v15 = a1;
  v16 = a2;
  *((_DWORD *)a3 + 7) = 0;
  v17 = *a3;
  v18 = a3[1];
  v21 = a4;
  v22 = a5;
  if ( a2 == 13 )
    return 0LL;
  if ( a2 == 14 )
    return 0LL;
  v20 = CopyDebugHookLParam(a2, (union _DEBUGLPARAM *)v19, (struct tagDEBUGHOOKINFO *)a3);
  *((_QWORD *)&v17 + 1) = 0LL;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  EtwTraceBeginCallback(43LL);
  v9 = KeUserModeCallback(43LL, &v15, 120LL, v14, &v13);
  EtwTraceEndCallback(43LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  if ( v9 < 0 || v13 != 24 )
    return 0LL;
  v10 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  result = *v10;
  v14[1] = *v10;
  return result;
}
