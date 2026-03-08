/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@K$07$0DAGBGJFG@@@QEAAPEAKI@Z @ 0x1C00190F4
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00B5B90 (VidSchInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<unsigned long,8,811690326>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 8 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 4LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 4 )
  {
    *a1 = ExAllocatePool2(64LL, 4LL * a2, 811690326LL);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 10) = a2;
    return result;
  }
  return 0LL;
}
