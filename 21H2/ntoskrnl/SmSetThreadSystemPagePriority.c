/*
 * XREFs of SmSetThreadSystemPagePriority @ 0x140392084
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391E54 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x14029C6F4 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14029C790 (PsRevertToUserPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadSystemPagePriority(struct _KTHREAD **a1, int a2, int a3)
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rcx

  v4 = 0;
  CurrentThread = *a1;
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  if ( a3 )
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, a2);
  else
    return (unsigned int)PsSetSystemPagePriorityThread((__int64)CurrentThread, a2);
  return v4;
}
