/*
 * XREFs of VmpPrefetchWorker @ 0x1409DA890
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405F828C (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P)
{
  _KPROCESS *v2; // rcx
  $115DCDF994C6370D29323EAB0E0C9502 v3; // [rsp+20h] [rbp-48h] BYREF

  v2 = (_KPROCESS *)*((_QWORD *)P + 4);
  memset(&v3, 0, sizeof(v3));
  KiStackAttachProcess(v2, 0, (__int64)&v3);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 2288LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess(&v3);
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0);
}
