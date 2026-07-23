/*
 * XREFs of VmpPrefetchForVirtualFault @ 0x14092FAAC
 * Callers:
 *     VmAccessFault @ 0x14092EAC0 (VmAccessFault.c)
 * Callees:
 *     MmPrefetchVirtualAddresses @ 0x1406BEEB0 (MmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VmpPrefetchForVirtualFault(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  unsigned int v8; // ebx
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (a3 + 2), 0x76506D56u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0;
    PoolWithTag[1] &= 0xFFFFFFF9;
    v9 = (_QWORD *)(((unsigned __int64)PoolWithTag + 39) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)PoolWithTag + 1) = -1LL;
    *((_QWORD *)PoolWithTag + 2) = a3;
    v10 = a1 + 16 * a3;
    *PoolWithTag = 1;
    *((_QWORD *)PoolWithTag + 3) = v9;
    if ( a1 < v10 )
    {
      v11 = a1 - (_QWORD)v9;
      v12 = ((v10 - a1 - 1) >> 4) + 1;
      do
      {
        v13 = *a2++;
        *v9 = v13 << 12;
        v14 = *(_QWORD *)((char *)v9 + v11 + 8);
        v9 += 2;
        *(v9 - 1) = v14 << 12;
        --v12;
      }
      while ( v12 );
    }
    v8 = MmPrefetchVirtualAddresses(v7);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
