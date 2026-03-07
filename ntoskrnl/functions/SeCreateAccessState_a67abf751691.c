__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r10

  CurrentThread = KeGetCurrentThread();
  return SeCreateAccessStateEx((_DWORD)CurrentThread, CurrentThread->ApcState.Process, a1, a2, a3, a4);
}
