/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1800487F0
 * Callers:
 *     RtlCreateUserThread @ 0x180048780 (RtlCreateUserThread.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CC9C0 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7740 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83A0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DC200 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC370 (RtlWow64SuspendThread.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4004 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtCreateThreadEx @ 0x18009ED10 (NtCreateThreadEx.c)
 */

__int64 __fastcall RtlpCreateUserThreadEx(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        HANDLE *a10,
        _OWORD *a11)
{
  __int64 v12; // rsi
  char v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  char v17; // al
  int v18; // r8d
  int v19; // ecx
  __int64 result; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  _QWORD v29[10]; // [rsp+B0h] [rbp-50h] BYREF

  v12 = a4;
  v13 = a3;
  v22 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return 3221225485LL;
  v23 = 48;
  v26 = 512;
  v27 = a2;
  v29[1] = 65539LL;
  v14 = a3 & 1 | 2;
  v29[2] = 16LL;
  v29[0] = 40LL;
  if ( (a3 & 2) == 0 )
    v14 = a3 & 1;
  v15 = v14 | 4;
  if ( (a3 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x10;
  v17 = a3;
  if ( (a3 & 0x10) == 0 )
    v16 = v15;
  v18 = v16 | 0x20;
  if ( (v17 & 0x20) == 0 )
    v18 = v16;
  v29[3] = &v22;
  v24 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v19 = v18 | 0x40;
  v29[4] = 0LL;
  if ( (v13 & 0x40) == 0 )
    v19 = v18;
  result = NtCreateThreadEx(&Handle, 0x1FFFFFLL, &v23, a1, a8, a9, v19, v12, a6, a5, v29);
  if ( (int)result >= 0 )
  {
    if ( a10 )
      *a10 = Handle;
    else
      NtClose(Handle);
    if ( a11 )
      *a11 = v22;
    return 0LL;
  }
  return result;
}
