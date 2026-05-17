/*
 * XREFs of LdrpDeleteEnclave @ 0x1800CD27C
 * Callers:
 *     LdrDeleteEnclave @ 0x1800CCC20 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A0CD0 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CCFD8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800CD300 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpDeleteEnclave(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 *v7; // rax

  result = NtTerminateEnclave();
  if ( (int)result >= 0 )
  {
    a1[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)a1, -1073741823, v3, v4);
    a1[9] = 0LL;
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v6 = *a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v7 = (__int64 *)a1[1], (__int64 *)*v7 != a1) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock, v6, v5);
    LdrpDereferenceEnclave(a1);
    return 0LL;
  }
  return result;
}
