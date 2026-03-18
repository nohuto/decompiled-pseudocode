/*
 * XREFs of ZwOpenEnlistment @ 0x14041DBC0
 * Callers:
 *     DifZwOpenEnlistmentWrapper @ 0x1406217A0 (DifZwOpenEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x14091BA74 (CmpRecoverEnlistment.c)
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
