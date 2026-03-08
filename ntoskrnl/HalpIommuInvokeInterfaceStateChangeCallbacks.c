/*
 * XREFs of HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x14050BB78
 * Callers:
 *     HalpNotifyIommuDomainPolicyChange @ 0x14050BC40 (HalpNotifyIommuDomainPolicyChange.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14050BA08 (HalpIommuDeviceGetDomainTypes.c)
 */

signed __int32 __fastcall HalpIommuInvokeInterfaceStateChangeCallbacks(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 i; // rdi
  __int64 v6; // rcx
  int DomainTypes; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF
  int v10; // [rsp+44h] [rbp+1Ch]

  v9 = 0;
  v10 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
  for ( i = IommuInterfaceStateChangeCallbackListHead;
        (__int64 *)i != &IommuInterfaceStateChangeCallbackListHead;
        i = *(_QWORD *)i )
  {
    v6 = *(_QWORD *)(i + 32);
    if ( *(_QWORD *)(v6 + 8) == a1 )
    {
      if ( (a2 & 1) != 0 && (*(_DWORD *)(i + 40) & 1) != 0 )
      {
        DomainTypes = HalpIommuDeviceGetDomainTypes(v6, v4);
        if ( *(_DWORD *)(i + 44) != DomainTypes )
        {
          *(_DWORD *)(i + 44) = DomainTypes;
          v9 |= 1u;
          v10 = DomainTypes;
          (*(void (__fastcall **)(int *, _QWORD))(i + 16))(&v9, *(_QWORD *)(i + 24));
        }
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
  return KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
}
