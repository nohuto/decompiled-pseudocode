NTSTATUS __fastcall ReferenceWindowStation(struct _KTHREAD *a1, void *a2, ACCESS_MASK a3, _QWORD *a4, int a5)
{
  PVOID v9; // rsi
  PEPROCESS ThreadProcess; // rax
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  NTSTATUS result; // eax
  __int64 v17; // rax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0LL;
  ThreadProcess = PsGetThreadProcess(a1);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(ThreadProcess);
  v12 = ProcessWin32Process;
  if ( ProcessWin32Process && !*ProcessWin32Process )
    v12 = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( v12 )
  {
    if ( !a5 || !v13 || (v15 = *(_QWORD *)(v13 + 456)) == 0 || v12[82] == *(_QWORD *)(v15 + 40) )
    {
      v9 = (PVOID)v12[82];
      if ( v9 )
      {
        if ( RtlAreAllAccessesGranted(*((_DWORD *)v12 + 168), a3) )
        {
LABEL_13:
          *a4 = v9;
          return 0;
        }
        UserSetLastError(5);
        return -1073741790;
      }
    }
    if ( v13 )
    {
      v17 = *(_QWORD *)(v13 + 456);
      if ( v17 )
      {
        v9 = *(PVOID *)(v17 + 40);
        if ( !(unsigned int)AccessCheckObject(v9, a3, 0LL, WinStaMapping) )
          return -1073741790;
      }
      if ( v9 )
        goto LABEL_13;
    }
  }
  if ( !a2 )
    return -1073741275;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, a3, ExWindowStationObjectType, 0, &Object, 0LL);
  v9 = Object;
  if ( result >= 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_13;
  }
  return result;
}
