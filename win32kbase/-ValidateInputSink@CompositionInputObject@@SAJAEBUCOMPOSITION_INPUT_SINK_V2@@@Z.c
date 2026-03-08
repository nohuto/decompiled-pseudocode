/*
 * XREFs of ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C00B1394
 * Callers:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00B1118 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 * Callees:
 *     ?LooksLikeALocalHandle@@YA_NAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00B1458 (-LooksLikeALocalHandle@@YA_NAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ??$GenerateNonTerminatingUserModeWerReport@$00@@YAXKPEAXAEAY00_K@Z @ 0x1C027029C (--$GenerateNonTerminatingUserModeWerReport@$00@@YAXKPEAXAEAY00_K@Z.c)
 */

__int64 __fastcall CompositionInputObject::ValidateInputSink(const struct COMPOSITION_INPUT_SINK_V2 *a1)
{
  unsigned int v1; // ebx
  const struct COMPOSITION_INPUT_SINK_V2 *v2; // r9
  bool v3; // al
  __int64 v4; // rdx
  _DWORD *v5; // rcx
  __int64 v6; // r10
  char v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  bool v11; // al
  _DWORD *v12; // r9
  char v13; // r8
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = a1;
  if ( *(_DWORD *)a1 != 232 )
  {
    if ( *(_DWORD *)a1 != 296 )
      return (unsigned int)-1073741811;
    v3 = LooksLikeALocalHandle((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 232));
    v7 = v3;
    if ( *v5 > 4u || v3 )
      goto LABEL_11;
  }
  LooksLikeALocalHandle((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)v2 + 8));
  LooksLikeALocalHandle((const struct COMPOSITION_INPUT_QUEUE *)(v8 + 64));
  LooksLikeALocalHandle((const struct COMPOSITION_INPUT_QUEUE *)(v9 + 120));
  v11 = LooksLikeALocalHandle((const struct COMPOSITION_INPUT_QUEUE *)(v10 + 176));
  v7 = v11 | v13;
  if ( v12[2] > 4u || v12[16] > 4u || v12[30] > 4u || *v5 > 4u || v7 )
  {
LABEL_11:
    v1 = -1073741811;
    if ( v7 )
    {
      v15 = v6;
      GenerateNonTerminatingUserModeWerReport<1>(v5, v4, &v15);
    }
  }
  return v1;
}
