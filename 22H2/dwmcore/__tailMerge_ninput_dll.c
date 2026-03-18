/*
 * XREFs of __tailMerge_ninput_dll @ 0x18011128F
 * Callers:
 *     __imp_load_DestroyInteractionContext @ 0x180111283 (__imp_load_DestroyInteractionContext.c)
 *     __imp_load_StopInteractionContext @ 0x18011130E (__imp_load_StopInteractionContext.c)
 *     __imp_load_ProcessPointerFramesInteractionContext @ 0x180111320 (__imp_load_ProcessPointerFramesInteractionContext.c)
 *     __imp_load_CreateInteractionContext @ 0x180111332 (__imp_load_CreateInteractionContext.c)
 *     __imp_load_ResetInteractionContext @ 0x180111344 (__imp_load_ResetInteractionContext.c)
 *     __imp_load_SetPropertyInteractionContext @ 0x180111356 (__imp_load_SetPropertyInteractionContext.c)
 *     __imp_load_SetInteractionConfigurationInteractionContext @ 0x180111368 (__imp_load_SetInteractionConfigurationInteractionContext.c)
 *     __imp_load_RegisterOutputCallbackInteractionContext @ 0x18011137A (__imp_load_RegisterOutputCallbackInteractionContext.c)
 *     __imp_load_SetMouseWheelParameterInteractionContext @ 0x18011138C (__imp_load_SetMouseWheelParameterInteractionContext.c)
 *     __imp_load_OutputPredictionInteractionContext @ 0x18011139E (__imp_load_OutputPredictionInteractionContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180101AF0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ninput_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ninput_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
