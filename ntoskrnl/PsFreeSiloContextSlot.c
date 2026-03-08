/*
 * XREFs of PsFreeSiloContextSlot @ 0x1409A95C0
 * Callers:
 *     VrpRegistryUnload @ 0x140A6F3C0 (VrpRegistryUnload.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PspGetNextSilo @ 0x1406FB574 (PspGetNextSilo.c)
 *     PspStorageGetObject @ 0x14078AF38 (PspStorageGetObject.c)
 *     PspStorageFreeSlot @ 0x1409B4EC4 (PspStorageFreeSlot.c)
 */

__int64 __fastcall PsFreeSiloContextSlot(unsigned int a1)
{
  ULONG_PTR *i; // rcx
  __int64 v3; // rcx
  ULONG_PTR *NextSilo; // rax
  ULONG_PTR *v5; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = (ULONG_PTR *)PspGetNextSilo(i, 0);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    v3 = NextSilo[190];
    if ( v3 && (int)PspStorageGetObject(v3, a1, (unsigned __int64 *)&Object) >= 0 )
    {
      ObfDereferenceObject(Object);
      KeBugCheckEx(0x199u, v5[190], 0LL, 0LL, 0LL);
    }
  }
  return PspStorageFreeSlot(a1);
}
