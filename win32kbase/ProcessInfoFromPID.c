/*
 * XREFs of ProcessInfoFromPID @ 0x1C00840AC
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C016BD10 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0084110 (LockProcessByClientId.c)
 */

__int64 __fastcall ProcessInfoFromPID(int a1)
{
  __int64 v1; // rbx
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(a1, &Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v1 = ProcessWin32Process;
    ObfDereferenceObject(Object);
  }
  return v1;
}
