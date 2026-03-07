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
