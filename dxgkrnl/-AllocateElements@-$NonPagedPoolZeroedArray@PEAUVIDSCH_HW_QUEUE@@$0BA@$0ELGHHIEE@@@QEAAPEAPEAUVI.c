/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVIDSCH_HW_QUEUE@@I@Z @ 0x1C002961A
 * Callers:
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C03166DC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,16,1265072196>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 0x10 )
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
    *a1 = ExAllocatePool2(64LL, 8LL * a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 34) = a2;
  return result;
}
