char __fastcall MiWritePteShadow(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  struct _LIST_ENTRY *Flink; // r10

  LODWORD(CurrentThread) = MiPteHasShadow(a1, a2, a3);
  if ( (_DWORD)CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    Flink = CurrentThread->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      LOBYTE(CurrentThread) = -(v4 & 1);
      *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF)) = v4 & 0x7FFFFFFFFFFFFFFFLL & -(__int64)((v4 & 1) != 0);
    }
  }
  return (char)CurrentThread;
}
