/*
 * XREFs of DbgkRegisterErrorPort @ 0x1409369A4
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x140413230 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x140413390 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     DbgkpDeleteErrorPort @ 0x140936FD4 (DbgkpDeleteErrorPort.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned int v2; // edi
  wchar_t *Pool2; // rax
  __int64 v6; // rax
  _DWORD *v7; // r15
  unsigned int v8; // edi
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v13; // r14
  __int64 v14; // rsi
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v16; // [rsp+78h] [rbp-E0h]
  __int128 v17; // [rsp+88h] [rbp-D0h]
  __int128 v18; // [rsp+98h] [rbp-C0h]
  __int128 v19; // [rsp+A8h] [rbp-B0h]
  __int128 v20; // [rsp+B8h] [rbp-A0h]
  __int64 v21; // [rsp+C8h] [rbp-90h]
  _QWORD v22[9]; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  UnicodeString = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  memset(v22, 0, sizeof(v22));
  if ( !v2 || (v2 & 1) != 0 || v2 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (wchar_t *)ExAllocatePool2(257LL, v2, 1348952644LL);
  UnicodeString.Buffer = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  UnicodeString.MaximumLength = v2;
  UnicodeString.Length = v2;
  memmove(Pool2, Src, v2);
  v6 = ExAllocatePool2(257LL, 16LL, 1348952644LL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *(_DWORD *)((char *)&v19 + 2) = -2147483608;
    v22[2] = 272LL;
    v22[4] = 8704LL;
    LODWORD(v22[0]) = 0x100000;
    LODWORD(v16) = 48;
    *((_QWORD *)&v16 + 1) = 0LL;
    DWORD2(v17) = 512;
    *(_QWORD *)&v17 = 0LL;
    v18 = 0LL;
    v9 = ZwAlpcConnectPort(v6 + 8, (__int64)&UnicodeString);
    v8 = v9;
    if ( v9 == 192 )
    {
      v8 = -1073741749;
    }
    else if ( v9 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1;
      v7[1] = 0;
      Process = (__int64)CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v13 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 968;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      v14 = *((_QWORD *)v13 + 1);
      if ( !v14 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
      *((_QWORD *)v13 + 1) = v7;
      *((_QWORD *)v13 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v8 = 0;
      v7 = 0LL;
      if ( v14 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v14 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v14 + 8), 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((PVOID)v14);
      }
      KeSetEvent(*((PRKEVENT *)v13 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
  }
  RtlFreeUnicodeString(&UnicodeString);
  return v8;
}
