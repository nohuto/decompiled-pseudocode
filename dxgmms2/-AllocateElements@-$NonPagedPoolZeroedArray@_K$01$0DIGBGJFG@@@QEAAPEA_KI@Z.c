/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DIGBGJFG@@@QEAAPEA_KI@Z @ 0x1C001BB9E
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<unsigned __int64,2,945908054>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 2 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 8LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *a1 = ExAllocatePool2(64LL, 8LL * a2, 945908054LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 6) = a2;
  return result;
}
