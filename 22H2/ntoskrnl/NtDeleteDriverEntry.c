/*
 * XREFs of NtDeleteDriverEntry @ 0x1409FEAE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403DDD60 (swprintf_s.c)
 *     IoGetEnvironmentVariableEx @ 0x1406876A0 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140950524 (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtDeleteDriverEntry(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  size_t Dst[3]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_140C31AF0 != 2 )
    return 3221225474LL;
  if ( a1 > 0xFFFF )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04X", a1);
  v6 = 0;
  EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v6, 0LL);
  if ( EnvironmentVariable != -1073741568 )
    goto LABEL_11;
  if ( ((2 * ((a1 | (2 * a1)) & 0xC4444444)) & a1) != 0 )
  {
    swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04x", a1);
    v6 = 0;
    EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v6, 0LL);
LABEL_11:
    if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
      EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, 0, 1);
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return EnvironmentVariable;
}
