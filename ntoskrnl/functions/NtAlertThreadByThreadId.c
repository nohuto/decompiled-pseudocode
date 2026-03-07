NTSTATUS __fastcall NtAlertThreadByThreadId(void *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v2; // edi
  NTSTATUS result; // eax
  _KPROCESS *Process; // rax
  PETHREAD v5; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  Thread = 0LL;
  result = PsLookupThreadByThreadId(a1, &Thread);
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v5 = Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread);
    else
      v2 = -1073741790;
    ObfDereferenceObject(v5);
    return v2;
  }
  return result;
}
