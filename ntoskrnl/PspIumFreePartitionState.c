/*
 * XREFs of PspIumFreePartitionState @ 0x1405A3B3C
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmFreeNonChargedSecurePages @ 0x1406556E8 (MmFreeNonChargedSecurePages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PspIumFreePartitionState(unsigned int *P)
{
  signed __int64 v2; // rax
  unsigned int v3; // eax
  __int128 Object; // [rsp+30h] [rbp-20h] BYREF
  char *v5; // [rsp+40h] [rbp-10h]

  v5 = 0LL;
  v2 = *((_QWORD *)P + 2);
  Object = 0LL;
  if ( v2 )
  {
    DWORD1(Object) = 0;
    v5 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 2, (signed __int64)&Object, v2) )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  MmUnlockPages((PMDL)P + 2);
  v3 = P[1];
  if ( v3 )
  {
    memmove((void *)(*((_QWORD *)P + 20) + 8LL * P[39]), P + 6, 8LL * v3);
    P[39] += P[1];
  }
  MmFreeNonChargedSecurePages(*((_QWORD *)P + 1));
  ExFreePoolWithTag(*((PVOID *)P + 20), 0);
  ObfDereferenceObject(*((PVOID *)P + 1));
  ExFreePoolWithTag(P, 0);
}
