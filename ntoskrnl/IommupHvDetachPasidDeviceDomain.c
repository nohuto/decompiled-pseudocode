/*
 * XREFs of IommupHvDetachPasidDeviceDomain @ 0x140522474
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14050BD20 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14050C048 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

signed __int32 __fastcall IommupHvDetachPasidDeviceDomain(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  signed __int32 result; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    if ( *(_DWORD *)(v2 + 8) != 1 )
    {
      ExAcquirePushLockExclusiveEx(v2 + 104, 0LL);
      if ( (*(_DWORD *)(v2 + 96))-- == 1 )
      {
        LODWORD(v6) = *(_DWORD *)(v2 + 48);
        BYTE4(v6) = 1;
        ((void (__fastcall *)(__int64 *))qword_140C622C0)(&v6);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
      return KeAbPostRelease(v2 + 104);
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
    LODWORD(v6) = IommupHvPasidInitialDomainId;
    BYTE4(v6) = 1;
    return ((__int64 (__fastcall *)(__int64, __int64 *))qword_140C622B0)(v3, &v6);
  }
  return result;
}
