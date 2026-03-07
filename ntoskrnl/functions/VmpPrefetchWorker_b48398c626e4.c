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
