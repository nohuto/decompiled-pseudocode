/*
 * XREFs of CmRegisterCallback @ 0x14084E7C0
 * Callers:
 *     DifCmRegisterCallbackWrapper @ 0x1405D4180 (DifCmRegisterCallbackWrapper.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x14084E7EC (CmpRegisterCallbackInternal.c)
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
