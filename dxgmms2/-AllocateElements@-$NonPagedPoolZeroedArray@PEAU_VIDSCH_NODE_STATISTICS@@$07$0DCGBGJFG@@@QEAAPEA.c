/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEAPEAU_VIDSCH_NODE_STATISTICS@@I@Z @ 0x1C0014768
 * Callers:
 *     VidSchiOpenProcessAdapterInfo @ 0x1C00ACA8C (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<_VIDSCH_NODE_STATISTICS *,8,845244758>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 8 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 8LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
  {
    *a1 = ExAllocatePool2(64LL, 8LL * a2, 845244758LL);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 18) = a2;
    return result;
  }
  return 0LL;
}
