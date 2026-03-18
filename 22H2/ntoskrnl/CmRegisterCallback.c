/*
 * XREFs of CmRegisterCallback @ 0x140851C00
 * Callers:
 *     DifCmRegisterCallbackWrapper @ 0x1405D6630 (DifCmRegisterCallbackWrapper.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140851C2C (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (_DWORD)Function,
           (_DWORD)Context,
           (unsigned int)&CmLegacyAltitude,
           1,
           0,
           (__int64)Cookie);
}
