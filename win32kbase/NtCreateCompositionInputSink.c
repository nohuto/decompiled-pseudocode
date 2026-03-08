/*
 * XREFs of NtCreateCompositionInputSink @ 0x1C00B0EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C00B0ECC (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 */

__int64 __fastcall NtCreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, void **a2)
{
  return _CreateCompositionInputSink(a1, 0, a2);
}
