/*
 * XREFs of ReferenceWindowStation @ 0x1C00CD2D0
 * Callers:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

NTSTATUS __fastcall ReferenceWindowStation(struct _KTHREAD *a1, void *a2, ACCESS_MASK a3, _QWORD *a4, int a5)
{
  PEPROCESS ThreadProcess; // rax
  __int64 v10; // rdi
  __int64 ProcessWin32Process; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  PVOID v14; // rbx
  __int64 v15; // rdx
  NTSTATUS result; // eax
  __int64 v17; // rbx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  ThreadProcess = PsGetThreadProcess(a1);
  v10 = 0LL;
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( ProcessWin32Process )
  {
    if ( a5 )
    {
      if ( v10 )
      {
        v13 = *(_QWORD *)(v10 + 456);
        if ( v13 )
        {
          if ( *(_QWORD *)(ProcessWin32Process + 664) != *(_QWORD *)(v13 + 40) )
            goto LABEL_13;
        }
      }
    }
    v14 = *(PVOID *)(ProcessWin32Process + 664);
    if ( v14 )
    {
      if ( RtlAreAllAccessesGranted(*(_DWORD *)(ProcessWin32Process + 680), a3) )
      {
LABEL_10:
        *a4 = v14;
        return 0;
      }
      UserSetLastError(5LL, v15);
      return -1073741790;
    }
    if ( v10 )
    {
LABEL_13:
      v17 = *(_QWORD *)(v10 + 456);
      if ( v17 )
      {
        v14 = *(PVOID *)(v17 + 40);
        if ( !(unsigned int)AccessCheckObject(v14, a3, 0LL, WinStaMapping) )
          return -1073741790;
        if ( v14 )
          goto LABEL_10;
      }
    }
  }
  if ( !a2 )
    return -1073741275;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, a3, ExWindowStationObjectType, 0, &Object, 0LL);
  v14 = Object;
  if ( result >= 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_10;
  }
  return result;
}
