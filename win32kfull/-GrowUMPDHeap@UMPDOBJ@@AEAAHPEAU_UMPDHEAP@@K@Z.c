/*
 * XREFs of ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C029B874
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C029BE78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::GrowUMPDHeap(UMPDOBJ *this, struct _UMPDHEAP *a2, unsigned int a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rdx
  HANDLE v6; // rdi
  void *v7; // rcx
  __int64 result; // rax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Size = (SIZE_T)this;
  v3 = *((_QWORD *)a2 + 2);
  v5 = v3 + a3;
  if ( v5 < v3 )
    return 0LL;
  if ( v5 + 4095 < v5 )
    return 0LL;
  Size = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( Size > 0x400000 )
    return 0LL;
  Address = *(PVOID *)a2;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x1000u, 4u) < 0 )
    return 0LL;
  v6 = MmSecureVirtualMemory(Address, Size, 4u);
  if ( !v6 )
    return 0LL;
  v7 = (void *)*((_QWORD *)a2 + 1);
  if ( v7 )
    MmUnsecureVirtualMemory(v7);
  *((_QWORD *)a2 + 2) = Size;
  result = 1LL;
  *((_QWORD *)a2 + 1) = v6;
  return result;
}
