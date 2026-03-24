/*
 * XREFs of VmpPrefetchWorker @ 0x14092FA30
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405A4584 (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P, __int64 a2, __int64 a3, _DWORD *a4)
{
  _KPROCESS *v5; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (_KPROCESS *)*((_QWORD *)P + 4);
  memset(v6, 0, sizeof(v6));
  KiStackAttachProcess(v5, 0LL, (__int64)v6, a4);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 2288LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((__int64)v6, 0);
  HalPutDmaAdapter(*((PADAPTER_OBJECT *)P + 4));
  ExFreePoolWithTag(P, 0);
}
