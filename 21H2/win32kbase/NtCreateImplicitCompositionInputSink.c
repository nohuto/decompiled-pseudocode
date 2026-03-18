/*
 * XREFs of NtCreateImplicitCompositionInputSink @ 0x1C0057CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C0057E3C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 */

__int64 __fastcall NtCreateImplicitCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, void **a2)
{
  return _CreateCompositionInputSink(a1, 1, a2);
}
