/*
 * XREFs of CiProcessCreate @ 0x1C000B6A0
 * Callers:
 *     CiThreadCreate @ 0x1C000AD80 (CiThreadCreate.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000C320 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     memset @ 0x1C00037C0 (memset.c)
 *     CiProcessComparer @ 0x1C000A210 (CiProcessComparer.c)
 */

__int64 __fastcall CiProcessCreate(volatile signed __int64 **a1)
{
  volatile signed __int64 *Pool2; // rax
  volatile signed __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  volatile signed __int64 *v10; // rbx
  __int64 result; // rax

  Pool2 = (volatile signed __int64 *)ExAllocatePool2(65LL, 96LL, 1349739341LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memset((void *)Pool2, 0, 0x60uLL);
  *(_DWORD *)v3 = 1;
  *((_QWORD *)v3 + 4) = 1LL;
  *((_QWORD *)v3 + 10) = PsGetCurrentProcess(v4);
  *((_QWORD *)v3 + 9) = v3 + 8;
  *((_QWORD *)v3 + 8) = v3 + 8;
  ObfReferenceObject(*((PVOID *)v3 + 10));
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  LOBYTE(v5) = 0;
  v6 = (_QWORD *)WPP_MAIN_CB.DeviceQueue.1;
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  v7 = *((_QWORD *)v3 + 10);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
  {
LABEL_10:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue.Busy, v6, v5, v3 + 5);
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    goto LABEL_14;
  }
  while ( 1 )
  {
    v8 = CiProcessComparer(v7, (__int64)v6);
    if ( v8 <= 0 )
      break;
    v9 = (_QWORD *)v6[1];
    if ( !v9 )
    {
      v5 = 1LL;
      goto LABEL_10;
    }
LABEL_5:
    v6 = v9;
  }
  if ( v8 < 0 )
  {
    v9 = (_QWORD *)*v6;
    if ( !*v6 )
    {
      LOBYTE(v5) = 0;
      goto LABEL_10;
    }
    goto LABEL_5;
  }
  v10 = v6 - 5;
  if ( _InterlockedIncrement64(v10 + 4) <= 1 )
    __fastfail(0xEu);
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  if ( v10 )
  {
    ObfDereferenceObject(*((PVOID *)v3 + 10));
    ExFreePoolWithTag((PVOID)v3, 0x5073634Du);
    v3 = v10;
  }
LABEL_14:
  result = 0LL;
  *a1 = v3;
  return result;
}
