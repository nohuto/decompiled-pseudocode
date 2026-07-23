/*
 * XREFs of SmSetThreadPagePriority @ 0x1402925D0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140291750 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140302334 (PsSetPagePriorityThread.c)
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
