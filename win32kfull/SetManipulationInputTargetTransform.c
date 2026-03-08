/*
 * XREFs of SetManipulationInputTargetTransform @ 0x1C0146E30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0007904 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0007C54 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
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
