/*
 * XREFs of GetContainerIdFromProcessId @ 0x1C00CDAD8
 * Callers:
 *     VirtualizeFullKeyboardStates @ 0x1C01AF550 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C008A1D0 (LockProcessByClientId.c)
 */

__int64 __fastcall GetContainerIdFromProcessId(int a1)
{
  __int64 ProcessWin32Process; // rbx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  if ( (int)LockProcessByClientId(a1, &Object) >= 0
    && (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), ProcessWin32Process) )
  {
    return *(unsigned int *)(ProcessWin32Process + 1088);
  }
  else
  {
    return 0LL;
  }
}
