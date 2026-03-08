/*
 * XREFs of ClientWaitMessageExMPH @ 0x1C0006E60
 * Callers:
 *     NtUserWaitMessage @ 0x1C00D78A0 (NtUserWaitMessage.c)
 *     xxxWaitMessageEx @ 0x1C01B84F0 (xxxWaitMessageEx.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientWaitMessageExMPH(int a1, int a2)
{
  int v2; // ebx
  ULONG64 v3; // rcx
  char v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+64h] [rbp+1Ch]
  unsigned __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v6 = 0;
  v7 = a1;
  v8 = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  EtwTraceBeginCallback(89LL);
  v2 = KeUserModeCallback(89LL, &v7, 8LL, &v9, &v6);
  EtwTraceEndCallback(89LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  if ( v2 < 0 || v6 != 24 )
    return 0LL;
  v3 = v9;
  if ( v9 + 8 < v9 || v9 + 8 > MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  return *(_QWORD *)v3;
}
