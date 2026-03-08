/*
 * XREFs of PspDestroySyscallProvider @ 0x1409B1A30
 * Callers:
 *     PspDereferenceSyscallProvider @ 0x1405A27AC (PspDereferenceSyscallProvider.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PspDestroySyscallProvider(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rcx
  PVOID *v4; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSyscallProviderRegistrationLock, 0LL);
  v3 = *P;
  if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  memset(v5, 0, 0x68uLL);
  v5[1] = P[4][3];
  VslpEnterIumSecureMode(2u, 87, 0, (__int64)v5);
  ObfDereferenceObjectWithTag(P[4], 0x63537350u);
  ExFreePoolWithTag(P, 0x63537350u);
}
