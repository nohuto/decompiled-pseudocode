/*
 * XREFs of DestroyDeviceFirmwareLock @ 0x1C001BB60
 * Callers:
 *     AcpiHandleDeviceFirmwareLock @ 0x1C001B660 (AcpiHandleDeviceFirmwareLock.c)
 * Callees:
 *     PerformHandlerInvocation @ 0x1C001BDD0 (PerformHandlerInvocation.c)
 *     ReleaseDeviceFirmwareLock @ 0x1C001BF6C (ReleaseDeviceFirmwareLock.c)
 */

void __fastcall DestroyDeviceFirmwareLock(__int64 *a1)
{
  __int64 v2; // r8
  KIRQL v3; // al
  __int64 *v4; // r8
  __int64 **v5; // rdx
  void *v6; // rcx

  if ( *a1 )
  {
    if ( *((_BYTE *)a1 + 48) )
      ReleaseDeviceFirmwareLock(a1, 0LL);
    a1[7] = 0LL;
    v2 = a1[2];
    if ( v2 )
      PerformHandlerInvocation(1, (_DWORD)a1, v2, 0, 0LL, 0, 0);
    a1[4] = 0LL;
    v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
    v4 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (__int64)v5;
    a1[2] = 0LL;
    KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v3);
    v6 = (void *)a1[11];
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      a1[11] = 0LL;
    }
    *((_DWORD *)a1 + 6) = 5;
  }
}
