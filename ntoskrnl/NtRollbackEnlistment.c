/*
 * XREFs of NtRollbackEnlistment @ 0x1403D2790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtRollbackEnlistment(EnlistmentHandle, TmVirtualClock);
}
