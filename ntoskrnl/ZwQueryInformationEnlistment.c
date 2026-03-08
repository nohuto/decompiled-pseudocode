/*
 * XREFs of ZwQueryInformationEnlistment @ 0x140414D70
 * Callers:
 *     DifZwQueryInformationEnlistmentWrapper @ 0x1405F1FA0 (DifZwQueryInformationEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, *(_QWORD *)&EnlistmentInformationClass);
}
