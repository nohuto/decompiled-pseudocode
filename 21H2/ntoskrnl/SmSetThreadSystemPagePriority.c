/*
 * XREFs of SmSetThreadSystemPagePriority @ 0x14028F83C
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14028F618 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x14028F880 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14028F8D8 (PsRevertToUserPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadSystemPagePriority(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !*a1 )
    *a1 = KeGetCurrentThread();
  if ( a3 )
    PsRevertToUserPagePriorityThread();
  else
    return (unsigned int)PsSetSystemPagePriorityThread();
  return v3;
}
