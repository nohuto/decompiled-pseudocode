/*
 * XREFs of fnHkINLPMSLLHOOKSTRUCT @ 0x1C0149A62
 * Callers:
 *     xxxHkCallHook @ 0x1C006C7F0 (xxxHkCallHook.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall fnHkINLPMSLLHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  _BYTE v12[4]; // [rsp+30h] [rbp-78h] BYREF
  int v13; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-70h] BYREF
  int v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+58h] [rbp-50h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  __int128 v19; // [rsp+70h] [rbp-38h]
  __int128 v20; // [rsp+80h] [rbp-28h]

  v14[0] = 0LL;
  v13 = 0;
  memset_0(&v15, 0, 0x40uLL);
  v15 = a1;
  v16 = a2;
  *((_DWORD *)a3 + 5) = 0;
  v19 = *a3;
  v20 = a3[1];
  v17 = a4;
  v18 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  EtwTraceBeginCallback(46LL);
  v9 = KeUserModeCallback(46LL, &v15, 64LL, v14, &v13);
  EtwTraceEndCallback(46LL);
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
