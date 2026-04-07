/*
 * XREFs of ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x180001EE8
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180001C80 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x180001F28 (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_BindIfPresent(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // eax
  void *v8; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 608);
  if ( v5 )
  {
    v7 = CAnimationResource::AddBinding(v5, a3, a4);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x7A2u, v8);
  }
  return v4;
}
