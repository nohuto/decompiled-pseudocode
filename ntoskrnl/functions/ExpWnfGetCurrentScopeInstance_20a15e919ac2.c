__int64 __fastcall ExpWnfGetCurrentScopeInstance(
        __int64 Process,
        __int64 a2,
        int a3,
        __int64 *a4,
        ULONG *a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax

  v6 = 0;
  if ( !a3 )
    goto LABEL_13;
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
      return (unsigned int)ExpWnfQueryCurrentUserSID(Process, a2, a4, a5, a6);
    if ( v8 == 1 )
    {
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        CurrentThread = KeGetCurrentThread();
        *a6 = 0;
        Process = (__int64)CurrentThread->ApcState.Process;
      }
      else
      {
        *a6 = 1;
      }
      *a4 = Process;
      *a5 = 8;
      return v6;
    }
LABEL_13:
    *a6 = 1;
    *a5 = 0;
    return v6;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v11 = KeGetCurrentThread();
    *a6 = 0;
    Process = (__int64)v11->ApcState.Process;
  }
  else
  {
    *a6 = 1;
  }
  *(_DWORD *)a4 = PsGetProcessSessionId(Process);
  *a5 = 4;
  return v6;
}
