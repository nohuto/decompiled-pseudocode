/*
 * XREFs of ClientFreeLibrary @ 0x1C0077D70
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0054214 (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1C00781A4 (xxxDoSysExpunge.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientFreeLibrary(__int64 a1)
{
  int v1; // ebx
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v5 = 0;
  v7 = a1;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v4);
  EtwTraceBeginCallback(68LL);
  v1 = KeUserModeCallback(68LL, &v7, 8LL, &v6, &v5);
  EtwTraceEndCallback(68LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v4);
  if ( v1 < 0 || v5 != 24 )
    return 0LL;
  v2 = (__int64 *)v6;
  if ( v6 + 8 < v6 || v6 + 8 > MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  result = *v2;
  v4 = *v2;
  return result;
}
