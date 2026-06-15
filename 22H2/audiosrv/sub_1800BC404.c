/*
 * XREFs of sub_1800BC404 @ 0x1800BC404
 * Callers:
 *     sub_1800BBE40 @ 0x1800BBE40 (sub_1800BBE40.c)
 * Callees:
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BB730 @ 0x1800BB730 (sub_1800BB730.c)
 *     sub_1800BC6FC @ 0x1800BC6FC (sub_1800BC6FC.c)
 */

__int64 __fastcall sub_1800BC404(__int64 a1, bool *a2)
{
  HANDLE CurrentProcess; // rax
  __int64 v5; // r9
  int v7; // ecx
  double v8; // xmm6_8
  double v9; // xmm6_8
  __vcrt_trace_logging_provider *v10; // rcx
  bool v11; // cc
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  double v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+8h]
  struct _FILETIME UserTime; // [rsp+90h] [rbp+20h] BYREF
  struct _FILETIME CreationTime; // [rsp+98h] [rbp+28h] BYREF

  CurrentProcess = GetCurrentProcess();
  if ( !GetProcessTimes(CurrentProcess, &CreationTime, &UserTime, &UserTime, &UserTime) )
    return sub_1800B5768((int)retaddr, 303, (int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h", v5);
  GetSystemTimePreciseAsFileTime(&v16);
  if ( v16 >= *(_QWORD *)&CreationTime )
  {
    v7 = v16 - CreationTime.dwLowDateTime;
    if ( (__int64)(v16 - *(_QWORD *)&CreationTime) < 0 )
      v8 = (double)(int)(v7 & 1 | ((v16 - *(_QWORD *)&CreationTime) >> 1))
         + (double)(int)(v7 & 1 | ((v16 - *(_QWORD *)&CreationTime) >> 1));
    else
      v8 = (double)v7;
    v9 = v8 / 10000000.0;
    v10 = *(__vcrt_trace_logging_provider **)(a1 + 8);
    v11 = *(_DWORD *)v10 <= 5u;
    v17 = v9;
    if ( !v11 )
    {
      if ( __vcrt_trace_logging_provider::_TlgKeywordOn(v10, 1uLL) )
      {
        v18 = v15;
        v19 = v14;
        sub_1800BB730(v12, byte_18016622A, v13, v14, (__int64)&v19, (__int64)&v18, (__int64)&v17);
      }
    }
    *a2 = v9 >= 300.0;
    return 0LL;
  }
  else
  {
    sub_1800BC6FC(
      retaddr,
      326LL,
      "avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
      2147549183LL,
      "Time went backwards: this process was created at %I64u hns, but it is now only %I64u hns",
      CreationTime,
      v16);
    return 2147549183LL;
  }
}
