/*
 * XREFs of NtUserSetObjectInformation @ 0x1C01DD570
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetUserObjectInformation @ 0x1C01AA334 (_SetUserObjectInformation.c)
 */

__int64 __fastcall NtUserSetObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v11; // rcx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  if ( a2 == 7 )
  {
    v9 = 0;
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
    ProbeForRead(a3, v4, CurrentProcessWow64Process != 0 ? 1 : 4);
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) >= 0 )
    {
      if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
      {
        v9 = SetUserObjectInformation(Handle, a2, a3, v4);
        SetHandleFlag(Handle, 2LL, 0LL);
      }
      else
      {
        v9 = 0;
        UserSetLastError(8);
      }
    }
    else
    {
      v9 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
