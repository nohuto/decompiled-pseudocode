/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEAAPEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@I@Z @ 0x1C0019170
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00B5B90 (VidSchInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<_VIDSCH_INDEPENDENT_FLIP_STATE,1,962685270>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 1 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 160LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 0xA0 )
  {
    *a1 = ExAllocatePool2(64LL, 160LL * a2, 962685270LL);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 42) = a2;
    return result;
  }
  return 0LL;
}
