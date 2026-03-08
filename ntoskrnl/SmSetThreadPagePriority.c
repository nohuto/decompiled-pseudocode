/*
 * XREFs of SmSetThreadPagePriority @ 0x140356A74
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x1405C93E8 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x14020AA94 (PsSetPagePriorityThread.c)
 *     PsGetPagePriorityThread @ 0x14028A290 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadPagePriority(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // r9d

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  result = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( (_DWORD)result != v4 )
    return PsSetPagePriorityThread(v3, v4);
  return result;
}
