/*
 * XREFs of SetManipulationInputTargetTransform @ 0x1C016C950
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0002974 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00AD78C (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall SetManipulationInputTargetTransform(__int64 a1, struct tagWND *a2, void *a3, __int64 a4, int a5)
{
  __int64 v7; // rbx

  if ( a5 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 80);
  if ( a2 )
  {
    if ( !*(_QWORD *)(v7 + 272) )
      InputTransform::SetCompositionInput(*(InputTransform **)(a1 + 80), a2, a3);
  }
  return InputTransform::OnInput((struct _EX_PUSH_LOCK **)v7, (struct tagWND *)a3);
}
