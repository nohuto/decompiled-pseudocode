/*
 * XREFs of NtCreateImplicitCompositionInputSink @ 0x1C00A3300
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C00A333C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 */

__int64 __fastcall NtCreateImplicitCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, void **a2)
{
  return _CreateCompositionInputSink(a1, 1, a2);
}
