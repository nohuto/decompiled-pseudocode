/*
 * XREFs of MiInSwapStoreWorker @ 0x14067E3D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SmSwapStore @ 0x14067E484 (SmSwapStore.c)
 *     MiInSwapStoreContextDereference @ 0x14067E508 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14067E52C (EtwTraceWorkingSetInSwapStoreFail.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  _KPROCESS *v2; // rcx
  int v3; // edi
  $115DCDF994C6370D29323EAB0E0C9502 v5; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_KPROCESS **)(a1 + 32);
  memset(&v5, 0, sizeof(v5));
  KiStackAttachProcess(v2, 0, (__int64)&v5);
  v3 = SmSwapStore(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2520LL), 2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v3 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess(&v5);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
