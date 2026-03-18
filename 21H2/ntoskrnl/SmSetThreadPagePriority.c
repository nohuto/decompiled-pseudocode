/*
 * XREFs of SmSetThreadPagePriority @ 0x140238BC4
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14037DAEC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x14028F63C (PsSetPagePriorityThread.c)
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadPagePriority(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // edx

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  result = PsGetPagePriorityThread(CurrentThread);
  if ( (_DWORD)result != v4 )
    return PsSetPagePriorityThread(v3);
  return result;
}
