/*
 * XREFs of ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C02081FC
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C02148C8 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(struct tagINTDDEINFO *a1)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  _BYTE v5[4]; // [rsp+30h] [rbp-88h] BYREF
  int v6; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v7[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v8; // [rsp+50h] [rbp-68h] BYREF
  __int128 v9; // [rsp+60h] [rbp-58h]
  __int128 v10; // [rsp+70h] [rbp-48h]
  __int128 v11; // [rsp+80h] [rbp-38h]
  __int64 v12; // [rsp+90h] [rbp-28h]

  v7[0] = 0LL;
  v6 = 0;
  v8 = *(_OWORD *)a1;
  v9 = *((_OWORD *)a1 + 1);
  v10 = *((_OWORD *)a1 + 2);
  v11 = *((_OWORD *)a1 + 3);
  v12 = *((_QWORD *)a1 + 8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v5);
  EtwTraceBeginCallback(63LL);
  v2 = KeUserModeCallback(63LL, &v8, 72LL, v7, &v6);
  EtwTraceEndCallback(63LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v5);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v9 + 1);
  if ( v2 < 0 || v6 != 24 )
    return 0LL;
  v3 = (__int64 *)v7[0];
  if ( (unsigned __int64)(v7[0] + 8LL) < v7[0] || v7[0] + 8LL > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v7[1] = *v3;
  return result;
}
