/*
 * XREFs of DereferenceDeviceFirmwareLockHandlerEntry @ 0x1C001B9EC
 * Callers:
 *     AcquireDeviceFirmwareLock @ 0x1C001B710 (AcquireDeviceFirmwareLock.c)
 *     ReleaseDeviceFirmwareLock @ 0x1C001BF6C (ReleaseDeviceFirmwareLock.c)
 *     AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C008284C (AcpiUnregisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     <none>
 */

void __fastcall DereferenceDeviceFirmwareLockHandlerEntry(PVOID **P, char a2)
{
  char v2; // bp
  char v3; // di
  KIRQL v6; // r8
  PVOID *v7; // rcx
  PVOID *v8; // rax
  _QWORD **v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  PVOID *v12; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0;
  memset(&Object, 0, sizeof(Object));
  if ( a2 )
    KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
  {
    v7 = *P;
    if ( (*P)[1] != P || (v8 = P[1], *v8 != P) )
LABEL_12:
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    v9 = P + 2;
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 != v9 )
        break;
      if ( (_QWORD **)v10[1] != v9 )
        goto LABEL_12;
      v11 = (_QWORD *)*v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_12;
      *v9 = v11;
      v11[1] = v9;
      v10[2] = 0LL;
    }
    v3 = 1;
  }
  else if ( a2 )
  {
    *((_BYTE *)P + 68) = 1;
    P[9] = (PVOID *)&Object;
    v2 = 1;
  }
  KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v6);
  if ( v3 )
  {
    if ( *((_BYTE *)P + 68) )
      KeSetEvent((PRKEVENT)P[9], 0, 0);
    v12 = P[4];
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x4F706341u);
    ExFreePoolWithTag(P, 0x4F706341u);
  }
  else if ( v2 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
}
