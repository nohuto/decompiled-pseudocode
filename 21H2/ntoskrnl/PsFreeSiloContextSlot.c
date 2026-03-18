/*
 * XREFs of PsFreeSiloContextSlot @ 0x1409AB6D0
 * Callers:
 *     VrpRegistryUnload @ 0x140926260 (VrpRegistryUnload.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PspGetNextSilo @ 0x14068A6A0 (PspGetNextSilo.c)
 *     PspStorageGetObject @ 0x14070F57C (PspStorageGetObject.c)
 *     PspStorageFreeSlot @ 0x1409B4AD0 (PspStorageFreeSlot.c)
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
    v3 = NextSilo[187];
    if ( v3 && (int)PspStorageGetObject(v3, a1, (unsigned __int64 *)&Object) >= 0 )
    {
      ObfDereferenceObject(Object);
      KeBugCheckEx(0x199u, v5[187], 0LL, 0LL, 0LL);
    }
  }
  return PspStorageFreeSlot(a1);
}
