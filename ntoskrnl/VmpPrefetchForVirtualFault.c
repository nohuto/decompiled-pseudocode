/*
 * XREFs of VmpPrefetchForVirtualFault @ 0x1409DA7AC
 * Callers:
 *     VmAccessFault @ 0x1409D9200 (VmAccessFault.c)
 * Callees:
 *     MmPrefetchVirtualAddresses @ 0x14067E600 (MmPrefetchVirtualAddresses.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpPrefetchForVirtualFault(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  __int64 Pool2; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *v9; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  Pool2 = ExAllocatePool2(64LL, 16 * (a3 + 2), 1984982358LL);
  v7 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 4) = 0;
    *(_DWORD *)(Pool2 + 4) &= 0xFFFFFFF9;
    v9 = (_QWORD *)((Pool2 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(Pool2 + 8) = -1LL;
    *(_QWORD *)(Pool2 + 16) = a3;
    v10 = 16 * a3;
    *(_DWORD *)Pool2 = 1;
    *(_QWORD *)(Pool2 + 24) = v9;
    if ( a1 < v10 + a1 )
    {
      v11 = a1 - (_QWORD)v9;
      v12 = ((unsigned __int64)(v10 - 1) >> 4) + 1;
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
