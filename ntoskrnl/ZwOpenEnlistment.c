/*
 * XREFs of ZwOpenEnlistment @ 0x1404147B0
 * Callers:
 *     DifZwOpenEnlistmentWrapper @ 0x1405EF200 (DifZwOpenEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x1407FCAF8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, *(_QWORD *)&DesiredAccess);
}
