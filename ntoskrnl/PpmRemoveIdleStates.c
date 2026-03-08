/*
 * XREFs of PpmRemoveIdleStates @ 0x140583570
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(&v5[2], 0, 0x100uLL);
  v2 = *(void **)(a1 + 33600);
  if ( v2 )
  {
    v5[0] = 2097153;
    memset(&v5[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v5, *(_DWORD *)(a1 + 36));
    LOBYTE(v3) = 1;
    ((void (__fastcall *)(__int64, _DWORD *))off_140C01AB8[0])(v3, v5);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 33600) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 33608) = 0LL;
    ExFreePoolWithTag(v2, 0x694D5050u);
  }
  return 0LL;
}
