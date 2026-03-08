/*
 * XREFs of CmRegisterCallbackEx @ 0x14084E720
 * Callers:
 *     DifCmRegisterCallbackExWrapper @ 0x1405D4020 (DifCmRegisterCallbackExWrapper.c)
 *     EtwpRegTraceEnableCallback @ 0x1409F16F0 (EtwpRegTraceEnableCallback.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x14084E7EC (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallbackEx(
        PEX_CALLBACK_FUNCTION Function,
        PCUNICODE_STRING Altitude,
        PVOID Driver,
        PVOID Context,
        PLARGE_INTEGER Cookie,
        PVOID Reserved)
{
  if ( !Driver )
    return -1073741583;
  if ( Reserved )
    return -1073741580;
  return CmpRegisterCallbackInternal((_DWORD)Function, (_DWORD)Context, (_DWORD)Altitude, 0, 0, (__int64)Cookie);
}
