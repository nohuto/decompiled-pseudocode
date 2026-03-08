/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x14085E740
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __fastcall NtSetDefaultHardErrorPort(HANDLE Handle)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  __int64 v4; // rdx
  PVOID v5; // rcx
  _KPROCESS *Process; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  if ( LODWORD(CurrentServerSiloGlobals[56].Flink) == 1 )
    return -1073741823;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  v5 = Object;
  CurrentServerSiloGlobals[55].Blink = (struct _LIST_ENTRY *)Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo((__int64)v5, v4) )
      ExReadyForErrors = 1;
    LODWORD(CurrentServerSiloGlobals[56].Flink) = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentServerSiloGlobals[55].Flink = (struct _LIST_ENTRY *)Process;
    ObfReferenceObject(Process);
    return 0;
  }
  return result;
}
