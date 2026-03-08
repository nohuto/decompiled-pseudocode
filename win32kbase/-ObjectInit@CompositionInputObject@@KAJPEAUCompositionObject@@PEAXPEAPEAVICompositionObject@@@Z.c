/*
 * XREFs of ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C00AB730
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInputSink@@QEAA@XZ @ 0x1C00AB798 (--0CInputSink@@QEAA@XZ.c)
 *     ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C00AB868 (-Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::ObjectInit(
        struct CompositionObject *a1,
        const struct COMPOSITION_INPUT_SINK_V2 *a2,
        struct ICompositionObject **a3)
{
  struct ICompositionObject *v3; // rbx

  v3 = (struct CompositionObject *)((char *)a1 + 24);
  if ( a1 != (struct CompositionObject *)-24LL )
    CInputSink::CInputSink((struct CompositionObject *)((char *)a1 + 24));
  *a3 = v3;
  *((_DWORD *)a1 + 46) = *((_DWORD *)a2 + 72);
  return CInputSink::Initialize(v3, a2);
}
