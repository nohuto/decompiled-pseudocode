/*
 * XREFs of VmpPrefetchWorker @ 0x1409DA4D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     VmpPrefetchVirtualAddresses @ 0x14062B1A8 (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P, __int64 a2, __int64 a3, _DWORD *a4)
{
  _KPROCESS *v5; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (_KPROCESS *)*((_QWORD *)P + 4);
  memset(v6, 0, sizeof(v6));
  KiStackAttachProcess(v5, 0LL, (__int64)v6, a4);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 2288LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((__int64)v6, 0LL);
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0);
}
