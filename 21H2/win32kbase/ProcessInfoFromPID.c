/*
 * XREFs of ProcessInfoFromPID @ 0x1C009DD54
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C009DB60 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C009DDA8 (LockProcessByClientId.c)
 */

__int64 __fastcall ProcessInfoFromPID(int a1)
{
  __int64 ProcessWin32Process; // rbx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  ProcessWin32Process = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(a1, &Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    ObfDereferenceObject(Object);
  }
  return ProcessWin32Process;
}
